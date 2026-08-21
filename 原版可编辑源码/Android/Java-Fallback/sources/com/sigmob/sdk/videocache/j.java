package com.sigmob.sdk.videocache;

public class j implements com.sigmob.sdk.videocache.s {
    private static final int a = 5;
    private final com.sigmob.sdk.videocache.sourcestorage.c b;
    private final com.sigmob.sdk.videocache.headers.b c;
    private com.sigmob.sdk.videocache.t d;
    private java.net.HttpURLConnection e;
    private java.io.InputStream f;

    public j(com.sigmob.sdk.videocache.j r2) {
            r1 = this;
            r1.<init>()
            com.sigmob.sdk.videocache.t r0 = r2.d
            r1.d = r0
            com.sigmob.sdk.videocache.sourcestorage.c r0 = r2.b
            r1.b = r0
            com.sigmob.sdk.videocache.headers.b r2 = r2.c
            r1.c = r2
            return
    }

    public j(java.lang.String r2) {
            r1 = this;
            com.sigmob.sdk.videocache.sourcestorage.c r0 = com.sigmob.sdk.videocache.sourcestorage.d.a()
            r1.<init>(r2, r0)
            return
    }

    public j(java.lang.String r2, com.sigmob.sdk.videocache.sourcestorage.c r3) {
            r1 = this;
            com.sigmob.sdk.videocache.headers.a r0 = new com.sigmob.sdk.videocache.headers.a
            r0.<init>()
            r1.<init>(r2, r3, r0)
            return
    }

