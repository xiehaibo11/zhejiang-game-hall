package com.xiaomi.push.service;

import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
final class ak implements bg.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8304a;

    ak(XMPushService xMPushService) {
        this.f8304a = xMPushService;
    }

    @Override // com.xiaomi.push.service.bg.b.a
    public void a(bg.c cVar, bg.c cVar2, int i) {
        if (cVar2 == bg.c.binded) {
            x.a(this.f8304a, true);
            x.a(this.f8304a);
        } else if (cVar2 == bg.c.unbind) {
            com.xiaomi.channel.commonutils.logger.b.m43a("onChange unbind");
            x.a(this.f8304a, ErrorCode.ERROR_SERVICE_UNAVAILABLE, " the push is not connected.");
        }
    }
}
