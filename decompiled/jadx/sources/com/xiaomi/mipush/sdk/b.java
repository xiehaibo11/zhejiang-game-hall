package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f8005a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f82a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private a f83a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    String f84a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<String, a> f85a;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private Context f86a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public String f87a;
        public String b;
        public String c;
        public String d;
        public String e;
        public String f;
        public String g;
        public String h;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public boolean f88a = true;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        public boolean f89b = false;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f8006a = 1;

        public a(Context context) {
            this.f86a = context;
        }

        public static a a(Context context, String str) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                a aVar = new a(context);
                aVar.f87a = jSONObject.getString(com.tkay.expressad.videocommon.e.b.u);
                aVar.b = jSONObject.getString("appToken");
                aVar.c = jSONObject.getString("regId");
                aVar.d = jSONObject.getString("regSec");
                aVar.f = jSONObject.getString("devId");
                aVar.e = jSONObject.getString("vName");
                aVar.f88a = jSONObject.getBoolean("valid");
                aVar.f89b = jSONObject.getBoolean("paused");
                aVar.f8006a = jSONObject.getInt("envType");
                aVar.g = jSONObject.getString("regResource");
                return aVar;
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a(th);
                return null;
            }
        }

        private String a() {
            Context context = this.f86a;
            return com.xiaomi.push.h.m397a(context, context.getPackageName());
        }

        public static String a(a aVar) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.videocommon.e.b.u, aVar.f87a);
                jSONObject.put("appToken", aVar.b);
                jSONObject.put("regId", aVar.c);
                jSONObject.put("regSec", aVar.d);
                jSONObject.put("devId", aVar.f);
                jSONObject.put("vName", aVar.e);
                jSONObject.put("valid", aVar.f88a);
                jSONObject.put("paused", aVar.f89b);
                jSONObject.put("envType", aVar.f8006a);
                jSONObject.put("regResource", aVar.g);
                return jSONObject.toString();
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a(th);
                return null;
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public void m98a() {
            b.a(this.f86a).edit().clear().commit();
            this.f87a = null;
            this.b = null;
            this.c = null;
            this.d = null;
            this.f = null;
            this.e = null;
            this.f88a = false;
            this.f89b = false;
            this.h = null;
            this.f8006a = 1;
        }

        public void a(int i) {
            this.f8006a = i;
        }

        public void a(String str, String str2) {
            this.c = str;
            this.d = str2;
            this.f = com.xiaomi.push.j.j(this.f86a);
            this.e = a();
            this.f88a = true;
        }

        public void a(String str, String str2, String str3) {
            this.f87a = str;
            this.b = str2;
            this.g = str3;
            SharedPreferences.Editor editorEdit = b.a(this.f86a).edit();
            editorEdit.putString(com.tkay.expressad.videocommon.e.b.u, this.f87a);
            editorEdit.putString("appToken", str2);
            editorEdit.putString("regResource", str3);
            editorEdit.commit();
        }

        public void a(boolean z) {
            this.f89b = z;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m99a() {
            return m100a(this.f87a, this.b);
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m100a(String str, String str2) {
            boolean zEquals = TextUtils.equals(this.f87a, str);
            boolean zEquals2 = TextUtils.equals(this.b, str2);
            boolean z = !TextUtils.isEmpty(this.c);
            boolean z2 = !TextUtils.isEmpty(this.d);
            boolean z3 = TextUtils.equals(this.f, com.xiaomi.push.j.j(this.f86a)) || TextUtils.equals(this.f, com.xiaomi.push.j.i(this.f86a));
            boolean z4 = zEquals && zEquals2 && z && z2 && z3;
            if (!z4) {
                com.xiaomi.channel.commonutils.logger.b.e(String.format("register invalid, aid=%s;atn=%s;rid=%s;rse=%s;did=%s", Boolean.valueOf(zEquals), Boolean.valueOf(zEquals2), Boolean.valueOf(z), Boolean.valueOf(z2), Boolean.valueOf(z3)));
            }
            return z4;
        }

        public void b() {
            this.f88a = false;
            b.a(this.f86a).edit().putBoolean("valid", this.f88a).commit();
        }

        public void b(String str, String str2, String str3) {
            this.c = str;
            this.d = str2;
            this.f = com.xiaomi.push.j.j(this.f86a);
            this.e = a();
            this.f88a = true;
            this.h = str3;
            SharedPreferences.Editor editorEdit = b.a(this.f86a).edit();
            editorEdit.putString("regId", str);
            editorEdit.putString("regSec", str2);
            editorEdit.putString("devId", this.f);
            editorEdit.putString("vName", a());
            editorEdit.putBoolean("valid", true);
            editorEdit.putString("appRegion", str3);
            editorEdit.commit();
        }

        public void c(String str, String str2, String str3) {
            this.f87a = str;
            this.b = str2;
            this.g = str3;
        }
    }

    private b(Context context) {
        this.f82a = context;
        c();
    }

    public static SharedPreferences a(Context context) {
        return context.getSharedPreferences("mipush", 0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static b m85a(Context context) {
        if (f8005a == null) {
            synchronized (b.class) {
                if (f8005a == null) {
                    f8005a = new b(context);
                }
            }
        }
        return f8005a;
    }

    private void c() {
        this.f83a = new a(this.f82a);
        this.f85a = new HashMap();
        SharedPreferences sharedPreferencesA = a(this.f82a);
        this.f83a.f87a = sharedPreferencesA.getString(com.tkay.expressad.videocommon.e.b.u, null);
        this.f83a.b = sharedPreferencesA.getString("appToken", null);
        this.f83a.c = sharedPreferencesA.getString("regId", null);
        this.f83a.d = sharedPreferencesA.getString("regSec", null);
        this.f83a.f = sharedPreferencesA.getString("devId", null);
        if (!TextUtils.isEmpty(this.f83a.f) && com.xiaomi.push.j.a(this.f83a.f)) {
            this.f83a.f = com.xiaomi.push.j.j(this.f82a);
            sharedPreferencesA.edit().putString("devId", this.f83a.f).commit();
        }
        this.f83a.e = sharedPreferencesA.getString("vName", null);
        this.f83a.f88a = sharedPreferencesA.getBoolean("valid", true);
        this.f83a.f89b = sharedPreferencesA.getBoolean("paused", false);
        this.f83a.f8006a = sharedPreferencesA.getInt("envType", 1);
        this.f83a.g = sharedPreferencesA.getString("regResource", null);
        this.f83a.h = sharedPreferencesA.getString("appRegion", null);
    }

    public int a() {
        return this.f83a.f8006a;
    }

    public a a(String str) {
        if (this.f85a.containsKey(str)) {
            return this.f85a.get(str);
        }
        String str2 = "hybrid_app_info_" + str;
        SharedPreferences sharedPreferencesA = a(this.f82a);
        if (!sharedPreferencesA.contains(str2)) {
            return null;
        }
        a aVarA = a.a(this.f82a, sharedPreferencesA.getString(str2, ""));
        this.f85a.put(str2, aVarA);
        return aVarA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m86a() {
        return this.f83a.f87a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m87a() {
        this.f83a.m98a();
    }

    public void a(int i) {
        this.f83a.a(i);
        a(this.f82a).edit().putInt("envType", i).commit();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m88a(String str) {
        SharedPreferences.Editor editorEdit = a(this.f82a).edit();
        editorEdit.putString("vName", str);
        editorEdit.commit();
        this.f83a.e = str;
    }

    public void a(String str, a aVar) {
        this.f85a.put(str, aVar);
        a(this.f82a).edit().putString("hybrid_app_info_" + str, a.a(aVar)).commit();
    }

    public void a(String str, String str2, String str3) {
        this.f83a.a(str, str2, str3);
    }

    public void a(boolean z) {
        this.f83a.a(z);
        a(this.f82a).edit().putBoolean("paused", z).commit();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m89a() {
        Context context = this.f82a;
        return !TextUtils.equals(com.xiaomi.push.h.m397a(context, context.getPackageName()), this.f83a.e);
    }

    public boolean a(String str, String str2) {
        return this.f83a.m100a(str, str2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m90a(String str, String str2, String str3) {
        a aVarA = a(str3);
        return aVarA != null && TextUtils.equals(str, aVarA.f87a) && TextUtils.equals(str2, aVarA.b);
    }

    public String b() {
        return this.f83a.b;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m91b() {
        this.f83a.b();
    }

    public void b(String str) {
        this.f85a.remove(str);
        a(this.f82a).edit().remove("hybrid_app_info_" + str).commit();
    }

    public void b(String str, String str2, String str3) {
        this.f83a.b(str, str2, str3);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m92b() {
        if (this.f83a.m99a()) {
            return true;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("Don't send message before initialization succeeded!");
        return false;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public String m93c() {
        return this.f83a.c;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m94c() {
        return this.f83a.m99a();
    }

    public String d() {
        return this.f83a.d;
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public boolean m95d() {
        return (TextUtils.isEmpty(this.f83a.f87a) || TextUtils.isEmpty(this.f83a.b) || TextUtils.isEmpty(this.f83a.c) || TextUtils.isEmpty(this.f83a.d)) ? false : true;
    }

    public String e() {
        return this.f83a.g;
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public boolean m96e() {
        return this.f83a.f89b;
    }

    public String f() {
        return this.f83a.h;
    }

    /* JADX INFO: renamed from: f, reason: collision with other method in class */
    public boolean m97f() {
        return !this.f83a.f88a;
    }
}
