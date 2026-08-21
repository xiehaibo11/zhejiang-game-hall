package com.meizu.cloud.pushsdk.c.c;

public class e implements com.meizu.cloud.pushsdk.c.c.a {


    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.meizu.cloud.pushsdk.c.c.l a(java.net.HttpURLConnection r2) {
            boolean r0 = r2.getDoInput()
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            int r0 = r2.getResponseCode()
            boolean r0 = a(r0)
            if (r0 == 0) goto L17
            java.io.InputStream r0 = r2.getInputStream()
            goto L1b
        L17:
            java.io.InputStream r0 = r2.getErrorStream()
        L1b:
            com.meizu.cloud.pushsdk.c.g.m r0 = com.meizu.cloud.pushsdk.c.g.g.a(r0)
            com.meizu.cloud.pushsdk.c.g.d r0 = com.meizu.cloud.pushsdk.c.g.g.a(r0)
            com.meizu.cloud.pushsdk.c.c.e$1 r1 = new com.meizu.cloud.pushsdk.c.c.e$1
            r1.<init>(r2, r0)
            return r1
    }

    private static void a(java.net.HttpURLConnection r2, com.meizu.cloud.pushsdk.c.c.i r3) {
            int r0 = r3.c()
            if (r0 == 0) goto L32
            r1 = 1
            if (r0 == r1) goto L29
            r1 = 2
            if (r0 == r1) goto L26
            r1 = 3
            if (r0 == r1) goto L23
            r1 = 4
            if (r0 == r1) goto L20
            r1 = 5
            if (r0 != r1) goto L18
            java.lang.String r0 = "PATCH"
            goto L2b
        L18:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Unknown method type."
            r2.<init>(r3)
            throw r2
        L20:
            java.lang.String r3 = "HEAD"
            goto L34
        L23:
            java.lang.String r3 = "DELETE"
            goto L34
        L26:
            java.lang.String r0 = "PUT"
            goto L2b
        L29:
            java.lang.String r0 = "POST"
        L2b:
            r2.setRequestMethod(r0)
            b(r2, r3)
            goto L37
        L32:
            java.lang.String r3 = "GET"
        L34:
            r2.setRequestMethod(r3)
        L37:
            return
    }

    protected static boolean a(int r1) {
            r0 = 200(0xc8, float:2.8E-43)
            if (r1 < r0) goto La
            r0 = 300(0x12c, float:4.2E-43)
            if (r1 >= r0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    private java.net.HttpURLConnection b(com.meizu.cloud.pushsdk.c.c.i r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.c.f r2 = r2.a()
            java.lang.String r2 = r2.toString()
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            boolean r2 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationChannel()
            if (r2 == 0) goto L19
            r2 = 2006537699(0x779955e3, float:6.2200266E33)
            android.net.TrafficStats.setThreadStatsTag(r2)
        L19:
            java.net.HttpURLConnection r2 = r1.a(r0)
            r0 = 60000(0xea60, float:8.4078E-41)
            r2.setConnectTimeout(r0)
            r2.setReadTimeout(r0)
            r0 = 0
            r2.setUseCaches(r0)
            r0 = 1
            r2.setDoInput(r0)
            return r2
    }

    private static void b(java.net.HttpURLConnection r2, com.meizu.cloud.pushsdk.c.c.i r3) {
            com.meizu.cloud.pushsdk.c.c.j r3 = r3.e()
            if (r3 == 0) goto L29
            r0 = 1
            r2.setDoOutput(r0)
            com.meizu.cloud.pushsdk.c.c.g r0 = r3.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Content-Type"
            r2.addRequestProperty(r1, r0)
            java.io.OutputStream r2 = r2.getOutputStream()
            com.meizu.cloud.pushsdk.c.g.l r2 = com.meizu.cloud.pushsdk.c.g.g.a(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = com.meizu.cloud.pushsdk.c.g.g.a(r2)
            r3.a(r2)
            r2.close()
        L29:
            return
    }

    @Override
    public com.meizu.cloud.pushsdk.c.c.k a(com.meizu.cloud.pushsdk.c.c.i r7) {
            r6 = this;
            java.net.HttpURLConnection r0 = r6.b(r7)
            com.meizu.cloud.pushsdk.c.c.c r1 = r7.d()
            java.util.Set r1 = r1.b()
            java.util.Iterator r1 = r1.iterator()
        L10:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L40
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r7.a(r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "current header name "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r5 = " value "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushsdk.c.a.a.b(r4)
            r0.addRequestProperty(r2, r3)
            goto L10
        L40:
            a(r0, r7)
            int r1 = r0.getResponseCode()
            java.lang.String r2 = r0.getResponseMessage()
            com.meizu.cloud.pushsdk.c.c.k$a r3 = new com.meizu.cloud.pushsdk.c.c.k$a
            r3.<init>()
            com.meizu.cloud.pushsdk.c.c.k$a r1 = r3.a(r1)
            com.meizu.cloud.pushsdk.c.c.c r3 = r7.d()
            com.meizu.cloud.pushsdk.c.c.k$a r1 = r1.a(r3)
            com.meizu.cloud.pushsdk.c.c.k$a r1 = r1.a(r2)
            com.meizu.cloud.pushsdk.c.c.k$a r7 = r1.a(r7)
            com.meizu.cloud.pushsdk.c.c.l r0 = a(r0)
            com.meizu.cloud.pushsdk.c.c.k$a r7 = r7.a(r0)
            com.meizu.cloud.pushsdk.c.c.k r7 = r7.a()
            return r7
    }

    protected java.net.HttpURLConnection a(java.net.URL r2) {
            r1 = this;
            java.net.URLConnection r2 = r2.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            boolean r0 = java.net.HttpURLConnection.getFollowRedirects()
            r2.setInstanceFollowRedirects(r0)
            return r2
    }
}
