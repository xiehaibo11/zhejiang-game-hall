package com.kwad.sdk.core.report;

public final class x {
    private static android.content.Context PG;
    private static java.lang.String asD;
    private static long asE;

    static {
            java.lang.String r0 = Co()
            com.kwad.sdk.core.report.x.asD = r0
            r0 = 0
            com.kwad.sdk.core.report.x.asE = r0
            return
    }

    public static java.lang.String Ck() {
            java.lang.String r0 = "ReportIdManager"
            java.lang.String r1 = ">> updateSessionId"
            com.kwad.sdk.core.e.c.d(r0, r1)
            java.lang.String r0 = Co()
            com.kwad.sdk.core.report.x.asD = r0
            return r0
    }

    public static java.lang.String Cl() {
            java.lang.String r0 = com.kwad.sdk.core.report.x.asD
            return r0
    }

    public static long Cm() {
            android.content.Context r0 = com.kwad.sdk.core.report.x.PG
            long r0 = be(r0)
            android.content.Context r2 = com.kwad.sdk.core.report.x.PG
            r3 = 1
            long r3 = r3 + r0
            b(r2, r3)
            return r0
    }

    public static long Cn() {
            long r0 = com.kwad.sdk.core.report.x.asE
            return r0
    }

    private static java.lang.String Co() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static boolean b(android.content.Context r2, long r3) {
            r0 = 0
            if (r2 == 0) goto L17
            java.lang.String r1 = "ksadsdk_seq"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = "seq"
            r2.putLong(r0, r3)
            boolean r2 = r2.commit()
            return r2
        L17:
            return r0
    }

    private static long be(android.content.Context r3) {
            if (r3 == 0) goto L14
            r0 = 0
            java.lang.String r1 = "ksadsdk_seq"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            if (r3 == 0) goto L14
            r0 = 1
            java.lang.String r2 = "seq"
            long r0 = r3.getLong(r2, r0)
            goto L16
        L14:
            r0 = 0
        L16:
            return r0
    }

    public static void init(android.content.Context r0) {
            com.kwad.sdk.core.report.x.PG = r0
            return
    }
}
