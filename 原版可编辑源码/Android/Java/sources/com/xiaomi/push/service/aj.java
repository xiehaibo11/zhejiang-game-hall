package com.xiaomi.push.service;

import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bx;
import java.util.HashMap;

final class aj extends bx.a {
    final XMPushService a;
    final t a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    aj(String str, long j, XMPushService xMPushService, t tVar) {
        super(str, j);
        this.a = xMPushService;
        this.a = tVar;
    }

    @Override
    void a(bx bxVar) {
        com.xiaomi.push.ba baVarA = com.xiaomi.push.ba.a(this.a);
        String strA = bxVar.a("MSAID", "msaid");
        String str = baVarA.b() + baVarA.a() + baVarA.c() + baVarA.d();
        if (TextUtils.isEmpty(str) || TextUtils.equals(strA, str)) {
            return;
        }
        bxVar.a("MSAID", "msaid", str);
        ii iiVar = new ii();
        iiVar.b(this.a.d);
        iiVar.c(ht.g.a);
        iiVar.a(bd.a());
        iiVar.a(new HashMap());
        baVarA.a(iiVar.a());
        byte[] bArrA = it.a(ah.a(this.a.getPackageName(), this.a.d, iiVar, hj.i));
        XMPushService xMPushService = this.a;
        xMPushService.a(xMPushService.getPackageName(), bArrA, true);
    }
}
