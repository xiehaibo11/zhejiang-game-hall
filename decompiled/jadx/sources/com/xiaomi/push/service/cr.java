package com.xiaomi.push.service;

import android.database.ContentObserver;
import android.os.Handler;
import com.xiaomi.push.service.XMPushService.g;

/* JADX INFO: loaded from: classes4.dex */
class cr extends ContentObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8369a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cr(XMPushService xMPushService, Handler handler) {
        super(handler);
        this.f8369a = xMPushService;
    }

    @Override // android.database.ContentObserver
    public void onChange(boolean z) {
        super.onChange(z);
        boolean zM600g = this.f8369a.m600g();
        com.xiaomi.channel.commonutils.logger.b.m43a("SuperPowerMode:" + zM600g);
        this.f8369a.e();
        if (zM600g) {
            this.f8369a.a(this.f8369a.new g(24, null));
        } else {
            this.f8369a.a(true);
        }
    }
}
