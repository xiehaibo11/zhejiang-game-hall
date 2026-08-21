package com.xiaomi.mipush.sdk;

import com.xiaomi.mipush.sdk.MiTinyDataClient;

/* JADX INFO: loaded from: classes4.dex */
class ab implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MiTinyDataClient.a.C0519a f7986a;

    ab(MiTinyDataClient.a.C0519a c0519a) {
        this.f7986a = c0519a;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f7986a.f56a.size() != 0) {
            this.f7986a.b();
        } else if (this.f7986a.f57a != null) {
            this.f7986a.f57a.cancel(false);
            this.f7986a.f57a = null;
        }
    }
}
