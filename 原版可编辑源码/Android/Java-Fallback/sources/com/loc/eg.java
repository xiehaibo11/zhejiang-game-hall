package com.loc;

public final class eg {
    public long a;
    public java.lang.String b;
    public int c;
    public int d;
    public long e;
    public long f;
    public short g;
    public boolean h;

    public eg(boolean r3) {
            r2 = this;
            r2.<init>()
            r0 = -113(0xffffffffffffff8f, float:NaN)
            r2.c = r0
            r0 = 0
            r2.f = r0
            r2.h = r3
            return
    }

    public static long a(java.lang.String r15) {
            r0 = 0
            if (r15 == 0) goto L60
            int r2 = r15.length()
            if (r2 != 0) goto Lb
            goto L60
        Lb:
            r2 = 0
            int r3 = r15.length()
            int r3 = r3 + (-1)
            r4 = r0
        L13:
            if (r3 < 0) goto L5a
            char r6 = r15.charAt(r3)
            long r6 = (long) r6
            r8 = 48
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 < 0) goto L2c
            r10 = 57
            int r12 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r12 > 0) goto L2c
            long r6 = r6 - r8
        L27:
            long r6 = r6 << r2
            long r4 = r4 + r6
            int r2 = r2 + 4
            goto L57
        L2c:
            r8 = 10
            r10 = 97
            int r12 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r12 < 0) goto L3d
            r12 = 102(0x66, double:5.04E-322)
            int r14 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r14 > 0) goto L3d
        L3a:
            long r6 = r6 - r10
            long r6 = r6 + r8
            goto L27
        L3d:
            r10 = 65
            int r12 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r12 < 0) goto L4a
            r12 = 70
            int r14 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r14 > 0) goto L4a
            goto L3a
        L4a:
            r8 = 58
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 == 0) goto L57
            r8 = 124(0x7c, double:6.13E-322)
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 == 0) goto L57
            return r0
        L57:
            int r3 = r3 + (-1)
            goto L13
        L5a:
            r15 = 48
            if (r2 == r15) goto L5f
            return r0
        L5f:
            return r4
        L60:
            return r0
    }

    public static java.lang.String a(long r3) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 < 0) goto L1b
            r0 = 281474976710655(0xffffffffffff, double:1.390671161566996E-309)
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 <= 0) goto L10
            goto L1b
        L10:
            byte[] r3 = com.loc.eo.a(r3)
            java.lang.String r4 = ":"
            java.lang.String r3 = com.loc.eo.a(r3, r4)
            return r3
        L1b:
            r3 = 0
            return r3
    }

    private com.loc.eg b() {
            r3 = this;
            com.loc.eg r0 = new com.loc.eg
            boolean r1 = r3.h
            r0.<init>(r1)
            long r1 = r3.a
            r0.a = r1
            java.lang.String r1 = r3.b
            r0.b = r1
            int r1 = r3.c
            r0.c = r1
            int r1 = r3.d
            r0.d = r1
            long r1 = r3.e
            r0.e = r1
            long r1 = r3.f
            r0.f = r1
            short r1 = r3.g
            r0.g = r1
            boolean r1 = r3.h
            r0.h = r1
            return r0
    }

    public final java.lang.String a() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r3.h
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            long r1 = r3.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.loc.eg r0 = r1.b()
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AmapWifi{mac="
            r0.<init>(r1)
            long r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", ssid='"
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", rssi="
            r0.append(r1)
            int r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", frequency="
            r0.append(r1)
            int r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = ", timestamp="
            r0.append(r1)
            long r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = ", lastUpdateUtcMills="
            r0.append(r1)
            long r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = ", freshness="
            r0.append(r1)
            short r1 = r3.g
            r0.append(r1)
            java.lang.String r1 = ", connected="
            r0.append(r1)
            boolean r1 = r3.h
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
