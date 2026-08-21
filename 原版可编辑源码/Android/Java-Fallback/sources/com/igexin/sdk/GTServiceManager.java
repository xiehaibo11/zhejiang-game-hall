package com.igexin.sdk;

public class GTServiceManager {
    private GTServiceManager() {
            r0 = this;
            r0.<init>()
            return
    }

    GTServiceManager(com.igexin.sdk.b r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.sdk.GTServiceManager getInstance() {
            com.igexin.sdk.GTServiceManager r0 = com.igexin.sdk.c.a()
            return r0
    }

    public void onActivityCreate(android.app.Activity r2) {
            r1 = this;
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            r0.a(r2)
            return
    }
}
