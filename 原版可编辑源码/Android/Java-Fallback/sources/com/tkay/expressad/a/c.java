package com.tkay.expressad.a;

public final class c extends com.tkay.expressad.a.d {
    private static final boolean i = true;
    com.tkay.expressad.a.c.b a;
    private int j;
    private java.lang.String k;
    private int l;
    private com.tkay.expressad.a.e m;
    private boolean n;
    private com.tkay.expressad.foundation.g.g.c o;
    private com.tkay.expressad.a.h p;
    private android.os.Handler q;

    final class 1 implements com.tkay.expressad.foundation.g.g.a.b {
        final com.tkay.expressad.a.c a;


        private 1(com.tkay.expressad.a.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.g.g.a.a r2) {
                r1 = this;
                com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.e
                if (r2 != r0) goto L1b
                com.tkay.expressad.a.c r2 = r1.a
                boolean r2 = com.tkay.expressad.a.c.a(r2)
                if (r2 != 0) goto Ld
                return
            Ld:
                com.tkay.expressad.a.c r2 = r1.a
                android.os.Handler r2 = com.tkay.expressad.a.c.c(r2)
                com.tkay.expressad.a.c$1$1 r0 = new com.tkay.expressad.a.c$1$1
                r0.<init>(r1)
                r2.post(r0)
            L1b:
                return
        }
    }

    private class a extends com.tkay.expressad.foundation.g.g.a {
        final com.tkay.expressad.a.c a;

