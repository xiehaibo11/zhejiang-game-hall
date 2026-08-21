package com.xiaomi.push.service;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bx;
import java.util.HashMap;

final class ai extends bx.a {
    final XMPushService a;
    final t a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ai(String str, long j, XMPushService xMPushService, t tVar) {
        super(str, j);
        this.a = xMPushService;
        this.a = tVar;
    }

    @Override
    void a(bx bxVar) {
        String strA = bxVar.a("GAID", "gaid");
        String strA2 = com.xiaomi.push.j.a((Context) this.a);
        if (TextUtils.isEmpty(strA2) || TextUtils.equals(strA, strA2)) {
            return;
        }
        bxVar.a("GAID", "gaid", strA2);
        ii iiVar = new ii();
        iiVar.b(this.a.d);
        iiVar.c(ht.g.a);
        iiVar.a(bd.a());
        iiVar.a(new HashMap());
        iiVar.a().put("gaid", strA2);
        byte[] bArrA = it.a(ah.a(this.a.getPackageName(), this.a.d, iiVar, hj.i));
        XMPushService xMPushService = this.a;
        xMPushService.a(xMPushService.getPackageName(), bArrA, true);
    }
}
