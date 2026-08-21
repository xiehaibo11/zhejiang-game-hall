package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.gh;
import com.xiaomi.push.if;
import com.xiaomi.push.service.XMPushService;
import java.util.Map;

final class aa extends XMPushService.j {
    final if a;
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    aa(int i, XMPushService xMPushService, if ifVar) {
        super(i);
        this.a = xMPushService;
        this.a = ifVar;
    }

    @Override
    public String a() {
        return "send ack message for message.";
    }

    @Override
    public void a() {
        Map<String, String> mapA = null;
        try {
            if (com.xiaomi.push.m.a((Context) this.a)) {
                try {
                    mapA = ag.a((Context) this.a, this.a);
                } catch (Throwable unused) {
                }
            }
            ah.a(this.a, y.a(this.a, this.a, mapA));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
