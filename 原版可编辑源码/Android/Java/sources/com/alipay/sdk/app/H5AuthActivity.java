package com.alipay.sdk.app;

public class H5AuthActivity extends H5PayActivity {
    @Override
    public void a() {
        Object obj = AuthTask.c;
        synchronized (obj) {
            try {
                obj.notify();
            } catch (Exception unused) {
            }
        }
    }
}
