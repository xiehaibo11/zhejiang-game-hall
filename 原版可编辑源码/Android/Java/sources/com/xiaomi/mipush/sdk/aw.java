package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.ba;
import com.xiaomi.push.bp;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;
import java.util.HashMap;
import java.util.Map;

final class aw implements Runnable {
    final Context a;
    final boolean a;

    aw(Context context, boolean z) {
        this.a = context;
        this.a = z;
    }

    @Override
    public void run() {
        Map<String, String> map;
        String strD;
        String str;
        com.xiaomi.channel.commonutils.logger.b.a("do sync info");
        ii iiVar = new ii(bd.a(), false);
        b bVarA = b.a(this.a);
        iiVar.c(ht.v.a);
        iiVar.b(bVarA.a());
        iiVar.d(this.a.getPackageName());
        iiVar.a = new HashMap();
        Map<String, String> map2 = iiVar.a;
        Context context = this.a;
        com.xiaomi.push.n.a(map2, "app_version", com.xiaomi.push.h.a(context, context.getPackageName()));
        Map<String, String> map3 = iiVar.a;
        Context context2 = this.a;
        com.xiaomi.push.n.a(map3, Constants.EXTRA_KEY_APP_VERSION_CODE, Integer.toString(com.xiaomi.push.h.a(context2, context2.getPackageName())));
        com.xiaomi.push.n.a(iiVar.a, "push_sdk_vn", "4_9_0");
        com.xiaomi.push.n.a(iiVar.a, "push_sdk_vc", Integer.toString(40090));
        com.xiaomi.push.n.a(iiVar.a, "token", bVarA.b());
        if (!com.xiaomi.push.m.d()) {
            String strA = bp.a(com.xiaomi.push.j.d(this.a));
            String strF = com.xiaomi.push.j.f(this.a);
            if (!TextUtils.isEmpty(strF)) {
                strA = strA + Constants.ACCEPT_TIME_SEPARATOR_SP + strF;
            }
            if (!TextUtils.isEmpty(strA)) {
                com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_IMEI_MD5, strA);
            }
        }
        ba.a(this.a).a(iiVar.a);
        com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_REG_ID, bVarA.c());
        com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_REG_SECRET, bVarA.d());
        com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_ACCEPT_TIME, MiPushClient.getAcceptTime(this.a).replace(Constants.ACCEPT_TIME_SEPARATOR_SP, Constants.ACCEPT_TIME_SEPARATOR_SERVER));
        if (this.a) {
            com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_ALIASES_MD5, av.c(MiPushClient.getAllAlias(this.a)));
            com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_TOPICS_MD5, av.c(MiPushClient.getAllTopic(this.a)));
            map = iiVar.a;
            strD = av.c(MiPushClient.getAllUserAccount(this.a));
            str = Constants.EXTRA_KEY_ACCOUNTS_MD5;
        } else {
            com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_ALIASES, av.d(MiPushClient.getAllAlias(this.a)));
            com.xiaomi.push.n.a(iiVar.a, Constants.EXTRA_KEY_TOPICS, av.d(MiPushClient.getAllTopic(this.a)));
            map = iiVar.a;
            strD = av.d(MiPushClient.getAllUserAccount(this.a));
            str = Constants.EXTRA_KEY_ACCOUNTS;
        }
        com.xiaomi.push.n.a(map, str, strD);
        ao.a(this.a).a(iiVar, hj.i, false, (hw) null);
    }
}
