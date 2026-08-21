package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class ad extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8298a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f894a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f895a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ad(int i, XMPushService xMPushService, Cif cif, String str) {
        super(i);
        this.f894a = xMPushService;
        this.f8298a = cif;
        this.f895a = str;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send app absent ack message for message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            Cif cifA = y.a((Context) this.f894a, this.f8298a);
            cifA.m478a().a("absent_target_package", this.f895a);
            ah.a(this.f894a, cifA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f894a.a(10, e);
        }
    }
}
