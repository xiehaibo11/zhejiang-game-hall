package com.mbridge.msdk.foundation.download.resource;

import com.mbridge.msdk.foundation.download.database.IDatabaseHelper;

public class DefaultDeleteSpaceoutResourceStrategy extends ResourceStrategy {
    @Override
    public String getResourceStrategyName() {
        return "DefaultDeleteSpaceoutResourceStrategy";
    }

    @Override
    public void processResource(MBResourceManager mBResourceManager, IDatabaseHelper iDatabaseHelper, ResourceConfig resourceConfig) {
    }
}
