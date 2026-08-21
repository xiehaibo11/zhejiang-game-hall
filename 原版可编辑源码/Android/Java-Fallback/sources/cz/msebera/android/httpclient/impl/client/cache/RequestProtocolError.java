package cz.msebera.android.httpclient.impl.client.cache;

enum RequestProtocolError extends java.lang.Enum<cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError> {
    private static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] $VALUES = null;
    public static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError BODY_BUT_NO_LENGTH_ERROR = null;
    public static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError NO_CACHE_DIRECTIVE_WITH_FIELD_NAME = null;
    public static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError UNKNOWN = null;
    public static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError WEAK_ETAG_AND_RANGE_ERROR = null;
    public static final cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR = null;

    static {
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError
            r1 = 0
            java.lang.String r2 = "UNKNOWN"
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.UNKNOWN = r0
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError
            r2 = 1
            java.lang.String r3 = "BODY_BUT_NO_LENGTH_ERROR"
            r0.<init>(r3, r2)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.BODY_BUT_NO_LENGTH_ERROR = r0
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError
            r3 = 2
            java.lang.String r4 = "WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR"
            r0.<init>(r4, r3)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR = r0
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError
            r4 = 3
            java.lang.String r5 = "WEAK_ETAG_AND_RANGE_ERROR"
            r0.<init>(r5, r4)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_AND_RANGE_ERROR = r0
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError
            r5 = 4
            java.lang.String r6 = "NO_CACHE_DIRECTIVE_WITH_FIELD_NAME"
            r0.<init>(r6, r5)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.NO_CACHE_DIRECTIVE_WITH_FIELD_NAME = r0
            r0 = 5
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] r0 = new cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[r0]
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r6 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.UNKNOWN
            r0[r1] = r6
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.BODY_BUT_NO_LENGTH_ERROR
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR
            r0[r3] = r1
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_AND_RANGE_ERROR
            r0[r4] = r1
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.NO_CACHE_DIRECTIVE_WITH_FIELD_NAME
            r0[r5] = r1
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.$VALUES = r0
            return
    }

    RequestProtocolError(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError valueOf(java.lang.String r1) {
            java.lang.Class<cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError> r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = (cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError) r1
            return r1
    }

    public static cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] values() {
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.$VALUES
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] r0 = (cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[]) r0
            return r0
    }
}
