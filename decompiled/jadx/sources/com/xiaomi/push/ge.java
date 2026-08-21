package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class ge extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ long f8177a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ gd f439a;
    final /* synthetic */ long b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ge(gd gdVar, int i, long j, long j2) {
        super(i);
        this.f439a = gdVar;
        this.f8177a = j;
        this.b = j2;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "check the ping-pong." + this.b;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        Thread.yield();
        if (!this.f439a.c() || this.f439a.a(this.f8177a)) {
            return;
        }
        com.xiaomi.push.service.o.a(this.f439a.b).m680b();
        this.f439a.b.a(22, (Exception) null);
    }
}
