package com.mbridge.msdk.foundation.same.f;

public final class a implements java.lang.Runnable {
    private java.lang.String a;
    private java.lang.String b;


    public a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public final void run() {
            r6 = this;
            java.lang.String r0 = "ReportTask"
            java.lang.String r1 = "start report"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L34
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L34
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L34
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L34
            java.lang.String r4 = r6.b     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.same.net.g.d r2 = com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L34
            r3 = 0
            com.mbridge.msdk.foundation.same.net.f.d r4 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L34
            java.lang.String r4 = r4.a     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.same.f.a$1 r5 = new com.mbridge.msdk.foundation.same.f.a$1     // Catch: java.lang.Throwable -> L34
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L34
            r1.post(r3, r4, r2, r5)     // Catch: java.lang.Throwable -> L34
            goto L3c
        L34:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L3c:
            return
    }
}
