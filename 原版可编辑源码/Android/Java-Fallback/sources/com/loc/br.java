package com.loc;

public final class br {
    private static java.lang.ref.SoftReference<javax.net.ssl.SSLContext> k;
    private static java.lang.ref.SoftReference<com.loc.bs> t;
    private boolean a;
    private javax.net.ssl.SSLContext b;
    private java.net.Proxy c;
    private volatile boolean d;
    private long e;
    private long f;
    private java.lang.String g;
    private com.loc.bo.a h;
    private com.loc.br.d i;
    private java.lang.String j;
    private boolean l;
    private java.lang.String m;
    private java.lang.String n;
    private boolean o;
    private boolean p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;
    private com.loc.br.f u;

    public static class a implements java.lang.Cloneable, java.lang.Comparable {
        public int a;
        public java.lang.String b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public int f;
        public int g;
        public int h;
        public long i;
        public volatile java.util.concurrent.atomic.AtomicInteger j;

        public a(com.loc.br.c r3) {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = r3.c
                r2.b = r0
                java.lang.String r0 = r3.e
                r2.c = r0
                java.lang.String r0 = r3.d
                r2.e = r0
                int r0 = r3.m
                r2.f = r0
                int r0 = r3.n
                r2.g = r0
                com.loc.bt$b r0 = r3.b
                int r0 = r0.a()
                r2.h = r0
                java.lang.String r0 = r3.a
                r2.d = r0
                long r0 = r3.f
                r2.i = r0
                java.util.concurrent.atomic.AtomicInteger r3 = new java.util.concurrent.atomic.AtomicInteger
                r0 = 1
                r3.<init>(r0)
                r2.j = r3
                int r3 = r2.f
                r0 = 10
                if (r3 != r0) goto L38
                r3 = 0
                r2.a = r3
            L38:
                return
        }

        public final com.loc.br.a a() {
                r1 = this;
                java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
                com.loc.br$a r0 = (com.loc.br.a) r0     // Catch: java.lang.CloneNotSupportedException -> L7
                return r0
            L7:
                r0 = 0
                return r0
        }

