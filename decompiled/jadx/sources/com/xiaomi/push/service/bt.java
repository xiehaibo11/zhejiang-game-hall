package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gh;
import com.xiaomi.push.hi;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class bt extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private fl f8345a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private XMPushService f963a;

    public bt(XMPushService xMPushService, fl flVar) {
        super(4);
        this.f963a = null;
        this.f963a = xMPushService;
        this.f8345a = flVar;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send a message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            if (this.f8345a != null) {
                this.f963a.a(this.f8345a);
                if (this.f8345a.f386a == null || !hi.a(this.f963a, 1)) {
                    return;
                }
                this.f8345a.f386a.d = System.currentTimeMillis();
                bz.a("category_coord_up", "coord_up", "com.xiaomi.xmsf", this.f8345a.f386a);
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f963a.a(10, e);
        }
    }
}
