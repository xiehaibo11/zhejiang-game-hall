package com.igexin.push.extension.distribution.basic.d;

public class a {
    public static com.igexin.push.extension.distribution.basic.d.a a;
    private android.content.SharedPreferences b;

    private a() {
            r3 = this;
            r3.<init>()
            android.content.Context r0 = com.igexin.push.extension.distribution.basic.c.e.a
            java.lang.String r1 = "gx_sp"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            r3.b = r0
            return
    }

    public static com.igexin.push.extension.distribution.basic.d.a a() {
            com.igexin.push.extension.distribution.basic.d.a r0 = com.igexin.push.extension.distribution.basic.d.a.a
            if (r0 != 0) goto Lb
            com.igexin.push.extension.distribution.basic.d.a r0 = new com.igexin.push.extension.distribution.basic.d.a
            r0.<init>()
            com.igexin.push.extension.distribution.basic.d.a.a = r0
        Lb:
            com.igexin.push.extension.distribution.basic.d.a r0 = com.igexin.push.extension.distribution.basic.d.a.a
            return r0
    }

    public static java.lang.String b() {
            android.content.Context r0 = com.igexin.push.extension.distribution.basic.c.e.a
            java.lang.String r1 = "getui_sp"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "us"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            return r0
    }

    public static java.lang.String c() {
            android.content.Context r0 = com.igexin.push.extension.distribution.basic.c.e.a
            java.lang.String r1 = "getui_sp"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "uis"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            return r0
    }
}
