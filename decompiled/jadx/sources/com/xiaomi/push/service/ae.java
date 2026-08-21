package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class ae extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8299a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f896a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f897a;
    final /* synthetic */ String b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ae(int i, XMPushService xMPushService, Cif cif, String str, String str2) {
        super(i);
        this.f896a = xMPushService;
        this.f8299a = cif;
        this.f897a = str;
        this.b = str2;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send wrong message ack for message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            Cif cifA = y.a((Context) this.f896a, this.f8299a);
            cifA.f640a.a("error", this.f897a);
            cifA.f640a.a(com.tkay.expressad.foundation.d.r.ac, this.b);
            ah.a(this.f896a, cifA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f896a.a(10, e);
        }
    }
}
