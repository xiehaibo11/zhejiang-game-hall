package com.tkay.expressad.exoplayer.e;

public final class i {
    public static final com.tkay.expressad.exoplayer.g.b.g.a a = null;
    private static final java.lang.String d = "com.apple.iTunes";
    private static final java.lang.String e = "iTunSMPB";
    private static final java.util.regex.Pattern f = null;
    public int b;
    public int c;


    static {
            com.tkay.expressad.exoplayer.e.i$1 r0 = new com.tkay.expressad.exoplayer.e.i$1
            r0.<init>()
            com.tkay.expressad.exoplayer.e.i.a = r0
            java.lang.String r0 = "^ [0-9a-fA-F]{8} ([0-9a-fA-F]{8}) ([0-9a-fA-F]{8})"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.e.i.f = r0
            return
    }

    public i() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.b = r0
            r1.c = r0
            return
    }

    private boolean a(int r2) {
            r1 = this;
            int r0 = r2 >> 12
            r2 = r2 & 4095(0xfff, float:5.738E-42)
            if (r0 > 0) goto Lb
            if (r2 <= 0) goto L9
            goto Lb
        L9:
            r2 = 0
            return r2
        Lb:
            r1.b = r0
            r1.c = r2
            r2 = 1
            return r2
    }

    private boolean a(java.lang.String r5) {
            r4 = this;
            java.util.regex.Pattern r0 = com.tkay.expressad.exoplayer.e.i.f
            java.util.regex.Matcher r5 = r0.matcher(r5)
            boolean r0 = r5.find()
            if (r0 == 0) goto L29
            r0 = 1
            java.lang.String r1 = r5.group(r0)     // Catch: java.lang.NumberFormatException -> L29
            r2 = 16
            int r1 = java.lang.Integer.parseInt(r1, r2)     // Catch: java.lang.NumberFormatException -> L29
            r3 = 2
            java.lang.String r5 = r5.group(r3)     // Catch: java.lang.NumberFormatException -> L29
            int r5 = java.lang.Integer.parseInt(r5, r2)     // Catch: java.lang.NumberFormatException -> L29
            if (r1 > 0) goto L24
            if (r5 <= 0) goto L29
        L24:
            r4.b = r1     // Catch: java.lang.NumberFormatException -> L29
            r4.c = r5     // Catch: java.lang.NumberFormatException -> L29
            return r0
        L29:
            r5 = 0
            return r5
    }

    public final boolean a() {
            r2 = this;
            int r0 = r2.b
            r1 = -1
            if (r0 == r1) goto Lb
            int r0 = r2.c
            if (r0 == r1) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public final boolean a(com.tkay.expressad.exoplayer.g.a r8) {
            r7 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r8.a()
            if (r1 >= r2) goto L4a
            com.tkay.expressad.exoplayer.g.a$a r2 = r8.a(r1)
            boolean r3 = r2 instanceof com.tkay.expressad.exoplayer.g.b.e
            java.lang.String r4 = "iTunSMPB"
            r5 = 1
            if (r3 == 0) goto L26
            com.tkay.expressad.exoplayer.g.b.e r2 = (com.tkay.expressad.exoplayer.g.b.e) r2
            java.lang.String r3 = r2.c
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L47
            java.lang.String r2 = r2.d
            boolean r2 = r7.a(r2)
            if (r2 == 0) goto L47
            return r5
        L26:
            boolean r3 = r2 instanceof com.tkay.expressad.exoplayer.g.b.i
            if (r3 == 0) goto L47
            com.tkay.expressad.exoplayer.g.b.i r2 = (com.tkay.expressad.exoplayer.g.b.i) r2
            java.lang.String r3 = r2.b
            java.lang.String r6 = "com.apple.iTunes"
            boolean r3 = r6.equals(r3)
            if (r3 == 0) goto L47
            java.lang.String r3 = r2.c
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L47
            java.lang.String r2 = r2.d
            boolean r2 = r7.a(r2)
            if (r2 == 0) goto L47
            return r5
        L47:
            int r1 = r1 + 1
            goto L2
        L4a:
            return r0
    }
}
