package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class ck extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8362a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ck(XMPushService xMPushService, int i) {
        super(i);
        this.f8362a = xMPushService;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "disconnect for service destroy.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        if (this.f8362a.f858a != null) {
            this.f8362a.f858a.b(15, (Exception) null);
            this.f8362a.f858a = null;
        }
    }
}
