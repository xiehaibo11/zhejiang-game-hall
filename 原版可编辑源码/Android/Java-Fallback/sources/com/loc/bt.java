package com.loc;

public abstract class bt {
    private boolean a;
    private int b;
    private boolean c;
    private java.lang.String d;
    private boolean e;
    private boolean f;
    private com.loc.bt.a g;
    private com.loc.bt.b h;
    int l;
    int m;
    java.net.Proxy n;
    com.loc.bo.a o;

    public enum a extends java.lang.Enum<com.loc.bt.a> {
        public static final com.loc.bt.a a = null;
        public static final com.loc.bt.a b = null;
        public static final com.loc.bt.a c = null;
        public static final com.loc.bt.a d = null;
        public static final com.loc.bt.a e = null;
        private static final com.loc.bt.a[] g = null;
        private int f;

        static {
                com.loc.bt$a r0 = new com.loc.bt$a
                r1 = 0
                java.lang.String r2 = "NORMAL"
                r0.<init>(r2, r1, r1)
                com.loc.bt.a.a = r0
                com.loc.bt$a r0 = new com.loc.bt$a
                r2 = 1
                java.lang.String r3 = "INTERRUPT_IO"
                r0.<init>(r3, r2, r2)
                com.loc.bt.a.b = r0
                com.loc.bt$a r0 = new com.loc.bt$a
                r3 = 2
                java.lang.String r4 = "NEVER"
                r0.<init>(r4, r3, r3)
                com.loc.bt.a.c = r0
                com.loc.bt$a r0 = new com.loc.bt$a
                r4 = 3
                java.lang.String r5 = "FIX"
                r0.<init>(r5, r4, r4)
                com.loc.bt.a.d = r0
                com.loc.bt$a r0 = new com.loc.bt$a
                r5 = 4
                java.lang.String r6 = "SINGLE"
                r0.<init>(r6, r5, r5)
                com.loc.bt.a.e = r0
                r6 = 5
                com.loc.bt$a[] r6 = new com.loc.bt.a[r6]
                com.loc.bt$a r7 = com.loc.bt.a.a
                r6[r1] = r7
                com.loc.bt$a r1 = com.loc.bt.a.b
                r6[r2] = r1
                com.loc.bt$a r1 = com.loc.bt.a.c
                r6[r3] = r1
                com.loc.bt$a r1 = com.loc.bt.a.d
                r6[r4] = r1
                r6[r5] = r0
                com.loc.bt.a.g = r6
                return
        }

        a(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.f = r3
                return
        }

        public static com.loc.bt.a valueOf(java.lang.String r1) {
                java.lang.Class<com.loc.bt$a> r0 = com.loc.bt.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.loc.bt$a r1 = (com.loc.bt.a) r1
                return r1
        }

        public static com.loc.bt.a[] values() {
                com.loc.bt$a[] r0 = com.loc.bt.a.g
                java.lang.Object r0 = r0.clone()
                com.loc.bt$a[] r0 = (com.loc.bt.a[]) r0
                return r0
        }
    }

    public enum b extends java.lang.Enum<com.loc.bt.b> {
        public static final com.loc.bt.b a = null;
        public static final com.loc.bt.b b = null;
        public static final com.loc.bt.b c = null;
        public static final com.loc.bt.b d = null;
        public static final com.loc.bt.b e = null;
        public static final com.loc.bt.b f = null;
        public static final com.loc.bt.b g = null;
        private static final com.loc.bt.b[] i = null;
        private int h;

