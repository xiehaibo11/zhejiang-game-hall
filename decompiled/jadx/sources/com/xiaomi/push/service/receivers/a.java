package com.xiaomi.push.service.receivers;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8389a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ NetworkStatusReceiver f1015a;

    a(NetworkStatusReceiver networkStatusReceiver, Context context) {
        this.f1015a = networkStatusReceiver;
        this.f8389a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f1015a.a(this.f8389a);
    }
}