    public j(java.lang.String r3, com.sigmob.sdk.videocache.sourcestorage.c r4, com.sigmob.sdk.videocache.headers.b r5) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = com.sigmob.sdk.videocache.n.a(r4)
            com.sigmob.sdk.videocache.sourcestorage.c r0 = (com.sigmob.sdk.videocache.sourcestorage.c) r0
            r2.b = r0
            java.lang.Object r5 = com.sigmob.sdk.videocache.n.a(r5)
            com.sigmob.sdk.videocache.headers.b r5 = (com.sigmob.sdk.videocache.headers.b) r5
            r2.c = r5
            com.sigmob.sdk.videocache.t r4 = r4.a(r3)
            if (r4 == 0) goto L1a
            goto L26
        L1a:
            com.sigmob.sdk.videocache.t r4 = new com.sigmob.sdk.videocache.t
            r0 = -2147483648(0xffffffff80000000, double:NaN)
            java.lang.String r5 = com.sigmob.sdk.videocache.q.a(r3)
            r4.<init>(r3, r0, r5)
        L26:
            r2.d = r4
            return
    }

    private long a(java.net.HttpURLConnection r3) {
            r2 = this;
            java.lang.String r0 = "Content-Length"
            java.lang.String r3 = r3.getHeaderField(r0)
            if (r3 != 0) goto Lb
            r0 = -1
            goto Lf
        Lb:
            long r0 = java.lang.Long.parseLong(r3)
        Lf:
            return r0
    }

    private long a(java.net.HttpURLConnection r3, long r4, int r6) throws java.io.IOException {
            r2 = this;
            long r0 = r2.a(r3)
            r3 = 200(0xc8, float:2.8E-43)
            if (r6 != r3) goto L9
            goto L13
        L9:
            r3 = 206(0xce, float:2.89E-43)
            if (r6 != r3) goto Lf
            long r0 = r0 + r4
            goto L13
        Lf:
            com.sigmob.sdk.videocache.t r3 = r2.d
            long r0 = r3.b
        L13:
            return r0
    }

    private java.net.HttpURLConnection a(long r8, int r10) throws java.io.IOException, com.sigmob.sdk.videocache.p {
            r7 = this;
            com.sigmob.sdk.videocache.t r0 = r7.d
            java.lang.String r0 = r0.a
            r1 = 0
            r2 = r1
        L6:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Open connection "
            r3.append(r4)
            r4 = 0
            int r4 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r4 <= 0) goto L28
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = " with offset "
            r5.append(r6)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            goto L2a
        L28:
            java.lang.String r5 = ""
        L2a:
            r3.append(r5)
            java.lang.String r5 = " to "
            r3.append(r5)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
            java.net.URL r3 = new java.net.URL
            r3.<init>(r0)
            java.net.URLConnection r3 = r3.openConnection()
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3
            r7.a(r3, r0)
            if (r4 <= 0) goto L67
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "bytes="
            r4.append(r5)
            r4.append(r8)
            java.lang.String r5 = "-"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Range"
            r3.setRequestProperty(r5, r4)
        L67:
            if (r10 <= 0) goto L6f
            r3.setConnectTimeout(r10)
            r3.setReadTimeout(r10)
        L6f:
            int r4 = r3.getResponseCode()
            r5 = 301(0x12d, float:4.22E-43)
            if (r4 == r5) goto L82
            r5 = 302(0x12e, float:4.23E-43)
            if (r4 == r5) goto L82
            r5 = 303(0x12f, float:4.25E-43)
            if (r4 != r5) goto L80
            goto L82
        L80:
            r4 = r1
            goto L83
        L82:
            r4 = 1
        L83:
            if (r4 == 0) goto L90
            java.lang.String r0 = "Location"
            java.lang.String r0 = r3.getHeaderField(r0)
            int r2 = r2 + 1
            r3.disconnect()
        L90:
            r5 = 5
            if (r2 > r5) goto L96
            if (r4 != 0) goto L6
            return r3
        L96:
            com.sigmob.sdk.videocache.p r8 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Too many redirects: "
            r9.append(r10)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
    }

    private void a(java.net.HttpURLConnection r3, java.lang.String r4) {
            r2 = this;
            com.sigmob.sdk.videocache.headers.b r0 = r2.c
            java.util.Map r4 = r0.a(r4)
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L2a
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r3.setRequestProperty(r1, r0)
            goto Le
        L2a:
            return
    }

    private void e() throws com.sigmob.sdk.videocache.p {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Read content info from "
            r0.append(r1)
            com.sigmob.sdk.videocache.t r1 = r7.d
            java.lang.String r1 = r1.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r2 = 10000(0x2710, float:1.4013E-41)
            r3 = 0
            java.net.HttpURLConnection r0 = r7.a(r0, r2)     // Catch: java.lang.Throwable -> L61 java.io.IOException -> L64
            long r1 = r7.a(r0)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r4 = r0.getContentType()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.io.InputStream r3 = r0.getInputStream()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r5 = new com.sigmob.sdk.videocache.t     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r6 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r6 = r6.a     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r5.<init>(r6, r1, r4)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r7.d = r5     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.sourcestorage.c r1 = r7.b     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r2 = r5.a     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r4 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.a(r2, r4)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.<init>()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r2 = "Source info fetched: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.t r2 = r7.d     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            r1.append(r2)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L86
            goto L83
        L5d:
            r1 = move-exception
            goto L87
        L5f:
            r1 = move-exception
            goto L66
        L61:
            r1 = move-exception
            r0 = r3
            goto L87
        L64:
            r1 = move-exception
            r0 = r3
        L66:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = "Error fetching info from "
            r2.append(r4)     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.videocache.t r4 = r7.d     // Catch: java.lang.Throwable -> L5d
            java.lang.String r4 = r4.a     // Catch: java.lang.Throwable -> L5d
            r2.append(r4)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5d
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)     // Catch: java.lang.Throwable -> L5d
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L86
        L83:
            r0.disconnect()
        L86:
            return
        L87:
            com.sigmob.sdk.videocache.q.a(r3)
            if (r0 == 0) goto L8f
            r0.disconnect()
        L8f:
            throw r1
    }

    @Override
    public int a(byte[] r5) throws com.sigmob.sdk.videocache.p {
            r4 = this;
            java.io.InputStream r0 = r4.f
            java.lang.String r1 = "Error reading data from "
            if (r0 == 0) goto L48
            r2 = 0
            int r3 = r5.length     // Catch: java.io.IOException -> Ld java.io.InterruptedIOException -> L27
            int r5 = r0.read(r5, r2, r3)     // Catch: java.io.IOException -> Ld java.io.InterruptedIOException -> L27
            return r5
        Ld:
            r5 = move-exception
            com.sigmob.sdk.videocache.p r0 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            com.sigmob.sdk.videocache.t r1 = r4.d
            java.lang.String r1 = r1.a
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1, r5)
            throw r0
        L27:
            r5 = move-exception
            com.sigmob.sdk.videocache.l r0 = new com.sigmob.sdk.videocache.l
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Reading source "
            r1.append(r2)
            com.sigmob.sdk.videocache.t r2 = r4.d
            java.lang.String r2 = r2.a
            r1.append(r2)
            java.lang.String r2 = " is interrupted"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1, r5)
            throw r0
        L48:
            com.sigmob.sdk.videocache.p r5 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            com.sigmob.sdk.videocache.t r1 = r4.d
            java.lang.String r1 = r1.a
            r0.append(r1)
            java.lang.String r1 = ": connection is absent!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
    }

    @Override
    public synchronized long a() throws com.sigmob.sdk.videocache.p {
            r4 = this;
            monitor-enter(r4)
            com.sigmob.sdk.videocache.t r0 = r4.d     // Catch: java.lang.Throwable -> L15
            long r0 = r0.b     // Catch: java.lang.Throwable -> L15
            r2 = -2147483648(0xffffffff80000000, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Lf
            r4.e()     // Catch: java.lang.Throwable -> L15
        Lf:
            com.sigmob.sdk.videocache.t r0 = r4.d     // Catch: java.lang.Throwable -> L15
            long r0 = r0.b     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public void a(long r6) throws com.sigmob.sdk.videocache.p {
            r5 = this;
            r0 = -1
            java.net.HttpURLConnection r0 = r5.a(r6, r0)     // Catch: java.io.IOException -> L3b
            r5.e = r0     // Catch: java.io.IOException -> L3b
            java.lang.String r0 = r0.getContentType()     // Catch: java.io.IOException -> L3b
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r2 = r5.e     // Catch: java.io.IOException -> L3b
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.io.IOException -> L3b
            r3 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r2, r3)     // Catch: java.io.IOException -> L3b
            r5.f = r1     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r1 = r5.e     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r2 = r5.e     // Catch: java.io.IOException -> L3b
            int r2 = r2.getResponseCode()     // Catch: java.io.IOException -> L3b
            long r1 = r5.a(r1, r6, r2)     // Catch: java.io.IOException -> L3b
            com.sigmob.sdk.videocache.t r3 = new com.sigmob.sdk.videocache.t     // Catch: java.io.IOException -> L3b
            com.sigmob.sdk.videocache.t r4 = r5.d     // Catch: java.io.IOException -> L3b
            java.lang.String r4 = r4.a     // Catch: java.io.IOException -> L3b
            r3.<init>(r4, r1, r0)     // Catch: java.io.IOException -> L3b
            r5.d = r3     // Catch: java.io.IOException -> L3b
            com.sigmob.sdk.videocache.sourcestorage.c r0 = r5.b     // Catch: java.io.IOException -> L3b
            java.lang.String r1 = r3.a     // Catch: java.io.IOException -> L3b
            com.sigmob.sdk.videocache.t r2 = r5.d     // Catch: java.io.IOException -> L3b
            r0.a(r1, r2)     // Catch: java.io.IOException -> L3b
            return
        L3b:
            r0 = move-exception
            com.sigmob.sdk.videocache.p r1 = new com.sigmob.sdk.videocache.p
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error opening connection for "
            r2.append(r3)
            com.sigmob.sdk.videocache.t r3 = r5.d
            java.lang.String r3 = r3.a
            r2.append(r3)
            java.lang.String r3 = " with offset "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r1.<init>(r6, r0)
            throw r1
    }

    @Override
    public void b() throws com.sigmob.sdk.videocache.p {
            r3 = this;
            java.net.HttpURLConnection r0 = r3.e
            if (r0 == 0) goto L1a
            r0.disconnect()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L8 java.lang.IllegalArgumentException -> Lf java.lang.NullPointerException -> L11
            goto L1a
        L8:
            r0 = move-exception
            java.lang.String r1 = "Error closing connection correctly. Should happen only on Android L. If anybody know how to fix it, please visit https://github.com/danikula/AndroidVideoCache/issues/88. Until good solution is not know, just ignore this issue :("
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
            goto L1a
        Lf:
            r0 = move-exception
            goto L12
        L11:
            r0 = move-exception
        L12:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues."
            r1.<init>(r2, r0)
            throw r1
        L1a:
            return
    }

    public synchronized java.lang.String c() throws com.sigmob.sdk.videocache.p {
            r1 = this;
            monitor-enter(r1)
            com.sigmob.sdk.videocache.t r0 = r1.d     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto Le
            r1.e()     // Catch: java.lang.Throwable -> L14
        Le:
            com.sigmob.sdk.videocache.t r0 = r1.d     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)
            return r0
        L14:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public java.lang.String d() {
            r1 = this;
            com.sigmob.sdk.videocache.t r0 = r1.d
            java.lang.String r0 = r0.a
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HttpUrlSource{sourceInfo='"
            r0.append(r1)
            com.sigmob.sdk.videocache.t r1 = r2.d
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
