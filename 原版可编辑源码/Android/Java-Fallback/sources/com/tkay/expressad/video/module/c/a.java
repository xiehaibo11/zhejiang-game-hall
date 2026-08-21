package com.tkay.expressad.video.module.c;

public final class a extends com.tkay.expressad.foundation.g.f.h.a {
    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void a(java.lang.String r2, com.tkay.expressad.foundation.g.f.h.b r3) {
            r1 = this;
            super.a(r2, r3)
            java.lang.String r2 = "platform"
            java.lang.String r0 = "1"
            r3.a(r2, r0)
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "os_version"
            r3.a(r0, r2)
            android.content.Context r2 = r1.a
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.h(r2)
            java.lang.String r0 = "package_name"
            r3.a(r0, r2)
            android.content.Context r2 = r1.a
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.d(r2)
            java.lang.String r0 = "app_version_name"
            r3.a(r0, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r0 = r1.a
            int r0 = com.tkay.expressad.foundation.h.k.c(r0)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "app_version_code"
            r3.a(r0, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r0 = r1.a
            int r0 = com.tkay.expressad.foundation.h.k.b(r0)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "orientation"
            r3.a(r0, r2)
            java.lang.String r2 = "gaid"
            java.lang.String r0 = ""
            r3.a(r2, r0)
            java.lang.String r2 = com.tkay.expressad.out.n.a
            java.lang.String r0 = "sdk_version"
            r3.a(r0, r2)
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            r2.e()
            com.tkay.expressad.d.a r2 = com.tkay.expressad.d.b.b()
            if (r2 == 0) goto L9a
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L96
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L96
            if (r0 != 0) goto L95
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L96
            java.lang.String r2 = com.tkay.expressad.foundation.h.j.a(r2)     // Catch: java.lang.Exception -> L96
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L96
            if (r0 != 0) goto L95
            java.lang.String r0 = "dvi"
            r3.a(r0, r2)     // Catch: java.lang.Exception -> L96
        L95:
            return
        L96:
            r2 = move-exception
            r2.printStackTrace()
        L9a:
            return
    }
}
