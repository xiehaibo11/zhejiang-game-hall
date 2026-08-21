package com.meizu.cloud.pushsdk.d.b;

public abstract class a {
    protected final android.content.Context a;
    protected final com.meizu.cloud.pushsdk.d.b.f b;
    protected final int c;
    protected final int d;
    protected final int e;
    protected final java.util.concurrent.TimeUnit f;
    protected final java.util.concurrent.atomic.AtomicBoolean g;
    private final java.lang.String h;
    private final com.meizu.cloud.pushsdk.c.c.g i;
    private android.net.Uri.Builder j;
    private com.meizu.cloud.pushsdk.d.b.d k;
    private com.meizu.cloud.pushsdk.d.b.b l;
    private com.meizu.cloud.pushsdk.d.b.h m;
    private final javax.net.ssl.SSLSocketFactory n;
    private final javax.net.ssl.HostnameVerifier o;
    private java.lang.String p;
    private final long q;
    private final long r;
    private final com.meizu.cloud.pushsdk.c.c.a s;

    public class a {
        protected final java.lang.String a;
        protected final android.content.Context b;
        protected com.meizu.cloud.pushsdk.d.b.f c;
        protected com.meizu.cloud.pushsdk.d.b.d d;
        protected com.meizu.cloud.pushsdk.d.b.b e;
        protected com.meizu.cloud.pushsdk.d.b.h f;
        protected int g;
        protected int h;
        protected int i;
        protected long j;
        protected long k;
        protected java.util.concurrent.TimeUnit l;
        protected javax.net.ssl.SSLSocketFactory m;
        protected javax.net.ssl.HostnameVerifier n;
        protected com.meizu.cloud.pushsdk.c.c.a o;

        public a(java.lang.String r3, android.content.Context r4, java.lang.Class<? extends com.meizu.cloud.pushsdk.d.b.a> r5) {
                r2 = this;
                r2.<init>()
                r5 = 0
                r2.c = r5
                com.meizu.cloud.pushsdk.d.b.d r5 = com.meizu.cloud.pushsdk.d.b.d.b
                r2.d = r5
                com.meizu.cloud.pushsdk.d.b.b r5 = com.meizu.cloud.pushsdk.d.b.b.a
                r2.e = r5
                com.meizu.cloud.pushsdk.d.b.h r5 = com.meizu.cloud.pushsdk.d.b.h.b
                r2.f = r5
                r5 = 5
                r2.g = r5
                r0 = 250(0xfa, float:3.5E-43)
                r2.h = r0
                r2.i = r5
                r0 = 40000(0x9c40, double:1.97626E-319)
                r2.j = r0
                r2.k = r0
                java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
                r2.l = r5
                com.meizu.cloud.pushsdk.c.c.e r5 = new com.meizu.cloud.pushsdk.c.c.e
                r5.<init>()
                r2.o = r5
                r2.a = r3
                r2.b = r4
                return
        }

        public com.meizu.cloud.pushsdk.d.b.a.a a(int r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.b.a.a a(com.meizu.cloud.pushsdk.c.c.a r4) {
                r3 = this;
                if (r4 == 0) goto L21
                r3.o = r4
                java.lang.Class<com.meizu.cloud.pushsdk.d.b.a$a> r0 = com.meizu.cloud.pushsdk.d.b.a.a.class
                java.lang.String r0 = r0.getSimpleName()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "set new call "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]
                com.meizu.cloud.pushsdk.d.f.c.c(r0, r4, r1)
            L21:
                return r3
        }

