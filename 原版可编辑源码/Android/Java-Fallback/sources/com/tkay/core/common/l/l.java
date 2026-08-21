package com.tkay.core.common.l;

public final class l {
    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1) {
            com.tkay.core.basead.ui.web.WebLandPageActivity.a(r0, r1)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public static void a(java.lang.String r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "android.intent.action.VIEW"
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L1f
            r2 = 268468224(0x10008000, float:2.5342157E-29)
            r0.addFlags(r2)     // Catch: java.lang.Throwable -> L1f
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1f
            if (r2 == 0) goto L1e
            r2.startActivity(r0)     // Catch: java.lang.Throwable -> L1f
        L1e:
            return
        L1f:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}
