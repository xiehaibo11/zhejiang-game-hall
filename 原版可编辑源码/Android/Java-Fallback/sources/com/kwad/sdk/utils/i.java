package com.kwad.sdk.utils;

public final class i {
    public static void am(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            java.lang.String r2 = "callbackLog"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            r0.append(r3)
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            am(r1, r2)
            return
    }

    public static void o(java.lang.String r1, int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_type_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "_time_"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            java.lang.String r2 = "audioVideoLog"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return
    }
}
