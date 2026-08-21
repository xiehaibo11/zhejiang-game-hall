package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.u;

/* JADX INFO: loaded from: classes4.dex */
class ct implements u.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService.j f8371a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f987a;

    ct(XMPushService xMPushService, XMPushService.j jVar) {
        this.f987a = xMPushService;
        this.f8371a = jVar;
    }

    @Override // com.xiaomi.push.service.u.a
    public void a() {
        this.f987a.a(this.f8371a);
    }
}
