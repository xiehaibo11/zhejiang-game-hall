package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
final class ac extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8297a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f893a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ac(int i, XMPushService xMPushService, Cif cif) {
        super(i);
        this.f893a = xMPushService;
        this.f8297a = cif;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send ack message for unrecognized new miui message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        try {
            Cif cifA = y.a((Context) this.f893a, this.f8297a);
            cifA.m478a().a("miui_message_unrecognized", "1");
            ah.a(this.f893a, cifA);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f893a.a(10, e);
        }
    }
}
