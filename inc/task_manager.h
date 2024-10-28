#pragma once 
#include <iostream>
#include <vector>
#include <list>

#include "task.h"

namespace Tasks{
    class TaskManager{
        public:
            TaskManager();
            ~TaskManager();
            bool add_task();
            bool update_task();
            bool delete_task();
            void update_task_status();
            void list_completed_tasks();
            void list_incompleted_tasks();
            void list_active_tasks();

        private:
            std::list<Task> m_my_tasks;

    };
}