package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService.g;
import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
class cq implements bg.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8368a;

    cq(XMPushService xMPushService) {
        this.f8368a = xMPushService;
    }

    @Override // com.xiaomi.push.service.bg.a
    public void a() {
        this.f8368a.e();
        if (bg.a().m649a() <= 0) {
            this.f8368a.a(this.f8368a.new g(12, null));
        }
    }
}
