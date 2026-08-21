package com.kwad.sdk.crash.utils;

public final class e {
    private static android.content.Context PG;

    public static long Cm() {
            android.content.Context r0 = com.kwad.sdk.crash.utils.e.PG
            long r0 = be(r0)
            android.content.Context r2 = com.kwad.sdk.crash.utils.e.PG
            r3 = 1
            long r3 = r3 + r0
            b(r2, r3)
            return r0
    }

    private static boolean b(android.content.Context r2, long r3) {
            r0 = 0
            if (r2 == 0) goto L17
            java.lang.String r1 = "ksadsdk_crashseq"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = "crashseq"
            r2.putLong(r0, r3)
            boolean r2 = r2.commit()
            return r2
        L17:
            return r0
    }

    private static long be(android.content.Context r3) {
            if (r3 == 0) goto L14
            r0 = 0
            java.lang.String r1 = "ksadsdk_crashseq"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            if (r3 == 0) goto L14
            r0 = 1
            java.lang.String r2 = "crashseq"
            long r0 = r3.getLong(r2, r0)
            goto L16
        L14:
            r0 = 0
        L16:
            return r0
    }

    public static void init(android.content.Context r0) {
            com.kwad.sdk.crash.utils.e.PG = r0
            return
    }
}
