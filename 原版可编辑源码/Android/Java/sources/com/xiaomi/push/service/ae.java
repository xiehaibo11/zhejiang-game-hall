package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.gh;
import com.xiaomi.push.if;
import com.xiaomi.push.service.XMPushService;

final class ae extends XMPushService.j {
    final if a;
    final XMPushService a;
    final String a;
    final String b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ae(int i, XMPushService xMPushService, if ifVar, String str, String str2) {
        super(i);
        this.a = xMPushService;
        this.a = ifVar;
        this.a = str;
        this.b = str2;
    }

    @Override
    public String a() {
        return "send wrong message ack for message.";
    }

    @Override
    public void a() {
        try {
            if ifVarA = y.a((Context) this.a, this.a);
            ifVarA.a.a("error", this.a);
            ifVarA.a.a(com.tkay.expressad.foundation.d.r.ac, this.b);
            ah.a(this.a, ifVarA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
