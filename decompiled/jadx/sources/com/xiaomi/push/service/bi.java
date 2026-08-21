package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
class bi extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bg.b.c f8336a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    bi(bg.b.c cVar, int i) {
        super(i);
        this.f8336a = cVar;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "clear peer job";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        if (this.f8336a.f8333a == this.f8336a.f954a.f941a) {
            com.xiaomi.channel.commonutils.logger.b.b("clean peer, chid = " + this.f8336a.f954a.g);
            this.f8336a.f954a.f941a = null;
        }
    }
}
