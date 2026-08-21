package com.mbridge.msdk.out;

public abstract class MBCommonHandler {
    protected android.content.Context context;
    protected java.util.Map<java.lang.String, java.lang.Object> properties;

    public MBCommonHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public MBCommonHandler(java.util.Map<java.lang.String, java.lang.Object> r1, android.content.Context r2) {
            r0 = this;
            r0.<init>()
            r0.properties = r1
            r0.context = r2
            return
    }

    public abstract boolean load();

    public abstract void release();
}
