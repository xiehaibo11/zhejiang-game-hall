package com.xiaomi.push.service;

import com.xiaomi.push.gh;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ia;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.XMPushService;

final class af extends XMPushService.j {
    final if a;
    final ii a;
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    af(int i, ii iiVar, if ifVar, XMPushService xMPushService) {
        super(i);
        this.a = iiVar;
        this.a = ifVar;
        this.a = xMPushService;
    }

    @Override
    public String a() {
        return "send ack message for clear push message.";
    }

    @Override
    public void a() {
        try {
            ia iaVar = new ia();
            iaVar.c(ht.D.a);
            iaVar.a(this.a.a());
            iaVar.a(this.a.a());
            iaVar.b(this.a.b());
            iaVar.e(this.a.c());
            iaVar.a(0L);
            iaVar.d("success clear push message.");
            ah.a(this.a, ah.b(this.a.b(), this.a.a(), iaVar, hj.i));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("clear push message. " + e);
            this.a.a(10, e);
        }
    }
}
