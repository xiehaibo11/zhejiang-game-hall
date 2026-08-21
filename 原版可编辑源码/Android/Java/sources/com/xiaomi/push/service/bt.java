package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gh;
import com.xiaomi.push.hi;
import com.xiaomi.push.service.XMPushService;

class bt extends XMPushService.j {
    private fl a;
    private XMPushService a;

    public bt(XMPushService xMPushService, fl flVar) {
        super(4);
        this.a = null;
        this.a = xMPushService;
        this.a = flVar;
    }

    @Override
    public String a() {
        return "send a message.";
    }

    @Override
    public void a() {
        try {
            if (this.a != null) {
                this.a.a(this.a);
                if (this.a.a == null || !hi.a(this.a, 1)) {
                    return;
                }
                this.a.a.d = System.currentTimeMillis();
                bz.a("category_coord_up", "coord_up", "com.xiaomi.xmsf", this.a.a);
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
