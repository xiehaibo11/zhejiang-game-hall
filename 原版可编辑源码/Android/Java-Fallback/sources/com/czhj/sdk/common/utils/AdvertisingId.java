package com.czhj.sdk.common.utils;

public class AdvertisingId implements java.io.Serializable {
    private static final long c = 86400000;
    final java.util.Calendar a;
    final java.lang.String b;
    public final java.lang.String mAdvertisingId;
    public final boolean mDoNotTrack;

    AdvertisingId(java.lang.String r1, java.lang.String r2, boolean r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.mAdvertisingId = r1
            r0.b = r2
            r0.mDoNotTrack = r3
            java.util.Calendar r1 = java.util.Calendar.getInstance()
            r0.a = r1
            r1.setTimeInMillis(r4)
            return
    }

    static java.lang.String a() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static com.czhj.sdk.common.utils.AdvertisingId generateExpiredAdvertisingId() {
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            java.lang.String r3 = a()
            com.czhj.sdk.common.utils.AdvertisingId r7 = new com.czhj.sdk.common.utils.AdvertisingId
            long r0 = r0.getTimeInMillis()
            r4 = 86400000(0x5265c00, double:4.2687272E-316)
            long r0 = r0 - r4
            r4 = 1
            long r5 = r0 - r4
            r2 = 0
            r4 = 0
            r1 = r7
            r1.<init>(r2, r3, r4, r5)
            return r7
    }

    boolean b() {
            r4 = this;
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            long r0 = r0.getTimeInMillis()
            java.util.Calendar r2 = r4.a
            long r2 = r2.getTimeInMillis()
            long r0 = r0 - r2
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r4 != r5) goto L8
            return r1
        L8:
            boolean r2 = r5 instanceof com.czhj.sdk.common.utils.AdvertisingId
            if (r2 != 0) goto Ld
            return r0
        Ld:
            com.czhj.sdk.common.utils.AdvertisingId r5 = (com.czhj.sdk.common.utils.AdvertisingId) r5
            boolean r2 = r4.mDoNotTrack
            boolean r3 = r5.mDoNotTrack
            if (r2 != r3) goto L2a
            java.lang.String r2 = r4.mAdvertisingId
            java.lang.String r3 = r5.mAdvertisingId
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L2a
            java.lang.String r2 = r4.b
            java.lang.String r5 = r5.b
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L2a
            r0 = r1
        L2a:
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.mAdvertisingId
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = r2.b
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 31
            boolean r1 = r2.mDoNotTrack
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AdvertisingId{mLastRotation="
            r0.append(r1)
            java.util.Calendar r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", mAdvertisingId='"
            r0.append(r1)
            java.lang.String r1 = r3.mAdvertisingId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mSigmobId='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", mDoNotTrack="
            r0.append(r1)
            boolean r1 = r3.mDoNotTrack
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
