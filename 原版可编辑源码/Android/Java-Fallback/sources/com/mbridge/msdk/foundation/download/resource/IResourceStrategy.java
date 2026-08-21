package com.mbridge.msdk.foundation.download.resource;

interface IResourceStrategy {
    java.lang.String getResourceStrategyName();

    void processResource(com.mbridge.msdk.foundation.download.resource.MBResourceManager r1, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r2, com.mbridge.msdk.foundation.download.resource.ResourceConfig r3);
}
