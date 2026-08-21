package com.kwad.sdk.core.download;

public final class a {
    private static android.content.Context mContext;
    private static volatile boolean mHasInit;

    public static class a implements com.kwad.sdk.core.download.a.c {
        final java.io.OutputStream anC;

        public a(java.io.File r2, boolean r3) {
                r1 = this;
                r1.<init>()
                java.io.FileOutputStream r0 = new java.io.FileOutputStream
                r0.<init>(r2, r3)
                r1.anC = r0
                return
        }

        @Override
        public final void close() {
                r1 = this;
                java.io.OutputStream r0 = r1.anC
                r0.close()
                return
        }

        @Override
        public final void write(byte[] r2, int r3, int r4) {
                r1 = this;
                java.io.OutputStream r3 = r1.anC
                r0 = 0
                r3.write(r2, r0, r4)
                return
        }
    }

    public interface b {
    }

    public interface c extends java.io.Closeable {
        void write(byte[] r1, int r2, int r3);
    }

    public static java.lang.String B(com.kwad.sdk.core.response.model.AdInfo r2) {
            android.content.Context r0 = com.kwad.sdk.core.download.a.mContext
            if (r0 != 0) goto L7
            java.lang.String r2 = ""
            return r2
        L7:
            com.kwad.sdk.core.download.DownloadParams r2 = com.kwad.sdk.core.download.DownloadParams.transform(r2)
            java.lang.String r0 = r2.mFileUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            r2 = 0
            return r2
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.kwad.sdk.core.download.a.mContext
            java.io.File r1 = com.kwad.sdk.utils.av.cK(r1)
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r2 = r2.mFileUrl
            java.lang.String r2 = cG(r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void C(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = 0
            a(r1, r0)
            return
    }

    private static java.io.InputStream a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4, java.io.InputStream r5) {
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L52
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "Content-Encoding"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L8
            java.lang.Object r0 = r0.getValue()
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L8
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L8
            r1 = 0
            java.util.Iterator r0 = r0.iterator()
        L35:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "gzip"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 == 0) goto L35
            r1 = 1
        L4a:
            if (r1 == 0) goto L8
            java.util.zip.GZIPInputStream r0 = new java.util.zip.GZIPInputStream     // Catch: java.io.IOException -> L8
            r0.<init>(r5)     // Catch: java.io.IOException -> L8
            r5 = r0
        L52:
            return r5
    }

