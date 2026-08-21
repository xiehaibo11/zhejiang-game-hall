package com.xiaomi.mipush.sdk;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
final class z implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8026a;

    z(Context context) {
        this.f8026a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        MessageHandleService.c(this.f8026a);
    }
}
