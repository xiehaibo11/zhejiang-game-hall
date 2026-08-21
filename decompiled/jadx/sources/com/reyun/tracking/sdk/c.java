package com.reyun.tracking.sdk;

/* JADX INFO: loaded from: classes3.dex */
class c extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ long f4736a;
    final /* synthetic */ Runnable b;
    final /* synthetic */ a c;

    c(a aVar, long j, Runnable runnable) {
        this.c = aVar;
        this.f4736a = j;
        this.b = runnable;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            Thread.sleep(this.f4736a);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        this.b.run();
    }
}
