#ifndef SD_HANDLER_MANAGER_H
#define SD_HANDLER_MANAGER_H

#include <string>
#include <boost/shared_ptr.hpp>

#include <common/SDLogger.h>
#include <common/SDConfiguration.h>

#include "SDWorkHandler.h"
#include <avm/SDAVMWorkHandler.h>

class SDHandlerManager
{
public:
    SDHandlerManager(const std::string& conf_file);
    bool init();
    void start();
    void wait();

protected:
    DECL_LOGGER(logger);

    bool read_conf();

    bool init_queue();
    bool init_thread();   

private:
    std::string m_conf_file;
    SDConfiguration m_config;

    boost::shared_ptr<SDWorkHandler> m_work_handler;
    boost::shared_ptr<SDAVMWorkHandler> m_avm_work_handler;
};

#endif
