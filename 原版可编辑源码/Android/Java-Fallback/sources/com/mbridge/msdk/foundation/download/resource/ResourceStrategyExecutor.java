package com.mbridge.msdk.foundation.download.resource;

class ResourceStrategyExecutor implements com.mbridge.msdk.foundation.download.resource.IResourceStrategy {
    private com.mbridge.msdk.foundation.download.resource.ResourceStrategy resourceStrategy;

    public ResourceStrategyExecutor(com.mbridge.msdk.foundation.download.resource.ResourceStrategy r1) {
            r0 = this;
            r0.<init>()
            r0.resourceStrategy = r1
            return
    }

    @Override
    public java.lang.String getResourceStrategyName() {
            r1 = this;
            com.mbridge.msdk.foundation.download.resource.ResourceStrategy r0 = r1.resourceStrategy
            java.lang.String r0 = r0.getResourceStrategyName()
            return r0
    }

    @Override
    public void processResource(com.mbridge.msdk.foundation.download.resource.MBResourceManager r2, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3, com.mbridge.msdk.foundation.download.resource.ResourceConfig r4) {
            r1 = this;
            com.mbridge.msdk.foundation.download.resource.ResourceStrategy r0 = r1.resourceStrategy
            if (r0 == 0) goto Lc
            r0.processResource(r2, r3, r4)     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r2 = move-exception
            r2.printStackTrace()
        Lc:
            return
    }
}
