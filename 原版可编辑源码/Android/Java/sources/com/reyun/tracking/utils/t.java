package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;

class t implements Runnable {
    final s a;

    t(s sVar) {
        this.a = sVar;
    }

    @Override
    public void run() {
        com.reyun.tracking.a.a.d(Tracking.TAG, "install 发送成功 开启Startup");
        Tracking.setStartupInternal(this.a.d);
    }
}
