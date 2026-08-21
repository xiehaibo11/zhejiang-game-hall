package com.mbridge.msdk.thrid.okhttp;

public final class FormBody extends com.mbridge.msdk.thrid.okhttp.RequestBody {
    private static final com.mbridge.msdk.thrid.okhttp.MediaType CONTENT_TYPE = null;
    private final java.util.List<java.lang.String> encodedNames;
    private final java.util.List<java.lang.String> encodedValues;

    public static final class Builder {
        private final java.nio.charset.Charset charset;
        private final java.util.List<java.lang.String> names;
        private final java.util.List<java.lang.String> values;

        public Builder() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        public Builder(java.nio.charset.Charset r2) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.names = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.values = r0
                r1.charset = r2
                return
        }

        public com.mbridge.msdk.thrid.okhttp.FormBody.Builder add(java.lang.String r9, java.lang.String r10) {
                r8 = this;
                if (r9 == 0) goto L2f
                if (r10 == 0) goto L27
                java.util.List<java.lang.String> r0 = r8.names
                r3 = 0
                r4 = 0
                r5 = 1
                r6 = 1
                java.nio.charset.Charset r7 = r8.charset
                java.lang.String r2 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r1 = r9
                java.lang.String r9 = com.mbridge.msdk.thrid.okhttp.HttpUrl.canonicalize(r1, r2, r3, r4, r5, r6, r7)
                r0.add(r9)
                java.util.List<java.lang.String> r9 = r8.values
                r2 = 0
                r4 = 1
                java.nio.charset.Charset r6 = r8.charset
                java.lang.String r1 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r0 = r10
                java.lang.String r10 = com.mbridge.msdk.thrid.okhttp.HttpUrl.canonicalize(r0, r1, r2, r3, r4, r5, r6)
                r9.add(r10)
                return r8
            L27:
                java.lang.NullPointerException r9 = new java.lang.NullPointerException
                java.lang.String r10 = "value == null"
                r9.<init>(r10)
                throw r9
            L2f:
                java.lang.NullPointerException r9 = new java.lang.NullPointerException
                java.lang.String r10 = "name == null"
                r9.<init>(r10)
                throw r9
        }

        public com.mbridge.msdk.thrid.okhttp.FormBody.Builder addEncoded(java.lang.String r9, java.lang.String r10) {
                r8 = this;
                if (r9 == 0) goto L30
                if (r10 == 0) goto L28
                java.util.List<java.lang.String> r0 = r8.names
                r3 = 1
                r4 = 0
                r5 = 1
                r6 = 1
                java.nio.charset.Charset r7 = r8.charset
                java.lang.String r2 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r1 = r9
                java.lang.String r9 = com.mbridge.msdk.thrid.okhttp.HttpUrl.canonicalize(r1, r2, r3, r4, r5, r6, r7)
                r0.add(r9)
                java.util.List<java.lang.String> r9 = r8.values
                r2 = 1
                r3 = 0
                r4 = 1
                java.nio.charset.Charset r6 = r8.charset
                java.lang.String r1 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r0 = r10
                java.lang.String r10 = com.mbridge.msdk.thrid.okhttp.HttpUrl.canonicalize(r0, r1, r2, r3, r4, r5, r6)
                r9.add(r10)
                return r8
            L28:
                java.lang.NullPointerException r9 = new java.lang.NullPointerException
                java.lang.String r10 = "value == null"
                r9.<init>(r10)
                throw r9
            L30:
                java.lang.NullPointerException r9 = new java.lang.NullPointerException
                java.lang.String r10 = "name == null"
                r9.<init>(r10)
                throw r9
        }

        public com.mbridge.msdk.thrid.okhttp.FormBody build() {
                r3 = this;
                com.mbridge.msdk.thrid.okhttp.FormBody r0 = new com.mbridge.msdk.thrid.okhttp.FormBody
                java.util.List<java.lang.String> r1 = r3.names
                java.util.List<java.lang.String> r2 = r3.values
                r0.<init>(r1, r2)
                return r0
        }
    }

    static {
            java.lang.String r0 = "application/x-www-form-urlencoded"
            com.mbridge.msdk.thrid.okhttp.MediaType r0 = com.mbridge.msdk.thrid.okhttp.MediaType.get(r0)
            com.mbridge.msdk.thrid.okhttp.FormBody.CONTENT_TYPE = r0
            return
    }

    FormBody(java.util.List<java.lang.String> r1, java.util.List<java.lang.String> r2) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = com.mbridge.msdk.thrid.okhttp.internal.Util.immutableList(r1)
            r0.encodedNames = r1
            java.util.List r1 = com.mbridge.msdk.thrid.okhttp.internal.Util.immutableList(r2)
            r0.encodedValues = r1
            return
    }

    private long writeOrCountBytes(@javax.annotation.Nullable com.mbridge.msdk.thrid.okio.BufferedSink r4, boolean r5) {
            r3 = this;
            if (r5 == 0) goto L8
            com.mbridge.msdk.thrid.okio.Buffer r4 = new com.mbridge.msdk.thrid.okio.Buffer
            r4.<init>()
            goto Lc
        L8:
            com.mbridge.msdk.thrid.okio.Buffer r4 = r4.buffer()
        Lc:
            r0 = 0
            java.util.List<java.lang.String> r1 = r3.encodedNames
            int r1 = r1.size()
        L13:
            if (r0 >= r1) goto L3a
            if (r0 <= 0) goto L1c
            r2 = 38
            r4.writeByte(r2)
        L1c:
            java.util.List<java.lang.String> r2 = r3.encodedNames
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r4.writeUtf8(r2)
            r2 = 61
            r4.writeByte(r2)
            java.util.List<java.lang.String> r2 = r3.encodedValues
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r4.writeUtf8(r2)
            int r0 = r0 + 1
            goto L13
        L3a:
            if (r5 == 0) goto L44
            long r0 = r4.size()
            r4.clear()
            goto L46
        L44:
            r0 = 0
        L46:
            return r0
    }

    @Override
    public long contentLength() {
            r2 = this;
            r0 = 0
            r1 = 1
            long r0 = r2.writeOrCountBytes(r0, r1)
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.MediaType contentType() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.MediaType r0 = com.mbridge.msdk.thrid.okhttp.FormBody.CONTENT_TYPE
            return r0
    }

    public java.lang.String encodedName(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedNames
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.lang.String encodedValue(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedValues
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.lang.String name(int r2) {
            r1 = this;
            java.lang.String r2 = r1.encodedName(r2)
            r0 = 1
            java.lang.String r2 = com.mbridge.msdk.thrid.okhttp.HttpUrl.percentDecode(r2, r0)
            return r2
    }

    public int size() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedNames
            int r0 = r0.size()
            return r0
    }

    public java.lang.String value(int r2) {
            r1 = this;
            java.lang.String r2 = r1.encodedValue(r2)
            r0 = 1
            java.lang.String r2 = com.mbridge.msdk.thrid.okhttp.HttpUrl.percentDecode(r2, r0)
            return r2
    }

    @Override
    public void writeTo(com.mbridge.msdk.thrid.okio.BufferedSink r2) throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.writeOrCountBytes(r2, r0)
            return
    }
}
