package com.xiaomi.push.service;

import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class z extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8396a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f1025a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    z(int i, XMPushService xMPushService, Cif cif) {
        super(i);
        this.f1025a = xMPushService;
        this.f8396a = cif;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send app absent message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            ah.a(this.f1025a, ah.a(this.f8396a.b(), this.f8396a.m479a()));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f1025a.a(10, e);
        }
    }
}
