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

/* JADX INFO: loaded from: classes4.dex */
final class aw implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8004a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ boolean f81a;

    aw(Context context, boolean z) {
        this.f8004a = context;
        this.f81a = z;
    }

    @Override // java.lang.Runnable
    public void run() {
        Map<String, String> map;
        String strD;
        String str;
        com.xiaomi.channel.commonutils.logger.b.m43a("do sync info");
        ii iiVar = new ii(bd.a(), false);
        b bVarM85a = b.m85a(this.f8004a);
        iiVar.c(ht.SyncInfo.f519a);
        iiVar.b(bVarM85a.m86a());
        iiVar.d(this.f8004a.getPackageName());
        iiVar.f658a = new HashMap();
        Map<String, String> map2 = iiVar.f658a;
        Context context = this.f8004a;
        com.xiaomi.push.n.a(map2, "app_version", com.xiaomi.push.h.m397a(context, context.getPackageName()));
        Map<String, String> map3 = iiVar.f658a;
        Context context2 = this.f8004a;
        com.xiaomi.push.n.a(map3, Constants.EXTRA_KEY_APP_VERSION_CODE, Integer.toString(com.xiaomi.push.h.a(context2, context2.getPackageName())));
        com.xiaomi.push.n.a(iiVar.f658a, "push_sdk_vn", "4_9_0");
        com.xiaomi.push.n.a(iiVar.f658a, "push_sdk_vc", Integer.toString(40090));
        com.xiaomi.push.n.a(iiVar.f658a, "token", bVarM85a.b());
        if (!com.xiaomi.push.m.m580d()) {
            String strA = bp.a(com.xiaomi.push.j.d(this.f8004a));
            String strF = com.xiaomi.push.j.f(this.f8004a);
            if (!TextUtils.isEmpty(strF)) {
                strA = strA + Constants.ACCEPT_TIME_SEPARATOR_SP + strF;
            }
            if (!TextUtils.isEmpty(strA)) {
                com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_IMEI_MD5, strA);
            }
        }
        ba.a(this.f8004a).a(iiVar.f658a);
        com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_REG_ID, bVarM85a.m93c());
        com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_REG_SECRET, bVarM85a.d());
        com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_ACCEPT_TIME, MiPushClient.getAcceptTime(this.f8004a).replace(Constants.ACCEPT_TIME_SEPARATOR_SP, Constants.ACCEPT_TIME_SEPARATOR_SERVER));
        if (this.f81a) {
            com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_ALIASES_MD5, av.c(MiPushClient.getAllAlias(this.f8004a)));
            com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_TOPICS_MD5, av.c(MiPushClient.getAllTopic(this.f8004a)));
            map = iiVar.f658a;
            strD = av.c(MiPushClient.getAllUserAccount(this.f8004a));
            str = Constants.EXTRA_KEY_ACCOUNTS_MD5;
        } else {
            com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_ALIASES, av.d(MiPushClient.getAllAlias(this.f8004a)));
            com.xiaomi.push.n.a(iiVar.f658a, Constants.EXTRA_KEY_TOPICS, av.d(MiPushClient.getAllTopic(this.f8004a)));
            map = iiVar.f658a;
            strD = av.d(MiPushClient.getAllUserAccount(this.f8004a));
            str = Constants.EXTRA_KEY_ACCOUNTS;
        }
        com.xiaomi.push.n.a(map, str, strD);
        ao.a(this.f8004a).a(iiVar, hj.Notification, false, (hw) null);
    }
}
