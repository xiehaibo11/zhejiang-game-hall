package com.kuaishou.weapon.p0;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import com.sigmob.sdk.base.mta.PointType;
import com.tencent.connect.common.Constants;
import java.net.InetAddress;
import java.net.UnknownHostException;
import org.json.JSONObject;

public class cn {
    private Context a;

    public cn(Context context) {
        this.a = context;
    }

    private JSONObject a() {
        try {
            System.currentTimeMillis();
            JSONObject jSONObject = new JSONObject();
            h hVarA = h.a(this.a, "re_po_rt");
            boolean zE = hVarA.e("a1_p_s_p_s");
            boolean zE2 = hVarA.e("a1_p_s_p_s_c_b");
            ai aiVar = new ai(this.a);
            jSONObject.put("0", aiVar.d());
            jSONObject.put("1", aiVar.a());
            jSONObject.put("2", aiVar.c());
            jSONObject.put("3", aiVar.f());
            jSONObject.put("24", aiVar.e());
            int i = 1;
            jSONObject.put("35", ab.b() ? 1 : 0);
            jSONObject.put("36", ab.a(this.a) ? 1 : 0);
            JSONObject jSONObjectA = ah.a(this.a);
            if (jSONObjectA != null) {
                jSONObject.put("4", jSONObjectA);
            }
            if (hVarA.b(df.ac, 0) == 1 && (zE || zE2)) {
                jSONObject.put(Constants.VIA_REPORT_TYPE_CHAT_AUDIO, al.a(this.a) ? 1 : 0);
            }
            ac acVar = new ac();
            jSONObject.put("7", acVar.a() ? 1 : 0);
            boolean zA = acVar.a(this.a);
            jSONObject.put("8", zA ? 1 : 0);
            if (zA) {
                jSONObject.put("61", acVar.b(this.a));
            }
            jSONObject.put("10", acVar.e(this.a));
            jSONObject.put(Constants.VIA_REPORT_TYPE_SHARE_TO_QZONE, acVar.c(this.a));
            ae aeVar = new ae();
            jSONObject.put(Constants.VIA_REPORT_TYPE_CHAT_VIDEO, aeVar.a("cpuinfo") ? 1 : 0);
            jSONObject.put("27", aeVar.a("meminfo") ? 1 : 0);
            ao aoVar = new ao();
            jSONObject.put("65", aoVar.d() ? 1 : 0);
            boolean zB = aoVar.b();
            jSONObject.put("66", zB ? 1 : 0);
            if (zB) {
                jSONObject.put("67", aoVar.a() ? 1 : 0);
            }
            jSONObject.put("68", aoVar.f() ? 1 : 0);
            jSONObject.put("69", aoVar.e());
            jSONObject.put(PointType.ANTI_SPAM, aoVar.c() ? 1 : 0);
            jSONObject.put("102", aoVar.g() ? 1 : 0);
            jSONObject.put("99", new af().a());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("03007", bu.a(this.a));
            jSONObject2.put("03014", bg.g(this.a));
            jSONObject2.put("03020", bu.b(this.a));
            jSONObject2.put("03030", bf.d(this.a));
            jSONObject.put("51", jSONObject2);
            jSONObject.put(PointType.WIND_ACTIVE, new an().d());
            if (!ab.b(this.a)) {
                i = 0;
            }
            jSONObject.put("60", i);
            try {
                jSONObject.put("11028", WeaponHI.sKSSdkver);
                jSONObject.put("11301", bg.c(com.kwad.sdk.f.b.FA().Fz()));
                jSONObject.put("11302", bg.c(com.kwad.sdk.f.b.FA().getSdkVersion()));
                jSONObject.put("11303", bg.c(com.kwad.sdk.f.b.FA().getAppId()));
                jSONObject.put("11002", Engine.soVersion);
            } catch (Throwable unused) {
            }
            return jSONObject;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public String a(String str) {
        JSONObject jSONObjectA;
        JSONObject jSONObjectA2;
        try {
            cl clVar = new cl(str, cj.j);
            String strA = dl.a(ct.a);
            String strB = b(strA);
            if (TextUtils.isEmpty(strB) || (jSONObjectA = clVar.a(this.a)) == null) {
                return null;
            }
            String str2 = ct.h + "?" + cu.a(this.a);
            if (ct.a() && ct.a.contains("api")) {
                str2 = "/api" + str2;
            }
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("ip", strB);
            jSONObject.put("host", strA);
            jSONObject.put("path", str2);
            String str3 = WeaponHI.cookieData;
            if (!TextUtils.isEmpty(str3) && str3.length() > 10) {
                jSONObject.put("cookie", str3);
            }
            jSONObject.put("head", jSONObjectA);
            StringBuilder sb = new StringBuilder();
            sb.append("sdk=" + Build.VERSION.SDK_INT);
            jSONObject.put("parame", sb.toString());
            if (str.equals(cj.h) && (jSONObjectA2 = a()) != null) {
                jSONObject.put("sjd", jSONObjectA2);
            }
            return jSONObject.toString();
        } catch (Throwable unused) {
            return null;
        }
    }

    public String b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            String hostAddress = InetAddress.getByName(dl.a(str)).getHostAddress();
            try {
                if (!TextUtils.isEmpty(hostAddress)) {
                    if (hostAddress.contains(".")) {
                        return hostAddress;
                    }
                }
                return "";
            } catch (UnknownHostException unused) {
                return hostAddress;
            }
        } catch (UnknownHostException unused2) {
            return "";
        }
    }
}