    private static java.net.URLConnection a(java.lang.String r0, int r1, int r2, boolean r3) {
            java.net.URL r1 = new java.net.URL     // Catch: java.net.MalformedURLException -> L34
            r1.<init>(r0)     // Catch: java.net.MalformedURLException -> L34
            java.net.URLConnection r0 = r1.openConnection()     // Catch: java.net.MalformedURLException -> L34
            com.kwad.sdk.core.network.s.wrapHttpURLConnection(r0)     // Catch: java.net.MalformedURLException -> L34
            java.lang.String r1 = "Accept-Language"
            java.lang.String r3 = "zh-CN"
            r0.setRequestProperty(r1, r3)     // Catch: java.net.MalformedURLException -> L34
            r1 = 10000(0x2710, float:1.4013E-41)
            r0.setConnectTimeout(r1)     // Catch: java.net.MalformedURLException -> L34
            if (r2 <= 0) goto L1d
            r0.setReadTimeout(r2)     // Catch: java.net.MalformedURLException -> L34
        L1d:
            r1 = 0
            r0.setUseCaches(r1)     // Catch: java.net.MalformedURLException -> L34
            r1 = 1
            r0.setDoInput(r1)     // Catch: java.net.MalformedURLException -> L34
            java.lang.String r1 = "Connection"
            java.lang.String r2 = "keep-alive"
            r0.setRequestProperty(r1, r2)     // Catch: java.net.MalformedURLException -> L34
            java.lang.String r1 = "Charset"
            java.lang.String r2 = "UTF-8"
            r0.setRequestProperty(r1, r2)     // Catch: java.net.MalformedURLException -> L34
            return r0
        L34:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            r0 = 0
            return r0
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo r3, boolean r4) {
            android.content.Context r4 = com.kwad.sdk.core.download.a.mContext
            if (r4 != 0) goto L5
            return
        L5:
            boolean r4 = com.kwad.sdk.utils.ag.isNetworkConnected(r4)
            if (r4 != 0) goto L15
            android.content.Context r3 = com.kwad.sdk.core.download.a.mContext
            java.lang.String r4 = com.kwad.sdk.utils.w.bW(r3)
            com.kwad.sdk.utils.v.L(r3, r4)
            return
        L15:
            com.kwad.sdk.core.download.DownloadParams r3 = com.kwad.sdk.core.download.DownloadParams.transform(r3)
            r4 = 0
            r3.requestInstallPermission = r4
            java.lang.String r0 = r3.mFileUrl
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5c
            boolean r1 = android.webkit.URLUtil.isNetworkUrl(r0)
            if (r1 != 0) goto L2b
            goto L5c
        L2b:
            com.kwad.sdk.DownloadTask$DownloadRequest r1 = new com.kwad.sdk.DownloadTask$DownloadRequest
            java.lang.String r2 = r3.mFileUrl
            r1.<init>(r2)
            java.lang.String r0 = cG(r0)
            r1.setDestinationFileName(r0)
            r1.setTag(r3)
            boolean r0 = r3.downloadEnablePause
            r1.setDownloadEnablePause(r0)
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()
            boolean r0 = r0.showNotification
            if (r0 == 0) goto L52
            android.content.Context r0 = com.kwad.sdk.core.download.a.mContext
            boolean r0 = aU(r0)
            if (r0 == 0) goto L52
            r4 = 3
        L52:
            r1.setNotificationVisibility(r4)
            android.content.Context r4 = com.kwad.sdk.core.download.a.mContext
            java.lang.String r3 = r3.mDownloadid
            com.kwad.sdk.e.a.a(r4, r3, r1)
        L5c:
            return
    }

    private static boolean a(java.lang.String r1, java.io.File r2, com.kwad.sdk.core.download.a.b r3, int r4) {
            r3 = 0
            com.kwad.sdk.core.download.a$a r4 = new com.kwad.sdk.core.download.a$a     // Catch: java.lang.Throwable -> L12
            r0 = 0
            r4.<init>(r2, r0)     // Catch: java.lang.Throwable -> L12
            boolean r1 = a(r1, r3, r4, r3, r0)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return r1
        Lf:
            r1 = move-exception
            r3 = r4
            goto L13
        L12:
            r1 = move-exception
        L13:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r1
    }

