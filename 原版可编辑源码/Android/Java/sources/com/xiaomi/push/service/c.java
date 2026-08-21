package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

class c extends XMPushService.j {
    private XMPushService a;
    private fl[] a;

    public c(XMPushService xMPushService, fl[] flVarArr) {
        super(4);
        this.a = null;
        this.a = xMPushService;
        this.a = flVarArr;
    }

    @Override
    public String a() {
        return "batch send message.";
    }

    @Override
    public void a() {
        try {
            if (this.a != null) {
                this.a.a(this.a);
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
