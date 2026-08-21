package com.mbridge.msdk.mbbanner.common.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.mbbanner.common.util.BannerUtils;
import com.tkay.core.c.d;
import com.tkay.expressad.foundation.g.a.f;

public class d {
    private static final String a = d.class.getSimpleName();

    public static com.mbridge.msdk.foundation.same.net.g.d a(boolean z, Context context, String str, String str2, int i, b bVar) throws Throwable {
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String md5 = SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l());
        String ttcIds = BannerUtils.getTtcIds(context, str);
        String strB = ae.b(context, str);
        String installIds = BannerUtils.getInstallIds();
        String strA = com.mbridge.msdk.foundation.same.a.d.a(str, f.e);
        String closeIds = BannerUtils.getCloseIds(str);
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "app_id", strK);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_id", str);
        if (!TextUtils.isEmpty(bVar.d())) {
            com.mbridge.msdk.foundation.same.net.f.b.a(dVar, MBridgeConstans.PLACEMENT_ID, bVar.d());
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "sign", md5);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "only_impression", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ping_mode", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ttc_ids", ttcIds);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.c, strB);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, d.a.O, installIds);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_source_id", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.a, str2);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_type", "296");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "offset", i + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.b, strA);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "close_id", closeIds);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_size", bVar.a() + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "refresh_time", bVar.b() + "");
        if (!TextUtils.isEmpty(bVar.c())) {
            com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "token", bVar.c() + "");
        }
        return dVar;
    }
}
