package com.tkay.expressad.foundation.h;

public final class i {
    public static final java.lang.String a = "layout";
    public static final java.lang.String b = "id";
    public static final java.lang.String c = "drawable";
    public static final java.lang.String d = "color";
    public static final java.lang.String e = "style";
    public static final java.lang.String f = "anim";
    public static final java.lang.String g = "string";
    public static final int h = -1;
    private static final java.lang.String i = "ResourceUtil";

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r0 = -1
            java.lang.String r1 = ""
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = r2.a()     // Catch: java.lang.Exception -> Lb
        Lb:
            boolean r2 = com.tkay.expressad.foundation.h.w.a(r1)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L17
            if (r3 == 0) goto L17
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L29
        L17:
            boolean r2 = com.tkay.expressad.foundation.h.w.a(r1)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L1e
            return r0
        L1e:
            if (r3 == 0) goto L29
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L29
            int r3 = r3.getIdentifier(r4, r5, r1)     // Catch: java.lang.Exception -> L29
            return r3
        L29:
            return r0
    }

    public static android.content.res.Resources a(android.content.Context r3) {
            r0 = 0
            if (r3 == 0) goto L17
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L8
            return r3
        L8:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Resource error:"
            r1.<init>(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
        L17:
            return r0
    }
}
