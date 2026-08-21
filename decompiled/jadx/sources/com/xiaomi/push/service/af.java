package com.xiaomi.push.service;

import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ia;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class af extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8300a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ ii f898a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f899a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    af(int i, ii iiVar, Cif cif, XMPushService xMPushService) {
        super(i);
        this.f898a = iiVar;
        this.f8300a = cif;
        this.f899a = xMPushService;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send ack message for clear push message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            ia iaVar = new ia();
            iaVar.c(ht.CancelPushMessageACK.f519a);
            iaVar.a(this.f898a.m493a());
            iaVar.a(this.f898a.a());
            iaVar.b(this.f898a.b());
            iaVar.e(this.f898a.c());
            iaVar.a(0L);
            iaVar.d("success clear push message.");
            ah.a(this.f899a, ah.b(this.f8300a.b(), this.f8300a.m479a(), iaVar, hj.Notification));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("clear push message. " + e);
            this.f899a.a(10, e);
        }
    }
}
