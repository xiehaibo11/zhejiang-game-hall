package com.loc;

public final class es implements com.loc.em {
    private static long k;
    android.content.Context a;
    com.loc.ff b;
    com.loc.fb c;
    com.loc.dw d;
    com.loc.bv e;
    private java.util.ArrayList<com.loc.dc> f;
    private android.os.Handler g;
    private android.location.LocationManager h;
    private com.loc.es.a i;
    private volatile boolean j;


    static class a implements android.location.LocationListener {
        private com.loc.es a;

        a(com.loc.es r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        final void a() {
                r1 = this;
                r0 = 0
                r1.a = r0
                return
        }

        final void a(com.loc.es r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onLocationChanged(android.location.Location r2) {
                r1 = this;
                com.loc.es r0 = r1.a     // Catch: java.lang.Throwable -> L9
                if (r0 == 0) goto L9
                com.loc.es r0 = r1.a     // Catch: java.lang.Throwable -> L9
                r0.a(r2)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }

        @Override
        public final void onProviderDisabled(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onProviderEnabled(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onStatusChanged(java.lang.String r1, int r2, android.os.Bundle r3) {
                r0 = this;
                return
        }
    }

    class b extends com.loc.cs {
        final com.loc.es a;
        private int b;
        private android.location.Location c;

        b(com.loc.es r1, int r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.b = r1
                r0.b = r2
                return
        }

        b(com.loc.es r2, android.location.Location r3) {
                r1 = this;
                r0 = 1
                r1.<init>(r2, r0)
                r1.c = r3
                return
        }

        private void b() {
                r7 = this;
                r0 = 1
                java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L146
                com.loc.ft.a()     // Catch: java.lang.Throwable -> L146
                android.location.Location r1 = r7.c     // Catch: java.lang.Throwable -> L146
                if (r1 != 0) goto Lb
                return
            Lb:
                com.loc.es r1 = r7.a     // Catch: java.lang.Throwable -> L146
                boolean r1 = com.loc.es.a(r1)     // Catch: java.lang.Throwable -> L146
                if (r1 != 0) goto L14
                return
            L14:
                com.loc.es r1 = r7.a     // Catch: java.lang.Throwable -> L146
                android.content.Context r1 = r1.a     // Catch: java.lang.Throwable -> L146
                boolean r1 = com.loc.fz.m(r1)     // Catch: java.lang.Throwable -> L146
                if (r1 == 0) goto L24
                java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L146
                com.loc.ft.a()     // Catch: java.lang.Throwable -> L146
                return
            L24:
                android.location.Location r0 = r7.c     // Catch: java.lang.Throwable -> L146
                android.os.Bundle r0 = r0.getExtras()     // Catch: java.lang.Throwable -> L146
                r1 = 0
                if (r0 == 0) goto L33
                java.lang.String r1 = "satellites"
                int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L146
            L33:
                android.location.Location r0 = r7.c     // Catch: java.lang.Throwable -> L146
                boolean r0 = com.loc.fz.a(r0, r1)     // Catch: java.lang.Throwable -> L146
                if (r0 == 0) goto L3c
                return
            L3c:
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                if (r0 == 0) goto L51
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                boolean r0 = r0.s     // Catch: java.lang.Throwable -> L146
                if (r0 != 0) goto L51
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                r0.f()     // Catch: java.lang.Throwable -> L146
            L51:
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                java.util.ArrayList r0 = r0.a()     // Catch: java.lang.Throwable -> L146
                com.loc.es r2 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.fb r2 = r2.c     // Catch: java.lang.Throwable -> L146
                java.util.List r2 = r2.a()     // Catch: java.lang.Throwable -> L146
                com.loc.da$a r3 = new com.loc.da$a     // Catch: java.lang.Throwable -> L146
                r3.<init>()     // Catch: java.lang.Throwable -> L146
                com.loc.ef r4 = new com.loc.ef     // Catch: java.lang.Throwable -> L146
                r4.<init>()     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                float r5 = r5.getAccuracy()     // Catch: java.lang.Throwable -> L146
                r4.i = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                double r5 = r5.getAltitude()     // Catch: java.lang.Throwable -> L146
                r4.f = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                double r5 = r5.getLatitude()     // Catch: java.lang.Throwable -> L146
                r4.d = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                float r5 = r5.getBearing()     // Catch: java.lang.Throwable -> L146
                r4.h = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                double r5 = r5.getLongitude()     // Catch: java.lang.Throwable -> L146
                r4.e = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                boolean r5 = r5.isFromMockProvider()     // Catch: java.lang.Throwable -> L146
                r4.j = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                java.lang.String r5 = r5.getProvider()     // Catch: java.lang.Throwable -> L146
                r4.a = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r5 = r7.c     // Catch: java.lang.Throwable -> L146
                float r5 = r5.getSpeed()     // Catch: java.lang.Throwable -> L146
                r4.g = r5     // Catch: java.lang.Throwable -> L146
                byte r1 = (byte) r1     // Catch: java.lang.Throwable -> L146
                r4.l = r1     // Catch: java.lang.Throwable -> L146
                long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L146
                r4.b = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r1 = r7.c     // Catch: java.lang.Throwable -> L146
                long r5 = r1.getTime()     // Catch: java.lang.Throwable -> L146
                r4.c = r5     // Catch: java.lang.Throwable -> L146
                android.location.Location r1 = r7.c     // Catch: java.lang.Throwable -> L146
                long r5 = r1.getTime()     // Catch: java.lang.Throwable -> L146
                r4.k = r5     // Catch: java.lang.Throwable -> L146
                r3.a = r4     // Catch: java.lang.Throwable -> L146
                r3.b = r0     // Catch: java.lang.Throwable -> L146
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                android.net.wifi.WifiInfo r0 = r0.c()     // Catch: java.lang.Throwable -> L146
                if (r0 == 0) goto Ldc
                java.lang.String r0 = r0.getBSSID()     // Catch: java.lang.Throwable -> L146
                long r0 = com.loc.eg.a(r0)     // Catch: java.lang.Throwable -> L146
                r3.c = r0     // Catch: java.lang.Throwable -> L146
            Ldc:
                long r0 = com.loc.ff.A     // Catch: java.lang.Throwable -> L146
                r3.d = r0     // Catch: java.lang.Throwable -> L146
                android.location.Location r0 = r7.c     // Catch: java.lang.Throwable -> L146
                long r0 = r0.getTime()     // Catch: java.lang.Throwable -> L146
                r3.f = r0     // Catch: java.lang.Throwable -> L146
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                android.content.Context r0 = r0.a     // Catch: java.lang.Throwable -> L146
                int r0 = com.loc.o.i(r0)     // Catch: java.lang.Throwable -> L146
                byte r0 = (byte) r0     // Catch: java.lang.Throwable -> L146
                r3.g = r0     // Catch: java.lang.Throwable -> L146
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                android.content.Context r0 = r0.a     // Catch: java.lang.Throwable -> L146
                java.lang.String r0 = com.loc.o.n(r0)     // Catch: java.lang.Throwable -> L146
                r3.h = r0     // Catch: java.lang.Throwable -> L146
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                com.loc.ff r0 = r0.b     // Catch: java.lang.Throwable -> L146
                boolean r0 = r0.k()     // Catch: java.lang.Throwable -> L146
                r3.e = r0     // Catch: java.lang.Throwable -> L146
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                android.content.Context r0 = r0.a     // Catch: java.lang.Throwable -> L146
                boolean r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> L146
                r3.j = r0     // Catch: java.lang.Throwable -> L146
                r3.i = r2     // Catch: java.lang.Throwable -> L146
                com.loc.dc r0 = com.loc.dw.a(r3)     // Catch: java.lang.Throwable -> L146
                if (r0 != 0) goto L11a
                return
            L11a:
                com.loc.es r1 = r7.a     // Catch: java.lang.Throwable -> L146
                java.util.ArrayList r1 = com.loc.es.b(r1)     // Catch: java.lang.Throwable -> L146
                monitor-enter(r1)     // Catch: java.lang.Throwable -> L146
                com.loc.es r2 = r7.a     // Catch: java.lang.Throwable -> L143
                java.util.ArrayList r2 = com.loc.es.b(r2)     // Catch: java.lang.Throwable -> L143
                r2.add(r0)     // Catch: java.lang.Throwable -> L143
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L143
                java.util.ArrayList r0 = com.loc.es.b(r0)     // Catch: java.lang.Throwable -> L143
                int r0 = r0.size()     // Catch: java.lang.Throwable -> L143
                r2 = 5
                if (r0 < r2) goto L13c
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L143
                r0.e()     // Catch: java.lang.Throwable -> L143
            L13c:
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L143
                com.loc.es r0 = r7.a     // Catch: java.lang.Throwable -> L146
                r0.d()     // Catch: java.lang.Throwable -> L146
                return
            L143:
                r0 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L143
                throw r0     // Catch: java.lang.Throwable -> L146
            L146:
                r0 = move-exception
                java.lang.String r1 = "cl"
                java.lang.String r2 = "coll"
                com.loc.fr.a(r0, r1, r2)
                return
        }

        private void c() {
                r6 = this;
                r0 = 1
                java.lang.Object[] r1 = new java.lang.Object[r0]
                com.loc.ft.a()
                com.loc.es r1 = r6.a
                android.content.Context r1 = r1.a
                boolean r1 = com.loc.fz.m(r1)
                if (r1 == 0) goto L16
                java.lang.Object[] r0 = new java.lang.Object[r0]
                com.loc.ft.a()
                return
            L16:
                r1 = 0
                long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L94
                com.loc.es.a(r2)     // Catch: java.lang.Throwable -> L94
                com.loc.es r2 = r6.a     // Catch: java.lang.Throwable -> L94
                com.loc.bv r2 = r2.e     // Catch: java.lang.Throwable -> L94
                com.loc.co r2 = r2.f     // Catch: java.lang.Throwable -> L94
                boolean r2 = r2.c()     // Catch: java.lang.Throwable -> L94
                if (r2 == 0) goto L8e
                java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L94
                com.loc.es r3 = r6.a     // Catch: java.lang.Throwable -> L94
                com.loc.bv r3 = r3.e     // Catch: java.lang.Throwable -> L94
                java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L94
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L94
                com.loc.es r3 = r6.a     // Catch: java.lang.Throwable -> L94
                com.loc.bv r3 = r3.e     // Catch: java.lang.Throwable -> L94
                long r3 = r3.b     // Catch: java.lang.Throwable -> L94
                com.loc.bl r1 = com.loc.bl.a(r2, r3)     // Catch: java.lang.Throwable -> L94
                java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L94
                r2.<init>()     // Catch: java.lang.Throwable -> L94
                byte[] r3 = com.loc.es.f()     // Catch: java.lang.Throwable -> L94
                if (r3 != 0) goto L4e
                r1.close()     // Catch: java.lang.Throwable -> L4d
            L4d:
                return
            L4e:
                com.loc.es r4 = r6.a     // Catch: java.lang.Throwable -> L94
                com.loc.bv r4 = r4.e     // Catch: java.lang.Throwable -> L94
                java.util.List r4 = com.loc.es.a(r1, r4, r2, r3)     // Catch: java.lang.Throwable -> L94
                if (r4 == 0) goto L8a
                int r5 = r4.size()     // Catch: java.lang.Throwable -> L94
                if (r5 != 0) goto L5f
                goto L8a
            L5f:
                com.loc.es r5 = r6.a     // Catch: java.lang.Throwable -> L94
                com.loc.bv r5 = r5.e     // Catch: java.lang.Throwable -> L94
                com.loc.co r5 = r5.f     // Catch: java.lang.Throwable -> L94
                r5.a(r0)     // Catch: java.lang.Throwable -> L94
                byte[] r0 = com.loc.dw.a()     // Catch: java.lang.Throwable -> L94
                byte[] r5 = com.loc.x.c()     // Catch: java.lang.Throwable -> L94
                byte[] r0 = com.loc.p.b(r3, r0, r5)     // Catch: java.lang.Throwable -> L94
                byte[] r3 = com.loc.fg.a(r3)     // Catch: java.lang.Throwable -> L94
                byte[] r0 = com.loc.dw.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L94
                byte[] r0 = com.loc.x.b(r0)     // Catch: java.lang.Throwable -> L94
                boolean r0 = com.loc.dw.a(r0)     // Catch: java.lang.Throwable -> L94
                if (r0 == 0) goto L8e
                com.loc.es.a(r1, r2)     // Catch: java.lang.Throwable -> L94
                goto L8e
            L8a:
                r1.close()     // Catch: java.lang.Throwable -> L8d
            L8d:
                return
            L8e:
                if (r1 == 0) goto La1
                r1.close()     // Catch: java.lang.Throwable -> L93
            L93:
                return
            L94:
                r0 = move-exception
                java.lang.String r2 = "leg"
                java.lang.String r3 = "uts"
                com.loc.av.b(r0, r2, r3)     // Catch: java.lang.Throwable -> La2
                if (r1 == 0) goto La1
                r1.close()     // Catch: java.lang.Throwable -> La1
            La1:
                return
            La2:
                r0 = move-exception
                if (r1 == 0) goto La8
                r1.close()     // Catch: java.lang.Throwable -> La8
            La8:
                throw r0
        }

        @Override
        public final void a() {
                r2 = this;
                int r0 = r2.b
                r1 = 1
                if (r0 != r1) goto L9
                r2.b()
                return
            L9:
                r1 = 2
                if (r0 != r1) goto L10
                r2.c()
                return
            L10:
                r1 = 3
                if (r0 != r1) goto L18
                com.loc.es r0 = r2.a
                com.loc.es.c(r0)
            L18:
                return
        }
    }

    static {
            return
    }

    es(android.content.Context r11) {
            r10 = this;
            r10.<init>()
            r0 = 0
            r10.a = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r10.f = r1
            r10.b = r0
            r10.c = r0
            r0 = 0
            r10.j = r0
            r10.a = r11
            com.loc.bv r2 = new com.loc.bv
            r2.<init>()
            r10.e = r2
            android.content.Context r1 = r10.a
            java.lang.String r3 = com.loc.at.k
            r4 = 100
            r5 = 1024000(0xfa000, float:1.43493E-39)
            java.lang.String r6 = "0"
            com.loc.cb.a(r1, r2, r3, r4, r5, r6)
            com.loc.bv r0 = r10.e
            com.loc.cn r1 = new com.loc.cn
            int r2 = com.loc.fq.g
            com.loc.cl r9 = new com.loc.cl
            boolean r5 = com.loc.fq.e
            int r6 = com.loc.fq.f
            int r7 = r6 * 10
            java.lang.String r8 = "carrierLocKey"
            r3 = r9
            r4 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            java.lang.String r3 = "kKey"
            r1.<init>(r11, r2, r3, r9)
            r0.f = r1
            com.loc.bv r11 = r10.e
            com.loc.be r0 = new com.loc.be
            r0.<init>()
            r11.e = r0
            return
    }

    private static int a(byte[] r2) {
            r0 = 3
            r0 = r2[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            r1 = 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            r1 = 0
            r2 = r2[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 24
            r2 = r2 | r0
            return r2
    }

    static long a(long r0) {
            com.loc.es.k = r0
            return r0
    }

    static java.util.List a(com.loc.bl r0, com.loc.bv r1, java.util.List r2, byte[] r3) {
            java.util.List r0 = b(r0, r1, r2, r3)
            return r0
    }

    static void a(com.loc.bl r0, java.util.List r1) {
            b(r0, r1)
            return
    }

    static boolean a(com.loc.es r0) {
            boolean r0 = r0.j
            return r0
    }

    private static byte[] a(int r2) {
            r0 = 0
            java.lang.String r1 = "AES"
            javax.crypto.KeyGenerator r1 = javax.crypto.KeyGenerator.getInstance(r1)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto La
            return r0
        La:
            r1.init(r2)     // Catch: java.lang.Throwable -> L16
            javax.crypto.SecretKey r2 = r1.generateKey()     // Catch: java.lang.Throwable -> L16
            byte[] r2 = r2.getEncoded()     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            return r0
    }

    static java.util.ArrayList b(com.loc.es r0) {
            java.util.ArrayList<com.loc.dc> r0 = r0.f
            return r0
    }

    private static java.util.List<com.loc.dc> b(com.loc.bl r17, com.loc.bv r18, java.util.List<java.lang.String> r19, byte[] r20) {
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.io.File r0 = r17.b()     // Catch: java.lang.Throwable -> L11e
            if (r0 == 0) goto L126
            boolean r2 = r0.exists()     // Catch: java.lang.Throwable -> L11e
            if (r2 == 0) goto L126
            java.lang.String[] r0 = r0.list()     // Catch: java.lang.Throwable -> L11e
            if (r0 != 0) goto L18
            return r1
        L18:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L11e
            r3 = 0
            r4 = 0
            r5 = 0
        L1c:
            if (r4 >= r2) goto L11d
            r6 = r0[r4]     // Catch: java.lang.Throwable -> L11e
            java.lang.String r7 = ".0"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L11e
            if (r7 == 0) goto L10c
            r7 = 0
            java.lang.String r8 = "\\."
            java.lang.String[] r6 = r6.split(r8)     // Catch: java.lang.Throwable -> Lf7
            r6 = r6[r3]     // Catch: java.lang.Throwable -> Lf7
            r8 = r17
            com.loc.bl$b r9 = r8.a(r6)     // Catch: java.lang.Throwable -> Lf9
            if (r9 != 0) goto L40
            if (r9 == 0) goto L10e
        L3b:
            r9.close()     // Catch: java.lang.Throwable -> L10e
            goto L10e
        L40:
            java.io.InputStream r7 = r9.a()     // Catch: java.lang.Throwable -> Lee
            if (r7 != 0) goto L50
            if (r7 == 0) goto L4d
            r7.close()     // Catch: java.lang.Throwable -> L4c
            goto L4d
        L4c:
        L4d:
            if (r9 == 0) goto L10e
            goto L3b
        L50:
            r10 = 2
            byte[] r11 = new byte[r10]     // Catch: java.lang.Throwable -> Lee
            r7.read(r11)     // Catch: java.lang.Throwable -> Lee
            int r11 = com.loc.fz.b(r11)     // Catch: java.lang.Throwable -> Lee
            if (r11 == 0) goto Le4
            r12 = 65535(0xffff, float:9.1834E-41)
            if (r11 <= r12) goto L63
            goto Le4
        L63:
            byte[] r11 = new byte[r11]     // Catch: java.lang.Throwable -> Lee
            r7.read(r11)     // Catch: java.lang.Throwable -> Lee
            byte[] r10 = new byte[r10]     // Catch: java.lang.Throwable -> Lee
            r12 = 0
        L6b:
            int r13 = r7.read(r10)     // Catch: java.lang.Throwable -> Lee
            if (r13 < 0) goto Lb3
            int r13 = com.loc.fz.b(r10)     // Catch: java.lang.Throwable -> Laa
            byte[] r13 = new byte[r13]     // Catch: java.lang.Throwable -> Laa
            r7.read(r13)     // Catch: java.lang.Throwable -> Laa
            byte[] r14 = com.loc.x.c()     // Catch: java.lang.Throwable -> Laa
            byte[] r13 = com.loc.p.a(r11, r13, r14)     // Catch: java.lang.Throwable -> Laa
            int r14 = r13.length     // Catch: java.lang.Throwable -> Laa
            int r12 = r12 + r14
            r14 = 4
            byte[] r14 = new byte[r14]     // Catch: java.lang.Throwable -> Laa
            r7.read(r14)     // Catch: java.lang.Throwable -> Laa
            int r14 = a(r14)     // Catch: java.lang.Throwable -> Laa
            com.loc.dc r15 = new com.loc.dc     // Catch: java.lang.Throwable -> Laa
            byte[] r13 = com.loc.x.b(r13)     // Catch: java.lang.Throwable -> Laa
            byte[] r3 = com.loc.x.c()     // Catch: java.lang.Throwable -> Laa
            r16 = r0
            r0 = r20
            byte[] r3 = com.loc.p.b(r0, r13, r3)     // Catch: java.lang.Throwable -> Lae
            r15.<init>(r14, r3)     // Catch: java.lang.Throwable -> Lae
            r1.add(r15)     // Catch: java.lang.Throwable -> Lae
            r0 = r16
            r3 = 0
            goto L6b
        Laa:
            r16 = r0
            r0 = r20
        Lae:
            r6 = r18
            r3 = r19
            goto L102
        Lb3:
            r16 = r0
            r0 = r20
            int r5 = r5 + r12
            r3 = r19
            r3.add(r6)     // Catch: java.lang.Throwable -> Le1
            r6 = r18
            com.loc.co r10 = r6.f     // Catch: java.lang.Throwable -> L102
            int r10 = r10.b()     // Catch: java.lang.Throwable -> L102
            if (r5 <= r10) goto Ld4
            if (r7 == 0) goto Lce
            r7.close()     // Catch: java.lang.Throwable -> Lcd
            goto Lce
        Lcd:
        Lce:
            if (r9 == 0) goto L11d
        Ld0:
            r9.close()     // Catch: java.lang.Throwable -> L11d
            goto L11d
        Ld4:
            if (r7 == 0) goto Ldb
            r7.close()     // Catch: java.lang.Throwable -> Lda
            goto Ldb
        Lda:
        Ldb:
            if (r9 == 0) goto L116
        Ldd:
            r9.close()     // Catch: java.lang.Throwable -> L116
            goto L116
        Le1:
            r6 = r18
            goto L102
        Le4:
            if (r7 == 0) goto Leb
            r7.close()     // Catch: java.lang.Throwable -> Lea
            goto Leb
        Lea:
        Leb:
            if (r9 == 0) goto L11d
            goto Ld0
        Lee:
            r6 = r18
            r3 = r19
            r16 = r0
            r0 = r20
            goto L102
        Lf7:
            r8 = r17
        Lf9:
            r6 = r18
            r3 = r19
            r16 = r0
            r0 = r20
            r9 = r7
        L102:
            if (r7 == 0) goto L109
            r7.close()     // Catch: java.lang.Throwable -> L108
            goto L109
        L108:
        L109:
            if (r9 == 0) goto L116
            goto Ldd
        L10c:
            r8 = r17
        L10e:
            r6 = r18
            r3 = r19
            r16 = r0
            r0 = r20
        L116:
            int r4 = r4 + 1
            r0 = r16
            r3 = 0
            goto L1c
        L11d:
            return r1
        L11e:
            r0 = move-exception
            java.lang.String r2 = "aps"
            java.lang.String r3 = "upc"
            com.loc.av.b(r0, r2, r3)
        L126:
            return r1
    }

    private static void b(com.loc.bl r1, java.util.List<java.lang.String> r2) {
            if (r1 == 0) goto L22
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L1a
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L1a
            r1.c(r0)     // Catch: java.lang.Throwable -> L1a
            goto L6
        L16:
            r1.close()     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            java.lang.String r2 = "aps"
            java.lang.String r0 = "dlo"
            com.loc.av.b(r1, r2, r0)
        L22:
            return
    }

    private static byte[] b(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }

    static void c(com.loc.es r0) {
            r0.g()
            return
    }

    private static byte[] c(int r3) {
            r0 = 2
            byte[] r0 = new byte[r0]
            r1 = r3 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            r1 = 65280(0xff00, float:9.1477E-41)
            r3 = r3 & r1
            int r3 = r3 >> 8
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            return r0
    }

    static byte[] f() {
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = a(r0)
            return r0
    }

    private void g() {
            r7 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> La2
            com.loc.ft.a()     // Catch: java.lang.Throwable -> La2
            android.content.Context r1 = r7.a     // Catch: java.lang.Throwable -> La2
            boolean r1 = com.loc.fz.m(r1)     // Catch: java.lang.Throwable -> La2
            if (r1 == 0) goto L14
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> La2
            com.loc.ft.a()     // Catch: java.lang.Throwable -> La2
            return
        L14:
            java.util.ArrayList<com.loc.dc> r0 = r7.f     // Catch: java.lang.Throwable -> La2
            if (r0 == 0) goto La1
            java.util.ArrayList<com.loc.dc> r0 = r7.f     // Catch: java.lang.Throwable -> La2
            int r0 = r0.size()     // Catch: java.lang.Throwable -> La2
            if (r0 != 0) goto L22
            goto La1
        L22:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La2
            r0.<init>()     // Catch: java.lang.Throwable -> La2
            java.util.ArrayList<com.loc.dc> r1 = r7.f     // Catch: java.lang.Throwable -> La2
            monitor-enter(r1)     // Catch: java.lang.Throwable -> La2
            java.util.ArrayList<com.loc.dc> r2 = r7.f     // Catch: java.lang.Throwable -> L9e
            r0.addAll(r2)     // Catch: java.lang.Throwable -> L9e
            java.util.ArrayList<com.loc.dc> r2 = r7.f     // Catch: java.lang.Throwable -> L9e
            r2.clear()     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9e
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> La2
            r1.<init>()     // Catch: java.lang.Throwable -> La2
            r2 = 256(0x100, float:3.59E-43)
            byte[] r2 = a(r2)     // Catch: java.lang.Throwable -> La2
            if (r2 != 0) goto L43
            return
        L43:
            int r3 = r2.length     // Catch: java.lang.Throwable -> La2
            byte[] r3 = c(r3)     // Catch: java.lang.Throwable -> La2
            r1.write(r3)     // Catch: java.lang.Throwable -> La2
            r1.write(r2)     // Catch: java.lang.Throwable -> La2
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> La2
        L52:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> La2
            if (r3 == 0) goto L8c
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> La2
            com.loc.dc r3 = (com.loc.dc) r3     // Catch: java.lang.Throwable -> La2
            byte[] r4 = r3.b()     // Catch: java.lang.Throwable -> La2
            int r5 = r4.length     // Catch: java.lang.Throwable -> La2
            r6 = 10
            if (r5 < r6) goto L52
            int r5 = r4.length     // Catch: java.lang.Throwable -> La2
            r6 = 65535(0xffff, float:9.1834E-41)
            if (r5 > r6) goto L52
            byte[] r5 = com.loc.x.c()     // Catch: java.lang.Throwable -> La2
            byte[] r4 = com.loc.p.b(r2, r4, r5)     // Catch: java.lang.Throwable -> La2
            int r5 = r4.length     // Catch: java.lang.Throwable -> La2
            byte[] r5 = c(r5)     // Catch: java.lang.Throwable -> La2
            r1.write(r5)     // Catch: java.lang.Throwable -> La2
            r1.write(r4)     // Catch: java.lang.Throwable -> La2
            int r3 = r3.a()     // Catch: java.lang.Throwable -> La2
            byte[] r3 = b(r3)     // Catch: java.lang.Throwable -> La2
            r1.write(r3)     // Catch: java.lang.Throwable -> La2
            goto L52
        L8c:
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Throwable -> La2
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = java.lang.Long.toString(r1)     // Catch: java.lang.Throwable -> La2
            com.loc.bv r2 = r7.e     // Catch: java.lang.Throwable -> La2
            com.loc.bw.a(r1, r0, r2)     // Catch: java.lang.Throwable -> La2
            return
        L9e:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9e
            throw r0     // Catch: java.lang.Throwable -> La2
        La1:
            return
        La2:
            r0 = move-exception
            java.lang.String r1 = "clm"
            java.lang.String r2 = "wtD"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    @Override
    public final com.loc.el a(com.loc.ek r3) {
            r2 = this;
            com.loc.fl r0 = new com.loc.fl     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.b     // Catch: java.lang.Throwable -> L2d
            r0.a(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r3.a     // Catch: java.lang.Throwable -> L2d
            r0.b(r1)     // Catch: java.lang.Throwable -> L2d
            byte[] r3 = r3.d     // Catch: java.lang.Throwable -> L2d
            r0.a(r3)     // Catch: java.lang.Throwable -> L2d
            com.loc.bo.a()     // Catch: java.lang.Throwable -> L2d
            com.loc.bu r3 = com.loc.bo.a(r0)     // Catch: java.lang.Throwable -> L2d
            com.loc.el r0 = new com.loc.el     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            byte[] r1 = r3.a     // Catch: java.lang.Throwable -> L2d
            r0.c = r1     // Catch: java.lang.Throwable -> L2d
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r3 = r3.b     // Catch: java.lang.Throwable -> L2d
            r0.b = r3     // Catch: java.lang.Throwable -> L2d
            r3 = 200(0xc8, float:2.8E-43)
            r0.a = r3     // Catch: java.lang.Throwable -> L2d
            return r0
        L2d:
            r3 = 0
            return r3
    }

    final void a() {
            r3 = this;
            android.content.Context r0 = r3.a
            boolean r0 = com.loc.fz.m(r0)
            if (r0 == 0) goto Lf
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            return
        Lf:
            com.loc.es$a r0 = r3.i     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L1e
            android.location.LocationManager r0 = r3.h     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L1e
            android.location.LocationManager r0 = r3.h     // Catch: java.lang.Throwable -> L43
            com.loc.es$a r1 = r3.i     // Catch: java.lang.Throwable -> L43
            r0.removeUpdates(r1)     // Catch: java.lang.Throwable -> L43
        L1e:
            com.loc.es$a r0 = r3.i     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L27
            com.loc.es$a r0 = r3.i     // Catch: java.lang.Throwable -> L43
            r0.a()     // Catch: java.lang.Throwable -> L43
        L27:
            boolean r0 = r3.j     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L42
            r3.g()     // Catch: java.lang.Throwable -> L43
            com.loc.ff r0 = r3.b     // Catch: java.lang.Throwable -> L43
            r1 = 0
            r0.a(r1)     // Catch: java.lang.Throwable -> L43
            com.loc.fb r0 = r3.c     // Catch: java.lang.Throwable -> L43
            r0.a(r1)     // Catch: java.lang.Throwable -> L43
            r3.c = r1     // Catch: java.lang.Throwable -> L43
            r3.b = r1     // Catch: java.lang.Throwable -> L43
            r3.g = r1     // Catch: java.lang.Throwable -> L43
            r0 = 0
            r3.j = r0     // Catch: java.lang.Throwable -> L43
        L42:
            return
        L43:
            r0 = move-exception
            java.lang.String r1 = "clm"
            java.lang.String r2 = "stc"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void a(android.location.Location r3) {
            r2 = this;
            android.os.Handler r0 = r2.g     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.g     // Catch: java.lang.Throwable -> Lf
            com.loc.es$b r1 = new com.loc.es$b     // Catch: java.lang.Throwable -> Lf
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lf
            r0.post(r1)     // Catch: java.lang.Throwable -> Lf
        Le:
            return
        Lf:
            r3 = move-exception
            java.lang.String r0 = "cl"
            java.lang.String r1 = "olcc"
            com.loc.av.b(r3, r0, r1)
            return
    }

    public final void a(com.loc.fb r7, com.loc.ff r8, android.os.Handler r9) {
            r6 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            com.loc.ft.a()
            boolean r1 = r6.j
            if (r1 == 0) goto Lb
            return
        Lb:
            if (r7 == 0) goto Lf8
            if (r8 == 0) goto Lf8
            if (r9 != 0) goto L13
            goto Lf8
        L13:
            android.content.Context r1 = r6.a
            boolean r1 = com.loc.fz.m(r1)
            if (r1 == 0) goto L21
            java.lang.Object[] r7 = new java.lang.Object[r0]
            com.loc.ft.a()
            return
        L21:
            r6.j = r0
            r6.c = r7
            r6.b = r8
            r8.a(r6)
            com.loc.fb r7 = r6.c
            r7.a(r6)
            r6.g = r9
            android.location.LocationManager r7 = r6.h     // Catch: java.lang.Throwable -> Lf0
            if (r7 != 0) goto L43
            if (r9 == 0) goto L43
            android.content.Context r7 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = "location"
            java.lang.Object r7 = r7.getSystemService(r8)     // Catch: java.lang.Throwable -> Lf0
            android.location.LocationManager r7 = (android.location.LocationManager) r7     // Catch: java.lang.Throwable -> Lf0
            r6.h = r7     // Catch: java.lang.Throwable -> Lf0
        L43:
            com.loc.es$a r7 = r6.i     // Catch: java.lang.Throwable -> Lf0
            if (r7 != 0) goto L4e
            com.loc.es$a r7 = new com.loc.es$a     // Catch: java.lang.Throwable -> Lf0
            r7.<init>(r6)     // Catch: java.lang.Throwable -> Lf0
            r6.i = r7     // Catch: java.lang.Throwable -> Lf0
        L4e:
            com.loc.es$a r7 = r6.i     // Catch: java.lang.Throwable -> Lf0
            r7.a(r6)     // Catch: java.lang.Throwable -> Lf0
            com.loc.es$a r7 = r6.i     // Catch: java.lang.Throwable -> Lf0
            if (r7 == 0) goto L68
            android.location.LocationManager r7 = r6.h     // Catch: java.lang.Throwable -> Lf0
            if (r7 == 0) goto L68
            android.location.LocationManager r0 = r6.h     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = "passive"
            r2 = 1000(0x3e8, double:4.94E-321)
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
            com.loc.es$a r5 = r6.i     // Catch: java.lang.Throwable -> Lf0
            r0.requestLocationUpdates(r1, r2, r4, r5)     // Catch: java.lang.Throwable -> Lf0
        L68:
            com.loc.dw r7 = r6.d     // Catch: java.lang.Throwable -> Lf0
            if (r7 != 0) goto Lef
            com.loc.dw r7 = new com.loc.dw     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = "6.4.0"
            android.content.Context r8 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r2 = com.loc.l.f(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "S128DF1572465B890OE3F7A13167KLEI"
            android.content.Context r8 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r4 = com.loc.l.c(r8)     // Catch: java.lang.Throwable -> Lf0
            r0 = r7
            r5 = r6
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lf0
            r6.d = r7     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.k()     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.a(r8)     // Catch: java.lang.Throwable -> Lf0
            android.content.Context r8 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.f(r8)     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.b(r8)     // Catch: java.lang.Throwable -> Lf0
            android.content.Context r8 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.a(r8)     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.c(r8)     // Catch: java.lang.Throwable -> Lf0
            android.content.Context r8 = r6.a     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.e(r8)     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.d(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.n()     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.e(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.f()     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.f(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.g(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.h(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.i(r8)     // Catch: java.lang.Throwable -> Lf0
            int r8 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.a(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.j(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.h()     // Catch: java.lang.Throwable -> Lf0
            long r8 = com.loc.eg.a(r8)     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw r7 = r7.a(r8)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r8 = com.loc.o.h()     // Catch: java.lang.Throwable -> Lf0
            r7.k(r8)     // Catch: java.lang.Throwable -> Lf0
            com.loc.dw.b()     // Catch: java.lang.Throwable -> Lf0
        Lef:
            return
        Lf0:
            r7 = move-exception
            java.lang.String r8 = "col"
            java.lang.String r9 = "init"
            com.loc.fr.a(r7, r8, r9)
        Lf8:
            return
    }

    public final void b() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L15
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L15
            android.os.Handler r0 = r3.g     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L14
            android.os.Handler r0 = r3.g     // Catch: java.lang.Throwable -> L15
            com.loc.es$1 r1 = new com.loc.es$1     // Catch: java.lang.Throwable -> L15
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L15
            r0.post(r1)     // Catch: java.lang.Throwable -> L15
        L14:
            return
        L15:
            r0 = move-exception
            java.lang.String r1 = "cl"
            java.lang.String r2 = "upw"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void c() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L18
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L18
            com.loc.dw r0 = r3.d     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L17
            com.loc.fb r0 = r3.c     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L17
            com.loc.fb r0 = r3.c     // Catch: java.lang.Throwable -> L18
            java.util.List r0 = r0.a()     // Catch: java.lang.Throwable -> L18
            com.loc.dw.a(r0)     // Catch: java.lang.Throwable -> L18
        L17:
            return
        L18:
            r0 = move-exception
            java.lang.String r1 = "cl"
            java.lang.String r2 = "upc"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void d() {
            r5 = this;
            android.content.Context r0 = r5.a     // Catch: java.lang.Throwable -> L2b
            boolean r0 = com.loc.fz.m(r0)     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto Lf
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L2b
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L2b
            return
        Lf:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2b
            long r2 = com.loc.es.k     // Catch: java.lang.Throwable -> L2b
            long r0 = r0 - r2
            r2 = 60000(0xea60, double:2.9644E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L1e
            return
        L1e:
            com.loc.cr r0 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L2b
            com.loc.es$b r1 = new com.loc.es$b     // Catch: java.lang.Throwable -> L2b
            r2 = 2
            r1.<init>(r5, r2)     // Catch: java.lang.Throwable -> L2b
            r0.b(r1)     // Catch: java.lang.Throwable -> L2b
        L2b:
            return
    }

    public final void e() {
            r3 = this;
            com.loc.cr r0 = com.loc.cr.a()     // Catch: java.lang.Throwable -> Ld
            com.loc.es$b r1 = new com.loc.es$b     // Catch: java.lang.Throwable -> Ld
            r2 = 3
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> Ld
            r0.b(r1)     // Catch: java.lang.Throwable -> Ld
        Ld:
            return
    }
}
