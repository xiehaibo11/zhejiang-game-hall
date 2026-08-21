package com.xiaomi.push.service;

import android.database.ContentObserver;
import android.os.Handler;
import com.xiaomi.push.service.XMPushService.g;

class cr extends ContentObserver {
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cr(XMPushService xMPushService, Handler handler) {
        super(handler);
        this.a = xMPushService;
    }

    @Override
    public void onChange(boolean z) {
        super.onChange(z);
        boolean zG = this.a.g();
        com.xiaomi.channel.commonutils.logger.b.a("SuperPowerMode:" + zG);
        this.a.e();
        if (zG) {
            this.a.a(this.a.new g(24, null));
        } else {
            this.a.a(true);
        }
    }
}
