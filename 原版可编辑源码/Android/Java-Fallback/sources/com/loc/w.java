package com.loc;

@com.loc.ba(a = "a")
public final class w {

    @com.loc.bb(a = "a1", b = 6)
    private java.lang.String a;

    @com.loc.bb(a = "a2", b = 6)
    private java.lang.String b;

    @com.loc.bb(a = "a6", b = 2)
    private int c;

    @com.loc.bb(a = "a3", b = 6)
    private java.lang.String d;

    @com.loc.bb(a = "a4", b = 6)
    private java.lang.String e;

    @com.loc.bb(a = "a5", b = 6)
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String[] l;

    public static class a {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private java.lang.String d;
        private boolean e;
        private java.lang.String f;
        private java.lang.String[] g;

        public a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.e = r0
                java.lang.String r0 = "standard"
                r1.f = r0
                r0 = 0
                r1.g = r0
                r1.a = r3
                r1.b = r3
                r1.d = r4
                r1.c = r2
                return
        }

        static java.lang.String a(com.loc.w.a r0) {
                java.lang.String r0 = r0.a
                return r0
        }

        static java.lang.String b(com.loc.w.a r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        static java.lang.String c(com.loc.w.a r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static java.lang.String d(com.loc.w.a r0) {
                java.lang.String r0 = r0.d
                return r0
        }

        static boolean e(com.loc.w.a r0) {
                boolean r0 = r0.e
                return r0
        }

        static java.lang.String f(com.loc.w.a r0) {
                java.lang.String r0 = r0.f
                return r0
        }

        static java.lang.String[] g(com.loc.w.a r0) {
                java.lang.String[] r0 = r0.g
                return r0
        }

        public final com.loc.w.a a(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public final com.loc.w.a a(java.lang.String[] r1) {
                r0 = this;
                if (r1 == 0) goto La
                java.lang.Object r1 = r1.clone()
                java.lang.String[] r1 = (java.lang.String[]) r1
                r0.g = r1
            La:
                return r0
        }

        public final com.loc.w a() throws com.loc.k {
                r2 = this;
                java.lang.String[] r0 = r2.g
                if (r0 == 0) goto Lb
                com.loc.w r0 = new com.loc.w
                r1 = 0
                r0.<init>(r2, r1)
                return r0
            Lb:
                com.loc.k r0 = new com.loc.k
                java.lang.String r1 = "sdk packages is null"
                r0.<init>(r1)
                throw r0
        }
    }

    private w() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.c = r0
            r0 = 0
            r1.l = r0
            return
    }

    private w(com.loc.w.a r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.c = r0
            r0 = 0
            r1.l = r0
            java.lang.String r0 = com.loc.w.a.a(r2)
            r1.g = r0
            java.lang.String r0 = com.loc.w.a.b(r2)
            r1.h = r0
            java.lang.String r0 = com.loc.w.a.c(r2)
            r1.j = r0
            java.lang.String r0 = com.loc.w.a.d(r2)
            r1.i = r0
            boolean r0 = com.loc.w.a.e(r2)
            r1.c = r0
            java.lang.String r0 = com.loc.w.a.f(r2)
            r1.k = r0
            java.lang.String[] r2 = com.loc.w.a.g(r2)
            r1.l = r2
            java.lang.String r2 = r1.h
            java.lang.String r2 = com.loc.x.b(r2)
            r1.b = r2
            java.lang.String r2 = r1.j
            java.lang.String r2 = com.loc.x.b(r2)
            r1.a = r2
            java.lang.String r2 = r1.i
            java.lang.String r2 = com.loc.x.b(r2)
            r1.d = r2
            java.lang.String[] r2 = r1.l
            java.lang.String r2 = a(r2)
            java.lang.String r2 = com.loc.x.b(r2)
            r1.e = r2
            java.lang.String r2 = r1.k
            java.lang.String r2 = com.loc.x.b(r2)
            r1.f = r2
            return
    }

    w(com.loc.w.a r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static java.lang.String a(java.lang.String[] r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f
            r1.<init>()     // Catch: java.lang.Throwable -> L1f
            int r2 = r5.length     // Catch: java.lang.Throwable -> L1f
            r3 = 0
        Lb:
            if (r3 >= r2) goto L1a
            r4 = r5[r3]     // Catch: java.lang.Throwable -> L1f
            r1.append(r4)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r4 = ";"
            r1.append(r4)     // Catch: java.lang.Throwable -> L1f
            int r3 = r3 + 1
            goto Lb
        L1a:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L1f
            return r5
        L1f:
            r5 = move-exception
            r5.printStackTrace()
            return r0
    }

    private static java.lang.String[] a(java.lang.String r1) {
            java.lang.String r0 = ";"
            java.lang.String[] r1 = r1.split(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            java.lang.String r0 = r1.a
            java.lang.String r0 = com.loc.x.c(r0)
            r1.j = r0
        L18:
            java.lang.String r0 = r1.j
            return r0
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            java.lang.String r0 = r1.b
            java.lang.String r0 = com.loc.x.c(r0)
            r1.h = r0
        L18:
            java.lang.String r0 = r1.h
            return r0
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r1.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            java.lang.String r0 = r1.f
            java.lang.String r0 = com.loc.x.c(r0)
            r1.k = r0
        L18:
            java.lang.String r0 = r1.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L24
            java.lang.String r0 = "standard"
            r1.k = r0
        L24:
            java.lang.String r0 = r1.k
            return r0
    }

    public final boolean e() {
            r2 = this;
            int r0 = r2.c
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r5 != r4) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r0
        L13:
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L3a
            r3 = r5
            com.loc.w r3 = (com.loc.w) r3     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = r3.j     // Catch: java.lang.Throwable -> L3a
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L3a
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> L3a
            r3 = r5
            com.loc.w r3 = (com.loc.w) r3     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = r3.g     // Catch: java.lang.Throwable -> L3a
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L3a
            java.lang.String r2 = r4.h     // Catch: java.lang.Throwable -> L3a
            com.loc.w r5 = (com.loc.w) r5     // Catch: java.lang.Throwable -> L3a
            java.lang.String r5 = r5.h     // Catch: java.lang.Throwable -> L3a
            boolean r5 = r2.equals(r5)     // Catch: java.lang.Throwable -> L3a
            if (r5 == 0) goto L3a
            return r1
        L3a:
            return r0
    }

    public final java.lang.String[] f() {
            r1 = this;
            java.lang.String[] r0 = r1.l
            if (r0 == 0) goto L7
            int r0 = r0.length
            if (r0 != 0) goto L1b
        L7:
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r1.e
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String[] r0 = a(r0)
            r1.l = r0
        L1b:
            java.lang.String[] r0 = r1.l
            java.lang.Object r0 = r0.clone()
            java.lang.String[] r0 = (java.lang.String[]) r0
            return r0
    }
}
