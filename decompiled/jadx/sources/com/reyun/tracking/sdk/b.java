package com.reyun.tracking.sdk;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: loaded from: classes3.dex */
class b extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f4735a;

    b(a aVar) {
        this.f4735a = aVar;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        Looper.prepare();
        this.f4735a.c = new Handler(Looper.myLooper());
        Looper.loop();
    }
}