        private a(com.tkay.expressad.a.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        private a(com.tkay.expressad.a.c r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a() {
                r13 = this;
                r0 = 0
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r2 = new com.tkay.expressad.a.c$b     // Catch: java.lang.Exception -> L1ed
                r2.<init>()     // Catch: java.lang.Exception -> L1ed
                r1.a = r2     // Catch: java.lang.Exception -> L1ed
                r1 = r0
            Lb:
                r2 = 3
                r3 = 2
                java.lang.String r4 = ".apk"
                r5 = 10
                r6 = 0
                r7 = 1
                if (r1 >= r5) goto L14b
                com.tkay.expressad.a.c r8 = r13.a     // Catch: java.lang.Exception -> L1ed
                boolean r8 = com.tkay.expressad.a.c.a(r8)     // Catch: java.lang.Exception -> L1ed
                if (r8 != 0) goto L1e
                return
            L1e:
                com.tkay.expressad.a.c r8 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c.d(r8)     // Catch: java.lang.Exception -> L1ed
                r8 = 200(0xc8, float:2.8E-43)
                com.tkay.expressad.a.c r9 = r13.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                com.tkay.expressad.a.c r10 = r13.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r10 = com.tkay.expressad.a.c.e(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r11 = " "
                java.lang.String r12 = "%20"
                java.lang.String r10 = r10.replace(r11, r12)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                com.tkay.expressad.a.c.a(r9, r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r10 = "mTargetURL = "
                r9.<init>(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                com.tkay.expressad.a.c r10 = r13.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r10 = com.tkay.expressad.a.c.e(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                r9.append(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.net.URL r9 = new java.net.URL     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                com.tkay.expressad.a.c r10 = r13.a     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r10 = com.tkay.expressad.a.c.e(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                r9.<init>(r10)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.net.URLConnection r9 = r9.openConnection()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.net.HttpURLConnection r9 = (java.net.HttpURLConnection) r9     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L96
                java.lang.String r10 = "GET"
                r9.setRequestMethod(r10)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                java.lang.String r10 = "User-Agent"
                java.lang.String r11 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                r9.setRequestProperty(r10, r11)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                r10 = 15000(0x3a98, float:2.102E-41)
                r9.setConnectTimeout(r10)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                r9.setReadTimeout(r10)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                r9.setInstanceFollowRedirects(r0)     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                r9.connect()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                int r10 = r9.getResponseCode()     // Catch: java.lang.Exception -> L90 java.lang.Throwable -> L143
                java.lang.String r11 = "Location"
                java.lang.String r11 = r9.getHeaderField(r11)     // Catch: java.lang.Exception -> L8d java.lang.Throwable -> L143
                java.lang.String r12 = "Content-type"
                java.lang.String r12 = r9.getHeaderField(r12)     // Catch: java.lang.Exception -> L8b java.lang.Throwable -> L143
                if (r9 == 0) goto Lbd
                r9.disconnect()     // Catch: java.lang.Exception -> L1ed
                goto Lbd
            L8b:
                r12 = move-exception
                goto L9a
            L8d:
                r12 = move-exception
                r11 = r6
                goto L9a
            L90:
                r12 = move-exception
                r11 = r6
                goto L99
            L93:
                r1 = move-exception
                goto L145
            L96:
                r12 = move-exception
                r9 = r6
                r11 = r9
            L99:
                r10 = r8
            L9a:
                r12.printStackTrace()     // Catch: java.lang.Throwable -> L143
                if (r1 != 0) goto Lb7
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Throwable -> L143
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Throwable -> L143
                r1.a(r0)     // Catch: java.lang.Throwable -> L143
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Throwable -> L143
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Throwable -> L143
                java.lang.String r2 = r12.getLocalizedMessage()     // Catch: java.lang.Throwable -> L143
                r1.d(r2)     // Catch: java.lang.Throwable -> L143
                if (r9 == 0) goto Lb6
                r9.disconnect()     // Catch: java.lang.Exception -> L1ed
            Lb6:
                return
            Lb7:
                if (r9 == 0) goto Lbc
                r9.disconnect()     // Catch: java.lang.Exception -> L1ed
            Lbc:
                r12 = r6
            Lbd:
                r9 = 301(0x12d, float:4.22E-43)
                if (r10 == r9) goto L102
                r9 = 302(0x12e, float:4.23E-43)
                if (r10 == r9) goto L102
                r9 = 307(0x133, float:4.3E-43)
                if (r10 != r9) goto Lca
                goto L102
            Lca:
                if (r10 != r8) goto Lfa
                boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> L1ed
                if (r1 != 0) goto Leb
                java.lang.String r1 = "html"
                int r1 = r12.indexOf(r1)     // Catch: java.lang.Exception -> L1ed
                if (r1 >= 0) goto Leb
                java.lang.String r1 = "text"
                int r1 = r12.indexOf(r1)     // Catch: java.lang.Exception -> L1ed
                if (r1 < 0) goto Le3
                goto Leb
            Le3:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.c(r2)     // Catch: java.lang.Exception -> L1ed
                goto Lf2
            Leb:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.c(r3)     // Catch: java.lang.Exception -> L1ed
            Lf2:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r7)     // Catch: java.lang.Exception -> L1ed
                goto L14b
            Lfa:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r0)     // Catch: java.lang.Exception -> L1ed
                goto L14b
            L102:
                boolean r8 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L1ed
                if (r8 == 0) goto L110
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r7)     // Catch: java.lang.Exception -> L1ed
                goto L14b
            L110:
                java.lang.String r8 = r11.toLowerCase()     // Catch: java.lang.Exception -> L1ed
                java.lang.String r9 = "http"
                boolean r8 = r8.startsWith(r9)     // Catch: java.lang.Exception -> L1ed
                if (r8 != 0) goto L129
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c.a(r1, r11)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r7)     // Catch: java.lang.Exception -> L1ed
                goto L14b
            L129:
                com.tkay.expressad.a.c r8 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c.a(r8, r11)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r8 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r8 = com.tkay.expressad.a.c.e(r8)     // Catch: java.lang.Exception -> L1ed
                java.lang.String r8 = r8.toLowerCase()     // Catch: java.lang.Exception -> L1ed
                boolean r8 = r8.endsWith(r4)     // Catch: java.lang.Exception -> L1ed
                if (r8 == 0) goto L13f
                goto L14b
            L13f:
                int r1 = r1 + 1
                goto Lb
            L143:
                r1 = move-exception
                r6 = r9
            L145:
                if (r6 == 0) goto L14a
                r6.disconnect()     // Catch: java.lang.Exception -> L1ed
            L14a:
                throw r1     // Catch: java.lang.Exception -> L1ed
            L14b:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = com.tkay.expressad.a.c.e(r1)     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> L1ed
                java.lang.String r8 = "market:/"
                boolean r1 = r1.startsWith(r8)     // Catch: java.lang.Exception -> L1ed
                if (r1 != 0) goto L1c3
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = com.tkay.expressad.a.c.e(r1)     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> L1ed
                java.lang.String r8 = "play.google.com"
                int r1 = r1.indexOf(r8)     // Catch: java.lang.Exception -> L1ed
                if (r1 <= 0) goto L170
                goto L1c3
            L170:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = com.tkay.expressad.a.c.e(r1)     // Catch: java.lang.Exception -> L1ed
                java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> L1ed
                boolean r1 = r1.endsWith(r4)     // Catch: java.lang.Exception -> L1ed
                if (r1 == 0) goto L19c
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.c(r2)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r2 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r2 = com.tkay.expressad.a.c.e(r2)     // Catch: java.lang.Exception -> L1ed
                r1.e(r2)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r7)     // Catch: java.lang.Exception -> L1ed
                goto L1de
            L19c:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                int r1 = com.tkay.expressad.a.c.f(r1)     // Catch: java.lang.Exception -> L1ed
                if (r1 >= r5) goto L1ae
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                boolean r1 = r1.k()     // Catch: java.lang.Exception -> L1ed
                if (r1 != 0) goto L1b5
            L1ae:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.c(r3)     // Catch: java.lang.Exception -> L1ed
            L1b5:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r2 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r2 = com.tkay.expressad.a.c.e(r2)     // Catch: java.lang.Exception -> L1ed
                r1.e(r2)     // Catch: java.lang.Exception -> L1ed
                goto L1de
            L1c3:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.c(r7)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r2 = r13.a     // Catch: java.lang.Exception -> L1ed
                java.lang.String r2 = com.tkay.expressad.a.c.e(r2)     // Catch: java.lang.Exception -> L1ed
                r1.e(r2)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.b(r7)     // Catch: java.lang.Exception -> L1ed
            L1de:
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.d(r6)     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c r1 = r13.a     // Catch: java.lang.Exception -> L1ed
                com.tkay.expressad.a.c$b r1 = r1.a     // Catch: java.lang.Exception -> L1ed
                r1.a(r7)     // Catch: java.lang.Exception -> L1ed
                return
            L1ed:
                r1 = move-exception
                com.tkay.expressad.a.c r2 = r13.a
                com.tkay.expressad.a.c$b r2 = r2.a
                com.tkay.expressad.a.c r3 = r13.a
                java.lang.String r3 = com.tkay.expressad.a.c.e(r3)
                r2.e(r3)
                com.tkay.expressad.a.c r2 = r13.a
                com.tkay.expressad.a.c$b r2 = r2.a
                r2.a(r0)
                com.tkay.expressad.a.c r0 = r13.a
                com.tkay.expressad.a.c$b r0 = r0.a
                java.lang.String r2 = r1.getLocalizedMessage()
                r0.d(r2)
                r1.printStackTrace()
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    public static class b implements com.tkay.expressad.e.a, java.io.Serializable {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;
        private static final long e = 1;
        private boolean f;
        private java.lang.String g;
        private int h;
        private java.lang.String i;
        private java.lang.String j;
        private boolean k;
        private java.lang.String l;
        private java.lang.String m;
        private java.lang.String n;
        private int o;
        private boolean p;
        private int q;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        private void f(java.lang.String r1) {
                r0 = this;
                r0.j = r1
                return
        }

        private boolean l() {
                r1 = this;
                boolean r0 = r1.p
                return r0
        }

        private java.lang.String m() {
                r1 = this;
                java.lang.String r0 = r1.j
                return r0
        }

        public final int a() {
                r1 = this;
                int r0 = r1.q
                return r0
        }

        public final void a(int r1) {
                r0 = this;
                r0.q = r1
                return
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.n = r1
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.f = r1
                return
        }

        public final void b() {
                r1 = this;
                r0 = 1
                r1.p = r0
                return
        }

        public final void b(int r1) {
                r0 = this;
                r0.o = r1
                return
        }

        public final void b(java.lang.String r1) {
                r0 = this;
                r0.m = r1
                return
        }

        public final void b(boolean r1) {
                r0 = this;
                r0.k = r1
                return
        }

        public final int c() {
                r1 = this;
                int r0 = r1.o
                return r0
        }

        public final void c(int r1) {
                r0 = this;
                r0.h = r1
                return
        }

        public final void c(java.lang.String r1) {
                r0 = this;
                r0.l = r1
                return
        }

        public final java.lang.String d() {
                r1 = this;
                java.lang.String r0 = r1.n
                return r0
        }

        public final void d(java.lang.String r1) {
                r0 = this;
                r0.g = r1
                return
        }

        public final java.lang.String e() {
                r1 = this;
                java.lang.String r0 = r1.m
                return r0
        }

        public final void e(java.lang.String r1) {
                r0 = this;
                r0.i = r1
                return
        }

        public final java.lang.String f() {
                r1 = this;
                java.lang.String r0 = r1.l
                return r0
        }

        public final boolean g() {
                r1 = this;
                boolean r0 = r1.f
                return r0
        }

        public final java.lang.String h() {
                r1 = this;
                java.lang.String r0 = r1.g
                return r0
        }

        public final int i() {
                r1 = this;
                int r0 = r1.h
                return r0
        }

        public final java.lang.String j() {
                r1 = this;
                java.lang.String r0 = r1.i
                return r0
        }

        public final boolean k() {
                r1 = this;
                boolean r0 = r1.k
                return r0
        }
    }

    public c(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.j = r0
            r0 = 0
            r2.k = r0
            r2.a = r0
            r2.m = r0
            r0 = 1
            r2.n = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.q = r0
            com.tkay.expressad.foundation.g.g.c r0 = new com.tkay.expressad.foundation.g.g.c
            r1 = 2
            r0.<init>(r3, r1)
            r2.o = r0
            com.tkay.expressad.a.h r0 = new com.tkay.expressad.a.h
            r0.<init>(r3)
            r2.p = r0
            return
    }

    static java.lang.String a(com.tkay.expressad.a.c r0, java.lang.String r1) {
            r0.k = r1
            return r1
    }

    private void a(java.lang.String r16, java.lang.String r17, com.tkay.expressad.foundation.d.c r18, com.tkay.expressad.a.e r19) {
            r15 = this;
            r0 = r15
            java.lang.String r1 = new java.lang.String
            java.lang.String r2 = r18.ad()
            r1.<init>(r2)
            r0.k = r1
            r1 = r19
            r0.m = r1
            r2 = 0
            r0.a = r2
            java.lang.String r2 = r18.ab()
            java.lang.String r3 = "5"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L2e
            java.lang.String r2 = r18.ab()
            java.lang.String r3 = "6"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L2c
            goto L2e
        L2c:
            r2 = 0
            goto L2f
        L2e:
            r2 = 1
        L2f:
            r6 = r2
            com.tkay.expressad.a.h r3 = r0.p
            java.lang.String r4 = r18.ad()
            java.lang.String r8 = r18.aZ()
            r12 = 1
            r13 = 0
            int r14 = com.tkay.expressad.a.a.a.l
            r10 = 0
            r5 = r19
            r7 = r16
            r9 = r17
            r11 = r18
            r3.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    private void a(java.lang.String r16, java.lang.String r17, com.tkay.expressad.foundation.d.c r18, com.tkay.expressad.a.e r19, com.tkay.expressad.c.b r20) {
            r15 = this;
            r0 = r15
            java.lang.String r1 = new java.lang.String
            java.lang.String r2 = r18.ad()
            r1.<init>(r2)
            r0.k = r1
            r1 = r19
            r0.m = r1
            r2 = 0
            r0.a = r2
            java.lang.String r2 = r18.ab()
            java.lang.String r3 = "5"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L2e
            java.lang.String r2 = r18.ab()
            java.lang.String r3 = "6"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L2c
            goto L2e
        L2c:
            r2 = 0
            goto L2f
        L2e:
            r2 = 1
        L2f:
            r6 = r2
            com.tkay.expressad.a.h r3 = r0.p
            java.lang.String r4 = r18.ad()
            java.lang.String r8 = r18.aZ()
            r12 = 1
            r13 = 0
            int r14 = com.tkay.expressad.a.a.a.l
            r5 = r19
            r7 = r16
            r9 = r17
            r10 = r20
            r11 = r18
            r3.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    static boolean a(com.tkay.expressad.a.c r0) {
            boolean r0 = r0.n
            return r0
    }

    static com.tkay.expressad.a.e b(com.tkay.expressad.a.c r0) {
            com.tkay.expressad.a.e r0 = r0.m
            return r0
    }

    static android.os.Handler c(com.tkay.expressad.a.c r0) {
            android.os.Handler r0 = r0.q
            return r0
    }

    static int d(com.tkay.expressad.a.c r2) {
            int r0 = r2.j
            int r1 = r0 + 1
            r2.j = r1
            return r0
    }

    static java.lang.String e(com.tkay.expressad.a.c r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static int f(com.tkay.expressad.a.c r0) {
            int r0 = r0.j
            return r0
    }

    public final void a(java.lang.String r14, java.lang.String r15, com.tkay.expressad.foundation.d.c r16, com.tkay.expressad.a.e r17, java.lang.String r18, boolean r19, boolean r20, int r21) {
            r13 = this;
            r0 = r13
            r2 = r18
            r0.k = r2
            r3 = r17
            r0.m = r3
            r1 = 0
            r0.a = r1
            r12 = r21
            r0.l = r12
            r1 = 0
            if (r16 == 0) goto L31
            java.lang.String r4 = r16.ab()
            java.lang.String r5 = "5"
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto L2b
            java.lang.String r4 = r16.ab()
            java.lang.String r5 = "6"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L2c
        L2b:
            r1 = 1
        L2c:
            java.lang.String r4 = r16.aZ()
            goto L33
        L31:
            java.lang.String r4 = ""
        L33:
            r6 = r4
            r4 = r1
            com.tkay.expressad.a.h r1 = r0.p
            r8 = 0
            r2 = r18
            r3 = r17
            r5 = r14
            r7 = r15
            r9 = r16
            r10 = r19
            r11 = r20
            r12 = r21
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = 0
            r1.n = r0
            return
    }
}
