package com.tencent.open.log;

public final class g {
    public static final com.tencent.open.log.g a = null;

    static {
            com.tencent.open.log.g r0 = new com.tencent.open.log.g
            r0.<init>()
            com.tencent.open.log.g.a = r0
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String a(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L27
            r0 = 2
            if (r2 == r0) goto L24
            r0 = 4
            if (r2 == r0) goto L21
            r0 = 8
            if (r2 == r0) goto L1e
            r0 = 16
            if (r2 == r0) goto L1b
            r0 = 32
            if (r2 == r0) goto L18
            java.lang.String r2 = "-"
            return r2
        L18:
            java.lang.String r2 = "A"
            return r2
        L1b:
            java.lang.String r2 = "E"
            return r2
        L1e:
            java.lang.String r2 = "W"
            return r2
        L21:
            java.lang.String r2 = "I"
            return r2
        L24:
            java.lang.String r2 = "D"
            return r2
        L27:
            java.lang.String r2 = "V"
            return r2
    }

    public java.lang.String a(int r5, java.lang.Thread r6, long r7, java.lang.String r9, java.lang.String r10, java.lang.Throwable r11) {
            r4 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            long r0 = r7 % r0
            android.text.format.Time r2 = new android.text.format.Time
            r2.<init>()
            r2.set(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r5 = r4.a(r5)
            r7.append(r5)
            r5 = 47
            r7.append(r5)
            java.lang.String r5 = "%Y-%m-%d %H:%M:%S"
            java.lang.String r5 = r2.format(r5)
            r7.append(r5)
            r5 = 46
            r7.append(r5)
            r2 = 10
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 >= 0) goto L37
            java.lang.String r5 = "00"
            r7.append(r5)
            goto L42
        L37:
            r2 = 100
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 >= 0) goto L42
            r5 = 48
            r7.append(r5)
        L42:
            r7.append(r0)
            r5 = 32
            r7.append(r5)
            r8 = 91
            r7.append(r8)
            if (r6 != 0) goto L57
            java.lang.String r6 = "N/A"
            r7.append(r6)
            goto L5e
        L57:
            java.lang.String r6 = r6.getName()
            r7.append(r6)
        L5e:
            r6 = 93
            r7.append(r6)
            r7.append(r8)
            r7.append(r9)
            r7.append(r6)
            r7.append(r5)
            r7.append(r10)
            r5 = 10
            r7.append(r5)
            if (r11 == 0) goto L88
            java.lang.String r6 = "* Exception : \n"
            r7.append(r6)
            java.lang.String r6 = android.util.Log.getStackTraceString(r11)
            r7.append(r6)
            r7.append(r5)
        L88:
            java.lang.String r5 = r7.toString()
            return r5
    }
}
