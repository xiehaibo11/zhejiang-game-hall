package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class b {
    private static volatile b a;
    private Context a;
    private a a;
    String a;
    private Map<String, a> a;

    public class a {
        private Context a;
        public String a;
        public String b;
        public String c;
        public String d;
        public String e;
        public String f;
        public String g;
        public String h;
        public boolean a = true;
        public boolean b = false;
        public int a = 1;

        public a(Context context) {
            this.a = context;
        }

        public static a a(Context context, String str) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                a aVar = new a(context);
                aVar.a = jSONObject.getString(com.tkay.expressad.videocommon.e.b.u);
                aVar.b = jSONObject.getString("appToken");
                aVar.c = jSONObject.getString("regId");
                aVar.d = jSONObject.getString("regSec");
                aVar.f = jSONObject.getString("devId");
                aVar.e = jSONObject.getString("vName");
                aVar.a = jSONObject.getBoolean("valid");
                aVar.b = jSONObject.getBoolean("paused");
                aVar.a = jSONObject.getInt("envType");
                aVar.g = jSONObject.getString("regResource");
                return aVar;
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a(th);
                return null;
            }
        }

        private String a() {
            Context context = this.a;
            return com.xiaomi.push.h.a(context, context.getPackageName());
        }

        public static String a(a aVar) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.videocommon.e.b.u, aVar.a);
                jSONObject.put("appToken", aVar.b);
                jSONObject.put("regId", aVar.c);
                jSONObject.put("regSec", aVar.d);
                jSONObject.put("devId", aVar.f);
                jSONObject.put("vName", aVar.e);
                jSONObject.put("valid", aVar.a);
                jSONObject.put("paused", aVar.b);
                jSONObject.put("envType", aVar.a);
                jSONObject.put("regResource", aVar.g);
                return jSONObject.toString();
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a(th);
                return null;
            }
        }

        public void a() {
            b.a(this.a).edit().clear().commit();
            this.a = null;
            this.b = null;
            this.c = null;
            this.d = null;
            this.f = null;
            this.e = null;
            this.a = false;
            this.b = false;
            this.h = null;
            this.a = 1;
        }

        public void a(int i) {
            this.a = i;
        }

        public void a(String str, String str2) {
            this.c = str;
            this.d = str2;
            this.f = com.xiaomi.push.j.j(this.a);
            this.e = a();
            this.a = true;
        }

        public void a(String str, String str2, String str3) {
            this.a = str;
            this.b = str2;
            this.g = str3;
            SharedPreferences.Editor editorEdit = b.a(this.a).edit();
            editorEdit.putString(com.tkay.expressad.videocommon.e.b.u, this.a);
            editorEdit.putString("appToken", str2);
            editorEdit.putString("regResource", str3);
            editorEdit.commit();
        }

        public void a(boolean z) {
            this.b = z;
        }

        public boolean a() {
            return a(this.a, this.b);
        }

        public boolean a(String str, String str2) {
            boolean zEquals = TextUtils.equals(this.a, str);
            boolean zEquals2 = TextUtils.equals(this.b, str2);
            boolean z = !TextUtils.isEmpty(this.c);
            boolean z2 = !TextUtils.isEmpty(this.d);
            boolean z3 = TextUtils.equals(this.f, com.xiaomi.push.j.j(this.a)) || TextUtils.equals(this.f, com.xiaomi.push.j.i(this.a));
            boolean z4 = zEquals && zEquals2 && z && z2 && z3;
            if (!z4) {
                com.xiaomi.channel.commonutils.logger.b.e(String.format("register invalid, aid=%s;atn=%s;rid=%s;rse=%s;did=%s", Boolean.valueOf(zEquals), Boolean.valueOf(zEquals2), Boolean.valueOf(z), Boolean.valueOf(z2), Boolean.valueOf(z3)));
            }
            return z4;
        }

        public void b() {
            this.a = false;
            b.a(this.a).edit().putBoolean("valid", this.a).commit();
        }

        public void b(String str, String str2, String str3) {
            this.c = str;
            this.d = str2;
            this.f = com.xiaomi.push.j.j(this.a);
            this.e = a();
            this.a = true;
            this.h = str3;
            SharedPreferences.Editor editorEdit = b.a(this.a).edit();
            editorEdit.putString("regId", str);
            editorEdit.putString("regSec", str2);
            editorEdit.putString("devId", this.f);
            editorEdit.putString("vName", a());
            editorEdit.putBoolean("valid", true);
            editorEdit.putString("appRegion", str3);
            editorEdit.commit();
        }

        public void c(String str, String str2, String str3) {
            this.a = str;
            this.b = str2;
            this.g = str3;
        }
    }

    private b(Context context) {
        this.a = context;
        c();
    }

    public static SharedPreferences a(Context context) {
        return context.getSharedPreferences("mipush", 0);
    }

    public static b a(Context context) {
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b(context);
                }
            }
        }
        return a;
    }

    private void c() {
        this.a = new a(this.a);
        this.a = new HashMap();
        SharedPreferences sharedPreferencesA = a(this.a);
        this.a.a = sharedPreferencesA.getString(com.tkay.expressad.videocommon.e.b.u, null);
        this.a.b = sharedPreferencesA.getString("appToken", null);
        this.a.c = sharedPreferencesA.getString("regId", null);
        this.a.d = sharedPreferencesA.getString("regSec", null);
        this.a.f = sharedPreferencesA.getString("devId", null);
        if (!TextUtils.isEmpty(this.a.f) && com.xiaomi.push.j.a(this.a.f)) {
            this.a.f = com.xiaomi.push.j.j(this.a);
            sharedPreferencesA.edit().putString("devId", this.a.f).commit();
        }
        this.a.e = sharedPreferencesA.getString("vName", null);
        this.a.a = sharedPreferencesA.getBoolean("valid", true);
        this.a.b = sharedPreferencesA.getBoolean("paused", false);
        this.a.a = sharedPreferencesA.getInt("envType", 1);
        this.a.g = sharedPreferencesA.getString("regResource", null);
        this.a.h = sharedPreferencesA.getString("appRegion", null);
    }

    public int a() {
        return this.a.a;
    }

    public a a(String str) {
        if (this.a.containsKey(str)) {
            return this.a.get(str);
        }
        String str2 = "hybrid_app_info_" + str;
        SharedPreferences sharedPreferencesA = a(this.a);
        if (!sharedPreferencesA.contains(str2)) {
            return null;
        }
        a aVarA = a.a(this.a, sharedPreferencesA.getString(str2, ""));
        this.a.put(str2, aVarA);
        return aVarA;
    }

    public String a() {
        return this.a.a;
    }

    public void a() {
        this.a.a();
    }

    public void a(int i) {
        this.a.a(i);
        a(this.a).edit().putInt("envType", i).commit();
    }

    public void a(String str) {
        SharedPreferences.Editor editorEdit = a(this.a).edit();
        editorEdit.putString("vName", str);
        editorEdit.commit();
        this.a.e = str;
    }

    public void a(String str, a aVar) {
        this.a.put(str, aVar);
        a(this.a).edit().putString("hybrid_app_info_" + str, a.a(aVar)).commit();
    }

    public void a(String str, String str2, String str3) {
        this.a.a(str, str2, str3);
    }

    public void a(boolean z) {
        this.a.a(z);
        a(this.a).edit().putBoolean("paused", z).commit();
    }

    public boolean a() {
        Context context = this.a;
        return !TextUtils.equals(com.xiaomi.push.h.a(context, context.getPackageName()), this.a.e);
    }

    public boolean a(String str, String str2) {
        return this.a.a(str, str2);
    }

    public boolean a(String str, String str2, String str3) {
        a aVarA = a(str3);
        return aVarA != null && TextUtils.equals(str, aVarA.a) && TextUtils.equals(str2, aVarA.b);
    }

    public String b() {
        return this.a.b;
    }

    public void b() {
        this.a.b();
    }

    public void b(String str) {
        this.a.remove(str);
        a(this.a).edit().remove("hybrid_app_info_" + str).commit();
    }

    public void b(String str, String str2, String str3) {
        this.a.b(str, str2, str3);
    }

    public boolean b() {
        if (this.a.a()) {
            return true;
        }
        com.xiaomi.channel.commonutils.logger.b.a("Don't send message before initialization succeeded!");
        return false;
    }

    public String c() {
        return this.a.c;
    }

    public boolean c() {
        return this.a.a();
    }

    public String d() {
        return this.a.d;
    }

    public boolean d() {
        return (TextUtils.isEmpty(this.a.a) || TextUtils.isEmpty(this.a.b) || TextUtils.isEmpty(this.a.c) || TextUtils.isEmpty(this.a.d)) ? false : true;
    }

    public String e() {
        return this.a.g;
    }

    public boolean e() {
        return this.a.b;
    }

    public String f() {
        return this.a.h;
    }

    public boolean f() {
        return !this.a.a;
    }
}
