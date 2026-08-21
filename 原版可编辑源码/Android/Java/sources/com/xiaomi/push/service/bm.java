package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.dy;
import com.xiaomi.push.ed;
import com.xiaomi.push.eh;
import com.xiaomi.push.hg;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import java.util.HashMap;

public class bm implements eh {
    @Override
    public void a(Context context, HashMap<String, String> map) {
        ii iiVar = new ii();
        iiVar.b(ed.a(context).a());
        iiVar.d(ed.a(context).b());
        iiVar.c(ht.I.a);
        iiVar.a(bd.a());
        iiVar.a = map;
        byte[] bArrA = it.a(ah.a(iiVar.c(), iiVar.b(), iiVar, hj.i));
        if (!(context instanceof XMPushService)) {
            com.xiaomi.channel.commonutils.logger.b.a("MoleInfo : context is not correct in pushLayer " + iiVar.a());
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("MoleInfo : send data directly in pushLayer " + iiVar.a());
        ((XMPushService) context).a(context.getPackageName(), bArrA, true);
    }

    @Override
    public void b(Context context, HashMap<String, String> map) {
        hg hgVarA = hg.a(context);
        if (hgVarA != null) {
            hgVarA.a("category_awake_app", "wake_up_app", 1L, dy.a(map));
        }
    }

    @Override
    public void c(Context context, HashMap<String, String> map) {
        com.xiaomi.channel.commonutils.logger.b.a("MoleInfo：\u3000" + dy.b(map));
    }
}
