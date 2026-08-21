package com.xiaomi.mipush.sdk;

import com.xiaomi.mipush.sdk.MiTinyDataClient;
import com.xiaomi.push.hn;

/* JADX INFO: loaded from: classes4.dex */
class aa implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MiTinyDataClient.a.C0519a f7985a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ hn f61a;

    aa(MiTinyDataClient.a.C0519a c0519a, hn hnVar) {
        this.f7985a = c0519a;
        this.f61a = hnVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f7985a.f56a.add(this.f61a);
        this.f7985a.a();
    }
}