        static {
                com.loc.bt$b r0 = new com.loc.bt$b
                r1 = 0
                java.lang.String r2 = "FIRST_NONDEGRADE"
                r0.<init>(r2, r1, r1)
                com.loc.bt.b.a = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r2 = 1
                java.lang.String r3 = "NEVER_GRADE"
                r0.<init>(r3, r2, r2)
                com.loc.bt.b.b = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r3 = 2
                java.lang.String r4 = "DEGRADE_BYERROR"
                r0.<init>(r4, r3, r3)
                com.loc.bt.b.c = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r4 = 3
                java.lang.String r5 = "DEGRADE_ONLY"
                r0.<init>(r5, r4, r4)
                com.loc.bt.b.d = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r5 = 4
                java.lang.String r6 = "FIX_NONDEGRADE"
                r0.<init>(r6, r5, r5)
                com.loc.bt.b.e = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r6 = 5
                java.lang.String r7 = "FIX_DEGRADE_BYERROR"
                r0.<init>(r7, r6, r6)
                com.loc.bt.b.f = r0
                com.loc.bt$b r0 = new com.loc.bt$b
                r7 = 6
                java.lang.String r8 = "FIX_DEGRADE_ONLY"
                r0.<init>(r8, r7, r7)
                com.loc.bt.b.g = r0
                r8 = 7
                com.loc.bt$b[] r8 = new com.loc.bt.b[r8]
                com.loc.bt$b r9 = com.loc.bt.b.a
                r8[r1] = r9
                com.loc.bt$b r1 = com.loc.bt.b.b
                r8[r2] = r1
                com.loc.bt$b r1 = com.loc.bt.b.c
                r8[r3] = r1
                com.loc.bt$b r1 = com.loc.bt.b.d
                r8[r4] = r1
                com.loc.bt$b r1 = com.loc.bt.b.e
                r8[r5] = r1
                com.loc.bt$b r1 = com.loc.bt.b.f
                r8[r6] = r1
                r8[r7] = r0
                com.loc.bt.b.i = r8
                return
        }

        b(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.h = r3
                return
        }

        public static com.loc.bt.b valueOf(java.lang.String r1) {
                java.lang.Class<com.loc.bt$b> r0 = com.loc.bt.b.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.loc.bt$b r1 = (com.loc.bt.b) r1
                return r1
        }

        public static com.loc.bt.b[] values() {
                com.loc.bt$b[] r0 = com.loc.bt.b.i
                java.lang.Object r0 = r0.clone()
                com.loc.bt$b[] r0 = (com.loc.bt.b[]) r0
                return r0
        }

        public final int a() {
                r1 = this;
                int r0 = r1.h
                return r0
        }

        public final boolean b() {
                r2 = this;
                int r0 = r2.h
                com.loc.bt$b r1 = com.loc.bt.b.a
                int r1 = r1.h
                if (r0 == r1) goto L17
                com.loc.bt$b r1 = com.loc.bt.b.b
                int r1 = r1.h
                if (r0 == r1) goto L17
                com.loc.bt$b r1 = com.loc.bt.b.e
                int r1 = r1.h
                if (r0 != r1) goto L15
                goto L17
            L15:
                r0 = 0
                return r0
            L17:
                r0 = 1
                return r0
        }

        public final boolean c() {
                r2 = this;
                int r0 = r2.h
                com.loc.bt$b r1 = com.loc.bt.b.c
                int r1 = r1.h
                if (r0 == r1) goto L1d
                com.loc.bt$b r1 = com.loc.bt.b.d
                int r1 = r1.h
                if (r0 == r1) goto L1d
                com.loc.bt$b r1 = com.loc.bt.b.f
                int r1 = r1.h
                if (r0 == r1) goto L1d
                com.loc.bt$b r1 = com.loc.bt.b.g
                int r1 = r1.h
                if (r0 != r1) goto L1b
                goto L1d
            L1b:
                r0 = 0
                return r0
            L1d:
                r0 = 1
                return r0
        }

        public final boolean d() {
                r2 = this;
                int r0 = r2.h
                com.loc.bt$b r1 = com.loc.bt.b.c
                int r1 = r1.h
                if (r0 == r1) goto L11
                com.loc.bt$b r1 = com.loc.bt.b.f
                int r1 = r1.h
                if (r0 != r1) goto Lf
                goto L11
            Lf:
                r0 = 0
                return r0
            L11:
                r0 = 1
                return r0
        }

