package com.kwad.sdk.core.videocache;

public final class h implements com.kwad.sdk.core.videocache.l {
    private com.kwad.sdk.core.videocache.m awG;
    private java.net.HttpURLConnection awH;
    private java.io.InputStream awI;
    private final com.kwad.sdk.core.videocache.d.b awk;
    private final com.kwad.sdk.core.videocache.b.b awl;

    public h(com.kwad.sdk.core.videocache.h r2) {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.videocache.m r0 = r2.awG
            r1.awG = r0
            com.kwad.sdk.core.videocache.d.b r0 = r2.awk
            r1.awk = r0
            com.kwad.sdk.core.videocache.b.b r2 = r2.awl
            r1.awl = r2
            return
    }

    public h(java.lang.String r3, com.kwad.sdk.core.videocache.d.b r4, com.kwad.sdk.core.videocache.b.b r5) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = com.kwad.sdk.utils.ao.checkNotNull(r4)
            com.kwad.sdk.core.videocache.d.b r0 = (com.kwad.sdk.core.videocache.d.b) r0
            r2.awk = r0
            java.lang.Object r5 = com.kwad.sdk.utils.ao.checkNotNull(r5)
            com.kwad.sdk.core.videocache.b.b r5 = (com.kwad.sdk.core.videocache.b.b) r5
            r2.awl = r5
            com.kwad.sdk.core.videocache.m r4 = r4.dW(r3)
            if (r4 == 0) goto L1a
            goto L26
        L1a:
            com.kwad.sdk.core.videocache.m r4 = new com.kwad.sdk.core.videocache.m
            r0 = -2147483648(0xffffffff80000000, double:NaN)
            java.lang.String r5 = com.kwad.sdk.core.videocache.k.dU(r3)
            r4.<init>(r3, r0, r5)
        L26:
            r2.awG = r4
            return
    }

    private void DJ() {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Read content info from "
            r0.<init>(r1)
            com.kwad.sdk.core.videocache.m r1 = r8.awG
            java.lang.String r1 = r1.url
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HttpUrlSource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r2 = 0
            r0 = 10000(0x2710, float:1.4013E-41)
            r4 = 0
            java.net.HttpURLConnection r0 = r8.c(r2, r0)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5f
            long r2 = c(r0)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.String r5 = r0.getContentType()     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.io.InputStream r4 = r0.getInputStream()     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.videocache.m r6 = new com.kwad.sdk.core.videocache.m     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.videocache.m r7 = r8.awG     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.String r7 = r7.url     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            r6.<init>(r7, r2, r5)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            r8.awG = r6     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.videocache.d.b r2 = r8.awk     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.String r3 = r6.url     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.videocache.m r5 = r8.awG     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            r2.a(r3, r5)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.String r3 = "Source info fetched: "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.videocache.m r3 = r8.awG     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            r2.append(r3)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L60
        L53:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.a(r0)
            return
        L5a:
            r1 = move-exception
            goto L76
        L5c:
            r1 = move-exception
            r0 = r4
            goto L76
        L5f:
            r0 = r4
        L60:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5a
            java.lang.String r3 = "Error fetching info from "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5a
            com.kwad.sdk.core.videocache.m r3 = r8.awG     // Catch: java.lang.Throwable -> L5a
            java.lang.String r3 = r3.url     // Catch: java.lang.Throwable -> L5a
            r2.append(r3)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5a
            com.kwad.sdk.core.e.c.e(r1, r2)     // Catch: java.lang.Throwable -> L5a
            goto L53
        L76:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.a(r0)
            throw r1
    }

    private long a(java.net.HttpURLConnection r3, long r4, int r6) {
            r2 = this;
            long r0 = c(r3)
            r3 = 200(0xc8, float:2.8E-43)
            if (r6 != r3) goto L9
            return r0
        L9:
            r3 = 206(0xce, float:2.89E-43)
            if (r6 != r3) goto Lf
            long r0 = r0 + r4
            return r0
        Lf:
            com.kwad.sdk.core.videocache.m r3 = r2.awG
            long r3 = r3.awV
            return r3
    }

    private void a(java.net.HttpURLConnection r3, java.lang.String r4) {
            r2 = this;
            com.kwad.sdk.core.videocache.b.b r4 = r2.awl
            java.util.Map r4 = r4.DR()
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

    private static long c(java.net.HttpURLConnection r2) {
            java.lang.String r0 = "Content-Length"
            java.lang.String r2 = r2.getHeaderField(r0)
            if (r2 != 0) goto Lb
            r0 = -1
            return r0
        Lb:
            long r0 = java.lang.Long.parseLong(r2)
            return r0
    }

    private java.net.HttpURLConnection c(long r8, int r10) {
            r7 = this;
            com.kwad.sdk.core.videocache.m r0 = r7.awG
            java.lang.String r0 = r0.url
            r1 = 0
            r2 = r1
        L6:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Open connection "
            r3.<init>(r4)
            r4 = 0
            int r4 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r4 <= 0) goto L22
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = " with offset "
            r5.<init>(r6)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            goto L24
        L22:
            java.lang.String r5 = ""
        L24:
            r3.append(r5)
            java.lang.String r5 = " to "
            r3.append(r5)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r5 = "HttpUrlSource"
            com.kwad.sdk.core.e.c.d(r5, r3)
            java.net.URL r3 = new java.net.URL
            r3.<init>(r0)
            java.net.URLConnection r3 = r3.openConnection()
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3
            com.kwad.sdk.core.network.s.wrapHttpURLConnection(r3)
            r7.a(r3, r0)
            if (r4 <= 0) goto L63
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "bytes="
            r4.<init>(r5)
            r4.append(r8)
            java.lang.String r5 = "-"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Range"
            r3.setRequestProperty(r5, r4)
        L63:
            if (r10 <= 0) goto L6b
            r3.setConnectTimeout(r10)
            r3.setReadTimeout(r10)
        L6b:
            com.kwad.sdk.core.network.q.b(r3)
            int r4 = r3.getResponseCode()
            r5 = 301(0x12d, float:4.22E-43)
            if (r4 == r5) goto L81
            r5 = 302(0x12e, float:4.23E-43)
            if (r4 == r5) goto L81
            r5 = 303(0x12f, float:4.25E-43)
            if (r4 != r5) goto L7f
            goto L81
        L7f:
            r4 = r1
            goto L82
        L81:
            r4 = 1
        L82:
            if (r4 == 0) goto L8f
            java.lang.String r0 = "Location"
            java.lang.String r0 = r3.getHeaderField(r0)
            int r2 = r2 + 1
            r3.disconnect()
        L8f:
            r5 = 5
            if (r2 > r5) goto L95
            if (r4 != 0) goto L6
            return r3
        L95:
            com.kwad.sdk.core.videocache.ProxyCacheException r8 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "Too many redirects: "
            r9.<init>(r10)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
    }

    public final synchronized java.lang.String DK() {
            r1 = this;
            monitor-enter(r1)
            com.kwad.sdk.core.videocache.m r0 = r1.awG     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r0.awW     // Catch: java.lang.Throwable -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto Le
            r1.DJ()     // Catch: java.lang.Throwable -> L14
        Le:
            com.kwad.sdk.core.videocache.m r0 = r1.awG     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r0.awW     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)
            return r0
        L14:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final void ai(long r6) {
            r5 = this;
            r0 = -1
            java.net.HttpURLConnection r0 = r5.c(r6, r0)     // Catch: java.io.IOException -> L3b
            r5.awH = r0     // Catch: java.io.IOException -> L3b
            java.lang.String r0 = r0.getContentType()     // Catch: java.io.IOException -> L3b
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r2 = r5.awH     // Catch: java.io.IOException -> L3b
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.io.IOException -> L3b
            r3 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r2, r3)     // Catch: java.io.IOException -> L3b
            r5.awI = r1     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r1 = r5.awH     // Catch: java.io.IOException -> L3b
            java.net.HttpURLConnection r2 = r5.awH     // Catch: java.io.IOException -> L3b
            int r2 = r2.getResponseCode()     // Catch: java.io.IOException -> L3b
            long r1 = r5.a(r1, r6, r2)     // Catch: java.io.IOException -> L3b
            com.kwad.sdk.core.videocache.m r3 = new com.kwad.sdk.core.videocache.m     // Catch: java.io.IOException -> L3b
            com.kwad.sdk.core.videocache.m r4 = r5.awG     // Catch: java.io.IOException -> L3b
            java.lang.String r4 = r4.url     // Catch: java.io.IOException -> L3b
            r3.<init>(r4, r1, r0)     // Catch: java.io.IOException -> L3b
            r5.awG = r3     // Catch: java.io.IOException -> L3b
            com.kwad.sdk.core.videocache.d.b r0 = r5.awk     // Catch: java.io.IOException -> L3b
            java.lang.String r1 = r3.url     // Catch: java.io.IOException -> L3b
            com.kwad.sdk.core.videocache.m r2 = r5.awG     // Catch: java.io.IOException -> L3b
            r0.a(r1, r2)     // Catch: java.io.IOException -> L3b
            return
        L3b:
            r0 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r1 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Error opening connection for "
            r2.<init>(r3)
            com.kwad.sdk.core.videocache.m r3 = r5.awG
            java.lang.String r3 = r3.url
            r2.append(r3)
            java.lang.String r3 = " with offset "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r1.<init>(r6, r0)
            throw r1
    }

    @Override
    public final void close() {
            r3 = this;
            java.net.HttpURLConnection r0 = r3.awH
            if (r0 == 0) goto L1b
            r0.disconnect()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L8 java.lang.IllegalArgumentException -> L10 java.lang.NullPointerException -> L12
            return
        L8:
            java.lang.String r0 = "HttpUrlSource"
            java.lang.String r1 = "Error closing connection correctly. Should happen only on Android L. If anybody know how to fix it, please visit https://github.com/danikula/AndroidVideoCache/issues/88. Until good solution is not know, just ignore this issue."
            com.kwad.sdk.core.e.c.e(r0, r1)
            goto L1b
        L10:
            r0 = move-exception
            goto L13
        L12:
            r0 = move-exception
        L13:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Wait... but why? WTF!? Really shouldn't happen any more after fixing https://github.com/danikula/AndroidVideoCache/issues/43. If you read it on your device log, please, notify me danikula@gmail.com or create issue here https://github.com/danikula/AndroidVideoCache/issues."
            r1.<init>(r2, r0)
            throw r1
        L1b:
            return
    }

    @Override
    public final synchronized long length() {
            r4 = this;
            monitor-enter(r4)
            com.kwad.sdk.core.videocache.m r0 = r4.awG     // Catch: java.lang.Throwable -> L15
            long r0 = r0.awV     // Catch: java.lang.Throwable -> L15
            r2 = -2147483648(0xffffffff80000000, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Lf
            r4.DJ()     // Catch: java.lang.Throwable -> L15
        Lf:
            com.kwad.sdk.core.videocache.m r0 = r4.awG     // Catch: java.lang.Throwable -> L15
            long r0 = r0.awV     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final int read(byte[] r5) {
            r4 = this;
            java.io.InputStream r0 = r4.awI
            java.lang.String r1 = "Error reading data from "
            if (r0 == 0) goto L43
            r2 = 0
            r3 = 8192(0x2000, float:1.148E-41)
            int r5 = r0.read(r5, r2, r3)     // Catch: java.io.IOException -> Le java.io.InterruptedIOException -> L25
            return r5
        Le:
            r5 = move-exception
            com.kwad.sdk.core.videocache.ProxyCacheException r0 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            com.kwad.sdk.core.videocache.m r1 = r4.awG
            java.lang.String r1 = r1.url
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1, r5)
            throw r0
        L25:
            r5 = move-exception
            com.kwad.sdk.core.videocache.InterruptedProxyCacheException r0 = new com.kwad.sdk.core.videocache.InterruptedProxyCacheException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Reading source "
            r1.<init>(r2)
            com.kwad.sdk.core.videocache.m r2 = r4.awG
            java.lang.String r2 = r2.url
            r1.append(r2)
            java.lang.String r2 = " is interrupted"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1, r5)
            throw r0
        L43:
            com.kwad.sdk.core.videocache.ProxyCacheException r5 = new com.kwad.sdk.core.videocache.ProxyCacheException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            com.kwad.sdk.core.videocache.m r1 = r4.awG
            java.lang.String r1 = r1.url
            r0.append(r1)
            java.lang.String r1 = ": connection is absent!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "HttpUrlSource{sourceInfo='"
            r0.<init>(r1)
            com.kwad.sdk.core.videocache.m r1 = r2.awG
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
