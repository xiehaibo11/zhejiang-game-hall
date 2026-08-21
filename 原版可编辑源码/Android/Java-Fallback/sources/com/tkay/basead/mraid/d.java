package com.tkay.basead.mraid;

public class d {
    public static java.lang.String a;


    public interface a {
        void a();

        void a(com.tkay.basead.c.e r1);
    }

    static {
            java.lang.Class<com.tkay.basead.mraid.d> r0 = com.tkay.basead.mraid.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.mraid.d.a = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3) {
            java.lang.String r0 = r3.i()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r2 = r3.i()
            goto L6d
        Lf:
            java.lang.String r0 = r3.h()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6b
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            java.io.File r0 = r0.b(r2, r3)
            if (r0 == 0) goto L4f
            java.lang.String r2 = com.tkay.basead.mraid.d.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r1 = "loadMraidResource: html exists: "
            r3.<init>(r1)
            java.net.URI r1 = r0.toURI()
            java.lang.String r1 = r1.toString()
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            java.net.URI r2 = r0.toURI()
            java.lang.String r2 = r2.toString()
            goto L6d
        L4f:
            java.lang.String r0 = com.tkay.basead.mraid.d.a
            java.lang.String r1 = "loadMraidResource: html no exists: "
            android.util.Log.e(r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            java.lang.String r1 = r3.h()
            java.lang.String r2 = r0.a(r1, r2, r3)
            goto L6d
        L6b:
            java.lang.String r2 = ""
        L6d:
            return r2
    }

    public static void a(java.lang.String r2, java.lang.String r3, com.tkay.basead.mraid.MraidWebView r4, com.tkay.basead.mraid.d.a r5) {
            if (r4 != 0) goto L3
            return
        L3:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.mraid.d$1 r1 = new com.tkay.basead.mraid.d$1
            r1.<init>(r3, r5, r4, r2)
            r0.a(r1)
            return
    }
}
