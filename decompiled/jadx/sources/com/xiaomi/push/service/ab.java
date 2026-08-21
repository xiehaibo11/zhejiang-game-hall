package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class ab extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8296a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f892a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ab(int i, XMPushService xMPushService, Cif cif) {
        super(i);
        this.f892a = xMPushService;
        this.f8296a = cif;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send ack message for obsleted message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            Cif cifA = y.a((Context) this.f892a, this.f8296a);
            cifA.m478a().a("message_obsleted", "1");
            ah.a(this.f892a, cifA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f892a.a(10, e);
        }
    }
}
