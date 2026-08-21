package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class cs extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8370a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cs(XMPushService xMPushService, int i) {
        super(i);
        this.f8370a = xMPushService;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "prepare the mi push account.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        ah.a(this.f8370a);
        if (com.xiaomi.push.bj.b(this.f8370a)) {
            this.f8370a.a(true);
        }
    }
}
