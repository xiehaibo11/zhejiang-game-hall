package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class HttpMediaDrmCallback implements com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback {
    private static final int MAX_MANUAL_REDIRECTS = 5;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory dataSourceFactory;
    private final java.lang.String defaultLicenseUrl;
    private final boolean forceDefaultLicenseUrl;
    private final java.util.Map<java.lang.String, java.lang.String> keyRequestProperties;

    public HttpMediaDrmCallback(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    public HttpMediaDrmCallback(java.lang.String r1, boolean r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r3) {
            r0 = this;
            r0.<init>()
            r0.dataSourceFactory = r3
            r0.defaultLicenseUrl = r1
            r0.forceDefaultLicenseUrl = r2
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.keyRequestProperties = r1
            return
    }

    private static byte[] executePost(com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r17, java.lang.String r18, byte[] r19, java.util.Map<java.lang.String, java.lang.String> r20) throws java.io.IOException {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource r1 = r17.createDataSource()
            if (r20 == 0) goto L2a
            java.util.Set r0 = r20.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r1.setRequestProperty(r3, r2)
            goto Le
        L2a:
            r2 = 0
            r0 = r18
            r3 = r2
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r15 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            android.net.Uri r5 = android.net.Uri.parse(r0)
            r7 = 0
            r9 = 0
            r11 = -1
            r13 = 0
            r14 = 1
            r4 = r15
            r6 = r19
            r4.<init>(r5, r6, r7, r9, r11, r13, r14)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceInputStream r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceInputStream
            r4.<init>(r1, r15)
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toByteArray(r4)     // Catch: java.lang.Throwable -> L4f com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.InvalidResponseCodeException -> L51
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r4)
            return r0
        L4f:
            r0 = move-exception
            goto L7d
        L51:
            r0 = move-exception
            r5 = r0
            int r0 = r5.responseCode     // Catch: java.lang.Throwable -> L4f
            r6 = 307(0x133, float:4.3E-43)
            if (r0 == r6) goto L5f
            int r0 = r5.responseCode     // Catch: java.lang.Throwable -> L4f
            r6 = 308(0x134, float:4.32E-43)
            if (r0 != r6) goto L67
        L5f:
            int r0 = r3 + 1
            r6 = 5
            if (r3 >= r6) goto L66
            r3 = 1
            goto L69
        L66:
            r3 = r0
        L67:
            r0 = r3
            r3 = r2
        L69:
            if (r3 == 0) goto L70
            java.lang.String r3 = getRedirectUrl(r5)     // Catch: java.lang.Throwable -> L4f
            goto L71
        L70:
            r3 = 0
        L71:
            if (r3 == 0) goto L7c
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r4)
            r16 = r3
            r3 = r0
            r0 = r16
            goto L2e
        L7c:
            throw r5     // Catch: java.lang.Throwable -> L4f
        L7d:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r4)
            throw r0
    }

    private static java.lang.String getRedirectUrl(com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.InvalidResponseCodeException r1) {
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r1.headerFields
            if (r1 == 0) goto L1c
            java.lang.String r0 = "Location"
            java.lang.Object r1 = r1.get(r0)
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L1c
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L1c
            r0 = 0
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L1c:
            r1 = 0
            return r1
    }

    public final void clearAllKeyRequestProperties() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.keyRequestProperties
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.keyRequestProperties     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    public final void clearKeyRequestProperty(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.keyRequestProperties
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.keyRequestProperties     // Catch: java.lang.Throwable -> Ld
            r1.remove(r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    @Override
    public final byte[] executeKeyRequest(java.util.UUID r4, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest r5, java.lang.String r6) throws java.lang.Exception {
            r3 = this;
            java.lang.String r0 = r5.getDefaultUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            goto Lc
        Lb:
            r6 = r0
        Lc:
            boolean r0 = r3.forceDefaultLicenseUrl
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L18
        L16:
            java.lang.String r6 = r3.defaultLicenseUrl
        L18:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.C.PLAYREADY_UUID
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L28
            java.lang.String r1 = "text/xml"
            goto L35
        L28:
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L33
            java.lang.String r1 = "application/json"
            goto L35
        L33:
            java.lang.String r1 = "application/octet-stream"
        L35:
            java.lang.String r2 = "Content-Type"
            r0.put(r2, r1)
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.C.PLAYREADY_UUID
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L49
            java.lang.String r4 = "SOAPAction"
            java.lang.String r1 = "http://schemas.microsoft.com/DRM/2007/03/protocols/AcquireLicense"
            r0.put(r4, r1)
        L49:
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.keyRequestProperties
            monitor-enter(r4)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.keyRequestProperties     // Catch: java.lang.Throwable -> L5d
            r0.putAll(r1)     // Catch: java.lang.Throwable -> L5d
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$Factory r4 = r3.dataSourceFactory
            byte[] r5 = r5.getData()
            byte[] r4 = executePost(r4, r6, r5, r0)
            return r4
        L5d:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L5d
            throw r5
    }

    @Override
    public final byte[] executeProvisionRequest(java.util.UUID r3, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest r4) throws java.io.IOException {
            r2 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = r4.getDefaultUrl()
            r3.append(r0)
            java.lang.String r0 = "&signedRequest="
            r3.append(r0)
            byte[] r4 = r4.getData()
            java.lang.String r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r4)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$Factory r4 = r2.dataSourceFactory
            r0 = 0
            byte[] r0 = new byte[r0]
            r1 = 0
            byte[] r3 = executePost(r4, r3, r0, r1)
            return r3
    }

    public final void setKeyRequestProperty(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.keyRequestProperties
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.keyRequestProperties     // Catch: java.lang.Throwable -> L10
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r3
    }
}
