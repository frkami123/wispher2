#include <onyx/application/application.h>

namespace Onyx
{
    void OnApplicationCreate();
    void Init();
}

namespace Onyx::Application
{

    void OnApplicationCreate()
    {
        // setup additional app settings if needed
        Init();
    }

    void OnApplicationCreated(Application& /*application*/)
    {
    }

    void OnApplicationShutdown(Application& /*application*/)
    {
    }
}
