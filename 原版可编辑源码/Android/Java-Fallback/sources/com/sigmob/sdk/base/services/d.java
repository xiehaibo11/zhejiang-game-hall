package com.sigmob.sdk.base.services;

public class d implements com.sigmob.sdk.base.services.j.a {
    com.sigmob.sdk.base.services.c a;
    com.sigmob.sdk.base.services.k b;

    public d() {
            r1 = this;
            r1.<init>()
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r1.b = r0
            com.sigmob.sdk.base.services.c r0 = r1.a
            if (r0 != 0) goto L12
            com.sigmob.sdk.base.services.c r0 = new com.sigmob.sdk.base.services.c
            r0.<init>()
            r1.a = r0
        L12:
            return
    }

    public void a(android.content.Context r3) {
            r2 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.intent.action.DOWNLOAD_COMPLETE"
            r0.<init>(r1)
            com.sigmob.sdk.base.services.c r1 = r2.a
            r3.registerReceiver(r1, r0)
            return
    }

    public void b(android.content.Context r2) {
            r1 = this;
            com.sigmob.sdk.base.services.c r0 = r1.a
            r2.unregisterReceiver(r0)
            return
    }

    @Override
    public boolean b() {
            r1 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r1.a(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.a
            r1.b = r0
            r0 = 0
            return r0
    }

    @Override
    public com.sigmob.sdk.base.services.k c() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void d() {
            r1 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r1.b(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r1.b = r0
            return
    }

    @Override
    public java.lang.Error e() {
            r1 = this;
            r0 = 0
            return r0
    }
}
