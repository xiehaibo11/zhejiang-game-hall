package com.mbridge.msdk.foundation.download.resource;

import com.mbridge.msdk.foundation.download.database.IDatabaseHelper;

public class DefaultDeleteTimeoutResourceStrategy extends ResourceStrategy {
    @Override
    public String getResourceStrategyName() {
        return "DefaultDeleteTimeoutResourceStrategy";
    }

    @Override
    public void processResource(MBResourceManager mBResourceManager, IDatabaseHelper iDatabaseHelper, ResourceConfig resourceConfig) {
    }
}
