package com.mbridge.msdk.foundation.same.net.g;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ac;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.core.common.b.f;
import org.json.JSONObject;

/* JADX INFO: compiled from: CommonRequestParamsForAdd.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3457a = "";
    private static String b = "";

    public static void a(d dVar, Context context) {
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            dVar.a("withGP", v.O() + "");
            dVar.a("has_wx", v.r(com.mbridge.msdk.foundation.controller.a.f().j()) + "");
            dVar.a("integrated_wx", v.v() + "");
            dVar.a("opensdk_ver", v.w() + "");
            dVar.a("wx_api_ver", v.g(com.mbridge.msdk.foundation.controller.a.f().m()) + "");
            com.mbridge.msdk.foundation.controller.authoritycontroller.a.a();
            if (com.mbridge.msdk.foundation.a.a.a.a().b(MBridgeConstans.AUTHORITY_DNT, 0) == 1) {
                dVar.a("dnt", "1");
            }
            dVar.a(d.h, com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().f() + "");
            dVar.a("emu", v.u());
        }
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_OTHER)) {
            dVar.a(d.f, ac.b() + "");
            dVar.a(d.g, ac.a() + "");
            dVar.a("power_rate", com.mbridge.msdk.foundation.tools.b.a() + "");
            dVar.a("charging", com.mbridge.msdk.foundation.tools.b.b() + "");
            dVar.a(d.d, v.J());
        }
        dVar.a("pkg_source", v.a(v.A(context), context));
        if (com.mbridge.msdk.foundation.controller.a.f().o() != null) {
            dVar.a("web_env", com.mbridge.msdk.foundation.controller.a.f().o().toString());
        }
        if (Build.VERSION.SDK_INT > 18) {
            dVar.a("http_req", "2");
        }
        a(dVar, true);
        g(dVar);
        e(dVar);
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        if (aVarB.aY() == 1) {
            dVar.a(f.k.e, com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().g() + "");
        } else if (aVarB.aT()) {
            dVar.a(f.k.e, com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().g() + "");
        }
        h(dVar);
    }

    public static void a(d dVar) {
        dVar.a("api_version", com.mbridge.msdk.foundation.same.a.f);
    }

    public static void b(d dVar) {
        dVar.a("dyview_type", com.mbridge.msdk.foundation.same.a.g);
    }

    public static void c(d dVar) {
        if (v.P() == 0) {
            return;
        }
        dVar.a("tun", v.P() + "");
    }

    public static void d(d dVar) {
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            dVar.a("withGP", v.O() + "");
            dVar.a("has_wx", v.r(com.mbridge.msdk.foundation.controller.a.f().j()) + "");
            dVar.a("integrated_wx", v.v() + "");
            dVar.a("opensdk_ver", v.w() + "");
            dVar.a("wx_api_ver", v.g(com.mbridge.msdk.foundation.controller.a.f().m()) + "");
        }
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_OTHER)) {
            dVar.a(d.d, v.J());
        }
        a(dVar, false);
        g(dVar);
        e(dVar);
        h(dVar);
    }

    public static void e(d dVar) {
        try {
            if (TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                com.mbridge.msdk.foundation.same.a.t = com.mbridge.msdk.foundation.a.a.a.a().b("b");
            }
            if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                dVar.a("b", com.mbridge.msdk.foundation.same.a.t);
            }
            if (TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                com.mbridge.msdk.foundation.same.a.u = com.mbridge.msdk.foundation.a.a.a.a().b("c");
            }
            if (TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                return;
            }
            dVar.a("c", com.mbridge.msdk.foundation.same.a.u);
        } catch (Exception e) {
            z.d("CommonRequestParamsForAdd", e.getMessage());
        }
    }

    private static void g(d dVar) {
        int iM = v.M();
        if (iM != -1) {
            dVar.a("unknown_source", iM + "");
        }
    }

    private static void h(d dVar) {
        String strN = v.N();
        if (TextUtils.isEmpty(strN) || strN.equals("android")) {
            return;
        }
        dVar.a("hm_info", strN);
    }

    private static void a(d dVar, boolean z) {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            if (!TextUtils.isEmpty(aVarB.o()) && z) {
                dVar.a(com.tkay.expressad.foundation.g.a.al, aVarB.o());
            }
            JSONObject jSONObject = new JSONObject();
            try {
                if (aVarB.Z() == 1) {
                    if (v.b(contextJ) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                        jSONObject.put("imei", v.b(contextJ));
                    }
                    if (v.i(contextJ) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                        jSONObject.put("mac", v.i(contextJ));
                    }
                    if (v.c(contextJ) != null && z && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                        jSONObject.put("imsi", v.c(contextJ));
                    }
                }
                if (aVarB.G() == 1 && v.a(contextJ) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                    jSONObject.put("oaid", v.a(contextJ));
                }
                if (aVarB.aa() == 1 && v.g(contextJ) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id")) {
                    jSONObject.put("android_id", v.g(contextJ));
                }
                if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                    jSONObject.put("cid", v.a() + "");
                    jSONObject.put("dmt", v.L() + "");
                    jSONObject.put("dmf", v.K());
                    jSONObject.put(com.tkay.expressad.d.a.b.dx, v.s());
                }
                if (TextUtils.isEmpty(jSONObject.toString())) {
                    return;
                }
                if (!jSONObject.equals(f3457a)) {
                    b = t.a(jSONObject.toString());
                }
                if (TextUtils.isEmpty(b)) {
                    return;
                }
                dVar.a("dvi", b);
            } catch (Exception e) {
                z.d("CommonRequestParamsForAdd", e.getMessage());
            }
        }
    }

    public static void f(d dVar) {
        if (dVar != null) {
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                dVar.a("model");
                dVar.a("brand");
                dVar.a(com.tkay.expressad.foundation.g.a.bq);
                dVar.a("sub_ip");
                dVar.a("network_type");
                dVar.a("useragent");
                dVar.a("ua");
                dVar.a("language");
                dVar.a("network_str");
                dVar.a("mnc");
                dVar.a("mcc");
                dVar.a(com.tkay.expressad.foundation.g.a.bd);
                dVar.a(com.tkay.expressad.foundation.g.a.bp);
                dVar.a(com.tkay.expressad.foundation.g.a.bD);
            }
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_OTHER)) {
                dVar.a(d.f);
                dVar.a(d.g);
                dVar.a("power_rate");
                dVar.a("charging");
                dVar.a("timezone");
            }
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                return;
            }
            dVar.a("gaid");
            dVar.a("gaid2");
            dVar.a("oaid");
        }
    }
}
