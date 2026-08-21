package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class c extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private XMPushService f8353a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fl[] f977a;

    public c(XMPushService xMPushService, fl[] flVarArr) {
        super(4);
        this.f8353a = null;
        this.f8353a = xMPushService;
        this.f977a = flVarArr;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "batch send message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            if (this.f977a != null) {
                this.f8353a.a(this.f977a);
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f8353a.a(10, e);
        }
    }
}