        public final java.lang.String b() {
                r5 = this;
                java.lang.String r0 = "#"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r1.<init>()     // Catch: java.lang.Exception -> L127
                int r2 = r5.f     // Catch: java.lang.Exception -> L127
                r1.append(r2)     // Catch: java.lang.Exception -> L127
                r1.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L127
                java.lang.String r2 = r5.e     // Catch: java.lang.Exception -> L127
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L127
                java.lang.String r3 = "-#"
                if (r2 != 0) goto L32
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r5.e     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
            L2d:
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                goto L3e
            L32:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r3)     // Catch: java.lang.Exception -> L127
                goto L2d
            L3e:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                int r1 = r5.h     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                java.util.concurrent.atomic.AtomicInteger r1 = r5.j     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                java.lang.String r2 = r5.b     // Catch: java.lang.Exception -> L127
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L127
                if (r2 != 0) goto L83
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r5.b     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
            L7e:
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                goto L8f
            L83:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r3)     // Catch: java.lang.Exception -> L127
                goto L7e
            L8f:
                int r2 = r5.f     // Catch: java.lang.Exception -> L127
                r4 = 1
                if (r2 != r4) goto La9
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r5.d     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
            La4:
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                goto Lb5
            La9:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r3)     // Catch: java.lang.Exception -> L127
                goto La4
            Lb5:
                int r2 = r5.f     // Catch: java.lang.Exception -> L127
                if (r2 != r4) goto Lce
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                long r3 = r5.i     // Catch: java.lang.Exception -> L127
                r2.append(r3)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
            Lc9:
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L127
                goto Lda
            Lce:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r3)     // Catch: java.lang.Exception -> L127
                goto Lc9
            Lda:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = r5.c     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L127
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                r1.<init>()     // Catch: java.lang.Exception -> L127
                r1.append(r0)     // Catch: java.lang.Exception -> L127
                int r0 = r5.g     // Catch: java.lang.Exception -> L127
                r1.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L127
                byte[] r1 = r0.getBytes()     // Catch: java.lang.Exception -> L127
                java.lang.String r2 = "YXBtX25ldHdvcmtf"
                byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L127
                byte[] r1 = com.loc.bk.a(r1, r2)     // Catch: java.lang.Exception -> L127
                java.lang.String r1 = com.loc.p.b(r1)     // Catch: java.lang.Exception -> L127
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127
                java.lang.String r3 = "上报异常数据"
                r2.<init>(r3)     // Catch: java.lang.Exception -> L127
                r2.append(r0)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = "加密后："
                r2.append(r0)     // Catch: java.lang.Exception -> L127
                r2.append(r1)     // Catch: java.lang.Exception -> L127
                com.loc.br.a()     // Catch: java.lang.Exception -> L127
                return r1
            L127:
                r0 = 0
                return r0
        }

        public final java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r1 = this;
                com.loc.br$a r0 = r1.a()
                return r0
        }

        @Override
        public final int compareTo(java.lang.Object r2) {
                r1 = this;
                int r0 = r1.a
                com.loc.br$a r2 = (com.loc.br.a) r2
                int r2 = r2.a
                int r0 = r0 - r2
                return r0
        }
    }

    public static class b {
        public java.net.HttpURLConnection a;
        public int b;

        public b(java.net.HttpURLConnection r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                int r1 = r0.b
                r0.b = r1
                return
        }
    }

    public static class c implements java.lang.Cloneable {
        public java.lang.String a;
        public com.loc.bt.b b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public long f;
        public long g;
        public long h;
        public long i;
        public long j;
        public java.lang.String k;
        public java.lang.String l;
        public int m;
        public int n;

        public c() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.a = r0
                com.loc.bt$b r1 = com.loc.bt.b.a
                r2.b = r1
                r2.c = r0
                r2.d = r0
                r2.e = r0
                r0 = 0
                r2.f = r0
                r2.g = r0
                r2.h = r0
                r2.i = r0
                r2.j = r0
                java.lang.String r0 = "-"
                r2.k = r0
                r2.l = r0
                r0 = 0
                r2.m = r0
                r2.n = r0
                return
        }

        protected final com.loc.br.c a() {
                r1 = this;
                java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
                com.loc.br$c r0 = (com.loc.br.c) r0     // Catch: java.lang.CloneNotSupportedException -> L7
                return r0
            L7:
                r0 = 0
                return r0
        }

        protected final java.lang.String b() {
                r5 = this;
                java.lang.String r0 = r5.c
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                java.lang.String r1 = "-#"
                java.lang.String r2 = "#"
                if (r0 != 0) goto L1e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r3 = r5.c
                r0.append(r3)
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                goto L1f
            L1e:
                r0 = r1
            L1f:
                java.lang.String r3 = r5.d
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 != 0) goto L3c
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = r5.d
                r1.append(r0)
                r1.append(r2)
                java.lang.String r0 = r1.toString()
                goto L4b
            L3c:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r1)
                java.lang.String r0 = r3.toString()
            L4b:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                com.loc.bt$b r0 = r5.b
                int r0 = r0.a()
                r1.append(r0)
                r1.append(r2)
                java.lang.String r0 = r1.toString()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                long r3 = r5.h
                r1.append(r3)
                r1.append(r2)
                java.lang.String r0 = r1.toString()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                long r3 = r5.j
                r1.append(r3)
                r1.append(r2)
                java.lang.String r0 = r1.toString()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                long r2 = r5.f
                r1.append(r2)
                java.lang.String r0 = r1.toString()
                byte[] r1 = r0.getBytes()
                java.lang.String r2 = "YXBtX25ldHdvcmtf"
                byte[] r2 = r2.getBytes()
                byte[] r1 = com.loc.bk.a(r1, r2)
                java.lang.String r1 = com.loc.p.b(r1)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "上报耗时数据"
                r2.<init>(r3)
                r2.append(r0)
                java.lang.String r0 = "加密后："
                r2.append(r0)
                r2.append(r1)
                com.loc.br.a()
                return r1
        }

        protected final java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r1 = this;
                com.loc.br$c r0 = r1.a()
                return r0
        }

        public final java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "RequestInfo{csid='"
                r0.<init>(r1)
                java.lang.String r1 = r4.a
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = ", degradeType="
                r0.append(r2)
                com.loc.bt$b r2 = r4.b
                r0.append(r2)
                java.lang.String r2 = ", serverIp='"
                r0.append(r2)
                java.lang.String r2 = r4.c
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", path='"
                r0.append(r2)
                java.lang.String r2 = r4.d
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", hostname='"
                r0.append(r2)
                java.lang.String r2 = r4.e
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", totalTime="
                r0.append(r2)
                long r2 = r4.f
                r0.append(r2)
                java.lang.String r2 = ", DNSTime="
                r0.append(r2)
                long r2 = r4.g
                r0.append(r2)
                java.lang.String r2 = ", connectionTime="
                r0.append(r2)
                long r2 = r4.h
                r0.append(r2)
                java.lang.String r2 = ", writeTime="
                r0.append(r2)
                long r2 = r4.i
                r0.append(r2)
                java.lang.String r2 = ", readTime="
                r0.append(r2)
                long r2 = r4.j
                r0.append(r2)
                java.lang.String r2 = ", serverTime='"
                r0.append(r2)
                java.lang.String r2 = r4.k
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", datasize='"
                r0.append(r2)
                java.lang.String r2 = r4.l
                r0.append(r2)
                r0.append(r1)
                java.lang.String r1 = ", errorcode="
                r0.append(r1)
                int r1 = r4.m
                r0.append(r1)
                java.lang.String r1 = ", errorcodeSub="
                r0.append(r1)
                int r1 = r4.n
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static class d {
        private java.util.Vector<com.loc.br.e> a;
        private volatile com.loc.br.e b;

        private d() {
                r2 = this;
                r2.<init>()
                java.util.Vector r0 = new java.util.Vector
                r0.<init>()
                r2.a = r0
                com.loc.br$e r0 = new com.loc.br$e
                r1 = 0
                r0.<init>(r1)
                r2.b = r0
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.loc.br.e a(java.lang.String r5) {
                r4 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r5)
                if (r0 == 0) goto L9
                com.loc.br$e r5 = r4.b
                return r5
            L9:
                r0 = 0
                r1 = 0
            Lb:
                java.util.Vector<com.loc.br$e> r2 = r4.a
                int r2 = r2.size()
                if (r1 >= r2) goto L2b
                java.util.Vector<com.loc.br$e> r2 = r4.a
                java.lang.Object r2 = r2.get(r1)
                com.loc.br$e r2 = (com.loc.br.e) r2
                if (r2 == 0) goto L28
                java.lang.String r3 = r2.a()
                boolean r3 = r3.equals(r5)
                if (r3 == 0) goto L28
                return r2
            L28:
                int r1 = r1 + 1
                goto Lb
            L2b:
                com.loc.br$e r1 = new com.loc.br$e
                r1.<init>(r0)
                r1.b(r5)
                java.util.Vector<com.loc.br$e> r5 = r4.a
                r5.add(r1)
                return r1
        }
    }

    private static class e implements javax.net.ssl.HostnameVerifier {
        private java.lang.String a;
        private java.lang.String b;

        private e() {
                r0 = this;
                r0.<init>()
                return
        }

        e(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public final void a(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = r2.a
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L1f
                java.lang.String r0 = ":"
                boolean r1 = r3.contains(r0)
                if (r1 == 0) goto L1f
                java.lang.String[] r0 = r3.split(r0)
                if (r0 == 0) goto L1f
                int r1 = r0.length
                if (r1 <= 0) goto L1f
                r3 = 0
                r3 = r0[r3]
                r2.a = r3
                return
            L1f:
                r2.a = r3
                return
        }

        public final void b(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        @Override
        public final boolean verify(java.lang.String r3, javax.net.ssl.SSLSession r4) {
                r2 = this;
                javax.net.ssl.HostnameVerifier r0 = javax.net.ssl.HttpsURLConnection.getDefaultHostnameVerifier()
                java.lang.String r1 = r2.a
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L13
                java.lang.String r4 = r2.a
                boolean r3 = r4.equals(r3)
                return r3
            L13:
                java.lang.String r1 = r2.b
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L22
                java.lang.String r3 = r2.b
                boolean r3 = r0.verify(r3, r4)
                return r3
            L22:
                boolean r3 = r0.verify(r3, r4)
                return r3
        }
    }

    class f {
        long a;
        long b;
        com.loc.br.c c;
        com.loc.br.a d;
        com.loc.br.c e;
        java.lang.String f;
        java.net.URL g;
        final com.loc.br h;

        f(com.loc.br r3) {
                r2 = this;
                r2.h = r3
                r2.<init>()
                r0 = 0
                r2.a = r0
                r2.b = r0
                com.loc.br$c r3 = new com.loc.br$c
                r3.<init>()
                r2.c = r3
                return
        }

        public final void a() {
                r5 = this;
                com.loc.br$c r0 = r5.c
                long r1 = android.os.SystemClock.elapsedRealtime()
                long r3 = r5.b
                long r1 = r1 - r3
                r0.h = r1
                return
        }

        public final void a(int r6) {
                r5 = this;
                java.lang.String r0 = java.lang.String.valueOf(r6)
                java.lang.String r1 = "----errorcode-----"
                r1.concat(r0)
                com.loc.br.a()
                com.loc.br$c r0 = r5.c     // Catch: java.lang.Throwable -> La7
                long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> La7
                long r3 = r5.a     // Catch: java.lang.Throwable -> La7
                long r1 = r1 - r3
                r0.f = r1     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r0 = r5.c     // Catch: java.lang.Throwable -> La7
                r0.m = r6     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r6 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.bt$b r6 = r6.b     // Catch: java.lang.Throwable -> La7
                boolean r6 = r6.e()     // Catch: java.lang.Throwable -> La7
                r0 = 0
                if (r6 == 0) goto L2d
                com.loc.br$c r6 = r5.c     // Catch: java.lang.Throwable -> La7
                java.lang.String r6 = r6.e     // Catch: java.lang.Throwable -> La7
                com.loc.m.a(r0, r6)     // Catch: java.lang.Throwable -> La7
            L2d:
                com.loc.br r6 = r5.h     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> La7
                java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> La7
                boolean r6 = com.loc.br.a(r6, r1)     // Catch: java.lang.Throwable -> La7
                if (r6 == 0) goto L82
                com.loc.br r1 = r5.h     // Catch: java.lang.Throwable -> La7
                boolean r1 = com.loc.br.b(r1)     // Catch: java.lang.Throwable -> La7
                if (r1 == 0) goto L5a
                com.loc.br r1 = r5.h     // Catch: java.lang.Throwable -> La7
                java.lang.String r1 = com.loc.br.a(r1)     // Catch: java.lang.Throwable -> La7
                boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La7
                if (r1 != 0) goto L5a
                com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.bt$b r1 = r1.b     // Catch: java.lang.Throwable -> La7
                boolean r1 = r1.b()     // Catch: java.lang.Throwable -> La7
                if (r1 == 0) goto L5a
                com.loc.m.d()     // Catch: java.lang.Throwable -> La7
            L5a:
                com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.bt$b r1 = r1.b     // Catch: java.lang.Throwable -> La7
                boolean r1 = r1.c()     // Catch: java.lang.Throwable -> La7
                if (r1 == 0) goto L73
                com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.bt$b r1 = r1.b     // Catch: java.lang.Throwable -> La7
                boolean r1 = r1.c()     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r2 = r5.c     // Catch: java.lang.Throwable -> La7
                java.lang.String r2 = r2.e     // Catch: java.lang.Throwable -> La7
                com.loc.m.a(r1, r2)     // Catch: java.lang.Throwable -> La7
            L73:
                com.loc.br$c r1 = r5.e     // Catch: java.lang.Throwable -> La7
                com.loc.m.c(r1)     // Catch: java.lang.Throwable -> La7
                com.loc.br$a r1 = r5.d     // Catch: java.lang.Throwable -> La7
                com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r0 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.m.b(r0)     // Catch: java.lang.Throwable -> La7
            L82:
                java.net.URL r0 = r5.g     // Catch: java.lang.Throwable -> La7
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> La7
                com.loc.bt$b r1 = r1.b     // Catch: java.lang.Throwable -> La7
                boolean r1 = r1.c()     // Catch: java.lang.Throwable -> La7
                r2 = 1
                com.loc.m.a(r0, r1, r2, r6)     // Catch: java.lang.Throwable -> La7
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
                java.lang.String r0 = "!!!error-"
                r6.<init>(r0)     // Catch: java.lang.Throwable -> La7
                com.loc.br$c r0 = r5.c     // Catch: java.lang.Throwable -> La7
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La7
                r6.append(r0)     // Catch: java.lang.Throwable -> La7
                com.loc.br.a()     // Catch: java.lang.Throwable -> La7
            La7:
                return
        }

        public final void a(long r3) {
                r2 = this;
                java.text.DecimalFormat r0 = new java.text.DecimalFormat
                java.lang.String r1 = "0.00"
                r0.<init>(r1)
                com.loc.br$c r1 = r2.c
                float r3 = (float) r3
                r4 = 1149239296(0x44800000, float:1024.0)
                float r3 = r3 / r4
                double r3 = (double) r3
                java.lang.String r3 = r0.format(r3)
                r1.l = r3
                return
        }

        public final void a(com.loc.bt r4, java.net.URL r5) {
                r3 = this;
                r3.g = r5
                com.loc.br$c r0 = r3.c
                java.lang.String r1 = r5.getPath()
                r0.d = r1
                com.loc.br$c r0 = r3.c
                java.lang.String r5 = r5.getHost()
                r0.e = r5
                com.loc.br r5 = r3.h
                java.lang.String r5 = com.loc.br.a(r5)
                boolean r5 = android.text.TextUtils.isEmpty(r5)
                if (r5 != 0) goto L46
                com.loc.bt$b r5 = r4.u()
                boolean r5 = r5.b()
                if (r5 == 0) goto L46
                com.loc.br$c r5 = r3.c
                java.lang.String r0 = r5.e
                java.lang.String r1 = ""
                java.lang.String r2 = "["
                java.lang.String r0 = r0.replace(r2, r1)
                java.lang.String r2 = "]"
                java.lang.String r0 = r0.replace(r2, r1)
                r5.c = r0
                com.loc.br$c r5 = r3.c
                com.loc.br r0 = r3.h
                java.lang.String r0 = com.loc.br.a(r0)
                r5.e = r0
            L46:
                com.loc.bt$b r5 = r4.u()
                boolean r5 = r5.b()
                if (r5 == 0) goto L57
                com.loc.br$c r5 = r3.c
                java.lang.String r5 = r5.e
                r4.a(r5)
            L57:
                com.loc.bt$b r5 = r4.u()
                boolean r5 = r5.d()
                if (r5 == 0) goto L67
                java.lang.String r4 = r4.x()
                r3.f = r4
            L67:
                return
        }

        public final void a(com.loc.bu r8) {
                r7 = this;
                com.loc.br$c r0 = r7.c     // Catch: java.lang.Throwable -> La6
                long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> La6
                long r3 = r7.a     // Catch: java.lang.Throwable -> La6
                long r1 = r1 - r3
                r0.f = r1     // Catch: java.lang.Throwable -> La6
                if (r8 == 0) goto L17
                com.loc.br$c r0 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.bt$b r0 = r0.b     // Catch: java.lang.Throwable -> La6
                boolean r0 = r0.c()     // Catch: java.lang.Throwable -> La6
                r8.f = r0     // Catch: java.lang.Throwable -> La6
            L17:
                com.loc.br$c r8 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.bt$b r8 = r8.b     // Catch: java.lang.Throwable -> La6
                boolean r8 = r8.b()     // Catch: java.lang.Throwable -> La6
                r0 = 0
                if (r8 == 0) goto L33
                com.loc.br$c r8 = r7.c     // Catch: java.lang.Throwable -> La6
                long r1 = r8.f     // Catch: java.lang.Throwable -> La6
                r3 = 10000(0x2710, double:4.9407E-320)
                int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r8 <= 0) goto L33
                com.loc.br$c r8 = r7.c     // Catch: java.lang.Throwable -> La6
                java.lang.String r8 = r8.e     // Catch: java.lang.Throwable -> La6
                com.loc.m.a(r0, r8)     // Catch: java.lang.Throwable -> La6
            L33:
                com.loc.br$c r8 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.bt$b r8 = r8.b     // Catch: java.lang.Throwable -> La6
                boolean r8 = r8.d()     // Catch: java.lang.Throwable -> La6
                if (r8 == 0) goto L42
                java.lang.String r8 = r7.f     // Catch: java.lang.Throwable -> La6
                com.loc.m.a(r0, r8)     // Catch: java.lang.Throwable -> La6
            L42:
                com.loc.br r8 = r7.h     // Catch: java.lang.Throwable -> La6
                com.loc.br$c r1 = r7.c     // Catch: java.lang.Throwable -> La6
                java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> La6
                boolean r8 = com.loc.br.a(r8, r1)     // Catch: java.lang.Throwable -> La6
                if (r8 == 0) goto L82
                com.loc.br$c r1 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.m.c(r1)     // Catch: java.lang.Throwable -> La6
                com.loc.br$a r1 = r7.d     // Catch: java.lang.Throwable -> La6
                r2 = 1
                com.loc.m.a(r2, r1)     // Catch: java.lang.Throwable -> La6
                com.loc.br$c r1 = r7.c     // Catch: java.lang.Throwable -> La6
                long r3 = r1.f     // Catch: java.lang.Throwable -> La6
                int r1 = com.loc.m.e     // Catch: java.lang.Throwable -> La6
                long r5 = (long) r1     // Catch: java.lang.Throwable -> La6
                int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r1 <= 0) goto L82
                com.loc.br$c r1 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.br$c r1 = r1.a()     // Catch: java.lang.Throwable -> La6
                if (r1 == 0) goto L82
                r1.m = r2     // Catch: java.lang.Throwable -> La6
                com.loc.m.b(r1)     // Catch: java.lang.Throwable -> La6
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
                java.lang.String r3 = "!!!finish&error-"
                r2.<init>(r3)     // Catch: java.lang.Throwable -> La6
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La6
                r2.append(r1)     // Catch: java.lang.Throwable -> La6
                com.loc.br.a()     // Catch: java.lang.Throwable -> La6
            L82:
                java.net.URL r1 = r7.g     // Catch: java.lang.Throwable -> La6
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La6
                com.loc.br$c r2 = r7.c     // Catch: java.lang.Throwable -> La6
                com.loc.bt$b r2 = r2.b     // Catch: java.lang.Throwable -> La6
                boolean r2 = r2.c()     // Catch: java.lang.Throwable -> La6
                com.loc.m.a(r1, r2, r0, r8)     // Catch: java.lang.Throwable -> La6
                java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
                java.lang.String r0 = "!!!finish-"
                r8.<init>(r0)     // Catch: java.lang.Throwable -> La6
                com.loc.br$c r0 = r7.c     // Catch: java.lang.Throwable -> La6
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La6
                r8.append(r0)     // Catch: java.lang.Throwable -> La6
                com.loc.br.a()     // Catch: java.lang.Throwable -> La6
            La6:
                return
        }

        public final void b() {
                r5 = this;
                com.loc.br$c r0 = r5.c
                long r1 = android.os.SystemClock.elapsedRealtime()
                long r3 = r5.b
                long r1 = r1 - r3
                r0.i = r1
                return
        }

        public final void b(int r2) {
                r1 = this;
                com.loc.br$c r0 = r1.c
                r0.n = r2
                return
        }

        public final void c() {
                r5 = this;
                com.loc.br$c r0 = r5.c
                long r1 = android.os.SystemClock.elapsedRealtime()
                long r3 = r5.b
                long r1 = r1 - r3
                r0.j = r1
                return
        }

        public final void d() {
                r6 = this;
                com.loc.br$c r0 = r6.c
                com.loc.br$c r0 = r0.a()
                com.loc.br$c r1 = r6.c
                long r1 = r1.f
                int r3 = com.loc.m.e
                long r3 = (long) r3
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 <= 0) goto L14
                r1 = 1
                r0.m = r1
            L14:
                com.loc.m.a(r0)
                return
        }
    }

    static {
            return
    }

    br() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.d = r0
            r1 = -1
            r3.e = r1
            r1 = 0
            r3.f = r1
            java.lang.String r1 = ""
            r3.j = r1
            r3.o = r0
            r3.p = r0
            r3.q = r1
            r3.r = r1
            r3.s = r1
            com.loc.br$f r0 = new com.loc.br$f
            r0.<init>(r3)
            r3.u = r0
            com.loc.m.e()
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "-"
            java.lang.String r0 = r0.replaceAll(r2, r1)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> L3b
            r3.g = r0     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r0 = move-exception
            java.lang.String r1 = "ht"
            java.lang.String r2 = "ic"
            com.loc.as.a(r0, r1, r2)
            return
    }

    private static int a(java.lang.Exception r1) {
            boolean r0 = r1 instanceof javax.net.ssl.SSLHandshakeException
            if (r0 == 0) goto L7
            r1 = 4101(0x1005, float:5.747E-42)
            return r1
        L7:
            boolean r0 = r1 instanceof javax.net.ssl.SSLKeyException
            if (r0 == 0) goto Le
            r1 = 4102(0x1006, float:5.748E-42)
            return r1
        Le:
            boolean r0 = r1 instanceof javax.net.ssl.SSLProtocolException
            if (r0 == 0) goto L15
            r1 = 4103(0x1007, float:5.75E-42)
            return r1
        L15:
            boolean r0 = r1 instanceof javax.net.ssl.SSLPeerUnverifiedException
            if (r0 == 0) goto L1c
            r1 = 4104(0x1008, float:5.751E-42)
            return r1
        L1c:
            boolean r0 = r1 instanceof java.net.ConnectException
            if (r0 == 0) goto L23
            r1 = 6101(0x17d5, float:8.55E-42)
            return r1
        L23:
            boolean r0 = r1 instanceof java.net.SocketException
            if (r0 == 0) goto L2a
            r1 = 6102(0x17d6, float:8.551E-42)
            return r1
        L2a:
            boolean r0 = r1 instanceof org.apache.http.conn.ConnectTimeoutException
            if (r0 == 0) goto L31
            r1 = 2101(0x835, float:2.944E-42)
            return r1
        L31:
            boolean r1 = r1 instanceof java.net.SocketTimeoutException
            if (r1 == 0) goto L38
            r1 = 2102(0x836, float:2.946E-42)
            return r1
        L38:
            r1 = 0
            return r1
    }

    private com.loc.bu a(com.loc.br.b r15) throws com.loc.k, java.io.IOException {
            r14 = this;
            java.lang.String r0 = "par"
            java.lang.String r1 = "ht"
            java.lang.String r2 = ""
            r3 = 0
            com.loc.bq.a()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.net.HttpURLConnection r15 = r15.a     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.util.Map r4 = r15.getHeaderFields()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            int r5 = r15.getResponseCode()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r6 = 2
            r7 = 1
            r8 = 0
            if (r4 == 0) goto L9f
            java.lang.String r9 = "gsid"
            java.lang.Object r9 = r4.get(r9)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.util.List r9 = (java.util.List) r9     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            if (r9 == 0) goto L30
            int r10 = r9.size()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            if (r10 <= 0) goto L30
            java.lang.Object r9 = r9.get(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r2 = r9
        L30:
            com.loc.br$f r9 = r14.u     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r10 = b(r4)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            com.loc.br$c r9 = r9.c     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r9.k = r10     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r9 = r14.j     // Catch: java.lang.Throwable -> L9f
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L9f
            if (r9 != 0) goto L9f
            boolean r9 = r14.o     // Catch: java.lang.Throwable -> L9f
            if (r9 == 0) goto L5c
            java.lang.String r9 = "sc"
            boolean r9 = r4.containsKey(r9)     // Catch: java.lang.Throwable -> L9f
            if (r9 == 0) goto L54
            boolean r9 = r14.a(r4, r8)     // Catch: java.lang.Throwable -> L9f
            r10 = 1
            goto L61
        L54:
            java.lang.String r9 = r14.j     // Catch: java.lang.Throwable -> L9f
            com.loc.m.e(r9)     // Catch: java.lang.Throwable -> L9f
            r9 = 0
            r10 = 0
            goto L61
        L5c:
            boolean r9 = r14.a(r4, r7)     // Catch: java.lang.Throwable -> L9f
            r10 = 2
        L61:
            if (r9 == 0) goto L97
            java.lang.String r11 = r14.j     // Catch: java.lang.Throwable -> L95
            java.lang.String r12 = "loc"
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Throwable -> L95
            if (r11 == 0) goto L8a
            java.lang.String r11 = r14.s     // Catch: java.lang.Throwable -> L95
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L95
            if (r12 == 0) goto L7d
            java.net.URL r11 = r15.getURL()     // Catch: java.lang.Throwable -> L95
            java.lang.String r11 = r11.getHost()     // Catch: java.lang.Throwable -> L95
        L7d:
            java.lang.String r12 = r14.j     // Catch: java.lang.Throwable -> L95
            if (r10 != r6) goto L83
            r10 = 1
            goto L84
        L83:
            r10 = 0
        L84:
            java.lang.String r13 = r14.n     // Catch: java.lang.Throwable -> L95
            com.loc.m.a(r12, r10, r11, r11, r13)     // Catch: java.lang.Throwable -> L95
            goto La0
        L8a:
            java.lang.String r11 = r14.j     // Catch: java.lang.Throwable -> L95
            if (r10 != r6) goto L90
            r10 = 1
            goto L91
        L90:
            r10 = 0
        L91:
            com.loc.m.b(r11, r10)     // Catch: java.lang.Throwable -> L95
            goto La0
        L95:
            goto La0
        L97:
            if (r10 != r7) goto La0
            java.lang.String r10 = r14.j     // Catch: java.lang.Throwable -> L95
            com.loc.bq.a(r8, r10)     // Catch: java.lang.Throwable -> L95
            goto La0
        L9f:
            r9 = 0
        La0:
            r10 = 200(0xc8, float:2.8E-43)
            if (r5 != r10) goto L16d
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r5.<init>()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            com.loc.br$f r10 = r14.u     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L158 java.net.SocketTimeoutException -> L15f org.apache.http.conn.ConnectTimeoutException -> L166
            long r11 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L158 java.net.SocketTimeoutException -> L15f org.apache.http.conn.ConnectTimeoutException -> L166
            r10.b = r11     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L158 java.net.SocketTimeoutException -> L15f org.apache.http.conn.ConnectTimeoutException -> L166
            java.io.InputStream r10 = r15.getInputStream()     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L158 java.net.SocketTimeoutException -> L15f org.apache.http.conn.ConnectTimeoutException -> L166
            java.io.PushbackInputStream r11 = new java.io.PushbackInputStream     // Catch: java.lang.Throwable -> L141 java.io.IOException -> L145 java.net.SocketTimeoutException -> L149 org.apache.http.conn.ConnectTimeoutException -> L14d
            r11.<init>(r10, r6)     // Catch: java.lang.Throwable -> L141 java.io.IOException -> L145 java.net.SocketTimeoutException -> L149 org.apache.http.conn.ConnectTimeoutException -> L14d
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r11.read(r6)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r11.unread(r6)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r12 = r6[r8]     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r13 = 31
            if (r12 != r13) goto Ld5
            r6 = r6[r7]     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r7 = -117(0xffffffffffffff8b, float:NaN)
            if (r6 != r7) goto Ld5
            java.util.zip.GZIPInputStream r6 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.<init>(r11)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r3 = r6
            goto Ld6
        Ld5:
            r3 = r11
        Ld6:
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
        Lda:
            int r7 = r3.read(r6)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r12 = -1
            if (r7 == r12) goto Le5
            r5.write(r6, r8, r7)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            goto Lda
        Le5:
            com.loc.br$f r6 = r14.u     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.c()     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            com.loc.av.c()     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            com.loc.bu r6 = new com.loc.bu     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.<init>()     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            byte[] r7 = r5.toByteArray()     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.a = r7     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.b = r4     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            java.lang.String r4 = r14.g     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.c = r4     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.d = r2     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r6.e = r9     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            java.net.URL r15 = r15.getURL()     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            com.loc.bq.a(r15, r6)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            com.loc.br$f r15 = r14.u     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            byte[] r4 = r6.a     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            int r4 = r4.length     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            long r7 = (long) r4     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r15.a(r7)     // Catch: java.lang.Throwable -> L135 java.io.IOException -> L138 java.net.SocketTimeoutException -> L13b org.apache.http.conn.ConnectTimeoutException -> L13e
            r5.close()     // Catch: java.lang.Throwable -> L116
            goto L11a
        L116:
            r15 = move-exception
            com.loc.as.a(r15, r1, r0)
        L11a:
            if (r10 == 0) goto L124
            r10.close()     // Catch: java.lang.Throwable -> L120
            goto L124
        L120:
            r15 = move-exception
            com.loc.as.a(r15, r1, r0)
        L124:
            r11.close()     // Catch: java.lang.Throwable -> L128
            goto L12c
        L128:
            r15 = move-exception
            com.loc.as.a(r15, r1, r0)
        L12c:
            r3.close()     // Catch: java.lang.Throwable -> L130
            goto L134
        L130:
            r15 = move-exception
            com.loc.as.a(r15, r1, r0)
        L134:
            return r6
        L135:
            r15 = move-exception
            r4 = r3
            goto L155
        L138:
            r15 = move-exception
            r4 = r3
            goto L15c
        L13b:
            r15 = move-exception
            r2 = r3
            goto L163
        L13e:
            r15 = move-exception
            r2 = r3
            goto L16a
        L141:
            r15 = move-exception
            r4 = r3
            r11 = r4
            goto L155
        L145:
            r15 = move-exception
            r4 = r3
            r11 = r4
            goto L15c
        L149:
            r15 = move-exception
            r2 = r3
            r11 = r2
            goto L163
        L14d:
            r15 = move-exception
            r2 = r3
            r11 = r2
            goto L16a
        L151:
            r15 = move-exception
            r4 = r3
            r10 = r4
            r11 = r10
        L155:
            r3 = r5
            goto L1f9
        L158:
            r15 = move-exception
            r4 = r3
            r10 = r4
            r11 = r10
        L15c:
            r3 = r5
            goto L1c3
        L15f:
            r15 = move-exception
            r2 = r3
            r10 = r2
            r11 = r10
        L163:
            r3 = r5
            goto L1f1
        L166:
            r15 = move-exception
            r2 = r3
            r10 = r2
            r11 = r10
        L16a:
            r3 = r5
            goto L1f6
        L16d:
            com.loc.k r6 = new com.loc.k     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = "网络异常原因："
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = r15.getResponseMessage()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = " 网络异常状态码："
            r7.append(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r7.append(r5)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = "  "
            r7.append(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r7.append(r2)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = " "
            r7.append(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = r14.g     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r8 = r14.g     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r6.<init>(r7, r2, r8)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            java.lang.String r15 = r15.getResponseMessage()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r6.a(r15)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r6.a(r4)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            com.loc.br$f r15 = r14.u     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r15.b(r5)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            com.loc.br$f r15 = r14.u     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r4 = 10
            r15.a(r4)     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            r6.h()     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
            throw r6     // Catch: java.lang.Throwable -> L1ba java.io.IOException -> L1bf java.net.SocketTimeoutException -> L1ed org.apache.http.conn.ConnectTimeoutException -> L1f2
        L1ba:
            r15 = move-exception
            r4 = r3
            r10 = r4
            r11 = r10
            goto L1f9
        L1bf:
            r15 = move-exception
            r4 = r3
            r10 = r4
            r11 = r10
        L1c3:
            boolean r5 = r15 instanceof java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L1eb
            if (r5 == 0) goto L1ea
            com.loc.k r5 = new com.loc.k     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r6 = "IO 操作异常 - IOException"
            java.lang.String r7 = r14.g     // Catch: java.lang.Throwable -> L1eb
            r5.<init>(r6, r2, r7)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r2 = r15.getMessage()     // Catch: java.lang.Throwable -> L1eb
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1eb
            if (r2 != 0) goto L1e9
            java.lang.String r15 = r15.getMessage()     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r2 = "thread interrupted"
            boolean r15 = r15.equals(r2)     // Catch: java.lang.Throwable -> L1eb
            if (r15 == 0) goto L1e9
            r5.j()     // Catch: java.lang.Throwable -> L1eb
        L1e9:
            throw r5     // Catch: java.lang.Throwable -> L1eb
        L1ea:
            throw r15     // Catch: java.lang.Throwable -> L1eb
        L1eb:
            r15 = move-exception
            goto L1f9
        L1ed:
            r15 = move-exception
            r2 = r3
            r10 = r2
            r11 = r10
        L1f1:
            throw r15     // Catch: java.lang.Throwable -> L1f7
        L1f2:
            r15 = move-exception
            r2 = r3
            r10 = r2
            r11 = r10
        L1f6:
            throw r15     // Catch: java.lang.Throwable -> L1f7
        L1f7:
            r15 = move-exception
            r4 = r2
        L1f9:
            if (r3 == 0) goto L203
            r3.close()     // Catch: java.lang.Throwable -> L1ff
            goto L203
        L1ff:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L203:
            if (r10 == 0) goto L20d
            r10.close()     // Catch: java.lang.Throwable -> L209
            goto L20d
        L209:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L20d:
            if (r11 == 0) goto L217
            r11.close()     // Catch: java.lang.Throwable -> L213
            goto L217
        L213:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L217:
            if (r4 == 0) goto L221
            r4.close()     // Catch: java.lang.Throwable -> L21d
            goto L221
        L21d:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L221:
            throw r15
    }

    static java.lang.String a(com.loc.br r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    private static java.lang.String a(java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            android.content.Context r1 = com.loc.m.c
            if (r1 == 0) goto Ld
            android.content.Context r1 = com.loc.m.c
            java.lang.String r1 = com.loc.x.a(r1)
            goto Lf
        Ld:
            java.lang.String r1 = ""
        Lf:
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r4
            r4 = 1
            r2[r4] = r5
            r4 = 2
            r2[r4] = r0
            r4 = 3
            r2[r4] = r1
            java.lang.String r4 = "platform=Android&sdkversion=%s&product=%s&manufacture=%s&abitype=%s"
            java.lang.String r4 = java.lang.String.format(r4, r2)
            return r4
    }

    static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r4) {
            if (r4 == 0) goto L4f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Lf:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L2b
            java.lang.String r1 = ""
        L2b:
            int r3 = r0.length()
            if (r3 <= 0) goto L36
            java.lang.String r3 = "&"
            r0.append(r3)
        L36:
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            java.lang.String r2 = "="
            r0.append(r2)
            java.lang.String r1 = java.net.URLEncoder.encode(r1)
            r0.append(r1)
            goto Lf
        L4a:
            java.lang.String r4 = r0.toString()
            return r4
        L4f:
            r4 = 0
            return r4
    }

    public static void a() {
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.String> r5, java.net.HttpURLConnection r6) {
            r4 = this;
            if (r5 == 0) goto L20
            java.util.Set r0 = r5.keySet()     // Catch: java.lang.Throwable -> L12d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L12d
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L12d
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L12d
            java.lang.Object r2 = r5.get(r1)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r1, r2)     // Catch: java.lang.Throwable -> L12d
            goto La
        L20:
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.loc.bo.d     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L46
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.loc.bo.d     // Catch: java.lang.Throwable -> L12d
            java.util.Set r5 = r5.keySet()     // Catch: java.lang.Throwable -> L12d
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L12d
        L2e:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Throwable -> L12d
            if (r0 == 0) goto L46
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L12d
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.loc.bo.d     // Catch: java.lang.Throwable -> L12d
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r0, r1)     // Catch: java.lang.Throwable -> L12d
            goto L2e
        L46:
            java.lang.String r5 = r4.m     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = "/v3/iasdkauth"
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = ""
            if (r5 != 0) goto Lab
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L12d
            if (r5 != 0) goto Lab
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            boolean r5 = com.loc.m.d(r5)     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto Lab
            r5 = 1
            r4.o = r5     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            com.loc.m$g r5 = com.loc.m.f(r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "lct"
            long r2 = r5.a     // Catch: java.lang.Throwable -> L12d
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r1, r2)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "lct-info"
            java.lang.String r5 = r5.b     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r1, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = com.loc.m.a(r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "aks"
            java.lang.String r5 = com.loc.m.c(r5)     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r1, r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            com.loc.w r5 = com.loc.m.b(r5)     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L9f
            java.lang.String r5 = r4.j     // Catch: java.lang.Throwable -> L12d
            com.loc.w r5 = com.loc.m.b(r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r5.b()     // Catch: java.lang.Throwable -> L12d
            goto La0
        L9f:
            r5 = r0
        La0:
            java.lang.String r1 = "lct-args"
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = a(r5, r2)     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r1, r5)     // Catch: java.lang.Throwable -> L12d
        Lab:
            java.lang.String r5 = "csid"
            java.lang.String r1 = r4.g     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r5, r1)     // Catch: java.lang.Throwable -> L12d
            com.loc.br$f r5 = r4.u     // Catch: java.lang.Throwable -> L12d
            com.loc.br$c r5 = r5.c     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r5.e     // Catch: java.lang.Throwable -> L12d
            boolean r5 = r4.a(r5)     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L12c
            com.loc.br$f r5 = r4.u     // Catch: java.lang.Throwable -> L12d
            com.loc.br$c r1 = r5.c     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = r1.c     // Catch: java.lang.Throwable -> L12d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L12d
            if (r1 == 0) goto Lcb
            goto Lf7
        Lcb:
            com.loc.br$c r0 = r5.c     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L12d
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L12d
            java.lang.String r1 = "YXBtX25ldHdvcmtf"
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L12d
            byte[] r0 = com.loc.bk.a(r0, r1)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r0 = com.loc.p.b(r0)     // Catch: java.lang.Throwable -> L12d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12d
            java.lang.String r2 = "上报本次请求serverIp:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12d
            com.loc.br$c r5 = r5.c     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = r5.c     // Catch: java.lang.Throwable -> L12d
            r1.append(r5)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r5 = "加密后："
            r1.append(r5)     // Catch: java.lang.Throwable -> L12d
            r1.append(r0)     // Catch: java.lang.Throwable -> L12d
        Lf7:
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L12d
            if (r5 != 0) goto L102
            java.lang.String r5 = "sip"
            r6.addRequestProperty(r5, r0)     // Catch: java.lang.Throwable -> L12d
        L102:
            boolean r5 = com.loc.m.j     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L119
            com.loc.br$c r5 = com.loc.m.g()     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L119
            java.lang.String r0 = "nls"
            java.lang.String r1 = r5.b()     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r0, r1)     // Catch: java.lang.Throwable -> L12d
            com.loc.br$f r0 = r4.u     // Catch: java.lang.Throwable -> L12d
            r0.e = r5     // Catch: java.lang.Throwable -> L12d
        L119:
            com.loc.br$a r5 = com.loc.m.f()     // Catch: java.lang.Throwable -> L12d
            if (r5 == 0) goto L12c
            java.lang.String r0 = "nlf"
            java.lang.String r1 = r5.b()     // Catch: java.lang.Throwable -> L12d
            r6.addRequestProperty(r0, r1)     // Catch: java.lang.Throwable -> L12d
            com.loc.br$f r6 = r4.u     // Catch: java.lang.Throwable -> L12d
            r6.d = r5     // Catch: java.lang.Throwable -> L12d
        L12c:
            return
        L12d:
            r5 = move-exception
            java.lang.String r6 = "ht"
            java.lang.String r0 = "adh"
            com.loc.as.a(r5, r6, r0)
            return
    }

    static boolean a(com.loc.br r0, java.lang.String r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.l
            if (r0 != 0) goto L29
            java.lang.String r0 = r2.n
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.n
            java.lang.String r1 = "rest"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L29
            java.lang.String r0 = r2.n
            java.lang.String r1 = "apilocate"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L29
        L20:
            boolean r3 = b(r3)
            if (r3 == 0) goto L27
            goto L29
        L27:
            r3 = 0
            return r3
        L29:
            r3 = 1
            return r3
    }

    private boolean a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = "#"
            java.lang.String r1 = "lct"
            r2 = 1
            r3 = 0
            java.lang.String r4 = "sc"
            java.lang.Object r4 = r7.get(r4)     // Catch: java.lang.Throwable -> L62
            java.util.List r4 = (java.util.List) r4     // Catch: java.lang.Throwable -> L62
            if (r4 == 0) goto L3c
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L62
            if (r5 <= 0) goto L3c
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L62
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L62
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L3c
            boolean r5 = r4.contains(r0)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L2a
        L28:
            r0 = 1
            goto L3d
        L2a:
            java.lang.String[] r0 = r4.split(r0)     // Catch: java.lang.Throwable -> L62
            int r4 = r0.length     // Catch: java.lang.Throwable -> L62
            if (r4 <= r2) goto L3c
            java.lang.String r4 = "1"
            r0 = r0[r2]     // Catch: java.lang.Throwable -> L62
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L62
            if (r0 == 0) goto L3c
            goto L28
        L3c:
            r0 = 0
        L3d:
            if (r0 != 0) goto L40
            return r3
        L40:
            if (r8 == 0) goto L63
            boolean r8 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L62
            if (r8 == 0) goto L62
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L62
            java.util.List r7 = (java.util.List) r7     // Catch: java.lang.Throwable -> L62
            if (r7 == 0) goto L62
            int r8 = r7.size()     // Catch: java.lang.Throwable -> L62
            if (r8 <= 0) goto L62
            long r7 = com.loc.m.a(r7)     // Catch: java.lang.Throwable -> L62
            java.lang.String r0 = r6.j     // Catch: java.lang.Throwable -> L62
            boolean r7 = com.loc.m.a(r0, r7)     // Catch: java.lang.Throwable -> L62
            r2 = r7
            goto L63
        L62:
            r2 = 0
        L63:
            return r2
    }

    private com.loc.bs b() {
            r5 = this;
            r0 = 0
            java.lang.ref.SoftReference<com.loc.bs> r1 = com.loc.br.t     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto Ld
            java.lang.ref.SoftReference<com.loc.bs> r1 = com.loc.br.t     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L1d
        Ld:
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference     // Catch: java.lang.Throwable -> L37
            com.loc.bs r2 = new com.loc.bs     // Catch: java.lang.Throwable -> L37
            android.content.Context r3 = com.loc.m.c     // Catch: java.lang.Throwable -> L37
            javax.net.ssl.SSLContext r4 = r5.b     // Catch: java.lang.Throwable -> L37
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            com.loc.br.t = r1     // Catch: java.lang.Throwable -> L37
        L1d:
            java.lang.ref.SoftReference<javax.net.ssl.SSLContext> r1 = com.loc.br.k     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto L2a
            java.lang.ref.SoftReference<com.loc.bs> r1 = com.loc.br.t     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L37
            com.loc.bs r1 = (com.loc.bs) r1     // Catch: java.lang.Throwable -> L37
            goto L2b
        L2a:
            r1 = r0
        L2b:
            if (r1 != 0) goto L36
            com.loc.bs r1 = new com.loc.bs     // Catch: java.lang.Throwable -> L37
            android.content.Context r2 = com.loc.m.c     // Catch: java.lang.Throwable -> L37
            javax.net.ssl.SSLContext r3 = r5.b     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L37
        L36:
            return r1
        L37:
            r1 = move-exception
            java.lang.String r2 = "ht"
            java.lang.String r3 = "gsf"
            com.loc.av.b(r1, r2, r3)
            return r0
    }

    private static java.lang.String b(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4) {
            java.lang.String r0 = "#"
            java.lang.String r1 = ""
            java.lang.String r2 = "sc"
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L34
            java.util.List r4 = (java.util.List) r4     // Catch: java.lang.Throwable -> L34
            if (r4 == 0) goto L34
            int r2 = r4.size()     // Catch: java.lang.Throwable -> L34
            if (r2 <= 0) goto L34
            r2 = 0
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L34
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L34
            if (r3 != 0) goto L34
            boolean r3 = r4.contains(r0)     // Catch: java.lang.Throwable -> L34
            if (r3 != 0) goto L29
        L27:
            r1 = r4
            goto L34
        L29:
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Throwable -> L34
            int r0 = r4.length     // Catch: java.lang.Throwable -> L34
            r3 = 1
            if (r0 <= r3) goto L34
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L34
            goto L27
        L34:
            return r1
    }

    private void b(com.loc.bt r3) throws com.loc.k {
            r2 = this;
            com.loc.br$d r0 = new com.loc.br$d
            r1 = 0
            r0.<init>(r1)
            r2.i = r0
            boolean r0 = r3.y()
            r2.p = r0
            java.net.Proxy r0 = r3.o()
            r2.c = r0
            com.loc.bo$a r0 = r3.t()
            r2.h = r0
            boolean r0 = r3.q()
            r2.l = r0
            java.lang.String r0 = r3.z()
            r2.j = r0
            com.loc.q r0 = com.loc.q.a()
            boolean r1 = r3.s()
            boolean r0 = r0.a(r1)
            r2.a = r0
            com.loc.bt$b r0 = r3.u()
            boolean r0 = r0.b()
            if (r0 == 0) goto L43
            java.lang.String r0 = r3.m()
            goto L47
        L43:
            java.lang.String r0 = r3.l()
        L47:
            r2.m = r0
            java.lang.String r1 = r2.j
            java.lang.String r0 = com.loc.bq.a(r0, r1)
            r2.m = r0
            java.lang.String r0 = r3.g()
            r2.n = r0
            java.lang.String r0 = r2.j
            java.lang.String r1 = "loc"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L9a
            java.lang.String r0 = r3.l()
            java.lang.String r3 = r3.m()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7c
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L7b
            r1.<init>(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.String r0 = r1.getHost()     // Catch: java.lang.Exception -> L7b
            r2.r = r0     // Catch: java.lang.Exception -> L7b
            goto L7c
        L7b:
        L7c:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L9a
            java.lang.String r0 = r2.n     // Catch: java.lang.Exception -> L9a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L9a
            if (r0 != 0) goto L8f
            java.lang.String r3 = r2.n     // Catch: java.lang.Exception -> L9a
            r2.q = r3     // Catch: java.lang.Exception -> L9a
            return
        L8f:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L9a
            r0.<init>(r3)     // Catch: java.lang.Exception -> L9a
            java.lang.String r3 = r0.getHost()     // Catch: java.lang.Exception -> L9a
            r2.q = r3     // Catch: java.lang.Exception -> L9a
        L9a:
            return
    }

    static boolean b(com.loc.br r0) {
            boolean r0 = r0.p
            return r0
    }

    private static boolean b(java.lang.String r1) {
            java.lang.String r0 = "rest"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "apilocate"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    private com.loc.br.b c(com.loc.bt r15) throws java.io.IOException, com.loc.k {
            r14 = this;
            java.lang.String r0 = "TLS"
            com.loc.br$f r1 = r14.u
            com.loc.bt$b r2 = r15.u()
            com.loc.br$c r3 = r1.c
            com.loc.br r4 = r1.h
            java.lang.String r4 = r4.g
            r3.a = r4
            com.loc.br$c r3 = r1.c
            r3.b = r2
            long r2 = android.os.SystemClock.elapsedRealtime()
            r1.a = r2
            java.util.Map r1 = r15.a()
            if (r1 != 0) goto L25
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        L25:
            com.loc.br$d r2 = r14.i
            java.lang.String r3 = r14.n
            com.loc.br$e r2 = r2.a(r3)
            int r3 = com.loc.bo.a
            java.lang.String r4 = r14.m
            android.net.Uri r5 = android.net.Uri.parse(r4)
            java.lang.String r6 = r5.getHost()
            java.lang.String r7 = ""
            r8 = 0
            r9 = 1
            if (r3 == r9) goto L55
            r10 = 2
            if (r3 == r10) goto L45
            r3 = r7
        L43:
            r10 = 1
            goto L58
        L45:
            java.util.HashMap<java.lang.String, java.lang.String> r3 = com.loc.bo.c
            if (r3 == 0) goto L52
            java.util.HashMap<java.lang.String, java.lang.String> r3 = com.loc.bo.c
            java.lang.Object r3 = r3.get(r6)
            java.lang.String r3 = (java.lang.String) r3
            goto L53
        L52:
            r3 = r7
        L53:
            r10 = 0
            goto L58
        L55:
            java.lang.String r3 = com.loc.bo.b
            goto L43
        L58:
            boolean r11 = android.text.TextUtils.isEmpty(r3)
            if (r11 != 0) goto L85
            r15.w()
            android.net.Uri$Builder r4 = r5.buildUpon()
            android.net.Uri$Builder r4 = r4.encodedAuthority(r3)
            android.net.Uri r4 = r4.build()
            java.lang.String r4 = r4.toString()
            if (r10 == 0) goto L7c
            if (r1 == 0) goto L7c
            java.lang.String r5 = "targetHost"
            r1.put(r5, r6)
            r14.s = r6
        L7c:
            if (r10 == 0) goto L85
            boolean r5 = r14.a
            if (r5 == 0) goto L85
            r2.a(r3)
        L85:
            r14.m = r4
            java.net.URL r3 = new java.net.URL
            java.lang.String r4 = r14.m
            r3.<init>(r4)
            com.loc.br$f r4 = r14.u
            r4.a(r15, r3)
            java.lang.String r3 = r3.getHost()
            boolean r3 = b(r3)
            if (r3 == 0) goto L1b5
            boolean r3 = r15.h()
            if (r3 == 0) goto L1b5
            com.loc.bt$b r3 = r15.u()
            com.loc.br$f r4 = r14.u
            com.loc.br$c r4 = r4.c
            java.lang.String r4 = r4.e
            boolean r5 = r14.a(r4)
            if (r5 == 0) goto Lcc
            boolean r5 = r3.b()
            if (r5 == 0) goto Lbf
            boolean r5 = com.loc.m.g
            if (r5 == 0) goto Lbf
        Lbd:
            r3 = 1
            goto Lcd
        Lbf:
            boolean r3 = r3.c()
            if (r3 == 0) goto Lcc
            boolean r3 = com.loc.m.h(r4)
            if (r3 == 0) goto Lcc
            goto Lbd
        Lcc:
            r3 = 0
        Lcd:
            if (r3 == 0) goto L1b5
            com.loc.br$f r3 = r14.u     // Catch: java.lang.Throwable -> L1b4
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1b4
            r3.b = r4     // Catch: java.lang.Throwable -> L1b4
            com.loc.br$f r3 = r14.u     // Catch: java.lang.Throwable -> L1b4
            com.loc.br$c r3 = r3.c     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r3 = r3.e     // Catch: java.lang.Throwable -> L1b4
            java.net.InetAddress[] r3 = java.net.InetAddress.getAllByName(r3)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r4 = "]"
            java.lang.String r5 = "["
            if (r3 == 0) goto L160
            int r6 = r3.length     // Catch: java.lang.Throwable -> L1b4
            if (r6 <= 0) goto L160
            r6 = r3[r8]     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto L160
            boolean r6 = com.loc.m.a()     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto Lfc
            boolean r6 = com.loc.m.c()     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto Lfc
            r6 = 1
            goto Lfd
        Lfc:
            r6 = 0
        Lfd:
            java.lang.String r10 = "---canUseIpv6---"
            java.lang.String r11 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L1b4
            r10.concat(r11)     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto L12b
            r6 = 0
        L109:
            int r10 = r3.length     // Catch: java.lang.Throwable -> L1b4
            if (r6 >= r10) goto L13f
            r10 = r3[r6]     // Catch: java.lang.Throwable -> L1b4
            boolean r10 = r10 instanceof java.net.Inet6Address     // Catch: java.lang.Throwable -> L1b4
            if (r10 == 0) goto L128
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b4
            r10.<init>(r5)     // Catch: java.lang.Throwable -> L1b4
            r6 = r3[r6]     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r6 = r6.getHostAddress()     // Catch: java.lang.Throwable -> L1b4
            r10.append(r6)     // Catch: java.lang.Throwable -> L1b4
            r10.append(r4)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r6 = r10.toString()     // Catch: java.lang.Throwable -> L1b4
            goto L140
        L128:
            int r6 = r6 + 1
            goto L109
        L12b:
            r6 = 0
        L12c:
            int r10 = r3.length     // Catch: java.lang.Throwable -> L1b4
            if (r6 >= r10) goto L13f
            r10 = r3[r6]     // Catch: java.lang.Throwable -> L1b4
            boolean r10 = r10 instanceof java.net.Inet4Address     // Catch: java.lang.Throwable -> L1b4
            if (r10 == 0) goto L13c
            r6 = r3[r6]     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r6 = r6.getHostAddress()     // Catch: java.lang.Throwable -> L1b4
            goto L140
        L13c:
            int r6 = r6 + 1
            goto L12c
        L13f:
            r6 = r7
        L140:
            boolean r10 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1b4
            if (r10 == 0) goto L161
            r3 = r3[r8]     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r6 = r3.getHostAddress()     // Catch: java.lang.Throwable -> L1b4
            boolean r3 = r3 instanceof java.net.Inet6Address     // Catch: java.lang.Throwable -> L1b4
            if (r3 == 0) goto L161
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b4
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L1b4
            r3.append(r6)     // Catch: java.lang.Throwable -> L1b4
            r3.append(r4)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L1b4
            goto L161
        L160:
            r6 = r7
        L161:
            com.loc.br$f r3 = r14.u     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r10 = "---onDNSEnd---ip="
            java.lang.String r11 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L1b4
            r10.concat(r11)     // Catch: java.lang.Throwable -> L1b4
            com.loc.br$c r10 = r3.c     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r5 = r6.replace(r5, r7)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r4 = r5.replace(r4, r7)     // Catch: java.lang.Throwable -> L1b4
            r10.c = r4     // Catch: java.lang.Throwable -> L1b4
            com.loc.br$c r4 = r3.c     // Catch: java.lang.Throwable -> L1b4
            long r10 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1b4
            long r12 = r3.b     // Catch: java.lang.Throwable -> L1b4
            long r10 = r10 - r12
            r4.g = r10     // Catch: java.lang.Throwable -> L1b4
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1b4
            if (r3 != 0) goto L1b5
            java.lang.String r3 = r14.m     // Catch: java.lang.Throwable -> L1b4
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r4 = r3.getHost()     // Catch: java.lang.Throwable -> L1b4
            android.net.Uri$Builder r3 = r3.buildUpon()     // Catch: java.lang.Throwable -> L1b4
            android.net.Uri$Builder r3 = r3.encodedAuthority(r6)     // Catch: java.lang.Throwable -> L1b4
            android.net.Uri r3 = r3.build()     // Catch: java.lang.Throwable -> L1b4
            r14.n = r4     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r5 = "host"
            r1.put(r5, r4)     // Catch: java.lang.Throwable -> L1b4
            boolean r5 = r14.a     // Catch: java.lang.Throwable -> L1b4
            if (r5 == 0) goto L1ad
            r2.b(r4)     // Catch: java.lang.Throwable -> L1b4
        L1ad:
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1b4
            r14.m = r3     // Catch: java.lang.Throwable -> L1b4
            goto L1b5
        L1b4:
        L1b5:
            boolean r3 = r14.a
            if (r3 == 0) goto L1c1
            java.lang.String r3 = r14.m
            java.lang.String r3 = com.loc.q.a(r3)
            r14.m = r3
        L1c1:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "是否降级="
            r3.<init>(r4)
            com.loc.bt$b r4 = r15.u()
            r3.append(r4)
            java.lang.String r4 = "-最终url="
            r3.append(r4)
            java.lang.String r4 = r14.m
            r3.append(r4)
            java.net.URL r3 = new java.net.URL
            java.lang.String r4 = r14.m
            r3.<init>(r4)
            com.loc.bo$a r4 = r14.h
            r5 = 0
            if (r4 == 0) goto L1ea
            java.net.URLConnection r4 = r4.a()
            goto L1eb
        L1ea:
            r4 = r5
        L1eb:
            if (r4 != 0) goto L1fa
            java.net.Proxy r4 = r14.c
            if (r4 == 0) goto L1f6
            java.net.URLConnection r4 = r3.openConnection(r4)
            goto L1fa
        L1f6:
            java.net.URLConnection r4 = r3.openConnection()
        L1fa:
            boolean r3 = r14.a
            if (r3 == 0) goto L260
            java.lang.ref.SoftReference<javax.net.ssl.SSLContext> r3 = com.loc.br.k     // Catch: java.lang.Throwable -> L222
            if (r3 == 0) goto L20a
            java.lang.ref.SoftReference<javax.net.ssl.SSLContext> r3 = com.loc.br.k     // Catch: java.lang.Throwable -> L222
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L222
            if (r3 != 0) goto L215
        L20a:
            java.lang.ref.SoftReference r3 = new java.lang.ref.SoftReference     // Catch: java.lang.Throwable -> L222
            javax.net.ssl.SSLContext r6 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.lang.Throwable -> L222
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L222
            com.loc.br.k = r3     // Catch: java.lang.Throwable -> L222
        L215:
            java.lang.ref.SoftReference<javax.net.ssl.SSLContext> r3 = com.loc.br.k     // Catch: java.lang.Throwable -> L222
            if (r3 == 0) goto L222
            java.lang.ref.SoftReference<javax.net.ssl.SSLContext> r3 = com.loc.br.k     // Catch: java.lang.Throwable -> L222
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L222
            javax.net.ssl.SSLContext r3 = (javax.net.ssl.SSLContext) r3     // Catch: java.lang.Throwable -> L222
            goto L223
        L222:
            r3 = r5
        L223:
            if (r3 != 0) goto L229
            javax.net.ssl.SSLContext r3 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.lang.Throwable -> L22f
        L229:
            r3.init(r5, r5, r5)     // Catch: java.lang.Throwable -> L22f
            r14.b = r3     // Catch: java.lang.Throwable -> L22f
            goto L237
        L22f:
            r0 = move-exception
            java.lang.String r3 = "ht"
            java.lang.String r5 = "ne"
            com.loc.as.a(r0, r3, r5)
        L237:
            javax.net.ssl.HttpsURLConnection r4 = (javax.net.ssl.HttpsURLConnection) r4
            boolean r0 = com.loc.m.f.a
            if (r0 == 0) goto L24d
            com.loc.bs r0 = r14.b()
            if (r0 == 0) goto L24d
            r3 = r4
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            r3.setSSLSocketFactory(r0)
            r0.a()
            goto L259
        L24d:
            r0 = r4
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0
            javax.net.ssl.SSLContext r3 = r14.b
            javax.net.ssl.SSLSocketFactory r3 = r3.getSocketFactory()
            r0.setSSLSocketFactory(r3)
        L259:
            r0 = r4
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0
            r0.setHostnameVerifier(r2)
            goto L262
        L260:
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4
        L262:
            java.lang.String r0 = android.os.Build.VERSION.SDK
            if (r0 == 0) goto L273
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 13
            if (r0 <= r2) goto L273
            java.lang.String r0 = "Connection"
            java.lang.String r2 = "close"
            r4.setRequestProperty(r0, r2)
        L273:
            int r15 = r15.v()
            long r2 = (long) r15
            com.loc.br$f r15 = r14.u
            com.loc.br$c r15 = r15.c
            long r5 = r15.g
            r10 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r10
            long r2 = r2 - r5
            int r15 = (int) r2
            r14.a(r1, r4)
            r4.setConnectTimeout(r15)
            r4.setReadTimeout(r15)
            java.lang.String r15 = "POST"
            r4.setRequestMethod(r15)
            r4.setUseCaches(r8)
            r4.setDoInput(r9)
            r4.setDoOutput(r9)
            com.loc.br$b r15 = new com.loc.br$b
            r15.<init>(r4)
            return r15
    }

    final com.loc.bu a(com.loc.bt r14) throws com.loc.k {
            r13 = this;
            java.lang.String r0 = "未知的错误"
            java.lang.String r1 = "IO 操作异常 - IOException"
            java.lang.String r2 = "mPt"
            java.lang.String r3 = "ht"
            r4 = 2
            r5 = 6
            r6 = 7
            r7 = 0
            r13.b(r14)     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            java.lang.String r8 = r13.m     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            java.lang.String r9 = r13.j     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            com.loc.bu r8 = com.loc.bq.b(r8, r9)     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            if (r8 == 0) goto L1f
            com.loc.br$f r14 = r13.u
            r14.d()
            return r8
        L1f:
            com.loc.br$b r8 = r13.c(r14)     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            java.net.HttpURLConnection r9 = r8.a     // Catch: java.lang.Throwable -> Lde com.loc.k -> Lef java.io.IOException -> L10b java.io.InterruptedIOException -> L11a java.net.SocketTimeoutException -> L12c java.net.SocketException -> L146 java.net.UnknownHostException -> L160 java.net.MalformedURLException -> L172 org.apache.http.conn.ConnectTimeoutException -> L185 java.net.ConnectException -> L19d javax.net.ssl.SSLException -> L1b7
            com.loc.br$f r10 = r13.u     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            long r11 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r10.b = r11     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r9.connect()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            com.loc.br$f r10 = r13.u     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r10.a()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            byte[] r10 = r14.d()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r10 == 0) goto L3e
            int r11 = r10.length     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r11 != 0) goto L5e
        L3e:
            java.util.Map r14 = r14.e()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            java.util.HashMap<java.lang.String, java.lang.String> r11 = com.loc.bo.e     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r11 == 0) goto L50
            if (r14 == 0) goto L4e
            java.util.HashMap<java.lang.String, java.lang.String> r11 = com.loc.bo.e     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r14.putAll(r11)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            goto L50
        L4e:
            java.util.HashMap<java.lang.String, java.lang.String> r14 = com.loc.bo.e     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L50:
            java.lang.String r14 = a(r14)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            boolean r11 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r11 != 0) goto L5e
            byte[] r10 = com.loc.x.a(r14)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L5e:
            if (r10 == 0) goto L9f
            int r14 = r10.length     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r14 <= 0) goto L9f
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L8b
            long r11 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L8b
            r14.b = r11     // Catch: java.lang.Throwable -> L8b
            java.io.OutputStream r14 = r9.getOutputStream()     // Catch: java.lang.Throwable -> L8b
            java.io.DataOutputStream r11 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L87
            r11.<init>(r14)     // Catch: java.lang.Throwable -> L87
            r11.write(r10)     // Catch: java.lang.Throwable -> L85
            r11.close()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r14 == 0) goto L7f
            r14.close()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L7f:
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r14.b()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            goto L9f
        L85:
            r7 = move-exception
            goto L8f
        L87:
            r8 = move-exception
            r11 = r7
            r7 = r8
            goto L8f
        L8b:
            r14 = move-exception
            r11 = r7
            r7 = r14
            r14 = r11
        L8f:
            if (r11 == 0) goto L94
            r11.close()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L94:
            if (r14 == 0) goto L99
            r14.close()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L99:
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r14.b()     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            throw r7     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
        L9f:
            com.loc.bu r14 = r13.a(r8)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            com.loc.br$f r7 = r13.u     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            r7.a(r14)     // Catch: java.lang.Throwable -> Lb8 com.loc.k -> Lbb java.io.IOException -> Lbe java.io.InterruptedIOException -> Lc1 java.net.SocketTimeoutException -> Lc3 java.net.SocketException -> Lc6 java.net.UnknownHostException -> Lca java.net.MalformedURLException -> Lce org.apache.http.conn.ConnectTimeoutException -> Ld2 java.net.ConnectException -> Ld6 javax.net.ssl.SSLException -> Lda
            if (r9 == 0) goto Lb2
            r9.disconnect()     // Catch: java.lang.Throwable -> Lae
            goto Lb2
        Lae:
            r0 = move-exception
            com.loc.as.a(r0, r3, r2)
        Lb2:
            com.loc.br$f r0 = r13.u
            r0.d()
            return r14
        Lb8:
            r14 = move-exception
            r7 = r9
            goto Ldf
        Lbb:
            r14 = move-exception
            r7 = r9
            goto Lf0
        Lbe:
            r14 = move-exception
            r7 = r9
            goto L10c
        Lc1:
            r7 = r9
            goto L11a
        Lc3:
            r14 = move-exception
            r7 = r9
            goto L12d
        Lc6:
            r14 = move-exception
            r7 = r9
            goto L147
        Lca:
            r14 = move-exception
            r7 = r9
            goto L161
        Lce:
            r14 = move-exception
            r7 = r9
            goto L173
        Ld2:
            r14 = move-exception
            r7 = r9
            goto L186
        Ld6:
            r14 = move-exception
            r7 = r9
            goto L19e
        Lda:
            r14 = move-exception
            r7 = r9
            goto L1b8
        Lde:
            r14 = move-exception
        Ldf:
            com.loc.as.a(r14, r3, r2)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r1 = 9
            r14.a(r1)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        Lef:
            r14 = move-exception
        Lf0:
            boolean r0 = r14.i()     // Catch: java.lang.Throwable -> L1d0
            if (r0 != 0) goto L107
            int r0 = r14.g()     // Catch: java.lang.Throwable -> L1d0
            r1 = 10
            if (r0 == r1) goto L107
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r1 = r14.g()     // Catch: java.lang.Throwable -> L1d0
            r0.a(r1)     // Catch: java.lang.Throwable -> L1d0
        L107:
            com.loc.as.a(r14, r3, r2)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L10b:
            r14 = move-exception
        L10c:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r6)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L11a:
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r1 = 7101(0x1bbd, float:9.95E-42)
            r14.b(r1)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r6)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L12c:
            r14 = move-exception
        L12d:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r14 = a(r14)     // Catch: java.lang.Throwable -> L1d0
            r0.b(r14)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r4)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            java.lang.String r0 = "socket 连接超时 - SocketTimeoutException"
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L146:
            r14 = move-exception
        L147:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r14 = a(r14)     // Catch: java.lang.Throwable -> L1d0
            r0.b(r14)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r5)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            java.lang.String r0 = "socket 连接异常 - SocketException"
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L160:
            r14 = move-exception
        L161:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r0 = 5
            r14.a(r0)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            java.lang.String r0 = "未知主机 - UnKnowHostException"
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L172:
            r14 = move-exception
        L173:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r0 = 8
            r14.a(r0)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            java.lang.String r0 = "url异常 - MalformedURLException"
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L185:
            r14 = move-exception
        L186:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r14 = a(r14)     // Catch: java.lang.Throwable -> L1d0
            r0.b(r14)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r4)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L19d:
            r14 = move-exception
        L19e:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r14 = a(r14)     // Catch: java.lang.Throwable -> L1d0
            r0.b(r14)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r14.a(r5)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            java.lang.String r0 = "http连接失败 - ConnectionException"
            r14.<init>(r0)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L1b7:
            r14 = move-exception
        L1b8:
            r14.printStackTrace()     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r0 = r13.u     // Catch: java.lang.Throwable -> L1d0
            int r14 = a(r14)     // Catch: java.lang.Throwable -> L1d0
            r0.b(r14)     // Catch: java.lang.Throwable -> L1d0
            com.loc.br$f r14 = r13.u     // Catch: java.lang.Throwable -> L1d0
            r0 = 4
            r14.a(r0)     // Catch: java.lang.Throwable -> L1d0
            com.loc.k r14 = new com.loc.k     // Catch: java.lang.Throwable -> L1d0
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L1d0
            throw r14     // Catch: java.lang.Throwable -> L1d0
        L1d0:
            r14 = move-exception
            if (r7 == 0) goto L1db
            r7.disconnect()     // Catch: java.lang.Throwable -> L1d7
            goto L1db
        L1d7:
            r0 = move-exception
            com.loc.as.a(r0, r3, r2)
        L1db:
            com.loc.br$f r0 = r13.u
            r0.d()
            throw r14
    }
}
