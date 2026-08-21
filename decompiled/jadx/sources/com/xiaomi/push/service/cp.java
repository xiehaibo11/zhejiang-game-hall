package com.xiaomi.push.service;

import com.xiaomi.push.dx;
import com.xiaomi.push.fx;
import com.xiaomi.push.ga;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
class cp extends fx {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8367a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cp(XMPushService xMPushService, Map map, int i, String str, ga gaVar) {
        super(map, i, str, gaVar);
        this.f8367a = xMPushService;
    }

    @Override // com.xiaomi.push.fx
    /* JADX INFO: renamed from: a */
    public byte[] mo374a() {
        try {
            dx.b bVar = new dx.b();
            bVar.a(bv.a().m665a());
            return bVar.a();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("getOBBString err: " + e.toString());
            return null;
        }
    }
}
