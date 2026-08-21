package com.tkay.expressad.a;

public class f {
    private static final java.lang.String a = null;
    private static final int b = 60000;
    private com.tkay.expressad.d.a c;
    private java.lang.String d;
    private boolean e;
    private final int f;
    private com.tkay.expressad.a.f.a g;

    public static class a {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public java.lang.String d;
        public int e;
        public int f;
        public java.lang.String g;
        public java.lang.String h;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String a() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "statusCode="
                r0.append(r1)
                int r1 = r3.f
                r0.append(r1)
                java.lang.String r1 = ", "
                r0.append(r1)
                java.lang.String r2 = "location="
                r0.append(r2)
                java.lang.String r2 = r3.a
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentType="
                r0.append(r2)
                java.lang.String r2 = r3.b
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentLength="
                r0.append(r2)
                int r2 = r3.e
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentEncoding="
                r0.append(r2)
                java.lang.String r2 = r3.c
                r0.append(r2)
                r0.append(r1)
                java.lang.String r1 = "referer="
                r0.append(r1)
                java.lang.String r1 = r3.d
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public final java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "http header:...\n"
                r0.<init>(r1)
                java.lang.String r1 = "statusCode="
                r0.append(r1)
                int r1 = r3.f
                r0.append(r1)
                java.lang.String r1 = ", "
                r0.append(r1)
                java.lang.String r2 = "location="
                r0.append(r2)
                java.lang.String r2 = r3.a
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentType="
                r0.append(r2)
                java.lang.String r2 = r3.b
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentLength="
                r0.append(r2)
                int r2 = r3.e
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = "contentEncoding="
                r0.append(r2)
                java.lang.String r2 = r3.c
                r0.append(r2)
                r0.append(r1)
                java.lang.String r1 = "referer="
                r0.append(r1)
                java.lang.String r1 = r3.d
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.a.f> r0 = com.tkay.expressad.a.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.a.f.a = r0
            return
    }

