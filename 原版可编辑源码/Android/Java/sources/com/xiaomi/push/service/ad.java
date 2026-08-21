package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.gh;
import com.xiaomi.push.if;
import com.xiaomi.push.service.XMPushService;

final class ad extends XMPushService.j {
    final if a;
    final XMPushService a;
    final String a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ad(int i, XMPushService xMPushService, if ifVar, String str) {
        super(i);
        this.a = xMPushService;
        this.a = ifVar;
        this.a = str;
    }

    @Override
    public String a() {
        return "send app absent ack message for message.";
    }

    @Override
    public void a() {
        try {
            if ifVarA = y.a((Context) this.a, this.a);
            ifVarA.a().a("absent_target_package", this.a);
            ah.a(this.a, ifVarA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