        public com.meizu.cloud.pushsdk.d.b.a.a a(com.meizu.cloud.pushsdk.d.b.b r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.b.a.a a(com.meizu.cloud.pushsdk.d.b.f r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.b.a.a b(int r1) {
                r0 = this;
                r0.h = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.b.a.a c(int r1) {
                r0 = this;
                r0.i = r1
                return r0
        }
    }

    public a(com.meizu.cloud.pushsdk.d.b.a.a r5) {
            r4 = this;
            r4.<init>()
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.a> r0 = com.meizu.cloud.pushsdk.d.b.a.class
            java.lang.String r0 = r0.getSimpleName()
            r4.h = r0
            java.lang.String r0 = "application/json; charset=utf-8"
            com.meizu.cloud.pushsdk.c.c.g r0 = com.meizu.cloud.pushsdk.c.c.g.a(r0)
            r4.i = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r4.g = r0
            com.meizu.cloud.pushsdk.d.b.d r0 = r5.d
            r4.k = r0
            com.meizu.cloud.pushsdk.d.b.f r0 = r5.c
            r4.b = r0
            android.content.Context r0 = r5.b
            r4.a = r0
            com.meizu.cloud.pushsdk.d.b.b r0 = r5.e
            r4.l = r0
            com.meizu.cloud.pushsdk.d.b.h r0 = r5.f
            r4.m = r0
            javax.net.ssl.SSLSocketFactory r0 = r5.m
            r4.n = r0
            javax.net.ssl.HostnameVerifier r0 = r5.n
            r4.o = r0
            int r0 = r5.g
            r4.c = r0
            int r0 = r5.i
            r4.d = r0
            int r0 = r5.h
            r4.e = r0
            long r2 = r5.j
            r4.q = r2
            long r2 = r5.k
            r4.r = r2
            java.lang.String r0 = r5.a
            r4.p = r0
            java.util.concurrent.TimeUnit r0 = r5.l
            r4.f = r0
            com.meizu.cloud.pushsdk.c.c.a r5 = r5.o
            r4.s = r5
            r4.c()
            java.lang.String r5 = r4.h
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "Emitter created successfully!"
            com.meizu.cloud.pushsdk.d.f.c.c(r5, r1, r0)
            return
    }

    private com.meizu.cloud.pushsdk.c.c.i a(com.meizu.cloud.pushsdk.d.a.a r5) {
            r4 = this;
            java.lang.String r0 = ""
            r4.a(r5, r0)
            android.net.Uri$Builder r0 = r4.j
            r0.clearQuery()
            java.util.Map r5 = r5.a()
            java.util.HashMap r5 = (java.util.HashMap) r5
            java.util.Set r0 = r5.keySet()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r5.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            android.net.Uri$Builder r3 = r4.j
            r3.appendQueryParameter(r1, r2)
            goto L18
        L30:
            android.net.Uri$Builder r5 = r4.j
            android.net.Uri r5 = r5.build()
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushsdk.c.c.i$a r0 = new com.meizu.cloud.pushsdk.c.c.i$a
            r0.<init>()
            com.meizu.cloud.pushsdk.c.c.i$a r5 = r0.a(r5)
            com.meizu.cloud.pushsdk.c.c.i$a r5 = r5.a()
            com.meizu.cloud.pushsdk.c.c.i r5 = r5.c()
            return r5
    }

    private com.meizu.cloud.pushsdk.c.c.i a(java.util.ArrayList<com.meizu.cloud.pushsdk.d.a.a> r4) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r4.next()
            com.meizu.cloud.pushsdk.d.a.a r1 = (com.meizu.cloud.pushsdk.d.a.a) r1
            java.util.Map r1 = r1.a()
            r0.add(r1)
            goto L9
        L1d:
            com.meizu.cloud.pushsdk.d.a.b r4 = new com.meizu.cloud.pushsdk.d.a.b
            java.lang.String r1 = "push_group_data"
            r4.<init>(r1, r0)
            java.lang.String r0 = r3.h
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "final SelfDescribingJson "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r1, r2)
            android.net.Uri$Builder r0 = r3.j
            android.net.Uri r0 = r0.build()
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushsdk.c.c.g r1 = r3.i
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushsdk.c.c.j r4 = com.meizu.cloud.pushsdk.c.c.j.a(r1, r4)
            com.meizu.cloud.pushsdk.c.c.i$a r1 = new com.meizu.cloud.pushsdk.c.c.i$a
            r1.<init>()
            com.meizu.cloud.pushsdk.c.c.i$a r0 = r1.a(r0)
            com.meizu.cloud.pushsdk.c.c.i$a r4 = r0.a(r4)
            com.meizu.cloud.pushsdk.c.c.i r4 = r4.c()
            return r4
    }

