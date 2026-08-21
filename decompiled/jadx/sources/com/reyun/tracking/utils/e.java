package com.reyun.tracking.utils;

/* JADX INFO: loaded from: classes3.dex */
final class e implements Runnable {
    e() {
    }

    @Override // java.lang.Runnable
    public void run() {
        com.reyun.tracking.a.i.c = true;
        if (p.a() != null) {
            p.a().c();
        }
        Runnable unused = d.f4745a = null;
    }
}
