package com.igexin.sdk;

public class GTBaseActivity extends android.app.Activity {
    public GTBaseActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            com.igexin.sdk.GTServiceManager r1 = com.igexin.sdk.GTServiceManager.getInstance()
            r1.onActivityCreate(r0)
            return
    }
}