        public final boolean e() {
                r2 = this;
                int r0 = r2.h
                com.loc.bt$b r1 = com.loc.bt.b.b
                int r1 = r1.h
                if (r0 != r1) goto La
                r0 = 1
                return r0
            La:
                r0 = 0
                return r0
        }
    }

    public enum c extends java.lang.Enum<com.loc.bt.c> {
        public static final com.loc.bt.c a = null;
        public static final com.loc.bt.c b = null;
        private static final com.loc.bt.c[] d = null;
        private int c;

        static {
                com.loc.bt$c r0 = new com.loc.bt$c
                r1 = 0
                java.lang.String r2 = "HTTP"
                r0.<init>(r2, r1, r1)
                com.loc.bt.c.a = r0
                com.loc.bt$c r0 = new com.loc.bt$c
                r2 = 1
                java.lang.String r3 = "HTTPS"
                r0.<init>(r3, r2, r2)
                com.loc.bt.c.b = r0
                r3 = 2
                com.loc.bt$c[] r3 = new com.loc.bt.c[r3]
                com.loc.bt$c r4 = com.loc.bt.c.a
                r3[r1] = r4
                r3[r2] = r0
                com.loc.bt.c.d = r3
                return
        }

        c(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.c = r3
                return
        }

        public static com.loc.bt.c valueOf(java.lang.String r1) {
                java.lang.Class<com.loc.bt$c> r0 = com.loc.bt.c.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.loc.bt$c r1 = (com.loc.bt.c) r1
                return r1
        }

        public static com.loc.bt.c[] values() {
                com.loc.bt$c[] r0 = com.loc.bt.c.d
                java.lang.Object r0 = r0.clone()
                com.loc.bt$c[] r0 = (com.loc.bt.c[]) r0
                return r0
        }
    }

    public bt() {
            r2 = this;
            r2.<init>()
            r0 = 20000(0x4e20, float:2.8026E-41)
            r2.l = r0
            r2.m = r0
            r1 = 0
            r2.n = r1
            r1 = 0
            r2.a = r1
            r2.b = r0
            r0 = 1
            r2.c = r0
            com.loc.bt$a r0 = com.loc.bt.a.a
            r2.g = r0
            com.loc.bt$b r0 = com.loc.bt.b.a
            r2.h = r0
            return
    }

