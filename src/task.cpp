#pragma once
#include <iostream>
#include "task.h"

namespace Tasks{
            Task::Task(std::string& description): 
            m_status(PENDING), 
            m_description(description),
            m_creation_date(std::time(nullptr)), 
            m_last_update(m_creation_date) {}

            Task::~Task() {}

            void Task::update_task_description(std::string new_description){
                m_description = new_description;
            }
            std::string Task::print_description(){
                std::cout << m_description << std::endl;
            }
            void Task::update_status(TaskStatus new_status){
                m_status = new_status;
            }
}
