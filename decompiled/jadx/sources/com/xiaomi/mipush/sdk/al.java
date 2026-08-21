package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: classes4.dex */
final class al implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f7993a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Intent f65a;

    al(Context context, Intent intent) {
        this.f7993a = context;
        this.f65a = intent;
    }

    @Override // java.lang.Runnable
    public void run() {
        PushMessageHandler.b(this.f7993a, this.f65a);
    }
}
