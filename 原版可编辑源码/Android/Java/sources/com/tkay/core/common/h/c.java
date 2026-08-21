package com.tkay.core.common.h;

import android.content.Context;
import android.location.Location;
import android.text.TextUtils;
import com.tkay.core.api.ATPrivacyConfig;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYCustomRuleKeys;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.p;
import com.tkay.core.common.f.al;
import java.util.Map;
import org.json.JSONObject;

public final class c {
    public static final String A = "it_src";
    public static final String B = "lat";
    public static final String C = "lon";
    public static final String D = "inst_wx";
    public static final String E = "mini_sdk";
    public static final String F = "ms_type";
    public static final String G = "device_set";
    public static final String H = "gdpr_cs";
    public static final String I = "abtest_id";
    public static final String J = "first_init_time";
    public static final String K = "days_from_first_init";
    public static final String L = "cs_cl";
    public static final String M = "is_ofm";
    public static final String N = "app_id";
    public static final String O = "api_ver";
    public static final String P = "custom";
    public static final String Q = "rdid";
    public static final String R = "rc";
    public static final String S = "data";
    public static final String T = "tcp_tk_da_type";
    public static final String U = "ofl";
    public static final String V = "tcp_rate";
    public static final String W = "p";
    public static final String X = "p2";
    public static final String Y = "sign";
    public static final String Z = "common";
    public static final String a = "platform";
    public static final int aa = 1;
    public static final int ab = 2;
    public static final int ac = 3;
    public static final String ad = "area_type";
    public static final String ae = "sp_http";
    public static final String af = "os_fw";
    public static final String ag = "is_test";
    public static final String ah = "mdna_oid";
    public static final String ai = "mdna_appkey";
    public static final String aj = "mdna_r";
    public static final String ak = "user_num";
    public static final String al = "cp_device_id";
    public static final String am = "cp_pl_id";
    public static int an = -1;
    public static int ao = -1;
    public static final String ap = "al_it_apil";
    public static final String aq = "wx_data";
    public static final String b = "os_vn";
    public static final String c = "os_vc";
    public static final String d = "package_name";
    public static final String e = "app_vn";
    public static final String f = "app_vc";
    public static final String g = "brand";
    public static final String h = "model";
    public static final String i = "screen";
    public static final String j = "network_type";
    public static final String k = "mnc";
    public static final String l = "mcc";
    public static final String m = "language";
    public static final String n = "timezone";
    public static final String o = "sdk_ver";
    public static final String p = "gp_ver";
    public static final String q = "nw_ver";
    public static final String r = "ua";
    public static final String s = "orient";
    public static final String t = "system";
    public static final String u = "android_id";
    public static final String v = "gaid";
    public static final String w = "channel";
    public static final String x = "sub_channel";
    public static final String y = "upid";
    public static final String z = "ps_id";

