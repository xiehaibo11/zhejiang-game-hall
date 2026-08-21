package com.xiaomi.push.service;

public class bl extends com.xiaomi.push.service.bv.a implements com.xiaomi.push.cv.a {
    private long a;
    private com.xiaomi.push.service.XMPushService a;

    class a implements com.xiaomi.push.cv.b {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String a(java.lang.String r9) {
                r8 = this;
                android.net.Uri r9 = android.net.Uri.parse(r9)
                android.net.Uri$Builder r9 = r9.buildUpon()
                r0 = 48
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "sdkver"
                r9.appendQueryParameter(r1, r0)
                int r0 = android.os.Build.VERSION.SDK_INT
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "osver"
                r9.appendQueryParameter(r1, r0)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = android.os.Build.MODEL
                r0.append(r1)
                java.lang.String r1 = ":"
                r0.append(r1)
                java.lang.String r2 = android.os.Build.VERSION.INCREMENTAL
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r0 = com.xiaomi.push.gy.a(r0)
                java.lang.String r2 = "os"
                r9.appendQueryParameter(r2, r0)
                int r0 = com.xiaomi.push.v.a()
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = "mi"
                r9.appendQueryParameter(r2, r0)
                java.lang.String r9 = r9.toString()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "fetch bucket from : "
                r0.append(r2)
                r0.append(r9)
                java.lang.String r0 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r0)
                java.net.URL r0 = new java.net.URL
                r0.<init>(r9)
                int r9 = r0.getPort()
                r2 = -1
                if (r9 != r2) goto L73
                r9 = 80
                goto L77
            L73:
                int r9 = r0.getPort()
            L77:
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> La4
                android.content.Context r5 = com.xiaomi.push.v.a()     // Catch: java.io.IOException -> La4
                java.lang.String r5 = com.xiaomi.push.bj.a(r5, r0)     // Catch: java.io.IOException -> La4
                long r6 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> La4
                long r6 = r6 - r3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La4
                r3.<init>()     // Catch: java.io.IOException -> La4
                java.lang.String r4 = r0.getHost()     // Catch: java.io.IOException -> La4
                r3.append(r4)     // Catch: java.io.IOException -> La4
                r3.append(r1)     // Catch: java.io.IOException -> La4
                r3.append(r9)     // Catch: java.io.IOException -> La4
                java.lang.String r3 = r3.toString()     // Catch: java.io.IOException -> La4
                int r4 = (int) r6     // Catch: java.io.IOException -> La4
                r6 = 0
                com.xiaomi.push.fj.a(r3, r4, r6)     // Catch: java.io.IOException -> La4
                return r5
            La4:
                r3 = move-exception
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = r0.getHost()
                r4.append(r0)
                r4.append(r1)
                r4.append(r9)
                java.lang.String r9 = r4.toString()
                com.xiaomi.push.fj.a(r9, r2, r3)
                throw r3
        }
    }

    class b extends com.xiaomi.push.cv {
        protected b(android.content.Context r1, com.xiaomi.push.cu r2, com.xiaomi.push.cv.b r3, java.lang.String r4) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        @Override
        protected java.lang.String a(java.util.ArrayList<java.lang.String> r3, java.lang.String r4, java.lang.String r5, boolean r6) {
                r2 = this;
                com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()     // Catch: java.io.IOException -> L13
                boolean r0 = r0.a()     // Catch: java.io.IOException -> L13
                if (r0 == 0) goto Le
                java.lang.String r5 = com.xiaomi.push.service.bv.a()     // Catch: java.io.IOException -> L13
            Le:
                java.lang.String r3 = super.a(r3, r4, r5, r6)     // Catch: java.io.IOException -> L13
                return r3
            L13:
                r3 = move-exception
                android.content.Context r4 = com.xiaomi.push.service.bl.b.a
                boolean r4 = com.xiaomi.push.bj.c(r4)
                r5 = 0
                com.xiaomi.push.ez r6 = com.xiaomi.push.ez.u
                int r6 = r6.a()
                r0 = 1
                r1 = 0
                com.xiaomi.push.fj.a(r5, r6, r0, r1, r4)
                throw r3
        }
    }

    bl(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static void a(com.xiaomi.push.service.XMPushService r8) {
            com.xiaomi.push.service.bl r0 = new com.xiaomi.push.service.bl
            r0.<init>(r8)
            com.xiaomi.push.service.bv r1 = com.xiaomi.push.service.bv.a()
            r1.a(r0)
            java.lang.Class<com.xiaomi.push.cv> r1 = com.xiaomi.push.cv.class
            monitor-enter(r1)
            com.xiaomi.push.cv.a(r0)     // Catch: java.lang.Throwable -> L24
            r3 = 0
            com.xiaomi.push.service.bl$a r4 = new com.xiaomi.push.service.bl$a     // Catch: java.lang.Throwable -> L24
            r4.<init>()     // Catch: java.lang.Throwable -> L24
            java.lang.String r5 = "0"
            java.lang.String r6 = "push"
            java.lang.String r7 = "2.2"
            r2 = r8
            com.xiaomi.push.cv.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            throw r8
    }

    @Override
    public com.xiaomi.push.cv a(android.content.Context r2, com.xiaomi.push.cu r3, com.xiaomi.push.cv.b r4, java.lang.String r5) {
            r1 = this;
            com.xiaomi.push.service.bl$b r0 = new com.xiaomi.push.service.bl$b
            r0.<init>(r2, r3, r4, r5)
            return r0
    }

    @Override
    public void a(com.xiaomi.push.dw.a r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.xiaomi.push.dx.b r7) {
            r6 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L91
            boolean r0 = r7.a()
            if (r0 == 0) goto L91
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.a
            long r0 = r0 - r2
            r2 = 3600000(0x36ee80, double:1.7786363E-317)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L91
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fetch bucket :"
            r0.append(r1)
            boolean r7 = r7.a()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            long r0 = java.lang.System.currentTimeMillis()
            r6.a = r0
            com.xiaomi.push.cv r7 = com.xiaomi.push.cv.a()
            r7.a()
            r7.b()
            com.xiaomi.push.service.XMPushService r0 = r6.a
            com.xiaomi.push.fw r0 = r0.a()
            if (r0 == 0) goto L91
            com.xiaomi.push.fx r1 = r0.a()
            java.lang.String r1 = r1.c()
            com.xiaomi.push.cr r7 = r7.b(r1)
            if (r7 == 0) goto L91
            java.util.ArrayList r7 = r7.a()
            r1 = 1
            java.util.Iterator r2 = r7.iterator()
        L61:
            boolean r3 = r2.hasNext()
            r4 = 0
            if (r3 == 0) goto L79
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r5 = r0.a()
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L61
            r1 = r4
        L79:
            if (r1 == 0) goto L91
            boolean r7 = r7.isEmpty()
            if (r7 != 0) goto L91
            java.lang.String r7 = "bucket changed, force reconnect"
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            com.xiaomi.push.service.XMPushService r7 = r6.a
            r0 = 0
            r7.a(r4, r0)
            com.xiaomi.push.service.XMPushService r7 = r6.a
            r7.a(r4)
        L91:
            return
    }
}
