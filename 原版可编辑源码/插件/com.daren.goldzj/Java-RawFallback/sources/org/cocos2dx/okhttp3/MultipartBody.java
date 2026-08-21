package org.cocos2dx.okhttp3;

public final class MultipartBody extends org.cocos2dx.okhttp3.RequestBody {
    public static final org.cocos2dx.okhttp3.MediaType ALTERNATIVE = null;
    private static final byte[] COLONSPACE = null;
    private static final byte[] CRLF = null;
    private static final byte[] DASHDASH = null;
    public static final org.cocos2dx.okhttp3.MediaType DIGEST = null;
    public static final org.cocos2dx.okhttp3.MediaType FORM = null;
    public static final org.cocos2dx.okhttp3.MediaType MIXED = null;
    public static final org.cocos2dx.okhttp3.MediaType PARALLEL = null;
    private final org.cocos2dx.okio.ByteString boundary;
    private long contentLength;
    private final org.cocos2dx.okhttp3.MediaType contentType;
    private final org.cocos2dx.okhttp3.MediaType originalType;
    private final java.util.List<org.cocos2dx.okhttp3.MultipartBody.Part> parts;

    public static final class Builder {
        private final org.cocos2dx.okio.ByteString boundary;
        private final java.util.List<org.cocos2dx.okhttp3.MultipartBody.Part> parts;
        private org.cocos2dx.okhttp3.MediaType type;

        public Builder() {
                r1 = this;
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.lang.String r0 = r0.toString()
                r1.<init>(r0)
                return
        }

