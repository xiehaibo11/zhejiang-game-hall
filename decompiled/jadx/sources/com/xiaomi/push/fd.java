package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
class fd extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ fc f8150a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    fd(fc fcVar, int i) {
        super(i);
        this.f8150a = fcVar;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "Handling bind stats";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo334a() {
        this.f8150a.c();
    }
}
