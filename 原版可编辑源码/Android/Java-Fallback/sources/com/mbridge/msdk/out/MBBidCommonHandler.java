package com.mbridge.msdk.out;

public abstract class MBBidCommonHandler {
    protected android.content.Context context;
    protected java.util.Map<java.lang.String, java.lang.Object> properties;

    public MBBidCommonHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public MBBidCommonHandler(java.util.Map<java.lang.String, java.lang.Object> r1, android.content.Context r2) {
            r0 = this;
            r0.<init>()
            r0.properties = r1
            r0.context = r2
            return
    }

    public abstract void bidLoad(java.lang.String r1);

    public abstract void bidRelease();
}
