package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
final class aa extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cif f8295a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ XMPushService f891a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    aa(int i, XMPushService xMPushService, Cif cif) {
        super(i);
        this.f891a = xMPushService;
        this.f8295a = cif;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "send ack message for message.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        Map<String, String> mapA = null;
        try {
            if (com.xiaomi.push.m.m575a((Context) this.f891a)) {
                try {
                    mapA = ag.a((Context) this.f891a, this.f8295a);
                } catch (Throwable unused) {
                }
            }
            ah.a(this.f891a, y.a(this.f891a, this.f8295a, mapA));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.f891a.a(10, e);
        }
    }
}