        public Builder(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MultipartBody.MIXED
                r1.type = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.parts = r0
                org.cocos2dx.okio.ByteString r2 = org.cocos2dx.okio.ByteString.encodeUtf8(r2)
                r1.boundary = r2
                return
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder addFormDataPart(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = org.cocos2dx.okhttp3.MultipartBody.Part.createFormData(r1, r2)
                org.cocos2dx.okhttp3.MultipartBody$Builder r1 = r0.addPart(r1)
                return r1
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder addFormDataPart(java.lang.String r1, @javax.annotation.Nullable java.lang.String r2, org.cocos2dx.okhttp3.RequestBody r3) {
                r0 = this;
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = org.cocos2dx.okhttp3.MultipartBody.Part.createFormData(r1, r2, r3)
                org.cocos2dx.okhttp3.MultipartBody$Builder r1 = r0.addPart(r1)
                return r1
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder addPart(@javax.annotation.Nullable org.cocos2dx.okhttp3.Headers r1, org.cocos2dx.okhttp3.RequestBody r2) {
                r0 = this;
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = org.cocos2dx.okhttp3.MultipartBody.Part.create(r1, r2)
                org.cocos2dx.okhttp3.MultipartBody$Builder r1 = r0.addPart(r1)
                return r1
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder addPart(org.cocos2dx.okhttp3.MultipartBody.Part r2) {
                r1 = this;
                if (r2 == 0) goto L8
                java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r0 = r1.parts
                r0.add(r2)
                return r1
            L8:
                java.lang.NullPointerException r2 = new java.lang.NullPointerException
                java.lang.String r0 = "part == null"
                r2.<init>(r0)
                throw r2
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder addPart(org.cocos2dx.okhttp3.RequestBody r1) {
                r0 = this;
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = org.cocos2dx.okhttp3.MultipartBody.Part.create(r1)
                org.cocos2dx.okhttp3.MultipartBody$Builder r1 = r0.addPart(r1)
                return r1
        }

        public org.cocos2dx.okhttp3.MultipartBody build() {
                r4 = this;
                java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r0 = r4.parts
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L14
                org.cocos2dx.okhttp3.MultipartBody r0 = new org.cocos2dx.okhttp3.MultipartBody
                org.cocos2dx.okio.ByteString r1 = r4.boundary
                org.cocos2dx.okhttp3.MediaType r2 = r4.type
                java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r3 = r4.parts
                r0.<init>(r1, r2, r3)
                return r0
            L14:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "Multipart body must have at least one part."
                r0.<init>(r1)
                throw r0
        }

        public org.cocos2dx.okhttp3.MultipartBody.Builder setType(org.cocos2dx.okhttp3.MediaType r4) {
                r3 = this;
                if (r4 == 0) goto L28
                java.lang.String r0 = r4.type()
                java.lang.String r1 = "multipart"
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L11
                r3.type = r4
                return r3
            L11:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "multipart != "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
            L28:
                java.lang.NullPointerException r4 = new java.lang.NullPointerException
                java.lang.String r0 = "type == null"
                r4.<init>(r0)
                throw r4
        }
    }

    public static final class Part {
        final org.cocos2dx.okhttp3.RequestBody body;

        @javax.annotation.Nullable
        final org.cocos2dx.okhttp3.Headers headers;

        private Part(@javax.annotation.Nullable org.cocos2dx.okhttp3.Headers r1, org.cocos2dx.okhttp3.RequestBody r2) {
                r0 = this;
                r0.<init>()
                r0.headers = r1
                r0.body = r2
                return
        }

        public static org.cocos2dx.okhttp3.MultipartBody.Part create(@javax.annotation.Nullable org.cocos2dx.okhttp3.Headers r1, org.cocos2dx.okhttp3.RequestBody r2) {
                if (r2 == 0) goto L2e
                if (r1 == 0) goto L15
                java.lang.String r0 = "Content-Type"
                java.lang.String r0 = r1.get(r0)
                if (r0 != 0) goto Ld
                goto L15
            Ld:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Unexpected header: Content-Type"
                r1.<init>(r2)
                throw r1
            L15:
                if (r1 == 0) goto L28
                java.lang.String r0 = "Content-Length"
                java.lang.String r0 = r1.get(r0)
                if (r0 != 0) goto L20
                goto L28
            L20:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Unexpected header: Content-Length"
                r1.<init>(r2)
                throw r1
            L28:
                org.cocos2dx.okhttp3.MultipartBody$Part r0 = new org.cocos2dx.okhttp3.MultipartBody$Part
                r0.<init>(r1, r2)
                return r0
            L2e:
                java.lang.NullPointerException r1 = new java.lang.NullPointerException
                java.lang.String r2 = "body == null"
                r1.<init>(r2)
                throw r1
        }

        public static org.cocos2dx.okhttp3.MultipartBody.Part create(org.cocos2dx.okhttp3.RequestBody r1) {
                r0 = 0
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = create(r0, r1)
                return r1
        }

        public static org.cocos2dx.okhttp3.MultipartBody.Part createFormData(java.lang.String r1, java.lang.String r2) {
                r0 = 0
                org.cocos2dx.okhttp3.RequestBody r2 = org.cocos2dx.okhttp3.RequestBody.create(r0, r2)
                org.cocos2dx.okhttp3.MultipartBody$Part r1 = createFormData(r1, r0, r2)
                return r1
        }

        public static org.cocos2dx.okhttp3.MultipartBody.Part createFormData(java.lang.String r2, @javax.annotation.Nullable java.lang.String r3, org.cocos2dx.okhttp3.RequestBody r4) {
                if (r2 == 0) goto L2e
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "form-data; name="
                r0.<init>(r1)
                org.cocos2dx.okhttp3.MultipartBody.appendQuotedString(r0, r2)
                if (r3 == 0) goto L16
                java.lang.String r2 = "; filename="
                r0.append(r2)
                org.cocos2dx.okhttp3.MultipartBody.appendQuotedString(r0, r3)
            L16:
                org.cocos2dx.okhttp3.Headers$Builder r2 = new org.cocos2dx.okhttp3.Headers$Builder
                r2.<init>()
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "Content-Disposition"
                org.cocos2dx.okhttp3.Headers$Builder r2 = r2.addUnsafeNonAscii(r0, r3)
                org.cocos2dx.okhttp3.Headers r2 = r2.build()
                org.cocos2dx.okhttp3.MultipartBody$Part r2 = create(r2, r4)
                return r2
            L2e:
                java.lang.NullPointerException r2 = new java.lang.NullPointerException
                java.lang.String r3 = "name == null"
                r2.<init>(r3)
                throw r2
        }

        public org.cocos2dx.okhttp3.RequestBody body() {
                r1 = this;
                org.cocos2dx.okhttp3.RequestBody r0 = r1.body
                return r0
        }

        @javax.annotation.Nullable
        public org.cocos2dx.okhttp3.Headers headers() {
                r1 = this;
                org.cocos2dx.okhttp3.Headers r0 = r1.headers
                return r0
        }
    }

    static {
            java.lang.String r0 = "multipart/mixed"
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.get(r0)
            org.cocos2dx.okhttp3.MultipartBody.MIXED = r0
            java.lang.String r0 = "multipart/alternative"
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.get(r0)
            org.cocos2dx.okhttp3.MultipartBody.ALTERNATIVE = r0
            java.lang.String r0 = "multipart/digest"
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.get(r0)
            org.cocos2dx.okhttp3.MultipartBody.DIGEST = r0
            java.lang.String r0 = "multipart/parallel"
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.get(r0)
            org.cocos2dx.okhttp3.MultipartBody.PARALLEL = r0
            java.lang.String r0 = "multipart/form-data"
            org.cocos2dx.okhttp3.MediaType r0 = org.cocos2dx.okhttp3.MediaType.get(r0)
            org.cocos2dx.okhttp3.MultipartBody.FORM = r0
            r0 = 2
            byte[] r1 = new byte[r0]
            r1 = {x0040: FILL_ARRAY_DATA , data: [58, 32} // fill-array
            org.cocos2dx.okhttp3.MultipartBody.COLONSPACE = r1
            byte[] r1 = new byte[r0]
            r1 = {x0046: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            org.cocos2dx.okhttp3.MultipartBody.CRLF = r1
            byte[] r0 = new byte[r0]
            r0 = {x004c: FILL_ARRAY_DATA , data: [45, 45} // fill-array
            org.cocos2dx.okhttp3.MultipartBody.DASHDASH = r0
            return
    }

    MultipartBody(org.cocos2dx.okio.ByteString r3, org.cocos2dx.okhttp3.MediaType r4, java.util.List<org.cocos2dx.okhttp3.MultipartBody.Part> r5) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.contentLength = r0
            r2.boundary = r3
            r2.originalType = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "; boundary="
            r0.append(r4)
            java.lang.String r3 = r3.utf8()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            org.cocos2dx.okhttp3.MediaType r3 = org.cocos2dx.okhttp3.MediaType.get(r3)
            r2.contentType = r3
            java.util.List r3 = org.cocos2dx.okhttp3.internal.Util.immutableList(r5)
            r2.parts = r3
            return
    }

    static java.lang.StringBuilder appendQuotedString(java.lang.StringBuilder r5, java.lang.String r6) {
            r0 = 34
            r5.append(r0)
            int r1 = r6.length()
            r2 = 0
        La:
            if (r2 >= r1) goto L32
            char r3 = r6.charAt(r2)
            r4 = 10
            if (r3 == r4) goto L2a
            r4 = 13
            if (r3 == r4) goto L24
            if (r3 == r0) goto L1e
            r5.append(r3)
            goto L2f
        L1e:
            java.lang.String r3 = "%22"
            r5.append(r3)
            goto L2f
        L24:
            java.lang.String r3 = "%0D"
            r5.append(r3)
            goto L2f
        L2a:
            java.lang.String r3 = "%0A"
            r5.append(r3)
        L2f:
            int r2 = r2 + 1
            goto La
        L32:
            r5.append(r0)
            return r5
    }

    private long writeOrCountBytes(@javax.annotation.Nullable org.cocos2dx.okio.BufferedSink r13, boolean r14) throws java.io.IOException {
            r12 = this;
            if (r14 == 0) goto L9
            org.cocos2dx.okio.Buffer r13 = new org.cocos2dx.okio.Buffer
            r13.<init>()
            r0 = r13
            goto La
        L9:
            r0 = 0
        La:
            java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r1 = r12.parts
            int r1 = r1.size()
            r2 = 0
            r3 = 0
            r4 = r3
            r3 = 0
        L15:
            if (r3 >= r1) goto La7
            java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r6 = r12.parts
            java.lang.Object r6 = r6.get(r3)
            org.cocos2dx.okhttp3.MultipartBody$Part r6 = (org.cocos2dx.okhttp3.MultipartBody.Part) r6
            org.cocos2dx.okhttp3.Headers r7 = r6.headers
            org.cocos2dx.okhttp3.RequestBody r6 = r6.body
            byte[] r8 = org.cocos2dx.okhttp3.MultipartBody.DASHDASH
            r13.write(r8)
            org.cocos2dx.okio.ByteString r8 = r12.boundary
            r13.write(r8)
            byte[] r8 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r13.write(r8)
            if (r7 == 0) goto L59
            int r8 = r7.size()
            r9 = 0
        L39:
            if (r9 >= r8) goto L59
            java.lang.String r10 = r7.name(r9)
            org.cocos2dx.okio.BufferedSink r10 = r13.writeUtf8(r10)
            byte[] r11 = org.cocos2dx.okhttp3.MultipartBody.COLONSPACE
            org.cocos2dx.okio.BufferedSink r10 = r10.write(r11)
            java.lang.String r11 = r7.value(r9)
            org.cocos2dx.okio.BufferedSink r10 = r10.writeUtf8(r11)
            byte[] r11 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r10.write(r11)
            int r9 = r9 + 1
            goto L39
        L59:
            org.cocos2dx.okhttp3.MediaType r7 = r6.contentType()
            if (r7 == 0) goto L72
            java.lang.String r8 = "Content-Type: "
            org.cocos2dx.okio.BufferedSink r8 = r13.writeUtf8(r8)
            java.lang.String r7 = r7.toString()
            org.cocos2dx.okio.BufferedSink r7 = r8.writeUtf8(r7)
            byte[] r8 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r7.write(r8)
        L72:
            long r7 = r6.contentLength()
            r9 = -1
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 == 0) goto L8c
            java.lang.String r9 = "Content-Length: "
            org.cocos2dx.okio.BufferedSink r9 = r13.writeUtf8(r9)
            org.cocos2dx.okio.BufferedSink r9 = r9.writeDecimalLong(r7)
            byte[] r10 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r9.write(r10)
            goto L92
        L8c:
            if (r14 == 0) goto L92
            r0.clear()
            return r9
        L92:
            byte[] r9 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r13.write(r9)
            if (r14 == 0) goto L9b
            long r4 = r4 + r7
            goto L9e
        L9b:
            r6.writeTo(r13)
        L9e:
            byte[] r6 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r13.write(r6)
            int r3 = r3 + 1
            goto L15
        La7:
            byte[] r1 = org.cocos2dx.okhttp3.MultipartBody.DASHDASH
            r13.write(r1)
            org.cocos2dx.okio.ByteString r1 = r12.boundary
            r13.write(r1)
            byte[] r1 = org.cocos2dx.okhttp3.MultipartBody.DASHDASH
            r13.write(r1)
            byte[] r1 = org.cocos2dx.okhttp3.MultipartBody.CRLF
            r13.write(r1)
            if (r14 == 0) goto Lc5
            long r13 = r0.size()
            long r4 = r4 + r13
            r0.clear()
        Lc5:
            return r4
    }

    public java.lang.String boundary() {
            r1 = this;
            org.cocos2dx.okio.ByteString r0 = r1.boundary
            java.lang.String r0 = r0.utf8()
            return r0
    }

    @Override
    public long contentLength() throws java.io.IOException {
            r5 = this;
            long r0 = r5.contentLength
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L9
            return r0
        L9:
            r0 = 0
            r1 = 1
            long r0 = r5.writeOrCountBytes(r0, r1)
            r5.contentLength = r0
            return r0
    }

    @Override
    public org.cocos2dx.okhttp3.MediaType contentType() {
            r1 = this;
            org.cocos2dx.okhttp3.MediaType r0 = r1.contentType
            return r0
    }

    public org.cocos2dx.okhttp3.MultipartBody.Part part(int r2) {
            r1 = this;
            java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r0 = r1.parts
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.okhttp3.MultipartBody$Part r2 = (org.cocos2dx.okhttp3.MultipartBody.Part) r2
            return r2
    }

    public java.util.List<org.cocos2dx.okhttp3.MultipartBody.Part> parts() {
            r1 = this;
            java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r0 = r1.parts
            return r0
    }

    public int size() {
            r1 = this;
            java.util.List<org.cocos2dx.okhttp3.MultipartBody$Part> r0 = r1.parts
            int r0 = r0.size()
            return r0
    }

    public org.cocos2dx.okhttp3.MediaType type() {
            r1 = this;
            org.cocos2dx.okhttp3.MediaType r0 = r1.originalType
            return r0
    }

    @Override
    public void writeTo(org.cocos2dx.okio.BufferedSink r2) throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.writeOrCountBytes(r2, r0)
            return
    }
}
