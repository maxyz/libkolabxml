/*
 * Copyright (C) 2011  Christian Mollekopf <mollekopf@kolabsys.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KOLAB_TODO_H
#define KOLAB_TODO_H

#include <string>
#include <vector>
#include <boost/scoped_ptr.hpp>
#include "kolabcontainers.h"
namespace Kolab {
    

class Todo {
public:
    Todo();
    ~Todo();
    Todo(const Todo &);
    void operator=(const Todo &);
    
    bool isValid() const;

    void setUid(const std::string &);
    std::string uid() const;
    
    void setCreated(const cDateTime &);
    cDateTime created() const;
    
    void setLastModified(const cDateTime &);
    cDateTime lastModified() const;
    
    void setSequence(int);
    int sequence() const;
    
    void setClassification(Classification);
    Classification classification() const;

    void setCategories(const std::vector<std::string> &);
    void addCategory(const std::string &);
    std::vector<std::string> categories() const;
    
    void setRelatedTo(const std::vector<std::string> &);
    void addRelatedTo(const std::string &);
    std::vector<std::string> relatedTo() const;
    
    void setStart(const cDateTime &);
    cDateTime start() const;
    
    void setDue(const cDateTime &);
    cDateTime due() const;

    void setRecurrenceRule(const RecurrenceRule &);
    RecurrenceRule recurrenceRule() const;
    
    void setRecurrenceDates(const std::vector<cDateTime> &);
    void addRecurrenceDate(const cDateTime &);
    std::vector<cDateTime> recurrenceDates() const;
    
    void setExceptionDates(const std::vector<cDateTime> &);
    void addExceptionDate(const cDateTime &);
    std::vector<cDateTime> exceptionDates() const;
    
    void setRecurrenceID(const cDateTime &, bool thisandfuture);
    cDateTime recurrenceID() const;
    bool thisAndFuture() const;
    
    void setSummary(const std::string &);
    std::string summary() const;
    
    void setDescription(const std::string &);
    std::string description() const;
    
    void setComment(const std::string &);
    std::string comment() const;
    
    void setPriority(int);
    int priority() const;
    
    void setStatus(Status);
    Status status() const;
    
    void setPercentComplete(int);
    int percentComplete() const;
    
    void setLocation(const std::string &);
    std::string location() const;
    
    void setOrganizer(const ContactReference &);
    ContactReference organizer() const;
    
    void setAttendees(const std::vector<Attendee> &);
    std::vector<Attendee> attendees() const;
    
    void setAttachments(const std::vector<Attachment> &);
    std::vector<Attachment> attachments() const;
    
    void setUrl(const std::string &);
    std::string url() const;
    
    void setCustomProperties(const std::vector<CustomProperty> &);
    std::vector<CustomProperty> customProperties() const;
    
    void setExceptions(const std::vector<Todo> &);
    std::vector<Todo> exceptions() const;
    
    void setAlarms(const std::vector<Alarm> &);
    std::vector<Alarm> alarms() const;
    
private:
    struct Private;
    boost::scoped_ptr<Private> d;
};

}

#endif