    public static JSONObject a(int i2) {
        com.tkay.core.c.a aVarB;
        JSONObject jSONObjectAm;
        String str = "3";
        com.tkay.core.common.l.d.q(com.tkay.core.common.b.m.a().f());
        JSONObject jSONObject = new JSONObject();
        Context contextF = com.tkay.core.common.b.m.a().f();
        try {
            jSONObject.put("platform", 1);
            jSONObject.put("os_vn", com.tkay.core.common.l.d.e());
            jSONObject.put("os_vc", com.tkay.core.common.l.d.d());
            jSONObject.put("package_name", com.tkay.core.common.l.d.k(contextF));
            jSONObject.put("app_vn", com.tkay.core.common.l.d.i(contextF));
            jSONObject.put("app_vc", com.tkay.core.common.l.d.h(contextF));
            jSONObject.put("brand", com.tkay.core.common.l.d.b());
            jSONObject.put("model", com.tkay.core.common.l.d.a());
            jSONObject.put("screen", com.tkay.core.common.l.d.j(contextF));
            jSONObject.put("network_type", com.tkay.core.common.l.d.m(contextF));
            jSONObject.put("mnc", com.tkay.core.common.l.d.c(contextF));
            jSONObject.put("mcc", com.tkay.core.common.l.d.b(contextF));
            jSONObject.put("language", com.tkay.core.common.l.d.f(contextF));
            jSONObject.put("timezone", com.tkay.core.common.l.d.c());
            jSONObject.put("sdk_ver", com.tkay.core.common.l.g.a());
            jSONObject.put("gp_ver", com.tkay.core.common.l.d.n(contextF));
            jSONObject.put("ua", com.tkay.core.common.l.d.i());
            jSONObject.put("orient", com.tkay.core.common.l.d.g(contextF));
            jSONObject.put("system", 1);
            if (!TextUtils.isEmpty(com.tkay.core.common.b.m.a().m())) {
                jSONObject.put("channel", com.tkay.core.common.b.m.a().m());
            }
            if (!TextUtils.isEmpty(com.tkay.core.common.b.m.a().n())) {
                jSONObject.put("sub_channel", com.tkay.core.common.b.m.a().n());
            }
            jSONObject.put("upid", p.a(contextF).b() ? com.tkay.core.common.b.m.a().w() : "");
            jSONObject.put("ps_id", com.tkay.core.common.b.m.a().q());
            com.tkay.core.c.a aVarB2 = com.tkay.core.c.b.a(contextF).b(com.tkay.core.common.b.m.a().o());
            if (aVarB2 != null) {
                jSONObject.put(I, TextUtils.isEmpty(aVarB2.A()) ? "" : aVarB2.A());
            }
            jSONObject.put(J, com.tkay.core.common.b.m.a().g());
            jSONObject.put(K, com.tkay.core.common.b.m.a().h());
            StringBuilder sb = new StringBuilder();
            sb.append(com.tkay.core.common.b.m.a().d());
            sb.append(p.a(contextF).a());
            jSONObject.put(H, sb.toString());
            jSONObject.put(L, "3");
            if (com.tkay.core.common.b.m.a().i() == 1) {
                jSONObject.put(M, 1);
            }
            if (com.tkay.core.common.b.m.a().G() && com.tkay.core.common.b.h.a().a(aVarB2)) {
                String strB = com.tkay.core.common.b.h.a().b();
                String strC = com.tkay.core.common.b.h.a().c();
                String strD = com.tkay.core.common.b.h.a().d();
                if (TextUtils.isEmpty(strB)) {
                    strB = "";
                }
                jSONObject.put(ah, strB);
                if (TextUtils.isEmpty(strC)) {
                    strC = "";
                }
                jSONObject.put(ai, strC);
                jSONObject.put(Q, TextUtils.isEmpty(strD) ? "" : strD);
                jSONObject.put("mdna_r", com.tkay.core.common.b.m.a().J());
            }
            if (com.tkay.core.common.b.m.a().B()) {
                if (com.tkay.core.common.b.m.a().C()) {
                    str = "1";
                }
            } else {
                str = com.tkay.core.common.b.m.a().C() ? "2" : "4";
            }
            jSONObject.put(ae, str);
            IExHandler iExHandlerB = com.tkay.core.common.b.m.a().b();
            if (iExHandlerB != null) {
                iExHandlerB.fillRequestDeviceData(jSONObject, i2);
            }
            String strJ = com.tkay.core.common.l.d.j();
            if (!TextUtils.isEmpty(strJ)) {
                jSONObject.put(af, Integer.parseInt(strJ));
            }
            if ((i2 & 4) == 4 && (aVarB = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o())) != null && (jSONObjectAm = aVarB.am()) != null) {
                jSONObject.put("a_c", jSONObjectAm);
            }
        } catch (Exception unused) {
        }
        return jSONObject;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0044  */
    /* JADX WARN: Type inference failed for: r0v8, types: [com.tkay.core.api.IExHandler] */
    /* JADX WARN: Type inference failed for: r2v0, types: [org.json.JSONObject] */
    /* JADX WARN: Type inference failed for: r5v10, types: [int] */
    /* JADX WARN: Type inference failed for: r5v11 */
    /* JADX WARN: Type inference failed for: r5v12 */
    /* JADX WARN: Type inference failed for: r5v8 */
    /* JADX WARN: Type inference failed for: r5v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static JSONObject a() {
        String strF;
        JSONObject jSONObject;
        Context contextF = com.tkay.core.common.b.m.a().f();
        ?? jSONObject2 = new JSONObject();
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(contextF).b(com.tkay.core.common.b.m.a().o());
        if (aVarB != null) {
            try {
                strF = aVarB.F();
            } catch (Throwable unused) {
            }
        } else {
            strF = "";
        }
        if (!TextUtils.isEmpty(strF)) {
            try {
                jSONObject = new JSONObject(strF);
            } catch (Exception unused2) {
            }
            if (!jSONObject.isNull("a")) {
                boolean z2 = jSONObject.optInt("a") == 1;
                jSONObject2.put("android_id", z2 ? com.tkay.core.common.l.d.d(contextF) : "");
                jSONObject2.put("gaid", com.tkay.core.common.l.d.f());
                ?? B2 = com.tkay.core.common.b.m.a().b();
                if (B2 != 0) {
                    B2.fillRequestData(jSONObject2, aVarB);
                    jSONObject2.put("is_cn_sdk", "1");
                } else {
                    jSONObject2.put("is_cn_sdk", "0");
                }
                String strL = com.tkay.core.common.l.d.l(contextF);
                Location locationR = com.tkay.core.common.b.m.a().r();
                if (locationR != null) {
                    jSONObject2.put("lat", locationR.getLatitude());
                    jSONObject2.put(C, locationR.getLongitude());
                }
                String strS = com.tkay.core.common.b.m.a().s();
                if (!TextUtils.isEmpty(strS)) {
                    jSONObject2.put(D, Integer.parseInt(strS));
                }
                jSONObject2.put("it_src", TextUtils.isEmpty(strL) ? "" : strL);
                jSONObject2.put("area_type", f.d.a);
                if (an != -1) {
                    if (an > 0) {
                        jSONObject2.put(F, an);
                    }
                } else {
                    boolean zC = com.tkay.core.common.l.g.c(contextF);
                    boolean zB = com.tkay.core.common.l.g.b(contextF);
                    ?? r5 = zB ? 2 : zC;
                    if (zC && zB) {
                        r5 = 3;
                    }
                    if (r5 > 0) {
                        jSONObject2.put(F, r5);
                    }
                    an = r5;
                }
                if (ao != -1) {
                    if (ao == 1) {
                        jSONObject2.put(E, ao);
                    }
                } else {
                    boolean zC2 = com.tkay.core.common.l.g.c();
                    if (zC2) {
                        jSONObject2.put(E, 1);
                    }
                    ao = zC2 ? 1 : 0;
                }
                ATPrivacyConfig aTPrivacyConfigI = com.tkay.core.common.b.m.a().I();
                if (aTPrivacyConfigI != null) {
                    String devGaid = aTPrivacyConfigI.getDevGaid();
                    String devImei = aTPrivacyConfigI.getDevImei();
                    String devOaid = aTPrivacyConfigI.getDevOaid();
                    JSONObject jSONObject3 = new JSONObject();
                    if (!TextUtils.isEmpty(devGaid)) {
                        jSONObject3.put("set_gaid", devGaid);
                    }
                    if (!TextUtils.isEmpty(devImei)) {
                        jSONObject3.put("set_imei", devImei);
                    }
                    if (!TextUtils.isEmpty(devOaid)) {
                        jSONObject3.put("set_oaid", devOaid);
                    }
                    jSONObject2.put(G, jSONObject3);
                }
                Map<String, Object> mapL = com.tkay.core.common.b.m.a().l();
                try {
                    Object obj = mapL.get(TYCustomRuleKeys.USER_NUMBER);
                    if (obj != null) {
                        jSONObject2.put(ak, Long.parseLong(obj.toString()));
                    }
                } catch (Throwable unused3) {
                }
                Object obj2 = mapL.get(TYCustomRuleKeys.USER_DEVICE_ID);
                if (obj2 != null) {
                    jSONObject2.put(al, obj2.toString());
                }
            }
        }
        return jSONObject2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v2, types: [int] */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r5v0, types: [org.json.JSONObject] */
    private static void a(Context context, JSONObject jSONObject) {
        int i2 = an;
        if (i2 == -1) {
            boolean zC = com.tkay.core.common.l.g.c(context);
            boolean zB = com.tkay.core.common.l.g.b(context);
            ?? r3 = zB ? 2 : zC;
            if (zC && zB) {
                r3 = 3;
            }
            if (r3 > 0) {
                jSONObject.put(F, r3);
            }
            an = r3;
        } else if (i2 > 0) {
            jSONObject.put(F, i2);
        }
        int i3 = ao;
        if (i3 != -1) {
            if (i3 == 1) {
                jSONObject.put(E, i3);
            }
        } else {
            boolean zC2 = com.tkay.core.common.l.g.c();
            if (zC2) {
                jSONObject.put(E, 1);
            }
            ao = zC2 ? 1 : 0;
        }
    }

