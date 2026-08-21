package com.sigmob.sdk.base.common;

public abstract class v extends com.sigmob.sdk.base.common.m {
    protected java.lang.String a;
    protected com.sigmob.sdk.base.common.m.b b;
    protected com.sigmob.sdk.base.models.BaseAdUnit c;
    private com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver d;

    protected v(com.sigmob.sdk.base.common.m.b r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.b = r2
            return
    }

    protected abstract void a(com.sigmob.sdk.base.common.m.b r1);

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r3, android.os.Bundle r4) {
            r2 = this;
            com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver r4 = new com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver
            com.sigmob.sdk.base.common.m$b r0 = r2.b
            java.lang.String r1 = r2.a
            r4.<init>(r3, r0, r1)
            r2.d = r4
            r4.a(r4)
            return
    }

    public void a(java.util.Map<java.lang.String, java.lang.Object> r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r0 = this;
            r0.c = r2
            java.lang.String r1 = r2.getUuid()
            r0.a = r1
            com.sigmob.sdk.base.common.m$b r1 = r0.b
            r0.a(r1)
            return
    }

    protected abstract boolean a(com.sigmob.sdk.base.models.BaseAdUnit r1);

    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver r1 = r0.d
            if (r1 == 0) goto L7
            r1.b(r1)
        L7:
            return
    }
}
