package com.tkay.expressad.exoplayer.d;

public final class p {
    public static final java.lang.String a = "LicenseDurationRemaining";
    public static final java.lang.String b = "PlaybackDurationRemaining";

    private p() {
            r0 = this;
            r0.<init>()
            return
    }

    private static long a(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1) {
            if (r0 == 0) goto Lf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.NumberFormatException -> Lf
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.NumberFormatException -> Lf
            if (r0 == 0) goto Lf
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.NumberFormatException -> Lf
            return r0
        Lf:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    public static android.util.Pair<java.lang.Long, java.lang.Long> a(com.tkay.expressad.exoplayer.d.f<?> r4) {
            java.util.Map r4 = r4.h()
            if (r4 != 0) goto L8
            r4 = 0
            return r4
        L8:
            android.util.Pair r0 = new android.util.Pair
            java.lang.String r1 = "LicenseDurationRemaining"
            long r1 = a(r4, r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "PlaybackDurationRemaining"
            long r2 = a(r4, r2)
            java.lang.Long r4 = java.lang.Long.valueOf(r2)
            r0.<init>(r1, r4)
            return r0
    }
}
