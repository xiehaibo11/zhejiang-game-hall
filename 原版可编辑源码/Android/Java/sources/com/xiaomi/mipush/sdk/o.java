package com.xiaomi.mipush.sdk;

import android.app.Activity;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.xiaomi.push.al;
import com.xiaomi.push.ed;
import com.xiaomi.push.ef;
import com.xiaomi.push.ho;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.service.bd;
import java.util.HashMap;

public class o {
    public static void a(Context context, Intent intent, Uri uri) {
        ed edVarA;
        ef efVar;
        if (context == null) {
            return;
        }
        ao.a(context).a();
        if (ed.a(context.getApplicationContext()).a() == null) {
            ed.a(context.getApplicationContext()).a(b.a(context.getApplicationContext()).a(), context.getPackageName(), ba.a(context.getApplicationContext()).a(ho.aF.a(), 0), new c());
            ba.a(context).a(new q(102, "awake online config", context));
        }
        if ((context instanceof Activity) && intent != null) {
            edVarA = ed.a(context.getApplicationContext());
            efVar = ef.a;
        } else {
            if (!(context instanceof Service) || intent == null) {
                if (uri == null || TextUtils.isEmpty(uri.toString())) {
                    return;
                }
                ed.a(context.getApplicationContext()).a(ef.d, context, (Intent) null, uri.toString());
                return;
            }
            if ("com.xiaomi.mipush.sdk.WAKEUP".equals(intent.getAction())) {
                edVarA = ed.a(context.getApplicationContext());
                efVar = ef.c;
            } else {
                edVarA = ed.a(context.getApplicationContext());
                efVar = ef.b;
            }
        }
        edVarA.a(efVar, context, intent, (String) null);
    }

    private static void a(Context context, ii iiVar) {
        boolean zA = ba.a(context).a(ho.aG.a(), false);
        int iA = ba.a(context).a(ho.aH.a(), 0);
        if (iA >= 0 && iA < 30) {
            com.xiaomi.channel.commonutils.logger.b.c("aw_ping: frquency need > 30s.");
            iA = 30;
        }
        boolean z = iA >= 0 ? zA : false;
        if (!com.xiaomi.push.m.a()) {
            a(context, iiVar, z, iA);
        } else if (z) {
            com.xiaomi.push.al.a(context.getApplicationContext()).a((al.a) new p(iiVar, context), iA);
        }
    }

    public static final <T extends iu<T, ?>> void a(Context context, T t, boolean z, int i) {
        byte[] bArrA = it.a(t);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("send message fail, because msgBytes is null.");
            return;
        }
        Intent intent = new Intent();
        intent.setAction("action_help_ping");
        intent.putExtra("extra_help_ping_switch", z);
        intent.putExtra("extra_help_ping_frequency", i);
        intent.putExtra("mipush_payload", bArrA);
        intent.putExtra("com.xiaomi.mipush.MESSAGE_CACHE", true);
        ao.a(context).a(intent);
    }

    public static void a(Context context, String str) {
        com.xiaomi.channel.commonutils.logger.b.a("aw_ping : send aw_ping cmd and content to push service from 3rd app");
        HashMap map = new HashMap();
        map.put("awake_info", str);
        map.put("event_type", String.valueOf(HostConstant.MAXBOUND));
        map.put("description", "ping message");
        ii iiVar = new ii();
        iiVar.b(b.a(context).a());
        iiVar.d(context.getPackageName());
        iiVar.c(ht.I.a);
        iiVar.a(bd.a());
        iiVar.a = map;
        a(context, iiVar);
    }

    public static void a(Context context, String str, int i, String str2) {
        ii iiVar = new ii();
        iiVar.b(str);
        iiVar.a(new HashMap());
        iiVar.a().put("extra_aw_app_online_cmd", String.valueOf(i));
        iiVar.a().put("extra_help_aw_info", str2);
        iiVar.a(bd.a());
        byte[] bArrA = it.a(iiVar);
        if (bArrA == null) {
            com.xiaomi.channel.commonutils.logger.b.a("send message fail, because msgBytes is null.");
            return;
        }
        Intent intent = new Intent();
        intent.setAction("action_aw_app_logic");
        intent.putExtra("mipush_payload", bArrA);
        ao.a(context).a(intent);
    }
}
