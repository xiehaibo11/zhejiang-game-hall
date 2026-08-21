package com.alipay.sdk.m.t;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.alipay.sdk.m.u.e;
import java.util.Random;
import org.json.JSONObject;

public class a {
    public static final String g = "alipay_tid_storage";
    public static final String h = "tidinfo";
    public static final String i = "tid";
    public static final String j = "client_key";
    public static final String k = "timestamp";
    public static final String l = "vimei";
    public static final String m = "vimsi";
    public static Context n;
    public static a o;
    public String a;
    public String b;
    public long c;
    public String d;
    public String e;
    public boolean f = false;

    public static synchronized a a(Context context) {
        if (o == null) {
            o = new a();
        }
        if (n == null) {
            o.b(context);
        }
        return o;
    }

    private void b(Context context) {
        if (context != null) {
            n = context.getApplicationContext();
        }
        if (this.f) {
            return;
        }
        this.f = true;
        l();
    }

    private String k() {
        return Long.toHexString(System.currentTimeMillis()) + (new Random().nextInt(9000) + 1000);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x006c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void l() {
        String strOptString;
        String strOptString2;
        String strOptString3;
        String str;
        String strA;
        Long lValueOf = Long.valueOf(System.currentTimeMillis());
        String strOptString4 = null;
        try {
            strA = a.a("alipay_tid_storage", "tidinfo", true);
        } catch (Exception e) {
            e = e;
            strOptString = null;
            strOptString2 = null;
        }
        if (!TextUtils.isEmpty(strA)) {
            JSONObject jSONObject = new JSONObject(strA);
            strOptString = jSONObject.optString("tid", "");
            try {
                strOptString2 = jSONObject.optString("client_key", "");
                try {
                    lValueOf = Long.valueOf(jSONObject.optLong("timestamp", System.currentTimeMillis()));
                    strOptString3 = jSONObject.optString("vimei", "");
                } catch (Exception e2) {
                    e = e2;
                    strOptString3 = null;
                }
            } catch (Exception e3) {
                e = e3;
                strOptString2 = null;
                strOptString3 = strOptString2;
            }
            try {
                strOptString4 = jSONObject.optString("vimsi", "");
            } catch (Exception e4) {
                e = e4;
                e.a(e);
            }
            str = strOptString4;
            strOptString4 = strOptString;
            e.b(com.alipay.sdk.m.l.a.A, "tid_str: load");
            if (a(strOptString4, strOptString2, strOptString3, str)) {
                m();
                return;
            }
            this.a = strOptString4;
            this.b = strOptString2;
            this.c = lValueOf.longValue();
            this.d = strOptString3;
            this.e = str;
            return;
        }
        str = null;
        strOptString2 = null;
        strOptString3 = null;
        e.b(com.alipay.sdk.m.l.a.A, "tid_str: load");
        if (a(strOptString4, strOptString2, strOptString3, str)) {
        }
        strOptString3 = strOptString2;
        e.a(e);
        str = strOptString4;
        strOptString4 = strOptString;
        e.b(com.alipay.sdk.m.l.a.A, "tid_str: load");
        if (a(strOptString4, strOptString2, strOptString3, str)) {
        }
    }

    private void m() {
        this.a = "";
        this.b = b();
        this.c = System.currentTimeMillis();
        this.d = k();
        this.e = k();
        a.b("alipay_tid_storage", "tidinfo");
    }

    private void n() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("tid", this.a);
            jSONObject.put("client_key", this.b);
            jSONObject.put("timestamp", this.c);
            jSONObject.put("vimei", this.d);
            jSONObject.put("vimsi", this.e);
            a.a("alipay_tid_storage", "tidinfo", jSONObject.toString(), true);
        } catch (Exception e) {
            e.a(e);
        }
    }

    private void o() {
    }

    public String c() {
        return this.b;
    }

    public String d() {
        return this.a;
    }

    public Long e() {
        return Long.valueOf(this.c);
    }

    public String f() {
        return this.d;
    }

    public String g() {
        return this.e;
    }

    public boolean h() {
        return i();
    }

    public boolean i() {
        return TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.d) || TextUtils.isEmpty(this.e);
    }

    public static class a {
        public static boolean a(String str, String str2) {
            if (a.n == null) {
                return false;
            }
            return a.n.getSharedPreferences(str, 0).contains(str2);
        }

        public static void b(String str, String str2) {
            if (a.n == null) {
                return;
            }
            a.n.getSharedPreferences(str, 0).edit().remove(str2).apply();
        }

        public static boolean c(String str, String str2) {
            if (a.n == null) {
                return false;
            }
            return a.n.getSharedPreferences(str, 0).contains(str2);
        }

        public static String d(String str, String str2) {
            return a(str, str2, true);
        }

        public static String a(String str, String str2, boolean z) {
            if (a.n == null) {
                return null;
            }
            String string = a.n.getSharedPreferences(str, 0).getString(str2, null);
            if (!TextUtils.isEmpty(string) && z) {
                string = com.alipay.sdk.m.n.e.a(a(), string, string);
                if (TextUtils.isEmpty(string)) {
                    e.b(com.alipay.sdk.m.l.a.A, "tid_str: pref failed");
                }
            }
            e.b(com.alipay.sdk.m.l.a.A, "tid_str: from local");
            return string;
        }

        public static void a(String str, String str2, String str3) {
            a(str, str2, str3, true);
        }

        public static void a(String str, String str2, String str3, boolean z) {
            if (a.n == null) {
                return;
            }
            SharedPreferences sharedPreferences = a.n.getSharedPreferences(str, 0);
            if (z) {
                String strA = a();
                String strB = com.alipay.sdk.m.n.e.b(strA, str3, str3);
                if (TextUtils.isEmpty(strB)) {
                    String.format("LocalPreference::putLocalPreferences failed %s，%s", str3, strA);
                }
                str3 = strB;
            }
            sharedPreferences.edit().putString(str2, str3).apply();
        }

        public static String a() {
            String packageName;
            try {
                packageName = a.n.getApplicationContext().getPackageName();
            } catch (Throwable th) {
                e.a(th);
                packageName = "";
            }
            return (packageName + "0000000000000000000000000000").substring(0, 24);
        }
    }

    private boolean a(String str, String str2, String str3, String str4) {
        return TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3) || TextUtils.isEmpty(str4);
    }

    public void a() {
        e.b(com.alipay.sdk.m.l.a.A, "tid_str: del");
        m();
    }

    public String b() {
        String hexString = Long.toHexString(System.currentTimeMillis());
        return hexString.length() > 10 ? hexString.substring(hexString.length() - 10) : hexString;
    }

    public void a(String str, String str2) {
        e.b(com.alipay.sdk.m.l.a.A, "tid_str: save");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        this.a = str;
        this.b = str2;
        this.c = System.currentTimeMillis();
        n();
        o();
    }

    private void a(String str, String str2, String str3, String str4, Long l2) {
        if (a(str, str2, str3, str4)) {
            return;
        }
        this.a = str;
        this.b = str2;
        this.d = str3;
        this.e = str4;
        if (l2 == null) {
            this.c = System.currentTimeMillis();
        } else {
            this.c = l2.longValue();
        }
        n();
    }
}
