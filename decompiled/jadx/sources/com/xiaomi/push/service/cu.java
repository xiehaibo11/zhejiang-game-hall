package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.fx;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class cu extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8372a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f988a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ byte[] f989a;
    final /* synthetic */ int b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cu(XMPushService xMPushService, int i, int i2, String str, byte[] bArr) {
        super(i);
        this.f8372a = xMPushService;
        this.b = i2;
        this.f988a = str;
        this.f989a = bArr;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "clear account cache.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        u.m696a((Context) this.f8372a);
        bg.a().m654a("5");
        com.xiaomi.push.ae.a(this.b);
        this.f8372a.f859a.c(fx.a());
        com.xiaomi.channel.commonutils.logger.b.m43a("clear account and start registration. " + this.f988a);
        this.f8372a.a(this.f989a, this.f988a);
    }
}