    public static boolean a(java.lang.String r10, java.io.File r11, com.kwad.sdk.core.download.a.b r12, int r13, boolean r14) {
            r12 = 0
            com.kwad.sdk.core.download.a$a r13 = new com.kwad.sdk.core.download.a$a     // Catch: java.lang.Throwable -> L1e
            r14 = 1
            r13.<init>(r11, r14)     // Catch: java.lang.Throwable -> L1e
            long r5 = r11.length()     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            r3 = 0
            r4 = -1
            r7 = -1
            r9 = 1
            r0 = r10
            r2 = r13
            boolean r10 = a(r0, r1, r2, r3, r4, r5, r7, r9)     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.crash.utils.b.closeQuietly(r13)
            return r10
        L1b:
            r10 = move-exception
            r12 = r13
            goto L1f
        L1e:
            r10 = move-exception
        L1f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r12)
            throw r10
    }

    private static boolean a(java.lang.String r10, java.lang.String r11, com.kwad.sdk.core.download.a.c r12, com.kwad.sdk.core.download.a.b r13, int r14) {
            r1 = 0
            r5 = -1
            r7 = -1
            r9 = 0
            r0 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            boolean r10 = a(r0, r1, r2, r3, r4, r5, r7, r9)
            return r10
    }

    private static boolean a(java.lang.String r12, java.lang.String r13, com.kwad.sdk.core.download.a.c r14, com.kwad.sdk.core.download.a.b r15, int r16, long r17, long r19, boolean r21) {
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r16 <= 0) goto L7
            r1 = r16
            goto La
        L7:
            r1 = 120000(0x1d4c0, float:1.68156E-40)
        La:
            r2 = 0
            r3 = 0
            r4 = r12
            java.net.URLConnection r0 = a(r12, r0, r1, r2)     // Catch: java.lang.Throwable -> L3a
            r11 = r0
            java.net.HttpURLConnection r11 = (java.net.HttpURLConnection) r11     // Catch: java.lang.Throwable -> L3a
            if (r11 == 0) goto L32
            r8 = -1
            r1 = r11
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r10 = r21
            boolean r0 = a(r1, r2, r3, r4, r5, r6, r8, r10)     // Catch: java.lang.Throwable -> L2f
            com.kwad.sdk.crash.utils.b.closeQuietly(r14)
            if (r11 == 0) goto L2e
            r11.disconnect()
        L2e:
            return r0
        L2f:
            r0 = move-exception
            r3 = r11
            goto L3b
        L32:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "Fail to createUrlConnection"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2f
            throw r0     // Catch: java.lang.Throwable -> L2f
        L3a:
            r0 = move-exception
        L3b:
            com.kwad.sdk.crash.utils.b.closeQuietly(r14)
            if (r3 == 0) goto L43
            r3.disconnect()
        L43:
            throw r0
    }

    private static boolean a(java.net.HttpURLConnection r14, java.lang.String r15, com.kwad.sdk.core.download.a.c r16, com.kwad.sdk.core.download.a.b r17, int r18, long r19, long r21, boolean r23) {
            r1 = r14
            r2 = r16
            r0 = r17
            r3 = 0
            int r5 = (r19 > r3 ? 1 : (r19 == r3 ? 0 : -1))
            r6 = 1
            r7 = 0
            r8 = 0
            if (r5 <= 0) goto L31
            if (r23 == 0) goto L31
            java.lang.String r5 = "Range"
            java.lang.String r9 = "bytes=%s-%s"
            r10 = 2
            java.lang.Object[] r10 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> L132
            java.lang.Long r11 = java.lang.Long.valueOf(r19)     // Catch: java.lang.Throwable -> L132
            r10[r7] = r11     // Catch: java.lang.Throwable -> L132
            int r3 = (r21 > r3 ? 1 : (r21 == r3 ? 0 : -1))
            if (r3 <= 0) goto L26
            java.lang.Long r3 = java.lang.Long.valueOf(r21)     // Catch: java.lang.Throwable -> L132
            goto L28
        L26:
            java.lang.String r3 = ""
        L28:
            r10[r6] = r3     // Catch: java.lang.Throwable -> L132
            java.lang.String r3 = java.lang.String.format(r9, r10)     // Catch: java.lang.Throwable -> L132
            r14.setRequestProperty(r5, r3)     // Catch: java.lang.Throwable -> L132
        L31:
            com.kwad.sdk.core.network.q.b(r14)     // Catch: java.lang.Throwable -> L132
            java.lang.String r3 = "Accept-Encoding"
            java.lang.String r4 = "gzip"
            r14.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L132
            boolean r3 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L132
            if (r3 != 0) goto L6d
            java.lang.String r3 = "Host"
            r4 = r15
            r14.setRequestProperty(r3, r15)     // Catch: java.lang.Throwable -> L132
            r14.setInstanceFollowRedirects(r7)     // Catch: java.lang.Throwable -> L132
            int r3 = r14.getResponseCode()     // Catch: java.lang.Throwable -> L132
            r4 = 302(0x12e, float:4.23E-43)
            if (r3 != r4) goto L6d
            java.lang.String r3 = "Location"
            java.lang.String r3 = r14.getHeaderField(r3)     // Catch: java.lang.Throwable -> L132
            r4 = r18
            boolean r0 = a(r3, r8, r2, r0, r4)     // Catch: java.lang.Throwable -> L132
            com.kwad.sdk.crash.utils.b.closeQuietly(r16)
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            if (r1 == 0) goto L69
            r14.disconnect()
        L69:
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            return r0
        L6d:
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L132
            java.io.InputStream r4 = r14.getInputStream()     // Catch: java.lang.Throwable -> L132
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L132
            int r4 = r14.getContentLength()     // Catch: java.lang.Throwable -> L12d
            java.util.Map r5 = r14.getHeaderFields()     // Catch: java.lang.Throwable -> L12d
            if (r5 != 0) goto L86
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Throwable -> L12d
            r5.<init>()     // Catch: java.lang.Throwable -> L12d
            goto L8f
        L86:
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Throwable -> L12d
            java.util.Map r9 = r14.getHeaderFields()     // Catch: java.lang.Throwable -> L12d
            r5.<init>(r9)     // Catch: java.lang.Throwable -> L12d
        L8f:
            java.io.BufferedInputStream r9 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L12d
            java.io.InputStream r10 = r14.getInputStream()     // Catch: java.lang.Throwable -> L12d
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L12d
            java.io.InputStream r3 = a(r5, r9)     // Catch: java.lang.Throwable -> L128
            r9 = -1
            r10 = 8192(0x2000, float:1.148E-41)
            if (r4 > 0) goto L100
            java.util.Random r4 = new java.util.Random     // Catch: java.lang.Throwable -> L12d
            long r11 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L12d
            r4.<init>(r11)     // Catch: java.lang.Throwable -> L12d
            java.io.File r11 = new java.io.File     // Catch: java.lang.Throwable -> L12d
            android.content.Context r12 = com.kwad.sdk.core.download.a.mContext     // Catch: java.lang.Throwable -> L12d
            java.io.File r12 = com.kwad.sdk.utils.av.cL(r12)     // Catch: java.lang.Throwable -> L12d
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12d
            r13.<init>()     // Catch: java.lang.Throwable -> L12d
            int r4 = r4.nextInt()     // Catch: java.lang.Throwable -> L12d
            r13.append(r4)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r4 = ".tmp"
            r13.append(r4)     // Catch: java.lang.Throwable -> L12d
            java.lang.String r4 = r13.toString()     // Catch: java.lang.Throwable -> L12d
            r11.<init>(r12, r4)     // Catch: java.lang.Throwable -> L12d
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lfd
            r4.<init>(r11)     // Catch: java.lang.Throwable -> Lfd
            byte[] r8 = new byte[r10]     // Catch: java.lang.Throwable -> Lfb
            r12 = r7
        Ld2:
            int r13 = r3.read(r8)     // Catch: java.lang.Throwable -> Lfb
            if (r13 == r9) goto Ldd
            int r12 = r12 + r13
            r4.write(r8, r7, r13)     // Catch: java.lang.Throwable -> Lfb
            goto Ld2
        Ldd:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)     // Catch: java.lang.Throwable -> Lfb
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)     // Catch: java.lang.Throwable -> Lfb
            java.io.BufferedInputStream r8 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> Lfb
            java.io.FileInputStream r13 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lfb
            r13.<init>(r11)     // Catch: java.lang.Throwable -> Lfb
            r8.<init>(r13)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r3 = "Content-Length"
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L126
            java.util.List r12 = java.util.Collections.singletonList(r12)     // Catch: java.lang.Throwable -> L126
            r5.put(r3, r12)     // Catch: java.lang.Throwable -> L126
            goto L103
        Lfb:
            r0 = move-exception
            goto L130
        Lfd:
            r0 = move-exception
            r4 = r8
            goto L130
        L100:
            r4 = r8
            r11 = r4
            r8 = r3
        L103:
            r14.getResponseCode()     // Catch: java.lang.Throwable -> L126
            byte[] r3 = new byte[r10]     // Catch: java.lang.Throwable -> L126
        L108:
            int r5 = r8.read(r3)     // Catch: java.lang.Throwable -> L126
            if (r5 == r9) goto L112
            r2.write(r3, r7, r5)     // Catch: java.lang.Throwable -> L126
            goto L108
        L112:
            com.kwad.sdk.crash.utils.b.closeQuietly(r16)
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            if (r1 == 0) goto L11d
            r14.disconnect()
        L11d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            if (r11 == 0) goto L125
            r11.delete()
        L125:
            return r6
        L126:
            r0 = move-exception
            goto L135
        L128:
            r0 = move-exception
            r4 = r8
            r11 = r4
            r8 = r9
            goto L135
        L12d:
            r0 = move-exception
            r4 = r8
            r11 = r4
        L130:
            r8 = r3
            goto L135
        L132:
            r0 = move-exception
            r4 = r8
            r11 = r4
        L135:
            boolean r3 = r0 instanceof java.io.IOException     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto L13c
            java.io.IOException r0 = (java.io.IOException) r0     // Catch: java.lang.Throwable -> L163
            goto L162
        L13c:
            java.io.IOException r3 = new java.io.IOException     // Catch: java.lang.Throwable -> L163
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L163
            r5.<init>()     // Catch: java.lang.Throwable -> L163
            java.lang.Class r6 = r0.getClass()     // Catch: java.lang.Throwable -> L163
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> L163
            r5.append(r6)     // Catch: java.lang.Throwable -> L163
            java.lang.String r6 = ":"
            r5.append(r6)     // Catch: java.lang.Throwable -> L163
            java.lang.String r6 = r0.getMessage()     // Catch: java.lang.Throwable -> L163
            r5.append(r6)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L163
            r3.<init>(r5, r0)     // Catch: java.lang.Throwable -> L163
            r0 = r3
        L162:
            throw r0     // Catch: java.lang.Throwable -> L163
        L163:
            r0 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r16)
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            if (r1 == 0) goto L16f
            r14.disconnect()
        L16f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            if (r11 == 0) goto L177
            r11.delete()
        L177:
            throw r0
    }

    public static synchronized void aT(android.content.Context r2) {
            java.lang.Class<com.kwad.sdk.core.download.a> r0 = com.kwad.sdk.core.download.a.class
            monitor-enter(r0)
            if (r2 == 0) goto L22
            boolean r1 = com.kwad.sdk.core.download.a.mHasInit     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto La
            goto L22
        La:
            com.kwad.sdk.core.download.a.mContext = r2     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.c r1 = com.kwad.sdk.c.wP()     // Catch: java.lang.Throwable -> L1f
            r1.init(r2)     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.core.download.c r1 = com.kwad.sdk.core.download.c.Aw()     // Catch: java.lang.Throwable -> L1f
            r1.init(r2)     // Catch: java.lang.Throwable -> L1f
            r2 = 1
            com.kwad.sdk.core.download.a.mHasInit = r2     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return
        L1f:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L22:
            monitor-exit(r0)
            return
    }

    private static boolean aU(android.content.Context r2) {
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> L9
            java.lang.String r1 = ""
            r0.<init>(r2, r1)     // Catch: java.lang.Throwable -> L9
            r2 = 1
            return r2
        L9:
            r2 = 0
            return r2
    }

    public static void c(int r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            java.lang.Class<com.kwad.sdk.core.download.b> r1 = com.kwad.sdk.core.download.b.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.core.download.b r1 = (com.kwad.sdk.core.download.b) r1
            if (r1 == 0) goto Le
            r0 = 1
            r1.b(r0, r2)
        Le:
            return
    }

    public static boolean c(java.lang.String r2, java.io.File r3) {
            r0 = 0
            r1 = 0
            boolean r2 = a(r2, r3, r0, r1)     // Catch: java.lang.Throwable -> L7
            return r2
        L7:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return r1
    }

    private static java.lang.String cG(java.lang.String r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.utils.ad.bp(r1)
            r0.append(r1)
            java.lang.String r1 = ".apk"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void cH(java.lang.String r1) {
            android.content.Context r0 = com.kwad.sdk.core.download.a.mContext
            if (r0 == 0) goto L10
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lb
            goto L10
        Lb:
            android.content.Context r0 = com.kwad.sdk.core.download.a.mContext
            com.kwad.sdk.e.a.z(r0, r1)
        L10:
            return
    }
}
