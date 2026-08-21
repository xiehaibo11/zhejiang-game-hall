package com.kuaishou.weapon.p0;

import android.content.Context;
import android.os.Environment;
import android.text.TextUtils;
import com.bianfeng.paylib.utils.PayTypeUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import com.sigmob.sdk.base.mta.PointType;
import com.tencent.connect.common.Constants;
import org.json.JSONObject;

public class ci {
    private Context a;

    public ci(Context context) {
        this.a = context;
    }

    public String a(String str) {
        JSONObject jSONObjectA;
        try {
            JSONObject jSONObjectA2 = new cl(str, cj.j).a(this.a);
            if (jSONObjectA2 == null || (jSONObjectA = a()) == null) {
                return null;
            }
            jSONObjectA2.put("module_section", jSONObjectA);
            return jSONObjectA2.toString();
        } catch (Throwable unused) {
            return null;
        }
    }

    public JSONObject a() {
        int i;
        JSONObject jSONObjectG;
        int i2;
        try {
            JSONObject jSONObject = new JSONObject();
            h hVarA = h.a(this.a, "re_po_rt");
            boolean zE = hVarA.e("a1_p_s_p_s");
            boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
            if (hVarA.b(df.G, 1) == 1) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (hVarA.b(df.K, 1) == 1 && Engine.loadSuccess) {
                    ap apVar = new ap(this.a);
                    jSONObject.put("0", apVar.b("0"));
                    jSONObject.put("1", apVar.b("1"));
                    jSONObject.put("2", apVar.b("2"));
                    jSONObject.put("3", apVar.b("3"));
                    jSONObject.put("4", apVar.b("4"));
                    jSONObject.put("5", apVar.b("5"));
                    jSONObject.put("6", apVar.b("6"));
                    jSONObject.put("7", apVar.b("7"));
                    jSONObject.put("8", apVar.b("8"));
                    jSONObject.put("9", apVar.b("9"));
                    jSONObject.put("10", apVar.b("10"));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, apVar.b(Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_SET_AVATAR, apVar.b(Constants.VIA_REPORT_TYPE_SET_AVATAR));
                    jSONObject.put("13", apVar.b("13"));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_MAKE_FRIEND, apVar.b(Constants.VIA_REPORT_TYPE_MAKE_FRIEND));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_WPA_STATE, apVar.b(Constants.VIA_REPORT_TYPE_WPA_STATE));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_START_WAP, apVar.b(Constants.VIA_REPORT_TYPE_START_WAP));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_START_GROUP, apVar.b(Constants.VIA_REPORT_TYPE_START_GROUP));
                    jSONObject.put("18", apVar.b("18"));
                    jSONObject.put(Constants.VIA_ACT_TYPE_NINETEEN, apVar.b(Constants.VIA_ACT_TYPE_NINETEEN));
                    jSONObject.put("20", apVar.b("20"));
                    jSONObject.put("21", apVar.b("21"));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_DATALINE, apVar.b(Constants.VIA_REPORT_TYPE_DATALINE));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_SHARE_TO_TROOPBAR, apVar.b(Constants.VIA_REPORT_TYPE_SHARE_TO_TROOPBAR));
                    jSONObject.put("24", apVar.b("24"));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_CHAT_AUDIO, apVar.b(Constants.VIA_REPORT_TYPE_CHAT_AUDIO));
                    jSONObject.put(Constants.VIA_REPORT_TYPE_CHAT_VIDEO, apVar.b(Constants.VIA_REPORT_TYPE_CHAT_VIDEO));
                    jSONObject.put("27", apVar.b("27"));
                    jSONObject.put(Constants.VIA_ACT_TYPE_TWENTY_EIGHT, apVar.b(Constants.VIA_ACT_TYPE_TWENTY_EIGHT));
                    jSONObject.put("29", apVar.b("29"));
                    jSONObject.put(PointType.DOWNLOAD_TRACKING, apVar.b(PointType.DOWNLOAD_TRACKING));
                    jSONObject.put(PayTypeUtils.ALI_WEB_PAY2, apVar.b(PayTypeUtils.ALI_WEB_PAY2));
                    jSONObject.put("32", apVar.b("32"));
                    jSONObject.put("33", apVar.b("33"));
                    jSONObject.put("34", apVar.b("34"));
                    jSONObject.put("35", apVar.b("35"));
                    jSONObject.put("36", apVar.b("36"));
                    jSONObject.put("37", apVar.b("37"));
                    jSONObject.put("38", apVar.b("38"));
                    jSONObject.put("39", apVar.b("39"));
                    jSONObject.put("40", apVar.b("40"));
                    jSONObject.put("41", apVar.b("41"));
                    jSONObject.put("42", apVar.b("42"));
                    jSONObject.put("43", apVar.a("43"));
                    jSONObject.put("44", apVar.a("44"));
                    jSONObject.put(PointType.ANTI_SPAM, apVar.b(PointType.ANTI_SPAM));
                    jSONObject.put("102", apVar.b("102"));
                    jSONObject.put("105", apVar.b("105"));
                    jSONObject.put("106", apVar.b("106"));
                    jSONObject.put("49", (Object) dl.b(this.a));
                    jSONObject.put("50", (Object) dl.a(this.a));
                }
                if (hVarA.b(df.J, 1) == 1 && Engine.loadSuccess) {
                    at atVar = new at(this.a);
                    jSONObject.put("45", atVar.d("45"));
                    if (atVar.a()) {
                        i2 = 1;
                        jSONObject.put("93", 1);
                    } else {
                        i2 = 1;
                    }
                    if (atVar.b()) {
                        jSONObject.put("94", i2);
                    }
                    jSONObject.put("46", atVar.d("46"));
                    jSONObject.put("48", atVar.a("48"));
                    jSONObject.put("51", atVar.b("51"));
                    jSONObject.put("52", (Object) atVar.a(this.a, "52", 0));
                    jSONObject.put("55", (Object) atVar.c("55"));
                    jSONObject.put("66", atVar.a("66"));
                    jSONObject.put("67", di.d());
                    jSONObject.put("78", atVar.a("78"));
                    jSONObject.put("79", atVar.a("79"));
                    ay ayVar = new ay(this.a, 200);
                    jSONObject.put("70", ayVar.a("70"));
                    jSONObject.put("71", ayVar.a("71"));
                    jSONObject.put("72", ayVar.a("72"));
                    jSONObject.put("73", ayVar.a("73"));
                    jSONObject.put("74", ayVar.a("74"));
                }
                if (hVarA.b(df.M, 1) == 1) {
                    aw awVar = new aw(this.a);
                    jSONObject.put("53", (Object) awVar.a(this.a, "53", 1));
                    jSONObject.put("56", awVar.a("56"));
                    jSONObject.put("57", awVar.a("57"));
                    if (zE || zE2) {
                        aj ajVar = new aj();
                        jSONObject.put("47", ajVar.a(this.a));
                        jSONObject.put("59", ajVar.d(this.a));
                        jSONObject.put("60", ajVar.c(this.a));
                        jSONObject.put("61", ajVar.b(this.a));
                        jSONObject.put("62", ajVar.e(this.a));
                        jSONObject.put("65", ajVar.f(this.a));
                        jSONObject.put("69", ajVar.g(this.a));
                        jSONObject.put("75", ajVar.h(this.a));
                        jSONObject.put("80", aj.a());
                        jSONObject.put("85", ajVar.i(this.a));
                        jSONObject.put("87", ajVar.j(this.a));
                        jSONObject.put("91", ajVar.k(this.a));
                        jSONObject.put("92", ajVar.l(this.a));
                    }
                    jSONObject.put("64", di.a());
                }
                if (hVarA.b(df.N, 1) == 1) {
                    cr crVar = new cr();
                    jSONObject.put("98", crVar.a());
                    jSONObject.put(PointType.WIND_ACTIVE, crVar.b());
                    String strD = am.d();
                    if (!TextUtils.isEmpty(strD)) {
                        jSONObject.put("77", strD);
                    }
                    jSONObject.put("104", am.c());
                    jSONObject.put("109", dl.e(this.a));
                    ai aiVar = new ai(this.a);
                    jSONObject.put("82", aiVar.h());
                    String strI = aiVar.i();
                    if (!TextUtils.isEmpty(strI)) {
                        jSONObject.put("83", strI);
                    }
                    String strJ = aiVar.j();
                    if (!TextUtils.isEmpty(strJ)) {
                        jSONObject.put("84", strJ);
                    }
                    String strK = aiVar.k();
                    if (!TextUtils.isEmpty(strK)) {
                        jSONObject.put("86", strK);
                    }
                }
                if (hVarA.b(df.L, 1) == 1) {
                    au auVar = new au(this.a);
                    jSONObject.put("95", (Object) auVar.b("95"));
                    jSONObject.put("96", auVar.a() ? 1 : 0);
                    jSONObject.put("97", di.e());
                    try {
                        jSONObject.put("11301", bg.c(com.kwad.sdk.f.b.FA().Fz()));
                        jSONObject.put("11302", bg.c(com.kwad.sdk.f.b.FA().getSdkVersion()));
                        jSONObject.put("11303", bg.c(com.kwad.sdk.f.b.FA().getAppId()));
                    } catch (Throwable unused) {
                    }
                }
                try {
                    if (h.a(this.a, "re_po_rt").b(df.aD, 1) == 1) {
                        JSONObject jSONObjectC = new ba(this.a, 100, Environment.getExternalStorageDirectory().getAbsolutePath(), ba.a(this.a)).c();
                        if (jSONObjectC == null || jSONObjectC.length() <= 10) {
                            i = 1;
                            try {
                                jSONObject.put("16102", new ba(this.a, 200, "", true).a("16102"));
                            } catch (Throwable unused2) {
                            }
                        } else {
                            jSONObject.put("16002", jSONObjectC);
                            i = 1;
                        }
                        if ((zE || zE2) && (jSONObjectG = bf.g(this.a)) != null && jSONObjectG.length() > 0) {
                            jSONObject.put("16116", jSONObjectG);
                        }
                    } else {
                        i = 1;
                    }
                } catch (Throwable unused3) {
                    i = 1;
                }
                jSONObject.put("11006", zE ? i : 0);
                jSONObject.put("11029", zE2 ? i : 0);
                jSONObject.put("11002", Engine.soVersion);
                jSONObject.put("11007", System.currentTimeMillis() - jCurrentTimeMillis);
                jSONObject.put("11017", jSONObject.toString().length());
                return jSONObject;
            }
        } catch (Throwable unused4) {
        }
        return null;
    }
}
