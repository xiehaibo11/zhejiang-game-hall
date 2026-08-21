package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gb;
import com.xiaomi.push.gn;
import com.xiaomi.push.service.XMPushService.d;
import com.xiaomi.push.service.XMPushService.m;

/* JADX INFO: loaded from: classes4.dex */
class ci implements gb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8360a;

    ci(XMPushService xMPushService) {
        this.f8360a = xMPushService;
    }

    @Override // com.xiaomi.push.gb
    public void a(fl flVar) {
        this.f8360a.a(this.f8360a.new d(flVar));
    }

    @Override // com.xiaomi.push.gb
    public void a(gn gnVar) {
        this.f8360a.a(this.f8360a.new m(gnVar));
    }
}
