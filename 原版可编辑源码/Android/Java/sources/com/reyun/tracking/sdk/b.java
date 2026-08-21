package com.reyun.tracking.sdk;

import android.os.Handler;
import android.os.Looper;

class b extends Thread {
    final a a;

    b(a aVar) {
        this.a = aVar;
    }

    @Override
    public void run() {
        Looper.prepare();
        this.a.c = new Handler(Looper.myLooper());
        Looper.loop();
    }
}
