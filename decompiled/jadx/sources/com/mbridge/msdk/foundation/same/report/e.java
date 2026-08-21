package com.mbridge.msdk.foundation.same.report;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.same.net.Aa;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.MBConfiguration;
import com.tkay.expressad.foundation.d.r;
import com.xiaomi.mipush.sdk.Constants;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: ReportUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public class e extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f3501a = e.class.getSimpleName();

    private static String c(Context context, String str) {
        String strG;
        if (context == null) {
            return "";
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("pf", "1");
            jSONObject.put(com.tkay.expressad.foundation.g.a.F, v.C());
            jSONObject.put("pn", v.A(context));
            jSONObject.put(com.tkay.expressad.foundation.g.a.H, v.v(context));
            jSONObject.put(com.tkay.expressad.foundation.g.a.I, v.u(context));
            jSONObject.put(com.tkay.expressad.foundation.g.a.J, v.t(context));
            jSONObject.put("dm", v.x());
            jSONObject.put(com.tkay.expressad.foundation.g.a.L, v.z());
            jSONObject.put("gaid", v.E());
            jSONObject.put("mnc", v.e(context));
            jSONObject.put("mcc", v.d(context));
            int iD = v.D(context);
            jSONObject.put("nt", iD);
            jSONObject.put(com.tkay.expressad.foundation.g.a.T, v.a(context, iD));
            jSONObject.put("l", v.s(context));
            jSONObject.put(com.tkay.expressad.foundation.g.a.V, v.B());
            jSONObject.put("ua", v.A());
            jSONObject.put("app_id", com.mbridge.msdk.foundation.controller.a.f().k());
            jSONObject.put("unit_id", str);
            jSONObject.put("sv", MBConfiguration.SDK_VERSION);
            jSONObject.put(com.tkay.expressad.foundation.g.a.aa, v.j(context));
            jSONObject.put(com.tkay.expressad.foundation.g.a.ac, v.x(context) + "x" + v.y(context));
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null) {
                JSONObject jSONObject2 = new JSONObject();
                try {
                    if (aVarB.Z() == 1) {
                        String strB = v.b(context);
                        if (strB != null) {
                            jSONObject2.put("imei", strB);
                        }
                        String strI = v.i(context);
                        if (strI != null) {
                            jSONObject2.put("mac", strI);
                        }
                    }
                    if (aVarB.aa() == 1 && (strG = v.g(context)) != null) {
                        jSONObject2.put("android_id", strG);
                    }
                    try {
                        try {
                            String strH = v.H();
                            if (!TextUtils.isEmpty(strH)) {
                                jSONObject2.put("manufacturer", strH);
                            }
                            String strB2 = v.b();
                            if (!TextUtils.isEmpty(strB2)) {
                                jSONObject2.put("cpu2", strB2);
                            }
                            String strD = v.d();
                            if (!TextUtils.isEmpty(strD)) {
                                jSONObject2.put("tags", strD);
                            }
                            String strE = v.e();
                            if (!TextUtils.isEmpty(strE)) {
                                jSONObject2.put("user", strE);
                            }
                            String strF = v.f();
                            if (!TextUtils.isEmpty(strF)) {
                                jSONObject2.put("radio", strF);
                            }
                            String strG2 = v.g();
                            if (!TextUtils.isEmpty(strG2)) {
                                jSONObject2.put("bootloader", strG2);
                            }
                            String strH2 = v.h();
                            if (!TextUtils.isEmpty(strH2)) {
                                jSONObject2.put("hardware", strH2);
                            }
                            String strI2 = v.i();
                            if (!TextUtils.isEmpty(strI2)) {
                                jSONObject2.put("host", strI2);
                            }
                            String strJ = v.j();
                            if (!TextUtils.isEmpty(strJ)) {
                                jSONObject2.put("codename", strJ);
                            }
                            String strK = v.k();
                            if (!TextUtils.isEmpty(strK)) {
                                jSONObject2.put("incremental", strK);
                            }
                            String strL = v.l();
                            if (!TextUtils.isEmpty(strL)) {
                                jSONObject2.put("serial", strL);
                            }
                            String strM = v.m();
                            if (!TextUtils.isEmpty(strM)) {
                                jSONObject2.put("display", strM);
                            }
                            String strN = v.n();
                            if (!TextUtils.isEmpty(strN)) {
                                jSONObject2.put("board", strN);
                            }
                            String strO = v.o();
                            if (!TextUtils.isEmpty(strO)) {
                                jSONObject2.put("type", strO);
                            }
                            String strC = v.c();
                            if (!TextUtils.isEmpty(strC)) {
                                jSONObject2.put("support", strC);
                            }
                            String strP = v.p();
                            if (!TextUtils.isEmpty(strP)) {
                                jSONObject2.put("release", strP);
                            }
                            int iQ = v.q();
                            if (iQ != -1) {
                                jSONObject2.put("sdkint", iQ);
                            }
                            String strL2 = v.l(context);
                            if (!TextUtils.isEmpty(strL2)) {
                                jSONObject2.put("battery", strL2);
                            }
                            int iK = v.k(context);
                            if (iK != -1) {
                                jSONObject2.put("batterystatus", iK);
                            }
                            int iR = v.r();
                            if (iR != -1) {
                                jSONObject2.put("baseos", iR);
                            }
                            String strE2 = v.E(context);
                            if (!TextUtils.isEmpty(strE2)) {
                                jSONObject2.put("is24H", strE2);
                            }
                            int iN = v.n(context);
                            if (iN != -1) {
                                jSONObject2.put("sensor", iN);
                            }
                            String strO2 = v.o(context);
                            if (!TextUtils.isEmpty(strO2)) {
                                jSONObject2.put("ime", strO2);
                            }
                            int iM = v.m(context);
                            if (iM != -1) {
                                jSONObject2.put("phonetype", iM);
                            }
                            String strI3 = v.I();
                            if (!TextUtils.isEmpty(strI3)) {
                                jSONObject2.put("totalram", strI3);
                            }
                            String strF2 = v.F(context);
                            if (!TextUtils.isEmpty(strF2)) {
                                jSONObject2.put("totalmemory", strF2);
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    if (!TextUtils.isEmpty(jSONObject2.toString())) {
                        String strA = t.a(jSONObject2.toString());
                        if (!TextUtils.isEmpty(strA)) {
                            jSONObject.put("dvi", URLEncoder.encode(strA, "utf-8"));
                        }
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            return jSONObject.toString();
        } catch (Exception e3) {
            e3.printStackTrace();
            return "";
        }
    }

    public static String a(Campaign campaign, int i, String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("category", "adtrack");
            jSONObject.put("action", str);
            jSONObject.put(TTDownloadField.TT_LABEL, i);
            if (campaign != null) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("id", campaign.getId());
                jSONObject2.put("title", campaign.getAppName());
                jSONObject.put("value", jSONObject2);
            } else {
                jSONObject.put("value", "");
            }
        } catch (Exception unused) {
            z.d(f3501a, "ad track data failed !");
        }
        return jSONObject.toString();
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(String str, String str2, Context context, String str3) {
        if (context != null) {
            context = context.getApplicationContext();
        }
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        dVar.a(com.tkay.expressad.foundation.g.a.z, c(context, str3));
        dVar.a(com.tkay.expressad.foundation.g.a.A, str);
        try {
            if (!TextUtils.isEmpty(str2)) {
                z.a(f3501a, "8.5.0 add channel ,before value : " + str2);
                String strA = Aa.a();
                if (strA == null) {
                    strA = "";
                }
                JSONObject jSONObject = new JSONObject(str2);
                jSONObject.put("channel", strA);
                String str4 = com.mbridge.msdk.foundation.controller.a.b.get(str3);
                if (!TextUtils.isEmpty(str4)) {
                    jSONObject.put(com.tkay.expressad.foundation.g.a.am, str4 != null ? str4 : "");
                }
                str2 = jSONObject.toString();
                z.a(f3501a, "8.5.0 add channel ,update value : " + str2);
            } else {
                JSONObject jSONObject2 = new JSONObject();
                String str5 = com.mbridge.msdk.foundation.controller.a.b.get(str3);
                if (!TextUtils.isEmpty(str5)) {
                    jSONObject2.put(com.tkay.expressad.foundation.g.a.am, str5 != null ? str5 : "");
                }
                str2 = jSONObject2.toString();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        dVar.a(com.tkay.expressad.foundation.g.a.B, str2);
        dVar.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
        return dVar;
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(Context context) {
        String strG;
        String strA;
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        try {
            dVar.a("platform", "1");
            String strA2 = v.A(context);
            if (!TextUtils.isEmpty(strA2)) {
                dVar.a("package_name", URLEncoder.encode(strA2));
            }
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                dVar.a(com.tkay.expressad.foundation.g.a.bd, Build.VERSION.RELEASE);
                dVar.a("brand", URLEncoder.encode(v.z()));
                dVar.a("model", URLEncoder.encode(v.x()));
                dVar.a("gaid", v.E());
                dVar.a("mnc", v.e(context));
                dVar.a("mcc", v.d(context));
                int iD = v.D(context);
                dVar.a("network_type", iD + "");
                dVar.a("network_str", v.a(context, iD));
                dVar.a("language", URLEncoder.encode(v.s(context)));
                dVar.a("timezone", URLEncoder.encode(v.B()));
                dVar.a("ua", URLEncoder.encode(v.A()));
                dVar.a(com.tkay.expressad.foundation.g.a.bp, URLEncoder.encode(v.j(context)));
            }
            dVar.a("sdk_version", MBConfiguration.SDK_VERSION);
            dVar.a(com.tkay.expressad.foundation.g.a.bf, URLEncoder.encode(v.v(context)));
            dVar.a("orientation", URLEncoder.encode(v.t(context) + ""));
            try {
                if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                    Class.forName("com.google.android.gms.common.GooglePlayServicesUtil");
                    dVar.a(com.tkay.expressad.foundation.g.a.ab, GooglePlayServicesUtil.GOOGLE_PLAY_SERVICES_VERSION_CODE + "");
                }
            } catch (Exception unused) {
                z.d(f3501a, "can't find com.google.android.gms.common.GooglePlayServicesUtil class");
            } catch (Throwable th) {
                th.printStackTrace();
            }
            dVar.a(com.tkay.expressad.foundation.g.a.bq, v.x(context) + "x" + v.y(context));
            com.mbridge.msdk.foundation.same.net.g.e.e(dVar);
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            if (aVarB != null) {
                JSONObject jSONObject = new JSONObject();
                try {
                    if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac") && aVarB.Z() == 1) {
                        String strB = v.b(context);
                        if (strB != null) {
                            jSONObject.put("imei", strB);
                        }
                        String strI = v.i(context);
                        if (strI != null) {
                            jSONObject.put("mac", strI);
                        }
                    }
                    if (aVarB.G() == 1 && (strA = v.a(context)) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                        jSONObject.put("oaid", strA);
                    }
                    if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id") && aVarB.aa() == 1 && (strG = v.g(context)) != null) {
                        jSONObject.put("android_id", strG);
                    }
                    try {
                        try {
                            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                                String strH = v.H();
                                if (!TextUtils.isEmpty(strH)) {
                                    jSONObject.put("manufacturer", strH);
                                }
                                String strB2 = v.b();
                                if (!TextUtils.isEmpty(strB2)) {
                                    jSONObject.put("cpu2", strB2);
                                }
                                String strD = v.d();
                                if (!TextUtils.isEmpty(strD)) {
                                    jSONObject.put("tags", strD);
                                }
                                String strE = v.e();
                                if (!TextUtils.isEmpty(strE)) {
                                    jSONObject.put("user", strE);
                                }
                                String strF = v.f();
                                if (!TextUtils.isEmpty(strF)) {
                                    jSONObject.put("radio", strF);
                                }
                                String strG2 = v.g();
                                if (!TextUtils.isEmpty(strG2)) {
                                    jSONObject.put("bootloader", strG2);
                                }
                                String strH2 = v.h();
                                if (!TextUtils.isEmpty(strH2)) {
                                    jSONObject.put("hardware", strH2);
                                }
                                String strI2 = v.i();
                                if (!TextUtils.isEmpty(strI2)) {
                                    jSONObject.put("host", strI2);
                                }
                                String strJ = v.j();
                                if (!TextUtils.isEmpty(strJ)) {
                                    jSONObject.put("codename", strJ);
                                }
                                String strK = v.k();
                                if (!TextUtils.isEmpty(strK)) {
                                    jSONObject.put("incremental", strK);
                                }
                                String strL = v.l();
                                if (!TextUtils.isEmpty(strL)) {
                                    jSONObject.put("serial", strL);
                                }
                                String strM = v.m();
                                if (!TextUtils.isEmpty(strM)) {
                                    jSONObject.put("display", strM);
                                }
                                String strN = v.n();
                                if (!TextUtils.isEmpty(strN)) {
                                    jSONObject.put("board", strN);
                                }
                                String strO = v.o();
                                if (!TextUtils.isEmpty(strO)) {
                                    jSONObject.put("type", strO);
                                }
                                String strC = v.c();
                                if (!TextUtils.isEmpty(strC)) {
                                    jSONObject.put("support", strC);
                                }
                                String strP = v.p();
                                if (!TextUtils.isEmpty(strP)) {
                                    jSONObject.put("release", strP);
                                }
                                int iQ = v.q();
                                if (iQ != -1) {
                                    jSONObject.put("sdkint", iQ);
                                }
                                String strL2 = v.l(context);
                                if (!TextUtils.isEmpty(strL2)) {
                                    jSONObject.put("battery", strL2);
                                }
                                int iK = v.k(context);
                                if (iK != -1) {
                                    jSONObject.put("batterystatus", iK);
                                }
                                int iR = v.r();
                                if (iR != -1) {
                                    jSONObject.put("baseos", iR);
                                }
                                String strE2 = v.E(context);
                                if (!TextUtils.isEmpty(strE2)) {
                                    jSONObject.put("is24H", strE2);
                                }
                                int iN = v.n(context);
                                if (iN != -1) {
                                    jSONObject.put("sensor", iN);
                                }
                                String strO2 = v.o(context);
                                if (!TextUtils.isEmpty(strO2)) {
                                    jSONObject.put("ime", strO2);
                                }
                                int iM = v.m(context);
                                if (iM != -1) {
                                    jSONObject.put("phonetype", iM);
                                }
                                String strI3 = v.I();
                                if (!TextUtils.isEmpty(strI3)) {
                                    jSONObject.put("totalram", strI3);
                                }
                                String strF2 = v.F(context);
                                if (!TextUtils.isEmpty(strF2)) {
                                    jSONObject.put("totalmemory", strF2);
                                }
                            }
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    } catch (Throwable th2) {
                        th2.printStackTrace();
                    }
                    if (!TextUtils.isEmpty(jSONObject.toString())) {
                        String strA3 = t.a(jSONObject.toString());
                        if (!TextUtils.isEmpty(strA3)) {
                            dVar.a("dvi", strA3);
                        }
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                e3.printStackTrace();
            }
        }
        return dVar;
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(Context context, n nVar) {
        try {
            com.mbridge.msdk.foundation.same.net.g.d dVarA = a(context);
            try {
                dVarA.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k() + "");
                dVarA.a("data", URLEncoder.encode(nVar.d()));
                return dVarA;
            } catch (Exception unused) {
                return dVarA;
            }
        } catch (Exception unused2) {
            return null;
        }
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(Context context, String str) {
        com.mbridge.msdk.foundation.same.net.g.d dVarA = a(context);
        dVarA.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k() + "");
        if (!TextUtils.isEmpty(str)) {
            try {
                dVarA.a("data", URLEncoder.encode(str, "utf-8"));
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        return dVarA;
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(String str, Context context, String str2) {
        com.mbridge.msdk.foundation.same.net.g.d dVarA = a(context);
        StringBuilder sb = new StringBuilder();
        sb.append(com.mbridge.msdk.foundation.controller.a.f().k());
        sb.append("");
        dVarA.a("app_id", sb.toString());
        dVarA.a("unit_id", str2);
        try {
            if (!TextUtils.isEmpty(str2)) {
                String str3 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                if (!TextUtils.isEmpty(str)) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(str);
                    sb2.append("&");
                    sb2.append(com.tkay.expressad.foundation.g.a.am);
                    sb2.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    sb2.append(str3 != null ? str3 : "");
                    str = sb2.toString();
                } else {
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append("u_stid=");
                    sb3.append(str3 != null ? str3 : "");
                    str = sb3.toString();
                }
            }
            dVarA.a("data", URLEncoder.encode(str, "utf-8"));
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
        dVarA.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
        return dVarA;
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(String str, Context context) {
        com.mbridge.msdk.foundation.same.net.g.d dVarA = a(context);
        dVarA.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k() + "");
        if (!TextUtils.isEmpty(str)) {
            try {
                dVarA.a("data", URLEncoder.encode(str, "utf-8"));
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        dVarA.a(com.tkay.expressad.foundation.g.a.C, com.tkay.expressad.foundation.g.a.D);
        return dVarA;
    }

    public static String a(String str, Map<String, Object> map) {
        StringBuilder sb = new StringBuilder();
        sb.append("key=" + str);
        if (map != null && !map.isEmpty()) {
            for (Map.Entry<String, Object> entry : map.entrySet()) {
                sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
            }
        }
        sb.append("\n");
        return sb.toString();
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(CampaignEx campaignEx, List<com.mbridge.msdk.rover.e> list) {
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        JSONArray jSONArray = new JSONArray();
        JSONObject jSONObject = new JSONObject();
        if (campaignEx != null) {
            try {
                jSONObject.put("cid", campaignEx.getId());
                jSONObject.put("mark", campaignEx.getRoverMark());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if (list != null && list.size() >= 0) {
            JSONArray jSONArray2 = new JSONArray();
            for (com.mbridge.msdk.rover.e eVar : list) {
                if (eVar != null) {
                    jSONArray2.put(eVar.a());
                }
            }
            jSONObject.put("urls", jSONArray2);
        }
        jSONArray.put(jSONObject);
        dVar.a("data", jSONArray.toString());
        return dVar;
    }

    public static boolean a() {
        try {
            return System.currentTimeMillis() - 86400000 > ((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), "privateAuthorityTimesTamp", 0L)).longValue();
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    public static void b() {
        try {
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), "privateAuthorityTimesTamp", Long.valueOf(System.currentTimeMillis()));
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, CampaignEx campaignEx, int i, int i2) {
        try {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000056&");
            if (campaignEx != null) {
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
            }
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            stringBuffer.append("unit_id=" + aVarB.D() + "&");
            String strE = v.E();
            if (!TextUtils.isEmpty(strE)) {
                stringBuffer.append("gaid=" + strE + "&");
            }
            stringBuffer.append("action_type=" + i + "&");
            stringBuffer.append("jm_a=" + com.mbridge.msdk.d.b.a(context).c() + "&");
            stringBuffer.append("jm_n=" + com.mbridge.msdk.d.b.a(context).a() + "&");
            if (campaignEx != null) {
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice() + "&");
            }
            stringBuffer.append("result_type=" + i2);
            if (b.a().c()) {
                b.a().a(stringBuffer.toString());
            } else {
                new d(context).b(stringBuffer.toString());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, String str, String str2, boolean z) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000047&");
                if (!TextUtils.isEmpty(str2)) {
                    String str3 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str3 == null) {
                        str3 = "";
                    }
                    sb.append(str3);
                    sb.append("&");
                    stringBuffer.append(sb.toString());
                }
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                stringBuffer.append("hb=");
                stringBuffer.append(z ? 1 : 0);
                stringBuffer.append("&");
                stringBuffer.append("reason=" + str);
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    e(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, String str2, boolean z, String str3, String str4, String str5, String str6) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000104&");
                if (!TextUtils.isEmpty(str2)) {
                    String str7 = com.mbridge.msdk.foundation.controller.a.b.get(str2);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str7 == null) {
                        str7 = "";
                    }
                    sb.append(str7);
                    sb.append("&");
                    stringBuffer.append(sb.toString());
                }
                stringBuffer.append("network_type=" + v.D(context) + "&");
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid=" + str3 + "&");
                }
                if (!TextUtils.isEmpty(str4)) {
                    stringBuffer.append("rid_n=" + str4 + "&");
                }
                if (!TextUtils.isEmpty(str5)) {
                    stringBuffer.append("cid=" + str5 + "&");
                }
                if (!TextUtils.isEmpty(str6)) {
                    stringBuffer.append("template_id=" + str6 + "&");
                }
                stringBuffer.append("unit_id=" + str2 + "&");
                stringBuffer.append("hb=");
                stringBuffer.append(z ? 1 : 0);
                stringBuffer.append("&");
                stringBuffer.append("reason=" + str);
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    e(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, List<CampaignEx> list, String str, boolean z) {
        if (context == null || list == null) {
            return;
        }
        try {
            if (list.size() <= 0 || TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000048&");
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            CampaignEx campaignEx = list.get(0);
            stringBuffer.append("cid=" + campaignEx.getId() + "&");
            if (z) {
                stringBuffer.append("hb=");
                stringBuffer.append(1);
                stringBuffer.append("&");
            }
            String requestId = campaignEx.getRequestId();
            if (!TextUtils.isEmpty(requestId)) {
                stringBuffer.append("rid=");
                stringBuffer.append(requestId);
                stringBuffer.append("&");
            }
            String requestIdNotice = campaignEx.getRequestIdNotice();
            if (!TextUtils.isEmpty(requestIdNotice)) {
                stringBuffer.append("rid_n=");
                stringBuffer.append(requestIdNotice);
                stringBuffer.append("&");
            }
            StringBuilder sb = new StringBuilder("rtins_type=");
            for (int i = 0; i < list.size(); i++) {
                CampaignEx campaignEx2 = list.get(i);
                if (i < list.size() - 1) {
                    sb.append(campaignEx2.getRtinsType());
                    sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                } else {
                    sb.append(campaignEx2.getRtinsType());
                }
            }
            stringBuffer.append((CharSequence) sb);
            if (b.a().c()) {
                b.a().a(stringBuffer.toString());
            } else {
                a(context, stringBuffer.toString(), str);
            }
        } catch (Throwable th) {
            z.d(f3501a, th.getMessage());
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000054&");
            stringBuffer.append("network_type=" + v.D(context) + "&");
            stringBuffer.append("unit_id=" + str + "&");
            stringBuffer.append("cid=" + campaignEx.getId() + "&");
            stringBuffer.append("reason=&");
            stringBuffer.append("result=2&");
            if (!TextUtils.isEmpty(str2)) {
                stringBuffer.append(str2);
            }
            if (campaignEx != null && campaignEx.getAdType() == 287) {
                stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                stringBuffer.append("ad_type=3&");
            } else if (campaignEx != null && campaignEx.getAdType() == 94) {
                stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                stringBuffer.append("ad_type=1&");
            } else if (campaignEx != null && campaignEx.getAdType() == 296) {
                stringBuffer.append("ad_type=5&");
                stringBuffer.append("creative=" + campaignEx.getCreativeId() + "&");
            } else if (campaignEx != null && campaignEx.getAdType() == 297) {
                stringBuffer.append("ad_type=6&");
                stringBuffer.append("creative=" + campaignEx.getCreativeId() + "&");
            } else if (campaignEx != null && campaignEx.getAdType() == 298) {
                stringBuffer.append("ad_type=7&");
                stringBuffer.append("creative=" + campaignEx.getCreativeId() + "&");
            } else {
                stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                stringBuffer.append("ad_type=1&");
            }
            stringBuffer.append("devid=" + v.E() + "&");
            if (campaignEx != null) {
                if (campaignEx.isBidCampaign()) {
                    stringBuffer.append("hb=1&");
                }
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=");
                stringBuffer.append(campaignEx.getRequestIdNotice());
                stringBuffer.append("&");
                stringBuffer.append("adspace_t=");
                stringBuffer.append(campaignEx.getAdSpaceT());
            }
            if (b.a().c()) {
                b.a().a(stringBuffer.toString());
            } else {
                a(context, stringBuffer.toString(), str);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void b(Context context, CampaignEx campaignEx, String str, String str2) {
        if (context != null) {
            try {
                if ((!TextUtils.isEmpty(str)) && (true ^ TextUtils.isEmpty(str2))) {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append("key=2000054&");
                    stringBuffer.append("network_type=" + v.D(context) + "&");
                    stringBuffer.append("unit_id=" + str + "&");
                    stringBuffer.append("reason=" + str2 + "&");
                    stringBuffer.append("result=1&");
                    stringBuffer.append("devid=" + v.E() + "&");
                    if (campaignEx != null) {
                        stringBuffer.append("cid=" + campaignEx.getId() + "&");
                        if (campaignEx.getAdType() == 287) {
                            stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                            stringBuffer.append("ad_type=3&");
                        } else if (campaignEx.getAdType() == 94) {
                            stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                            stringBuffer.append("ad_type=1&");
                        } else if (campaignEx.getAdType() == 296) {
                            stringBuffer.append("ad_type=5&");
                            stringBuffer.append("creative=" + campaignEx.getCreativeId() + "&");
                        } else if (campaignEx.getAdType() == 297) {
                            stringBuffer.append("ad_type=6&");
                            stringBuffer.append("ad_html=" + campaignEx.getAdHtml() + "&");
                            stringBuffer.append("ad_tpl_url=" + URLEncoder.encode(campaignEx.getAdZip()) + "&");
                        } else if (campaignEx.getAdType() == 298) {
                            stringBuffer.append("ad_type=7&");
                            stringBuffer.append("ad_html=" + campaignEx.getAdHtml() + "&");
                            stringBuffer.append("ad_tpl_url=" + URLEncoder.encode(campaignEx.getAdZip()) + "&");
                        } else {
                            stringBuffer.append("creative=" + URLEncoder.encode(campaignEx.getendcard_url()) + "&");
                            stringBuffer.append("ad_type=1&");
                        }
                        stringBuffer.append("rid=");
                        stringBuffer.append(campaignEx.getRequestId());
                        stringBuffer.append("&");
                        stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice());
                    }
                    if (b.a().c()) {
                        b.a().a(stringBuffer.toString());
                    } else {
                        a(context, stringBuffer.toString(), str);
                    }
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, int i, String str2, String str3, CampaignEx campaignEx) {
        if (campaignEx == null || context == null) {
            return;
        }
        try {
            String campaignUnitId = campaignEx.getCampaignUnitId();
            boolean zIsBidCampaign = campaignEx.isBidCampaign();
            String requestId = campaignEx.getRequestId();
            String id = campaignEx.getId();
            if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(campaignUnitId)) {
                return;
            }
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000108&");
            if (!TextUtils.isEmpty(campaignUnitId)) {
                String str4 = com.mbridge.msdk.foundation.controller.a.b.get(campaignUnitId);
                StringBuilder sb = new StringBuilder();
                sb.append("u_stid=");
                if (str4 == null) {
                    str4 = "";
                }
                sb.append(str4);
                sb.append("&");
                stringBuffer.append(sb.toString());
            }
            if (!TextUtils.isEmpty(requestId)) {
                stringBuffer.append("rid=" + requestId + "&");
            }
            if (!TextUtils.isEmpty(id)) {
                stringBuffer.append("cid=" + id + "&");
            }
            stringBuffer.append("template_id=" + i + "&");
            if (!TextUtils.isEmpty(str)) {
                stringBuffer.append("ad_type=" + str + "&");
            }
            if (!TextUtils.isEmpty(str3)) {
                stringBuffer.append("process=" + str3 + "&");
            }
            stringBuffer.append("unit_id=" + campaignUnitId + "&");
            stringBuffer.append("hb=");
            stringBuffer.append(zIsBidCampaign ? 1 : 0);
            stringBuffer.append("&");
            stringBuffer.append("reason=" + str2);
            if (b.a().c()) {
                b.a().a(stringBuffer.toString());
            } else {
                e(context, stringBuffer.toString());
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, int i, String str3, int i2) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000073&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                stringBuffer.append("reason=" + str3 + "&");
                stringBuffer.append("result=" + i + "&");
                if (campaignEx != null) {
                    stringBuffer.append("cid=" + campaignEx.getId() + "&");
                    stringBuffer.append("rid=");
                    stringBuffer.append(campaignEx.getRequestId());
                    stringBuffer.append("&");
                    stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice() + "&");
                }
                stringBuffer.append("d_t=" + i2 + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("url=");
                sb.append(URLEncoder.encode(str, "utf-8"));
                stringBuffer.append(sb.toString());
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString(), str2);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, CampaignEx campaignEx, int i, String str, String str2) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("key=2000114&");
            stringBuffer.append("network_type=" + v.D(context) + "&");
            StringBuilder sb = new StringBuilder();
            sb.append("gh_id=");
            String strEncode = "";
            sb.append(TextUtils.isEmpty(campaignEx.getGhId()) ? "" : URLEncoder.encode(campaignEx.getGhId(), "utf-8"));
            sb.append("&");
            stringBuffer.append(sb.toString());
            StringBuilder sb2 = new StringBuilder();
            sb2.append("gh_path=");
            sb2.append(TextUtils.isEmpty(campaignEx.getGhPath()) ? "" : URLEncoder.encode(campaignEx.getGhPath(), "utf-8"));
            sb2.append("&");
            stringBuffer.append(sb2.toString());
            stringBuffer.append("unit_id=" + str2 + "&");
            stringBuffer.append("rid=");
            stringBuffer.append(campaignEx.getRequestId());
            stringBuffer.append("&");
            stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice() + "&");
            stringBuffer.append("result=" + i + "&");
            StringBuilder sb3 = new StringBuilder();
            sb3.append("reason=");
            if (!TextUtils.isEmpty(str)) {
                strEncode = URLEncoder.encode(str, "utf-8");
            }
            sb3.append(strEncode);
            sb3.append("&");
            stringBuffer.append(sb3.toString());
            stringBuffer.append("cid=" + campaignEx.getId());
            if (b.a().c()) {
                b.a().a(stringBuffer.toString());
            } else {
                a(context, stringBuffer.toString(), str2);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, int i, int i2) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if (!TextUtils.isEmpty(str2)) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000074&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
                stringBuffer.append("type=" + i + "&");
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice() + "&");
                stringBuffer.append("d_t=" + i2 + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("url=");
                sb.append(URLEncoder.encode(str, "utf-8"));
                stringBuffer.append(sb.toString());
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString(), str2);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, int i, int i2, int i3) {
        if (context == null || campaignEx == null) {
            return;
        }
        try {
            if (!TextUtils.isEmpty(str2)) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000075&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("unit_id=" + str2 + "&");
                stringBuffer.append("cid=" + campaignEx.getId() + "&");
                stringBuffer.append("type=" + i + "&");
                stringBuffer.append("rid=");
                stringBuffer.append(campaignEx.getRequestId());
                stringBuffer.append("&");
                stringBuffer.append("rid_n=" + campaignEx.getRequestIdNotice() + "&");
                stringBuffer.append("statue=" + i2 + "&");
                stringBuffer.append("d_t=" + i3 + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("url=");
                sb.append(URLEncoder.encode(str, "utf-8"));
                stringBuffer.append(sb.toString());
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString(), str2);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void a(Context context, String str, String str2, int i, String str3) {
        if (context != null) {
            try {
                if (!TextUtils.isEmpty(str2)) {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append("key=2000076&");
                    stringBuffer.append("network_type=" + v.D(context) + "&");
                    stringBuffer.append("unit_id=" + str2 + "&");
                    stringBuffer.append("reason=" + str3 + "&");
                    stringBuffer.append("result=" + i + "&");
                    StringBuilder sb = new StringBuilder();
                    sb.append("url=");
                    sb.append(URLEncoder.encode(str, "utf-8"));
                    stringBuffer.append(sb.toString());
                    if (b.a().c()) {
                        b.a().a(stringBuffer.toString());
                    } else {
                        a(context, stringBuffer.toString(), str2);
                    }
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, String str2, String str3, String str4, String str5, String str6) {
        if (context != null) {
            try {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000086&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("uniquekey=" + str + "&");
                stringBuffer.append("rid=" + str2 + "&");
                stringBuffer.append("rid_n=" + str4 + "&");
                stringBuffer.append("cid=" + str5 + "&");
                stringBuffer.append("unit_id=" + str6 + "&");
                if (!TextUtils.isEmpty(str6)) {
                    String str7 = com.mbridge.msdk.foundation.controller.a.b.get(str6);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str7 == null) {
                        str7 = "";
                    }
                    sb.append(str7);
                    sb.append("&");
                    stringBuffer.append(sb.toString());
                }
                stringBuffer.append("packageName=" + str3);
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    d(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, String str2, String str3, int i, String str4, String str5, String str6) {
        if (context != null) {
            try {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000087&");
                stringBuffer.append("network_type=" + v.D(context) + "&");
                stringBuffer.append("uniquekey=" + str + "&");
                stringBuffer.append("rid=" + str2 + "&");
                stringBuffer.append("rid_n=" + str4 + "&");
                stringBuffer.append("cid=" + str5 + "&");
                stringBuffer.append("unit_id=" + str6 + "&");
                if (!TextUtils.isEmpty(str6)) {
                    String str7 = com.mbridge.msdk.foundation.controller.a.b.get(str6);
                    StringBuilder sb = new StringBuilder();
                    sb.append("u_stid=");
                    if (str7 == null) {
                        str7 = "";
                    }
                    sb.append(str7);
                    sb.append("&");
                    stringBuffer.append(sb.toString());
                }
                stringBuffer.append("packageName=" + str3 + "&");
                StringBuilder sb2 = new StringBuilder();
                sb2.append("result=");
                sb2.append(i);
                stringBuffer.append(sb2.toString());
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    d(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, String str2, String str3) {
        if (context != null) {
            try {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000089&");
                stringBuffer.append("appid=" + com.mbridge.msdk.foundation.controller.a.f().k() + "&");
                stringBuffer.append("s=" + str + "&");
                stringBuffer.append("i=" + str2 + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("i_c=");
                sb.append(str3);
                stringBuffer.append(sb.toString());
                if (b.a().c()) {
                    b.a().a(stringBuffer.toString());
                } else {
                    d(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    private static void d(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(str, context, ""), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.1
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str2) {
                    z.d(e.f3501a, str2);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str2) {
                    z.d(e.f3501a, str2);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f3501a, e.getMessage());
        }
    }

    private static void a(final Context context, final String str, String str2) {
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(str, context, str2), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.2
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str3) {
                    z.d(e.f3501a, str3);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str3) {
                    n nVar = new n();
                    nVar.d(str);
                    nVar.a(System.currentTimeMillis());
                    nVar.a(0);
                    nVar.c("POST");
                    nVar.b(com.mbridge.msdk.foundation.same.net.f.d.a().f3453a);
                    o.a(i.a(context)).a(nVar);
                    z.d(e.f3501a, str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f3501a, e.getMessage());
        }
    }

    public static void a(String str) {
        com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
        String str2 = "key=2000088&state=" + str;
        z.d(f3501a, str2);
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null || a(aVarB, str2)) {
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(str2, com.mbridge.msdk.foundation.controller.a.f().j(), ""), null);
        }
    }

    private static void e(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(str, context), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.3
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str2) {
                    z.d(e.f3501a, str2);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str2) {
                    z.d(e.f3501a, str2);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f3501a, e.getMessage());
        }
    }

    public static void b(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(str, context), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.4
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str2) {
                    z.d(e.f3501a, str2);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str2) {
                    z.d(e.f3501a, str2);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f3501a, e.getMessage());
        }
    }

    public static void a(int i, String str, String str2) {
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a("key=2000080&reason=" + str2 + "&ad_type=" + i + "&url=" + URLEncoder.encode(str, "utf-8"), com.mbridge.msdk.foundation.controller.a.f().j(), ""), null);
        } catch (Exception e) {
            z.d(f3501a, e.getMessage());
        }
    }

    public static void a(CampaignEx campaignEx, String str, int i, int i2, String str2, int i3, int i4, int i5) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            StringBuilder sb = new StringBuilder();
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000094", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestId(), "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestIdNotice(), "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getId(), "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("video_prg");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i);
            sb.append("&");
            sb.append("phase");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i2);
            sb.append("&");
            sb.append("feedback_content");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            sb.append("&");
            sb.append("feedback_close");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i3);
            sb.append("&");
            sb.append("type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i5);
            sb.append("&");
            sb.append("ad_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i4);
            sb.append("&");
            sb.append("network_type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(String.valueOf(v.D(com.mbridge.msdk.foundation.controller.a.f().j())), "utf-8"));
            if (i3 == 1) {
                sb.append("&");
                sb.append(MBInterstitialActivity.INTENT_CAMAPIGN);
                sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                sb.append(URLEncoder.encode(CampaignEx.campaignToJsonObject(campaignEx).toString(), "utf-8"));
            }
            if (MBridgeConstans.DEBUG && i3 == 1) {
                z.d(f3501a, "2000094:" + ((Object) sb));
            }
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.5
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str3) {
                        z.a("", "FLBClick REPORT SUCCESS");
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str3) {
                        z.a("", "FLBClick REPORT FAILED");
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    public static void a(CampaignEx campaignEx, String str, int i, int i2, String str2) {
        try {
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            StringBuilder sb = new StringBuilder();
            sb.append("key");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode("2000121", "utf-8"));
            sb.append("&");
            sb.append("rid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestId(), "utf-8"));
            sb.append("&");
            sb.append("rid_n");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getRequestIdNotice(), "utf-8"));
            sb.append("&");
            sb.append("cid");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(campaignEx.getId(), "utf-8"));
            sb.append("&");
            sb.append("unit_id");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str, "utf-8"));
            sb.append("&");
            sb.append("type");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i);
            sb.append("&");
            sb.append("result");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(i2);
            sb.append("&");
            sb.append(r.ac);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(str2, "utf-8"));
            if (b.a().c()) {
                b.a().a(sb.toString());
            } else {
                aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, a(sb.toString(), com.mbridge.msdk.foundation.controller.a.f().j(), str), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.report.e.6
                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onFailed(String str3) {
                    }

                    @Override // com.mbridge.msdk.foundation.same.report.d.b
                    public final void onSuccess(String str3) {
                    }
                });
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }
}
