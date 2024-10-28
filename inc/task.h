#pragma once
#include <iostream>
#include <string>
#include <ctime>

namespace Tasks{
    class Task {
        public:
            enum TaskStatus { PENDING, ACTIVE, DONE };
            Task(std::string& description);
            ~Task();

            void update_task_description(std::string new_description);
            std::string print_description();
            void update_status(TaskStatus new_status);
        private:
            TaskStatus m_status;
            std::string m_description;
            time_t m_creation_date;
            time_t m_last_update;
    };
}