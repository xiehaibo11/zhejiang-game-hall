package com.alipay.sdk.m.s;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.os.SystemClock;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.alipay.sdk.m.u.e;
import com.alipay.sdk.m.u.n;
import com.kuaishou.weapon.p0.t;
import com.xiaomi.mipush.sdk.Constants;
import java.io.Serializable;
import java.util.HashMap;
import java.util.Locale;
import java.util.UUID;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class a {
    public static final String A = "act_info";
    public static final String B = "UTF-8";
    public static final String C = "new_external_info==";
    public static final String m = "\"&";
    public static final String n = "&";
    public static final String o = "bizcontext=\"";
    public static final String p = "bizcontext=";
    public static final String q = "\"";
    public static final String r = "appkey";
    public static final String s = "ty";
    public static final String t = "sv";
    public static final String u = "an";
    public static final String v = "setting";
    public static final String w = "av";
    public static final String x = "sdk_start_time";
    public static final String y = "extInfo";
    public static final String z = "ap_link_token";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1245a;
    public String b;
    public Context c;
    public final String d;
    public final long e;
    public final int f;
    public final String g;
    public boolean h = false;
    public boolean i = false;
    public boolean j = false;
    public final ActivityInfo k;
    public final com.alipay.sdk.m.k.b l;

    public a(Context context, String str, String str2) {
        String str3;
        this.f1245a = "";
        this.b = "";
        this.c = null;
        boolean zIsEmpty = TextUtils.isEmpty(str2);
        this.l = new com.alipay.sdk.m.k.b(context, zIsEmpty);
        this.d = b(str, this.b);
        this.e = SystemClock.elapsedRealtime();
        this.f = n.g();
        this.k = n.a(context);
        this.g = str2;
        if (!zIsEmpty) {
            com.alipay.sdk.m.k.a.a(this, "biz", "eptyp", str2 + "|" + this.d);
            if (this.k != null) {
                str3 = this.k.name + "|" + this.k.launchMode;
            } else {
                str3 = "null";
            }
            com.alipay.sdk.m.k.a.a(this, "biz", "actInfo", str3);
            com.alipay.sdk.m.k.a.a(this, "biz", NotificationCompat.CATEGORY_SYSTEM, n.a(this));
            com.alipay.sdk.m.k.a.a(this, "biz", "sdkv", "1281fd4-clean");
        }
        try {
            this.c = context.getApplicationContext();
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
            this.f1245a = packageInfo.versionName;
            this.b = packageInfo.packageName;
        } catch (Exception e) {
            e.a(e);
        }
        if (!zIsEmpty) {
            com.alipay.sdk.m.k.a.a(this, "biz", t.i + n.g());
            com.alipay.sdk.m.k.a.a(this, "biz", com.alipay.sdk.m.k.b.Q, "" + SystemClock.elapsedRealtime());
            com.alipay.sdk.m.k.a.a(context, this, str, this.d);
        }
        if (zIsEmpty || !com.alipay.sdk.m.m.a.D().s()) {
            return;
        }
        com.alipay.sdk.m.m.a.D().a(this, this.c, true, 2);
    }

    private String d(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str.substring(19));
            jSONObject.put("bizcontext", b(jSONObject.optString("bizcontext")));
            return C + jSONObject.toString();
        } catch (Throwable unused) {
            return str;
        }
    }

    private String e(String str) {
        try {
            String strA = a(str, "\"&", "bizcontext=\"");
            if (TextUtils.isEmpty(strA)) {
                return str + "&" + a("bizcontext=\"", "\"");
            }
            if (!strA.endsWith("\"")) {
                strA = strA + "\"";
            }
            int iIndexOf = str.indexOf(strA);
            return str.substring(0, iIndexOf) + b(strA, "bizcontext=\"", "\"") + str.substring(iIndexOf + strA.length());
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this, "biz", "fmt2", th, str);
            return str;
        }
    }

    private boolean f(String str) {
        return !str.contains("\"&");
    }

    private JSONObject g() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(z, this.d);
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    public static a h() {
        return null;
    }

    public Context a() {
        return this.c;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        return this.f1245a;
    }

    private String b(String str, String str2, String str3) throws JSONException {
        JSONObject jSONObject;
        String strSubstring = str.substring(str2.length());
        boolean z2 = false;
        String strSubstring2 = strSubstring.substring(0, strSubstring.length() - str3.length());
        if (strSubstring2.length() >= 2 && strSubstring2.startsWith("\"") && strSubstring2.endsWith("\"")) {
            jSONObject = new JSONObject(strSubstring2.substring(1, strSubstring2.length() - 1));
            z2 = true;
        } else {
            jSONObject = new JSONObject(strSubstring2);
        }
        String strA = a(jSONObject);
        if (z2) {
            strA = "\"" + strA + "\"";
        }
        return str2 + strA + str3;
    }

    private String c(String str) {
        try {
            String strA = a(str, "&", "bizcontext=");
            if (TextUtils.isEmpty(strA)) {
                str = str + "&" + a("bizcontext=", "");
            } else {
                int iIndexOf = str.indexOf(strA);
                str = str.substring(0, iIndexOf) + b(strA, "bizcontext=", "") + str.substring(iIndexOf + strA.length());
            }
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this, "biz", "fmt1", th, str);
        }
        return str;
    }

    public String a(String str) {
        return TextUtils.isEmpty(str) ? str : str.startsWith(C) ? d(str) : f(str) ? c(str) : e(str);
    }

    public boolean f() {
        return this.j;
    }

    /* JADX INFO: renamed from: com.alipay.sdk.m.s.a$a, reason: collision with other inner class name */
    public static final class C0022a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final HashMap<UUID, a> f1246a = new HashMap<>();
        public static final HashMap<String, a> b = new HashMap<>();
        public static final String c = "i_uuid_b_c";

        public static void a(a aVar, Intent intent) {
            if (aVar == null || intent == null) {
                return;
            }
            UUID uuidRandomUUID = UUID.randomUUID();
            f1246a.put(uuidRandomUUID, aVar);
            intent.putExtra(c, uuidRandomUUID);
        }

        public static a a(Intent intent) {
            if (intent == null) {
                return null;
            }
            Serializable serializableExtra = intent.getSerializableExtra(c);
            if (serializableExtra instanceof UUID) {
                return f1246a.remove((UUID) serializableExtra);
            }
            return null;
        }

        public static void a(a aVar, String str) {
            if (aVar == null || TextUtils.isEmpty(str)) {
                return;
            }
            b.put(str, aVar);
        }

        public static a a(String str) {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return b.remove(str);
        }
    }

    public boolean d() {
        return this.i;
    }

    public void c(boolean z2) {
        this.j = z2;
    }

    private String a(String str, String str2, String str3) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String[] strArrSplit = str.split(str2);
        for (int i = 0; i < strArrSplit.length; i++) {
            if (!TextUtils.isEmpty(strArrSplit[i]) && strArrSplit[i].startsWith(str3)) {
                return strArrSplit[i];
            }
        }
        return null;
    }

    public boolean e() {
        return this.h;
    }

    private String a(String str, String str2) {
        return str + a(new JSONObject()) + str2;
    }

    private String b(String str) throws JSONException {
        return a(new JSONObject(str));
    }

    public String a(JSONObject jSONObject) {
        String str;
        try {
            if (!jSONObject.has("appkey")) {
                jSONObject.put("appkey", "2014052600006128");
            }
            if (!jSONObject.has("ty")) {
                jSONObject.put("ty", "and_lite");
            }
            if (!jSONObject.has("sv")) {
                jSONObject.put("sv", "h.a.3.8.15");
            }
            if (!jSONObject.has("an")) {
                jSONObject.put("an", this.b);
            }
            if (!jSONObject.has("av")) {
                jSONObject.put("av", this.f1245a);
            }
            if (!jSONObject.has("sdk_start_time")) {
                jSONObject.put("sdk_start_time", System.currentTimeMillis());
            }
            if (!jSONObject.has(y)) {
                jSONObject.put(y, g());
            }
            if (!jSONObject.has(A)) {
                if (this.k != null) {
                    str = this.k.name + "|" + this.k.launchMode;
                } else {
                    str = "null";
                }
                jSONObject.put(A, str);
            }
            return jSONObject.toString();
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this, "biz", "fmt3", th, String.valueOf(jSONObject));
            e.a(th);
            return jSONObject != null ? jSONObject.toString() : "{}";
        }
    }

    public static String b(String str, String str2) {
        try {
            Locale locale = Locale.getDefault();
            Object[] objArr = new Object[4];
            if (str == null) {
                str = "";
            }
            objArr[0] = str;
            if (str2 == null) {
                str2 = "";
            }
            objArr[1] = str2;
            objArr[2] = Long.valueOf(System.currentTimeMillis());
            objArr[3] = UUID.randomUUID().toString();
            return String.format("EP%s%s_%s", "1", n.g(String.format(locale, "%s%s%d%s", objArr)), Long.valueOf(System.currentTimeMillis()));
        } catch (Throwable unused) {
            return Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        }
    }

    public static HashMap<String, String> a(a aVar) {
        HashMap<String, String> map = new HashMap<>();
        if (aVar != null) {
            map.put("sdk_ver", "15.8.15");
            map.put("app_name", aVar.b);
            map.put("token", aVar.d);
            map.put("call_type", aVar.g);
            map.put("ts_api_invoke", String.valueOf(aVar.e));
            com.alipay.sdk.m.u.a.a(aVar, map);
        }
        return map;
    }

    public void b(boolean z2) {
        this.h = z2;
    }

    public void a(boolean z2) {
        this.i = z2;
    }
}