    private void a(com.meizu.cloud.pushsdk.c.c.k r3) {
            r2 = this;
            if (r3 == 0) goto L1a
            com.meizu.cloud.pushsdk.c.c.l r0 = r3.b()     // Catch: java.lang.Exception -> L10
            if (r0 == 0) goto L1a
            com.meizu.cloud.pushsdk.c.c.l r3 = r3.b()     // Catch: java.lang.Exception -> L10
            r3.close()     // Catch: java.lang.Exception -> L10
            goto L1a
        L10:
            java.lang.String r3 = r2.h
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Unable to close source data"
            com.meizu.cloud.pushsdk.d.f.c.b(r3, r1, r0)
        L1a:
            return
    }

    private void a(com.meizu.cloud.pushsdk.d.a.a r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = ""
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = com.meizu.cloud.pushsdk.d.f.e.a()
        Lc:
            java.lang.String r0 = "stm"
            r2.a(r0, r3)
            return
    }

    private void c() {
            r3 = this;
            java.lang.String r0 = r3.h
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "security "
            r1.append(r2)
            com.meizu.cloud.pushsdk.d.b.h r2 = r3.m
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r1, r2)
            com.meizu.cloud.pushsdk.d.b.h r0 = r3.m
            com.meizu.cloud.pushsdk.d.b.h r1 = com.meizu.cloud.pushsdk.d.b.h.a
            if (r0 != r1) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "http://"
            goto L30
        L29:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://"
        L30:
            r0.append(r1)
            java.lang.String r1 = r3.p
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.net.Uri$Builder r0 = r0.buildUpon()
            r3.j = r0
            com.meizu.cloud.pushsdk.d.b.d r0 = r3.k
            com.meizu.cloud.pushsdk.d.b.d r1 = com.meizu.cloud.pushsdk.d.b.d.a
            if (r0 != r1) goto L54
            android.net.Uri$Builder r0 = r3.j
            java.lang.String r1 = "i"
            r0.appendPath(r1)
            goto L5b
        L54:
            android.net.Uri$Builder r0 = r3.j
            java.lang.String r1 = "push_data_report/mobile"
            r0.appendEncodedPath(r1)
        L5b:
            return
    }

    protected int a(com.meizu.cloud.pushsdk.c.c.i r7) {
            r6 = this;
            r0 = 0
            r1 = 1
            r2 = 0
            java.lang.String r3 = r6.h     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            java.lang.String r4 = "Sending request: %s"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            r5[r0] = r7     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            com.meizu.cloud.pushsdk.d.f.c.b(r3, r4, r5)     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            com.meizu.cloud.pushsdk.c.c.a r3 = r6.s     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            com.meizu.cloud.pushsdk.c.c.k r2 = r3.a(r7)     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            int r7 = r2.a()     // Catch: java.lang.Throwable -> L1c java.io.IOException -> L1e
            r6.a(r2)
            return r7
        L1c:
            r7 = move-exception
            goto L33
        L1e:
            r7 = move-exception
            java.lang.String r3 = r6.h     // Catch: java.lang.Throwable -> L1c
            java.lang.String r4 = "Request sending failed: %s"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c
            java.lang.String r7 = android.util.Log.getStackTraceString(r7)     // Catch: java.lang.Throwable -> L1c
            r1[r0] = r7     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.d.f.c.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L1c
            r7 = -1
            r6.a(r2)
            return r7
        L33:
            r6.a(r2)
            throw r7
    }

