package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class gf extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ gd f8178a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Exception f440a;
    final /* synthetic */ int b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    gf(gd gdVar, int i, int i2, Exception exc) {
        super(i);
        this.f8178a = gdVar;
        this.b = i2;
        this.f440a = exc;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "shutdown the connection. " + this.b + ", " + this.f440a;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        this.f8178a.b.a(this.b, this.f440a);
    }
}
