#ifndef SD_MONGODB_UTILITY_H
#define SD_MONGODB_UTILITY_H

#include <string>
#include <common/SDLogger.h>
#include <client/dbclient.h>

class SDMongoDBUtility
{
public:
    static int connect(mongo::DBClientConnection* mongodb, const std::string& host, int port);
    
    static int insert(mongo::DBClientConnection* mongodb, const std::string& ns, const mongo::BSONObj& obj);
    static int findone(mongo::DBClientConnection* mongodb, const std::string& ns, const mongo::BSONObj& obj, mongo::BSONObj* robj);

private:
    DECL_LOGGER(logger);
};

#endif
