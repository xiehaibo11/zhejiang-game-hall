package com.xiaomi.push.service;

import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bx;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
final class aj extends bx.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8303a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ t f902a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    aj(String str, long j, XMPushService xMPushService, t tVar) {
        super(str, j);
        this.f8303a = xMPushService;
        this.f902a = tVar;
    }

    @Override // com.xiaomi.push.service.bx.a
    void a(bx bxVar) {
        com.xiaomi.push.ba baVarA = com.xiaomi.push.ba.a(this.f8303a);
        String strA = bxVar.a("MSAID", "msaid");
        String str = baVarA.b() + baVarA.mo126a() + baVarA.c() + baVarA.d();
        if (TextUtils.isEmpty(str) || TextUtils.equals(strA, str)) {
            return;
        }
        bxVar.a("MSAID", "msaid", str);
        ii iiVar = new ii();
        iiVar.b(this.f902a.d);
        iiVar.c(ht.ClientInfoUpdate.f519a);
        iiVar.a(bd.a());
        iiVar.a(new HashMap());
        baVarA.a(iiVar.m494a());
        byte[] bArrA = it.a(ah.a(this.f8303a.getPackageName(), this.f902a.d, iiVar, hj.Notification));
        XMPushService xMPushService = this.f8303a;
        xMPushService.a(xMPushService.getPackageName(), bArrA, true);
    }
}
