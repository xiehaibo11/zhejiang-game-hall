package com.mbridge.msdk.mbbid.common;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ac;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.u;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.out.MBConfiguration;

public final class a {
    public static String a(Context context, String str) {
        long jA;
        StringBuffer stringBuffer = new StringBuffer();
        if (context != null) {
            try {
                if (com.mbridge.msdk.foundation.controller.a.f().j() == null) {
                    com.mbridge.msdk.foundation.controller.a.f().b(context);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        stringBuffer.append(v.E());
        stringBuffer.append("|");
        stringBuffer.append((aVarB.aa() == 1 && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id")) ? v.g(context) : "");
        stringBuffer.append("|");
        stringBuffer.append((aVarB.Z() == 1 && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) ? v.b(context) : "");
        stringBuffer.append("|");
        stringBuffer.append("|");
        stringBuffer.append("|");
        stringBuffer.append(v.z());
        stringBuffer.append("|");
        stringBuffer.append(v.y());
        stringBuffer.append("|");
        stringBuffer.append(v.D(context));
        stringBuffer.append("|");
        stringBuffer.append(MBConfiguration.SDK_VERSION);
        stringBuffer.append("|");
        stringBuffer.append(v.x(context));
        stringBuffer.append("x");
        stringBuffer.append(v.y(context));
        stringBuffer.append("|");
        stringBuffer.append(v.A());
        stringBuffer.append("|");
        stringBuffer.append(ae.a(20));
        stringBuffer.append("|");
        stringBuffer.append(ae.b(20));
        stringBuffer.append("|");
        stringBuffer.append(System.currentTimeMillis());
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.same.a.f);
        stringBuffer.append("|");
        stringBuffer.append(v.L());
        stringBuffer.append("|");
        stringBuffer.append(v.K());
        stringBuffer.append("|");
        stringBuffer.append(v.s());
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.tools.b.a());
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.tools.b.b());
        stringBuffer.append("|");
        stringBuffer.append(ac.b());
        stringBuffer.append("|");
        stringBuffer.append(ac.a());
        stringBuffer.append("|");
        try {
            jA = u.a();
        } catch (Exception unused) {
            jA = 0;
        }
        if (jA > 0) {
            stringBuffer.append(jA);
            stringBuffer.append("|");
        } else {
            stringBuffer.append("");
            stringBuffer.append("|");
        }
        stringBuffer.append("|");
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.a.a.a.a().b("b"));
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.a.a.a.a().b("c"));
        stringBuffer.append("|");
        stringBuffer.append("");
        String strO = aVarB != null ? aVarB.o() : "";
        stringBuffer.append("|");
        stringBuffer.append(strO);
        stringBuffer.append("|");
        stringBuffer.append(ae.e());
        stringBuffer.append("|");
        String strF = ae.f();
        if (TextUtils.isEmpty(strF)) {
            strF = "";
        }
        stringBuffer.append(strF);
        stringBuffer.append("|");
        stringBuffer.append(ae.m(str));
        stringBuffer.append("|");
        if (aVarB.G() == 1 && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
            stringBuffer.append(v.a(context));
        }
        stringBuffer.append("|");
        stringBuffer.append(v.v());
        stringBuffer.append("|");
        stringBuffer.append(v.r(context));
        stringBuffer.append("|");
        stringBuffer.append(v.w() + "");
        stringBuffer.append("|");
        stringBuffer.append(v.g(com.mbridge.msdk.foundation.controller.a.f().m()) + "");
        stringBuffer.append("|");
        stringBuffer.append(v.O());
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.controller.authoritycontroller.a.h() ? "1" : "2");
        stringBuffer.append("|");
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            stringBuffer.append(v.u());
        }
        stringBuffer.append("|");
        stringBuffer.append("");
        stringBuffer.append("|");
        stringBuffer.append("");
        stringBuffer.append("|");
        stringBuffer.append("");
        stringBuffer.append("|");
        stringBuffer.append("1");
        stringBuffer.append("|");
        stringBuffer.append(com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().f());
        stringBuffer.append("|");
        if (v.P() != 0) {
            stringBuffer.append(v.P() + "");
        }
        return t.a(stringBuffer.toString());
    }
}
