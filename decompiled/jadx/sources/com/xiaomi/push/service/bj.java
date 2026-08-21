package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
class bj extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bg.b.c f8337a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    bj(bg.b.c cVar, int i) {
        super(i);
        this.f8337a = cVar;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "check peer job";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        if (bg.a().a(this.f8337a.f954a.g, this.f8337a.f954a.f950b).f941a == null) {
            bg.b.this.f943a.a(this.f8337a.f954a.g, this.f8337a.f954a.f950b, 2, null, null);
        }
    }
}