    protected java.util.LinkedList<com.meizu.cloud.pushsdk.d.b.e> a(com.meizu.cloud.pushsdk.d.b.c r22) {
            r21 = this;
            r0 = r21
            java.util.ArrayList r1 = r22.a()
            int r1 = r1.size()
            java.util.LinkedList r2 = r22.b()
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            com.meizu.cloud.pushsdk.d.b.d r4 = r0.k
            com.meizu.cloud.pushsdk.d.b.d r5 = com.meizu.cloud.pushsdk.d.b.d.a
            r6 = 22
            r8 = 1
            r9 = 0
            if (r4 != r5) goto L53
            r4 = r9
        L1e:
            if (r4 >= r1) goto L10a
            java.util.LinkedList r5 = new java.util.LinkedList
            r5.<init>()
            java.lang.Object r10 = r2.get(r4)
            r5.add(r10)
            java.util.ArrayList r10 = r22.a()
            java.lang.Object r10 = r10.get(r4)
            com.meizu.cloud.pushsdk.d.a.a r10 = (com.meizu.cloud.pushsdk.d.a.a) r10
            long r11 = r10.b()
            long r11 = r11 + r6
            long r13 = r0.q
            int r11 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r11 <= 0) goto L43
            r11 = r8
            goto L44
        L43:
            r11 = r9
        L44:
            com.meizu.cloud.pushsdk.c.c.i r10 = r0.a(r10)
            com.meizu.cloud.pushsdk.d.b.e r12 = new com.meizu.cloud.pushsdk.d.b.e
            r12.<init>(r11, r10, r5)
            r3.add(r12)
            int r4 = r4 + 1
            goto L1e
        L53:
            r4 = r9
        L54:
            if (r4 >= r1) goto L10a
            java.util.LinkedList r5 = new java.util.LinkedList
            r5.<init>()
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            r11 = 0
            r13 = r4
        L63:
            com.meizu.cloud.pushsdk.d.b.b r14 = r0.l
            int r14 = r14.a()
            int r14 = r14 + r4
            if (r13 >= r14) goto Led
            if (r13 >= r1) goto Led
            java.util.ArrayList r14 = r22.a()
            java.lang.Object r14 = r14.get(r13)
            com.meizu.cloud.pushsdk.d.a.a r14 = (com.meizu.cloud.pushsdk.d.a.a) r14
            long r15 = r14.b()
            long r15 = r15 + r6
            r17 = 88
            long r19 = r15 + r17
            long r6 = r0.r
            int r6 = (r19 > r6 ? 1 : (r19 == r6 ? 0 : -1))
            if (r6 <= 0) goto La8
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.LinkedList r7 = new java.util.LinkedList
            r7.<init>()
            r6.add(r14)
            java.lang.Object r14 = r2.get(r13)
            r7.add(r14)
            com.meizu.cloud.pushsdk.c.c.i r6 = r0.a(r6)
            com.meizu.cloud.pushsdk.d.b.e r14 = new com.meizu.cloud.pushsdk.d.b.e
            r14.<init>(r8, r6, r7)
            r3.add(r14)
            goto Le7
        La8:
            long r11 = r11 + r15
            long r17 = r11 + r17
            int r6 = r10.size()
            int r6 = r6 - r8
            long r6 = (long) r6
            long r17 = r17 + r6
            long r6 = r0.r
            int r6 = (r17 > r6 ? 1 : (r17 == r6 ? 0 : -1))
            if (r6 <= 0) goto Ldd
            com.meizu.cloud.pushsdk.c.c.i r6 = r0.a(r10)
            com.meizu.cloud.pushsdk.d.b.e r7 = new com.meizu.cloud.pushsdk.d.b.e
            r7.<init>(r9, r6, r5)
            r3.add(r7)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.util.LinkedList r6 = new java.util.LinkedList
            r6.<init>()
            r5.add(r14)
            java.lang.Object r7 = r2.get(r13)
            r6.add(r7)
            r10 = r5
            r5 = r6
            r11 = r15
            goto Le7
        Ldd:
            r10.add(r14)
            java.lang.Object r6 = r2.get(r13)
            r5.add(r6)
        Le7:
            int r13 = r13 + 1
            r6 = 22
            goto L63
        Led:
            boolean r6 = r10.isEmpty()
            if (r6 != 0) goto Lff
            com.meizu.cloud.pushsdk.c.c.i r6 = r0.a(r10)
            com.meizu.cloud.pushsdk.d.b.e r7 = new com.meizu.cloud.pushsdk.d.b.e
            r7.<init>(r9, r6, r5)
            r3.add(r7)
        Lff:
            com.meizu.cloud.pushsdk.d.b.b r5 = r0.l
            int r5 = r5.a()
            int r4 = r4 + r5
            r6 = 22
            goto L54
        L10a:
            return r3
    }

    public abstract void a();

    public abstract void a(com.meizu.cloud.pushsdk.d.a.a r1, boolean r2);

    protected boolean a(int r2) {
            r1 = this;
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto La
            r0 = 300(0x12c, float:4.2E-43)
            if (r2 >= r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public java.lang.String b() {
            r1 = this;
            android.net.Uri$Builder r0 = r1.j
            android.net.Uri$Builder r0 = r0.clearQuery()
            android.net.Uri r0 = r0.build()
            java.lang.String r0 = r0.toString()
            return r0
    }
}
