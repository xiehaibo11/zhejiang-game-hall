package com.reyun.tracking.utils;

class t implements java.lang.Runnable {
    final com.reyun.tracking.utils.s a;

    t(com.reyun.tracking.utils.s r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "install 发送成功 开启Startup"
            com.reyun.tracking.a.a.d(r0, r1)
            com.reyun.tracking.utils.s r0 = r2.a
            java.util.Map r0 = com.reyun.tracking.utils.s.a(r0)
            com.reyun.tracking.sdk.Tracking.setStartupInternal(r0)
            return
    }
}
