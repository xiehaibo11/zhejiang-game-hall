package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.gh;
import com.xiaomi.push.if;
import com.xiaomi.push.service.XMPushService;

final class ac extends XMPushService.j {
    final if a;
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ac(int i, XMPushService xMPushService, if ifVar) {
        super(i);
        this.a = xMPushService;
        this.a = ifVar;
    }

    @Override
    public String a() {
        return "send ack message for unrecognized new miui message.";
    }

    @Override
    public void a() {
        try {
            if ifVarA = y.a((Context) this.a, this.a);
            ifVarA.a().a("miui_message_unrecognized", "1");
            ah.a(this.a, ifVarA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