    private static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = "platinfo"
            r1 = 0
            if (r3 != 0) goto L6
            return r1
        L6:
            boolean r2 = r3.containsKey(r0)     // Catch: java.lang.Throwable -> L17
            if (r2 == 0) goto L16
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = c(r3)     // Catch: java.lang.Throwable -> L17
        L16:
            return r1
        L17:
            r3 = move-exception
            java.lang.String r0 = "ht"
            java.lang.String r2 = "pnfh"
            com.loc.as.a(r3, r0, r2)
            return r1
    }

    private java.lang.String b(java.lang.String r3) {
            r2 = this;
            byte[] r0 = r2.d()
            if (r0 == 0) goto L37
            int r0 = r0.length
            if (r0 != 0) goto La
            goto L37
        La:
            java.util.Map r0 = r2.e()
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.loc.bo.e
            if (r1 == 0) goto L1c
            if (r0 == 0) goto L1a
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.loc.bo.e
            r0.putAll(r1)
            goto L1c
        L1a:
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.loc.bo.e
        L1c:
            if (r0 != 0) goto L1f
            return r3
        L1f:
            java.lang.String r0 = com.loc.br.a(r0)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "?"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
        L37:
            return r3
    }

    private static java.lang.String c(java.lang.String r8) {
            java.lang.String r0 = "="
            java.lang.String r1 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L65
            if (r2 != 0) goto L6d
            java.lang.String r2 = "&"
            java.lang.String[] r8 = r8.split(r2)     // Catch: java.lang.Throwable -> L65
            int r2 = r8.length     // Catch: java.lang.Throwable -> L65
            r3 = 1
            if (r2 <= r3) goto L6d
            int r2 = r8.length     // Catch: java.lang.Throwable -> L65
            r4 = 0
            r5 = r1
        L17:
            if (r4 >= r2) goto L30
            r6 = r8[r4]     // Catch: java.lang.Throwable -> L65
            java.lang.String r7 = "sdkversion"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L65
            if (r7 == 0) goto L24
            r5 = r6
        L24:
            java.lang.String r7 = "product"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L65
            if (r7 == 0) goto L2d
            goto L31
        L2d:
            int r4 = r4 + 1
            goto L17
        L30:
            r6 = r1
        L31:
            boolean r8 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L65
            if (r8 != 0) goto L6d
            java.lang.String[] r8 = r6.split(r0)     // Catch: java.lang.Throwable -> L65
            int r2 = r8.length     // Catch: java.lang.Throwable -> L65
            if (r2 <= r3) goto L6d
            r8 = r8[r3]     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = r8.trim()     // Catch: java.lang.Throwable -> L65
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L65
            if (r8 != 0) goto L6d
            java.lang.String r8 = com.loc.ag.a(r1)     // Catch: java.lang.Throwable -> L65
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L65
            if (r8 == 0) goto L6d
            java.lang.String[] r8 = r5.split(r0)     // Catch: java.lang.Throwable -> L65
            int r0 = r8.length     // Catch: java.lang.Throwable -> L65
            if (r0 <= r3) goto L6d
            r8 = r8[r3]     // Catch: java.lang.Throwable -> L65
            java.lang.String r8 = r8.trim()     // Catch: java.lang.Throwable -> L65
            com.loc.ag.a(r1, r8)     // Catch: java.lang.Throwable -> L65
            goto L6d
        L65:
            r8 = move-exception
            java.lang.String r0 = "ht"
            java.lang.String r2 = "pnfp"
            com.loc.as.a(r8, r0, r2)
        L6d:
            return r1
    }

    public abstract java.util.Map<java.lang.String, java.lang.String> a();

    public final void a(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(com.loc.bt.a r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.loc.bt.b r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.loc.bt.c r2) {
            r1 = this;
            com.loc.bt$c r0 = com.loc.bt.c.b
            if (r2 != r0) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            r1.f = r2
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(java.net.Proxy r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public abstract java.lang.String b();

    public final void b(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b()
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String c_() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public byte[] d() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract java.util.Map<java.lang.String, java.lang.String> e();

    protected java.lang.String g() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    protected boolean h() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    final java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.b()
            java.lang.String r0 = r1.b(r0)
            return r0
    }

    final java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.c()
            java.lang.String r0 = r1.b(r0)
            return r0
    }

    public final int n() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    public final java.net.Proxy o() {
            r1 = this;
            java.net.Proxy r0 = r1.n
            return r0
    }

    protected final com.loc.bt.a p() {
            r1 = this;
            com.loc.bt$a r0 = r1.g
            return r0
    }

    protected final boolean q() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public final void r() {
            r1 = this;
            r0 = 1
            r1.a = r0
            return
    }

    protected final boolean s() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public final com.loc.bo.a t() {
            r1 = this;
            com.loc.bo$a r0 = r1.o
            return r0
    }

    protected final com.loc.bt.b u() {
            r1 = this;
            com.loc.bt$b r0 = r1.h
            return r0
    }

    protected final int v() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final void w() {
            r1 = this;
            r0 = 0
            r1.c = r0
            return
    }

    protected final java.lang.String x() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    protected final boolean y() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    protected final java.lang.String z() {
            r4 = this;
            java.lang.String r0 = r4.c_()     // Catch: java.lang.Throwable -> L25
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L2f
            boolean r1 = r4.a     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L1a
            r1 = r4
            com.loc.bp r1 = (com.loc.bp) r1     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = r1.j()     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = c(r1)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L1a:
            java.util.Map r1 = r4.a()     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = a(r1)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L23:
            r1 = move-exception
            goto L28
        L25:
            r1 = move-exception
            java.lang.String r0 = ""
        L28:
            java.lang.String r2 = "ht"
            java.lang.String r3 = "pnfr"
            com.loc.as.a(r1, r2, r3)
        L2f:
            return r0
    }
}
