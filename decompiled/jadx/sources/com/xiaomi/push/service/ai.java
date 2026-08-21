package com.xiaomi.push.service;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bx;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
final class ai extends bx.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8302a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ t f901a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ai(String str, long j, XMPushService xMPushService, t tVar) {
        super(str, j);
        this.f8302a = xMPushService;
        this.f901a = tVar;
    }

    @Override // com.xiaomi.push.service.bx.a
    void a(bx bxVar) {
        String strA = bxVar.a("GAID", "gaid");
        String strA2 = com.xiaomi.push.j.a((Context) this.f8302a);
        if (TextUtils.isEmpty(strA2) || TextUtils.equals(strA, strA2)) {
            return;
        }
        bxVar.a("GAID", "gaid", strA2);
        ii iiVar = new ii();
        iiVar.b(this.f901a.d);
        iiVar.c(ht.ClientInfoUpdate.f519a);
        iiVar.a(bd.a());
        iiVar.a(new HashMap());
        iiVar.m494a().put("gaid", strA2);
        byte[] bArrA = it.a(ah.a(this.f8302a.getPackageName(), this.f901a.d, iiVar, hj.Notification));
        XMPushService xMPushService = this.f8302a;
        xMPushService.a(xMPushService.getPackageName(), bArrA, true);
    }
}
