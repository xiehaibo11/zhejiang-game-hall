package com.igexin.push.core;

import android.os.Handler;
import android.os.HandlerThread;

/* JADX INFO: loaded from: classes2.dex */
final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ r f2586a;
    private final Handler b;

    t(r rVar) {
        this.f2586a = rVar;
        HandlerThread handlerThread = new HandlerThread("GTIS-HANDLER");
        handlerThread.start();
        this.b = new u(this, handlerThread.getLooper(), rVar);
    }

    Handler a() {
        return this.b;
    }
}
