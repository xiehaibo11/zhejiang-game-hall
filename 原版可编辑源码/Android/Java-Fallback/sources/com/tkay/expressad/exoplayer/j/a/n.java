package com.tkay.expressad.exoplayer.j.a;

final class n extends com.tkay.expressad.exoplayer.j.a.e {
    private static final java.lang.String g = ".v3.exo";
    private static final java.util.regex.Pattern h = null;
    private static final java.util.regex.Pattern i = null;
    private static final java.util.regex.Pattern j = null;

    static {
            r0 = 32
            java.lang.String r1 = "^(.+)\\.(\\d+)\\.(\\d+)\\.v1\\.exo$"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.tkay.expressad.exoplayer.j.a.n.h = r1
            java.lang.String r1 = "^(.+)\\.(\\d+)\\.(\\d+)\\.v2\\.exo$"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r0)
            com.tkay.expressad.exoplayer.j.a.n.i = r1
            java.lang.String r1 = "^(\\d+)\\.(\\d+)\\.(\\d+)\\.v3\\.exo$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r1, r0)
            com.tkay.expressad.exoplayer.j.a.n.j = r0
            return
    }

    private n(java.lang.String r1, long r2, long r4, long r6, java.io.File r8) {
            r0 = this;
            r0.<init>(r1, r2, r4, r6, r8)
            return
    }

    public static com.tkay.expressad.exoplayer.j.a.n a(java.io.File r16, com.tkay.expressad.exoplayer.j.a.h r17) {
            r0 = r17
            java.lang.String r1 = r16.getName()
            java.lang.String r2 = ".v3.exo"
            boolean r2 = r1.endsWith(r2)
            r3 = 3
            r4 = 2
            r5 = 1
            r6 = 0
            if (r2 != 0) goto L6e
            java.lang.String r1 = r16.getName()
            java.util.regex.Pattern r2 = com.tkay.expressad.exoplayer.j.a.n.i
            java.util.regex.Matcher r2 = r2.matcher(r1)
            boolean r7 = r2.matches()
            if (r7 == 0) goto L2d
            java.lang.String r1 = r2.group(r5)
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.h(r1)
            if (r1 != 0) goto L3f
            goto L39
        L2d:
            java.util.regex.Pattern r2 = com.tkay.expressad.exoplayer.j.a.n.h
            java.util.regex.Matcher r2 = r2.matcher(r1)
            boolean r1 = r2.matches()
            if (r1 != 0) goto L3b
        L39:
            r1 = r6
            goto L64
        L3b:
            java.lang.String r1 = r2.group(r5)
        L3f:
            java.io.File r7 = r16.getParentFile()
            int r8 = r0.c(r1)
            java.lang.String r1 = r2.group(r4)
            long r9 = java.lang.Long.parseLong(r1)
            java.lang.String r1 = r2.group(r3)
            long r11 = java.lang.Long.parseLong(r1)
            java.io.File r1 = a(r7, r8, r9, r11)
            r2 = r16
            boolean r2 = r2.renameTo(r1)
            if (r2 != 0) goto L64
            goto L39
        L64:
            if (r1 != 0) goto L67
            return r6
        L67:
            java.lang.String r2 = r1.getName()
            r15 = r1
            r1 = r2
            goto L71
        L6e:
            r2 = r16
            r15 = r2
        L71:
            java.util.regex.Pattern r2 = com.tkay.expressad.exoplayer.j.a.n.j
            java.util.regex.Matcher r1 = r2.matcher(r1)
            boolean r2 = r1.matches()
            if (r2 != 0) goto L7e
            return r6
        L7e:
            long r11 = r15.length()
            java.lang.String r2 = r1.group(r5)
            int r2 = java.lang.Integer.parseInt(r2)
            java.lang.String r8 = r0.a(r2)
            if (r8 != 0) goto L91
            return r6
        L91:
            com.tkay.expressad.exoplayer.j.a.n r0 = new com.tkay.expressad.exoplayer.j.a.n
            java.lang.String r2 = r1.group(r4)
            long r9 = java.lang.Long.parseLong(r2)
            java.lang.String r1 = r1.group(r3)
            long r13 = java.lang.Long.parseLong(r1)
            r7 = r0
            r7.<init>(r8, r9, r11, r13, r15)
            return r0
    }

    public static com.tkay.expressad.exoplayer.j.a.n a(java.lang.String r10, long r11) {
            com.tkay.expressad.exoplayer.j.a.n r9 = new com.tkay.expressad.exoplayer.j.a.n
            r4 = -1
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    public static com.tkay.expressad.exoplayer.j.a.n a(java.lang.String r10, long r11, long r13) {
            com.tkay.expressad.exoplayer.j.a.n r9 = new com.tkay.expressad.exoplayer.j.a.n
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r4 = r13
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    public static java.io.File a(java.io.File r2, int r3, long r4, long r6) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r4)
            r1.append(r3)
            r1.append(r6)
            java.lang.String r3 = ".v3.exo"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r2, r3)
            return r0
    }

    public static com.tkay.expressad.exoplayer.j.a.n b(java.lang.String r10, long r11) {
            com.tkay.expressad.exoplayer.j.a.n r9 = new com.tkay.expressad.exoplayer.j.a.n
            r4 = -1
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r0.<init>(r1, r2, r4, r6, r8)
            return r9
    }

    private static java.io.File b(java.io.File r11, com.tkay.expressad.exoplayer.j.a.h r12) {
            java.lang.String r0 = r11.getName()
            java.util.regex.Pattern r1 = com.tkay.expressad.exoplayer.j.a.n.i
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r2 = r1.matches()
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L1d
            java.lang.String r0 = r1.group(r3)
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.h(r0)
            if (r0 != 0) goto L2e
            return r4
        L1d:
            java.util.regex.Pattern r1 = com.tkay.expressad.exoplayer.j.a.n.h
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r0 = r1.matches()
            if (r0 != 0) goto L2a
            return r4
        L2a:
            java.lang.String r0 = r1.group(r3)
        L2e:
            java.io.File r5 = r11.getParentFile()
            int r6 = r12.c(r0)
            r12 = 2
            java.lang.String r12 = r1.group(r12)
            long r7 = java.lang.Long.parseLong(r12)
            r12 = 3
            java.lang.String r12 = r1.group(r12)
            long r9 = java.lang.Long.parseLong(r12)
            java.io.File r12 = a(r5, r6, r7, r9)
            boolean r11 = r11.renameTo(r12)
            if (r11 != 0) goto L53
            return r4
        L53:
            return r12
    }

    public final com.tkay.expressad.exoplayer.j.a.n a(int r11) {
            r10 = this;
            boolean r0 = r10.d
            com.tkay.expressad.exoplayer.k.a.b(r0)
            long r7 = java.lang.System.currentTimeMillis()
            java.io.File r0 = r10.e
            java.io.File r1 = r0.getParentFile()
            long r3 = r10.b
            r2 = r11
            r5 = r7
            java.io.File r9 = a(r1, r2, r3, r5)
            com.tkay.expressad.exoplayer.j.a.n r11 = new com.tkay.expressad.exoplayer.j.a.n
            java.lang.String r2 = r10.a
            long r3 = r10.b
            long r5 = r10.c
            r1 = r11
            r1.<init>(r2, r3, r5, r7, r9)
            return r11
    }
}
