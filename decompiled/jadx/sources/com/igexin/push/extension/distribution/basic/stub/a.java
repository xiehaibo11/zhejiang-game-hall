package com.igexin.push.extension.distribution.basic.stub;

import com.igexin.push.core.d;
import com.igexin.push.extension.distribution.basic.c.c;

/* JADX INFO: loaded from: classes2.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ boolean f2640a;
    final /* synthetic */ PushExtension b;

    a(PushExtension pushExtension, boolean z) {
        this.b = pushExtension;
        this.f2640a = z;
    }

    @Override // java.lang.Runnable
    public void run() throws Throwable {
        if (this.f2640a) {
            c.a().e();
        }
        try {
            Thread.sleep(5000L);
        } catch (InterruptedException unused) {
        }
        if (d.n) {
            com.igexin.push.extension.distribution.basic.a.d.a().a(d.n);
        }
    }
}