    private static void b(JSONObject jSONObject) {
        ATPrivacyConfig aTPrivacyConfigI = com.tkay.core.common.b.m.a().I();
        if (aTPrivacyConfigI != null) {
            String devGaid = aTPrivacyConfigI.getDevGaid();
            String devImei = aTPrivacyConfigI.getDevImei();
            String devOaid = aTPrivacyConfigI.getDevOaid();
            JSONObject jSONObject2 = new JSONObject();
            if (!TextUtils.isEmpty(devGaid)) {
                jSONObject2.put("set_gaid", devGaid);
            }
            if (!TextUtils.isEmpty(devImei)) {
                jSONObject2.put("set_imei", devImei);
            }
            if (!TextUtils.isEmpty(devOaid)) {
                jSONObject2.put("set_oaid", devOaid);
            }
            jSONObject.put(G, jSONObject2);
        }
    }

    public static void a(JSONObject jSONObject) {
        try {
            al alVarK = com.tkay.core.common.b.m.a().K();
            JSONObject jSONObject2 = new JSONObject();
            int i2 = 1;
            if (alVarK.b() != 1) {
                i2 = 0;
            }
            jSONObject2.put("has_sdk", i2);
            jSONObject2.put("sdk_ver", String.valueOf(alVarK.c()));
            jSONObject2.put("sdk_api_ver", String.valueOf(alVarK.d()));
            jSONObject2.put("open_app_id", com.tkay.core.common.l.d.l());
            jSONObject.put(aq, jSONObject2);
        } catch (Throwable unused) {
        }
    }

    public static JSONObject b() {
        return a(com.tkay.core.common.b.m.a().l());
    }

    public static JSONObject a(String str) {
        return a(com.tkay.core.common.b.m.a().d(str));
    }

    public static JSONObject a(Map<String, Object> map) {
        if (map == null) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            try {
                for (String str : map.keySet()) {
                    Object obj = map.get(str);
                    if (obj != null) {
                        try {
                            jSONObject.put(str, obj.toString());
                        } catch (Throwable unused) {
                        }
                    }
                }
            } catch (Throwable unused2) {
            }
            return jSONObject;
        } catch (Throwable unused3) {
            return null;
        }
    }
}
