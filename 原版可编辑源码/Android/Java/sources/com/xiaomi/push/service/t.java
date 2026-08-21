package com.xiaomi.push.service;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.xiaomi.push.service.bg;
import com.xiaomi.push.w;
import java.util.Locale;

public class t {
    public final int a;
    public final String a;
    public final String b;
    public final String c;
    public final String d;
    public final String e;
    public final String f;

    public t(String str, String str2, String str3, String str4, String str5, String str6, int i) {
        this.a = str;
        this.b = str2;
        this.c = str3;
        this.d = str4;
        this.e = str5;
        this.f = str6;
        this.a = i;
    }

    private static String a(Context context) {
        if (!"com.xiaomi.xmsf".equals(context)) {
            return com.xiaomi.push.m.b();
        }
        if (!TextUtils.isEmpty(null)) {
            return null;
        }
        String strA = com.xiaomi.push.m.a("ro.miui.region");
        return TextUtils.isEmpty(strA) ? com.xiaomi.push.m.a("ro.product.locale.region") : strA;
    }

    public static boolean a() {
        try {
            return com.xiaomi.push.v.a(null, "miui.os.Build").getField("IS_ALPHA_BUILD").getBoolean(null);
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean a(Context context) {
        return "com.xiaomi.xmsf".equals(context.getPackageName()) && a();
    }

    private static boolean b(Context context) {
        return context.getPackageName().equals("com.xiaomi.xmsf");
    }

    public bg.b a(XMPushService xMPushService) {
        bg.b bVar = new bg.b(xMPushService);
        a(bVar, xMPushService, xMPushService.b(), "c");
        return bVar;
    }

    public bg.b a(bg.b bVar, Context context, j jVar, String str) {
        bVar.a = context.getPackageName();
        bVar.b = this.a;
        bVar.h = this.c;
        bVar.c = this.b;
        bVar.g = "5";
        bVar.d = "XMPUSH-PASS";
        bVar.a = false;
        w.a aVar = new w.a();
        aVar.a("sdk_ver", 48).a("cpvn", "4_9_0").a("cpvc", 40090).a(com.tkay.expressad.foundation.g.a.bD, a.a(context).b()).a(TtmlNode.TAG_REGION, a.a(context).a()).a("miui_vn", com.xiaomi.push.m.c()).a("miui_vc", Integer.valueOf(com.xiaomi.push.m.a(context))).a("xmsf_vc", Integer.valueOf(com.xiaomi.push.h.a(context, "com.xiaomi.xmsf"))).a("android_ver", Integer.valueOf(Build.VERSION.SDK_INT)).a("n_belong_to_app", Boolean.valueOf(ax.a(context))).a("systemui_vc", Integer.valueOf(com.xiaomi.push.h.a(context)));
        String strA = a(context);
        if (!TextUtils.isEmpty(strA)) {
            aVar.a("latest_country_code", strA);
        }
        String strD = com.xiaomi.push.m.d();
        if (!TextUtils.isEmpty(strD)) {
            aVar.a("device_ch", strD);
        }
        String strE = com.xiaomi.push.m.e();
        if (!TextUtils.isEmpty(strE)) {
            aVar.a("device_mfr", strE);
        }
        bVar.e = aVar.toString();
        String str2 = b(context) ? "1000271" : this.d;
        w.a aVar2 = new w.a();
        aVar2.a("appid", str2).a("locale", Locale.getDefault().toString()).a("sync", 1);
        if (a(context)) {
            aVar2.a("ab", str);
        }
        bVar.f = aVar2.toString();
        bVar.a = jVar;
        return bVar;
    }
}