    public f() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.e = r0
            r0 = 3145728(0x300000, float:4.408104E-39)
            r1.f = r0
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r1.c = r0
            if (r0 != 0) goto L25
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.c()
            r1.c = r0
        L25:
            return
    }

    private java.lang.String a(java.io.InputStream r4, boolean r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            if (r5 == 0) goto Le
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r4 = r5
        Le:
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r5.<init>(r2)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
        L18:
            java.lang.String r4 = r5.readLine()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L29
            if (r4 == 0) goto L22
            r0.append(r4)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L29
            goto L18
        L22:
            r5.close()     // Catch: java.lang.Exception -> L49
            goto L4d
        L26:
            r4 = move-exception
            r1 = r5
            goto L52
        L29:
            r4 = move-exception
            r1 = r5
            goto L2f
        L2c:
            r4 = move-exception
            goto L52
        L2e:
            r4 = move-exception
        L2f:
            com.tkay.expressad.a.f$a r5 = r3.g     // Catch: java.lang.Throwable -> L2c
            if (r5 != 0) goto L40
            com.tkay.expressad.a.f$a r5 = new com.tkay.expressad.a.f$a     // Catch: java.lang.Throwable -> L2c
            r5.<init>()     // Catch: java.lang.Throwable -> L2c
            r3.g = r5     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = r4.getMessage()     // Catch: java.lang.Throwable -> L2c
            r5.h = r2     // Catch: java.lang.Throwable -> L2c
        L40:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L4d
            r1.close()     // Catch: java.lang.Exception -> L49
            goto L4d
        L49:
            r4 = move-exception
            r4.printStackTrace()
        L4d:
            java.lang.String r4 = r0.toString()
            return r4
        L52:
            if (r1 == 0) goto L5c
            r1.close()     // Catch: java.lang.Exception -> L58
            goto L5c
        L58:
            r5 = move-exception
            r5.printStackTrace()
        L5c:
            throw r4
    }

    private void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final com.tkay.expressad.a.f.a a(java.lang.String r5, boolean r6, boolean r7, com.tkay.expressad.foundation.d.c r8) {
            r4 = this;
            java.lang.String r0 = "gzip"
            boolean r1 = android.webkit.URLUtil.isNetworkUrl(r5)
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            java.lang.String r1 = " "
            java.lang.String r3 = "%20"
            java.lang.String r5 = r5.replace(r1, r3)
            android.webkit.URLUtil.isHttpsUrl(r5)
            com.tkay.expressad.a.f$a r1 = new com.tkay.expressad.a.f$a
            r1.<init>()
            r4.g = r1
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L11d
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L11d
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L11d
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L11d
            java.lang.String r2 = "GET"
            r1.setRequestMethod(r2)     // Catch: java.lang.Throwable -> L11a
            java.lang.String r2 = "User-Agent"
            if (r6 != 0) goto L32
            if (r7 == 0) goto L34
        L32:
            if (r8 != 0) goto L3b
        L34:
            java.lang.String r3 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> L11a
            r1.setRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> L11a
        L3b:
            r3 = 1
            if (r6 == 0) goto L4d
            if (r8 == 0) goto L4d
            int r6 = r8.E()     // Catch: java.lang.Throwable -> L11a
            if (r6 != r3) goto L4d
            java.lang.String r6 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> L11a
            r1.setRequestProperty(r2, r6)     // Catch: java.lang.Throwable -> L11a
        L4d:
            if (r7 == 0) goto L5e
            if (r8 == 0) goto L5e
            int r6 = r8.D()     // Catch: java.lang.Throwable -> L11a
            if (r6 != r3) goto L5e
            java.lang.String r6 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> L11a
            r1.setRequestProperty(r2, r6)     // Catch: java.lang.Throwable -> L11a
        L5e:
            java.lang.String r6 = "Accept-Encoding"
            r1.setRequestProperty(r6, r0)     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.d.a r6 = r4.c     // Catch: java.lang.Throwable -> L11a
            boolean r6 = r6.v()     // Catch: java.lang.Throwable -> L11a
            if (r6 == 0) goto L7a
            java.lang.String r6 = r4.d     // Catch: java.lang.Throwable -> L11a
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11a
            if (r6 != 0) goto L7a
            java.lang.String r6 = "referer"
            java.lang.String r7 = r4.d     // Catch: java.lang.Throwable -> L11a
            r1.setRequestProperty(r6, r7)     // Catch: java.lang.Throwable -> L11a
        L7a:
            r6 = 60000(0xea60, float:8.4078E-41)
            r1.setConnectTimeout(r6)     // Catch: java.lang.Throwable -> L11a
            r1.setReadTimeout(r6)     // Catch: java.lang.Throwable -> L11a
            r6 = 0
            r1.setInstanceFollowRedirects(r6)     // Catch: java.lang.Throwable -> L11a
            r1.connect()     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            java.lang.String r7 = "Location"
            java.lang.String r7 = r1.getHeaderField(r7)     // Catch: java.lang.Throwable -> L11a
            r6.a = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            java.lang.String r7 = "Referer"
            java.lang.String r7 = r1.getHeaderField(r7)     // Catch: java.lang.Throwable -> L11a
            r6.d = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            int r7 = r1.getResponseCode()     // Catch: java.lang.Throwable -> L11a
            r6.f = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            java.lang.String r7 = r1.getContentType()     // Catch: java.lang.Throwable -> L11a
            r6.b = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            int r7 = r1.getContentLength()     // Catch: java.lang.Throwable -> L11a
            r6.e = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            java.lang.String r7 = r1.getContentEncoding()     // Catch: java.lang.Throwable -> L11a
            r6.c = r7     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L11a
            java.lang.String r6 = r6.c     // Catch: java.lang.Throwable -> L11a
            boolean r6 = r0.equalsIgnoreCase(r6)     // Catch: java.lang.Throwable -> L11a
            com.tkay.expressad.a.f$a r7 = r4.g     // Catch: java.lang.Throwable -> L11a
            int r7 = r7.f     // Catch: java.lang.Throwable -> L11a
            r8 = 200(0xc8, float:2.8E-43)
            if (r7 != r8) goto L110
            boolean r7 = r4.e     // Catch: java.lang.Throwable -> L11a
            if (r7 == 0) goto L110
            com.tkay.expressad.a.f$a r7 = r4.g     // Catch: java.lang.Throwable -> L11a
            int r7 = r7.e     // Catch: java.lang.Throwable -> L11a
            if (r7 <= 0) goto L110
            com.tkay.expressad.a.f$a r7 = r4.g     // Catch: java.lang.Throwable -> L11a
            int r7 = r7.e     // Catch: java.lang.Throwable -> L11a
            r8 = 3145728(0x300000, float:4.408104E-39)
            if (r7 >= r8) goto L110
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L11a
            if (r7 != 0) goto L110
            java.lang.String r7 = ".apk"
            boolean r7 = r5.endsWith(r7)     // Catch: java.lang.Throwable -> L11a
            if (r7 != 0) goto L110
            java.io.InputStream r7 = r1.getInputStream()     // Catch: java.lang.Throwable -> L110
            java.lang.String r6 = r4.a(r7, r6)     // Catch: java.lang.Throwable -> L110
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L110
            if (r7 != 0) goto L110
            byte[] r7 = r6.getBytes()     // Catch: java.lang.Throwable -> L110
            if (r7 == 0) goto L110
            int r0 = r7.length     // Catch: java.lang.Throwable -> L110
            if (r0 <= 0) goto L110
            int r7 = r7.length     // Catch: java.lang.Throwable -> L110
            if (r7 >= r8) goto L110
            com.tkay.expressad.a.f$a r7 = r4.g     // Catch: java.lang.Throwable -> L110
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Throwable -> L110
            r7.g = r6     // Catch: java.lang.Throwable -> L110
        L110:
            r4.d = r5     // Catch: java.lang.Throwable -> L11a
            if (r1 == 0) goto L117
            r1.disconnect()
        L117:
            com.tkay.expressad.a.f$a r5 = r4.g
            return r5
        L11a:
            r5 = move-exception
            r2 = r1
            goto L11e
        L11d:
            r5 = move-exception
        L11e:
            com.tkay.expressad.a.f$a r6 = r4.g     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L12e
            r6.h = r5     // Catch: java.lang.Throwable -> L12e
            com.tkay.expressad.a.f$a r5 = r4.g     // Catch: java.lang.Throwable -> L12e
            if (r2 == 0) goto L12d
            r2.disconnect()
        L12d:
            return r5
        L12e:
            r5 = move-exception
            if (r2 == 0) goto L134
            r2.disconnect()
        L134:
            throw r5
    }
}
