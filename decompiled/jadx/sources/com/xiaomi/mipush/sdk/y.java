package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: classes4.dex */
final class y implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8025a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Intent f103a;

    y(Context context, Intent intent) {
        this.f8025a = context;
        this.f103a = intent;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f8025a.startService(this.f103a);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a(e.getMessage());
        }
    }
}
