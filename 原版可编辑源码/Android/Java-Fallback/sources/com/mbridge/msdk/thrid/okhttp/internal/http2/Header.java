package com.mbridge.msdk.thrid.okhttp.internal.http2;

public final class Header {
    public static final com.mbridge.msdk.thrid.okio.ByteString PSEUDO_PREFIX = null;
    public static final com.mbridge.msdk.thrid.okio.ByteString RESPONSE_STATUS = null;
    public static final java.lang.String RESPONSE_STATUS_UTF8 = ":status";
    public static final com.mbridge.msdk.thrid.okio.ByteString TARGET_AUTHORITY = null;
    public static final java.lang.String TARGET_AUTHORITY_UTF8 = ":authority";
    public static final com.mbridge.msdk.thrid.okio.ByteString TARGET_METHOD = null;
    public static final java.lang.String TARGET_METHOD_UTF8 = ":method";
    public static final com.mbridge.msdk.thrid.okio.ByteString TARGET_PATH = null;
    public static final java.lang.String TARGET_PATH_UTF8 = ":path";
    public static final com.mbridge.msdk.thrid.okio.ByteString TARGET_SCHEME = null;
    public static final java.lang.String TARGET_SCHEME_UTF8 = ":scheme";
    final int hpackSize;
    public final com.mbridge.msdk.thrid.okio.ByteString name;
    public final com.mbridge.msdk.thrid.okio.ByteString value;

    interface Listener {
        void onHeaders(com.mbridge.msdk.thrid.okhttp.Headers r1);
    }

    static {
            java.lang.String r0 = ":"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.PSEUDO_PREFIX = r0
            java.lang.String r0 = ":status"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.RESPONSE_STATUS = r0
            java.lang.String r0 = ":method"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_METHOD = r0
            java.lang.String r0 = ":path"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_PATH = r0
            java.lang.String r0 = ":scheme"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_SCHEME = r0
            java.lang.String r0 = ":authority"
            com.mbridge.msdk.thrid.okio.ByteString r0 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_AUTHORITY = r0
            return
    }

    public Header(com.mbridge.msdk.thrid.okio.ByteString r1, com.mbridge.msdk.thrid.okio.ByteString r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.value = r2
            int r1 = r1.size()
            int r1 = r1 + 32
            int r2 = r2.size()
            int r1 = r1 + r2
            r0.hpackSize = r1
            return
    }

    public Header(com.mbridge.msdk.thrid.okio.ByteString r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.thrid.okio.ByteString r2 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r2)
            r0.<init>(r1, r2)
            return
    }

    public Header(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.thrid.okio.ByteString r1 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r1)
            com.mbridge.msdk.thrid.okio.ByteString r2 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r2)
            r0.<init>(r1, r2)
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            r1 = 0
            if (r0 == 0) goto L1c
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r4 = (com.mbridge.msdk.thrid.okhttp.internal.http2.Header) r4
            com.mbridge.msdk.thrid.okio.ByteString r0 = r3.name
            com.mbridge.msdk.thrid.okio.ByteString r2 = r4.name
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L1c
            com.mbridge.msdk.thrid.okio.ByteString r0 = r3.value
            com.mbridge.msdk.thrid.okio.ByteString r4 = r4.value
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public int hashCode() {
            r2 = this;
            com.mbridge.msdk.thrid.okio.ByteString r0 = r2.name
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            com.mbridge.msdk.thrid.okio.ByteString r0 = r2.value
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            return r1
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.mbridge.msdk.thrid.okio.ByteString r1 = r3.name
            java.lang.String r1 = r1.utf8()
            r2 = 0
            r0[r2] = r1
            com.mbridge.msdk.thrid.okio.ByteString r1 = r3.value
            java.lang.String r1 = r1.utf8()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "%s: %s"
            java.lang.String r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.format(r1, r0)
            return r0
    }
}
