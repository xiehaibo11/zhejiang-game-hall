package com.mbridge.msdk.thrid.okhttp;

public abstract class RequestBody {




    public RequestBody() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.RequestBody create(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.MediaType r1, com.mbridge.msdk.thrid.okio.ByteString r2) {
            com.mbridge.msdk.thrid.okhttp.RequestBody$1 r0 = new com.mbridge.msdk.thrid.okhttp.RequestBody$1
            r0.<init>(r1, r2)
            return r0
    }

    public static com.mbridge.msdk.thrid.okhttp.RequestBody create(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.MediaType r1, java.io.File r2) {
            if (r2 == 0) goto L8
            com.mbridge.msdk.thrid.okhttp.RequestBody$3 r0 = new com.mbridge.msdk.thrid.okhttp.RequestBody$3
            r0.<init>(r1, r2)
            return r0
        L8:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "file == null"
            r1.<init>(r2)
            throw r1
    }

    public static com.mbridge.msdk.thrid.okhttp.RequestBody create(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.MediaType r2, java.lang.String r3) {
            java.nio.charset.Charset r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.UTF_8
            if (r2 == 0) goto L21
            java.nio.charset.Charset r0 = r2.charset()
            if (r0 != 0) goto L21
            java.nio.charset.Charset r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.UTF_8
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "; charset=utf-8"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            com.mbridge.msdk.thrid.okhttp.MediaType r2 = com.mbridge.msdk.thrid.okhttp.MediaType.parse(r2)
        L21:
            byte[] r3 = r3.getBytes(r0)
            com.mbridge.msdk.thrid.okhttp.RequestBody r2 = create(r2, r3)
            return r2
    }

    public static com.mbridge.msdk.thrid.okhttp.RequestBody create(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.MediaType r2, byte[] r3) {
            int r0 = r3.length
            r1 = 0
            com.mbridge.msdk.thrid.okhttp.RequestBody r2 = create(r2, r3, r1, r0)
            return r2
    }

    public static com.mbridge.msdk.thrid.okhttp.RequestBody create(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.MediaType r7, byte[] r8, int r9, int r10) {
            if (r8 == 0) goto Lf
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            com.mbridge.msdk.thrid.okhttp.internal.Util.checkOffsetAndCount(r1, r3, r5)
            com.mbridge.msdk.thrid.okhttp.RequestBody$2 r0 = new com.mbridge.msdk.thrid.okhttp.RequestBody$2
            r0.<init>(r7, r10, r8, r9)
            return r0
        Lf:
            java.lang.NullPointerException r7 = new java.lang.NullPointerException
            java.lang.String r8 = "content == null"
            r7.<init>(r8)
            throw r7
    }

    public long contentLength() throws java.io.IOException {
            r2 = this;
            r0 = -1
            return r0
    }

    @javax.annotation.Nullable
    public abstract com.mbridge.msdk.thrid.okhttp.MediaType contentType();

    public abstract void writeTo(com.mbridge.msdk.thrid.okio.BufferedSink r1) throws java.io.IOException;
}
