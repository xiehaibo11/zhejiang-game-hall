package com.alipay.sdk.m.c;

public class a {
    public static final java.lang.String a = "ro.build.version.emui";
    public static final java.lang.String b = "hw_sc.build.platform.version";

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.b.b a(android.content.Context r3) {
            java.lang.String r3 = android.os.Build.BRAND
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "Brand"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r3
            java.lang.String r1 = "Device"
            com.alipay.sdk.m.d.a.b(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L1a
            return r1
        L1a:
            java.lang.String r0 = "huawei"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le8
            java.lang.String r0 = "honor"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le8
            java.lang.String r0 = "华为"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L34
            goto Le8
        L34:
            java.lang.String r0 = "xiaomi"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le2
            java.lang.String r0 = "redmi"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le2
            java.lang.String r0 = "meitu"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le2
            java.lang.String r0 = "小米"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Le2
            java.lang.String r0 = "blackshark"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L5e
            goto Le2
        L5e:
            java.lang.String r0 = "vivo"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L6c
            com.alipay.sdk.m.c.h r3 = new com.alipay.sdk.m.c.h
            r3.<init>()
            return r3
        L6c:
            java.lang.String r0 = "oppo"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Ldc
            java.lang.String r0 = "oneplus"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Ldc
            java.lang.String r0 = "realme"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L85
            goto Ldc
        L85:
            java.lang.String r0 = "lenovo"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Ld6
            java.lang.String r0 = "zuk"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L96
            goto Ld6
        L96:
            java.lang.String r0 = "nubia"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto La4
            com.alipay.sdk.m.c.e r3 = new com.alipay.sdk.m.c.e
            r3.<init>()
            return r3
        La4:
            java.lang.String r0 = "samsung"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto Lb2
            com.alipay.sdk.m.c.g r3 = new com.alipay.sdk.m.c.g
            r3.<init>()
            return r3
        Lb2:
            boolean r0 = a()
            if (r0 == 0) goto Lbe
            com.alipay.sdk.m.c.b r3 = new com.alipay.sdk.m.c.b
            r3.<init>()
            return r3
        Lbe:
            java.lang.String r0 = "meizu"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto Ld0
            java.lang.String r0 = "mblu"
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto Lcf
            goto Ld0
        Lcf:
            return r1
        Ld0:
            com.alipay.sdk.m.c.d r3 = new com.alipay.sdk.m.c.d
            r3.<init>()
            return r3
        Ld6:
            com.alipay.sdk.m.c.c r3 = new com.alipay.sdk.m.c.c
            r3.<init>()
            return r3
        Ldc:
            com.alipay.sdk.m.c.f r3 = new com.alipay.sdk.m.c.f
            r3.<init>()
            return r3
        Le2:
            com.alipay.sdk.m.c.i r3 = new com.alipay.sdk.m.c.i
            r3.<init>()
            return r3
        Le8:
            com.alipay.sdk.m.c.b r3 = new com.alipay.sdk.m.c.b
            r3.<init>()
            return r3
    }

    public static java.lang.String a(java.lang.String r6) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L20
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L20
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L20
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L20
            r2[r5] = r6     // Catch: java.lang.Throwable -> L20
            java.lang.Object r6 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L20
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L20
            goto L22
        L20:
            java.lang.String r6 = ""
        L22:
            return r6
    }

    public static boolean a() {
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r0 = a(r0)
            java.lang.String r1 = "hw_sc.build.platform.version"
            java.lang.String r1 = a(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L19
            goto L1b
        L19:
            r0 = 0
            return r0
        L1b:
            r0 = 1
            return r0
    }
}
