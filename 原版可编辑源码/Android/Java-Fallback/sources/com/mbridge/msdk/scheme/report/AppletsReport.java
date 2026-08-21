package com.mbridge.msdk.scheme.report;

public class AppletsReport {
    public static final java.lang.String APPLETS_API_VALUE = "2000118";
    private static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.mbridge.msdk.scheme.report.AppletsReport> r0 = com.mbridge.msdk.scheme.report.AppletsReport.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.scheme.report.AppletsReport.TAG = r0
            return
    }

    public AppletsReport() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = com.mbridge.msdk.scheme.report.AppletsReport.TAG
            return r0
    }

    public static void reportAppletsLoadState(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto Lda
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Ld6
            if (r1 != 0) goto Lda
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Ld6
            if (r1 != 0) goto Lda
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Ld6
            r1.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = "key=2000118&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Ld6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            r2.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld6
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r0)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Ld6
            r1.append(r2)     // Catch: java.lang.Throwable -> Ld6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            r2.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r6)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r0)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Ld6
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Ld6
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Ld6
            if (r6 != 0) goto L6d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            r6.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = "b="
            r6.append(r2)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> Ld6
            r6.append(r2)     // Catch: java.lang.Throwable -> Ld6
            r6.append(r0)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Ld6
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld6
        L6d:
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Ld6
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Ld6
            if (r6 != 0) goto L8e
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            r6.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = "c="
            r6.append(r2)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> Ld6
            r6.append(r2)     // Catch: java.lang.Throwable -> Ld6
            r6.append(r0)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Ld6
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld6
        L8e:
            java.lang.String r6 = "hb=0&"
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld6
            boolean r6 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Ld6
            if (r6 != 0) goto La4
            java.lang.String r6 = "rid_n="
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld6
            r1.append(r7)     // Catch: java.lang.Throwable -> Ld6
            r1.append(r0)     // Catch: java.lang.Throwable -> Ld6
        La4:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            r6.<init>()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r7 = "reason="
            r6.append(r7)     // Catch: java.lang.Throwable -> Ld6
            r6.append(r5)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> Ld6
            r1.append(r5)     // Catch: java.lang.Throwable -> Ld6
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Ld6
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> Ld6
            if (r5 == 0) goto Lce
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Ld6
            r4.a(r5)     // Catch: java.lang.Throwable -> Ld6
            goto Lda
        Lce:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Ld6
            reportLoadData(r4, r5)     // Catch: java.lang.Throwable -> Ld6
            goto Lda
        Ld6:
            r4 = move-exception
            r4.printStackTrace()
        Lda:
            return
    }

    private static void reportLoadData(android.content.Context r3, java.lang.String r4) {
            if (r3 == 0) goto L2e
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L21
            r0.<init>(r3)     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.net.g.d r3 = com.mbridge.msdk.foundation.same.report.e.a(r4, r3)     // Catch: java.lang.Exception -> L21
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.scheme.report.AppletsReport$1 r2 = new com.mbridge.msdk.scheme.report.AppletsReport$1     // Catch: java.lang.Exception -> L21
            r2.<init>()     // Catch: java.lang.Exception -> L21
            r0.post(r4, r1, r3, r2)     // Catch: java.lang.Exception -> L21
            goto L2e
        L21:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.scheme.report.AppletsReport.TAG
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L2e:
            return
    }
}
