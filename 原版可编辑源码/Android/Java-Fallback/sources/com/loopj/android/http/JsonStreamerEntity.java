package com.loopj.android.http;

public class JsonStreamerEntity implements cz.msebera.android.httpclient.HttpEntity {
    private static final int BUFFER_SIZE = 4096;
    private static final java.lang.UnsupportedOperationException ERR_UNSUPPORTED = null;
    private static final cz.msebera.android.httpclient.Header HEADER_GZIP_ENCODING = null;
    private static final cz.msebera.android.httpclient.Header HEADER_JSON_CONTENT = null;
    private static final byte[] JSON_FALSE = null;
    private static final byte[] JSON_NULL = null;
    private static final byte[] JSON_TRUE = null;
    private static final java.lang.String LOG_TAG = "JsonStreamerEntity";
    private static final byte[] STREAM_CONTENTS = null;
    private static final byte[] STREAM_NAME = null;
    private static final byte[] STREAM_TYPE = null;
    private final byte[] buffer;
    private final cz.msebera.android.httpclient.Header contentEncoding;
    private final byte[] elapsedField;
    private final java.util.Map<java.lang.String, java.lang.Object> jsonParams;
    private final com.loopj.android.http.ResponseHandlerInterface progressHandler;

    static {
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Unsupported operation in this implementation."
            r0.<init>(r1)
            com.loopj.android.http.JsonStreamerEntity.ERR_UNSUPPORTED = r0
            java.lang.String r0 = "true"
            byte[] r0 = r0.getBytes()
            com.loopj.android.http.JsonStreamerEntity.JSON_TRUE = r0
            java.lang.String r0 = "false"
            byte[] r0 = r0.getBytes()
            com.loopj.android.http.JsonStreamerEntity.JSON_FALSE = r0
            java.lang.String r0 = "null"
            byte[] r0 = r0.getBytes()
            com.loopj.android.http.JsonStreamerEntity.JSON_NULL = r0
            java.lang.String r0 = "name"
            byte[] r0 = escape(r0)
            com.loopj.android.http.JsonStreamerEntity.STREAM_NAME = r0
            java.lang.String r0 = "type"
            byte[] r0 = escape(r0)
            com.loopj.android.http.JsonStreamerEntity.STREAM_TYPE = r0
            java.lang.String r0 = "contents"
            byte[] r0 = escape(r0)
            com.loopj.android.http.JsonStreamerEntity.STREAM_CONTENTS = r0
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json"
            r0.<init>(r1, r2)
            com.loopj.android.http.JsonStreamerEntity.HEADER_JSON_CONTENT = r0
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r0.<init>(r1, r2)
            com.loopj.android.http.JsonStreamerEntity.HEADER_GZIP_ENCODING = r0
            return
    }

    public JsonStreamerEntity(com.loopj.android.http.ResponseHandlerInterface r2, boolean r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            r1.buffer = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.jsonParams = r0
            r1.progressHandler = r2
            r2 = 0
            if (r3 == 0) goto L18
            cz.msebera.android.httpclient.Header r3 = com.loopj.android.http.JsonStreamerEntity.HEADER_GZIP_ENCODING
            goto L19
        L18:
            r3 = r2
        L19:
            r1.contentEncoding = r3
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 == 0) goto L22
            goto L26
        L22:
            byte[] r2 = escape(r4)
        L26:
            r1.elapsedField = r2
            return
    }

    private void endMetaData(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            r0 = 34
            r2.write(r0)
            return
    }

    static byte[] escape(java.lang.String r8) {
            if (r8 != 0) goto L5
            byte[] r8 = com.loopj.android.http.JsonStreamerEntity.JSON_NULL
            return r8
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            r1 = 34
            r0.append(r1)
            int r2 = r8.length()
            r3 = -1
        L16:
            int r3 = r3 + 1
            if (r3 >= r2) goto L96
            char r4 = r8.charAt(r3)
            r5 = 12
            if (r4 == r5) goto L90
            r5 = 13
            if (r4 == r5) goto L8a
            if (r4 == r1) goto L84
            r5 = 92
            if (r4 == r5) goto L7e
            switch(r4) {
                case 8: goto L78;
                case 9: goto L72;
                case 10: goto L6c;
                default: goto L2f;
            }
        L2f:
            r5 = 31
            if (r4 <= r5) goto L48
            r5 = 127(0x7f, float:1.78E-43)
            if (r4 < r5) goto L3b
            r5 = 159(0x9f, float:2.23E-43)
            if (r4 <= r5) goto L48
        L3b:
            r5 = 8192(0x2000, float:1.148E-41)
            if (r4 < r5) goto L44
            r5 = 8447(0x20ff, float:1.1837E-41)
            if (r4 > r5) goto L44
            goto L48
        L44:
            r0.append(r4)
            goto L16
        L48:
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            java.lang.String r5 = "\\u"
            r0.append(r5)
            int r5 = r4.length()
            int r5 = 4 - r5
            r6 = 0
        L58:
            if (r6 >= r5) goto L62
            r7 = 48
            r0.append(r7)
            int r6 = r6 + 1
            goto L58
        L62:
            java.util.Locale r5 = java.util.Locale.US
            java.lang.String r4 = r4.toUpperCase(r5)
            r0.append(r4)
            goto L16
        L6c:
            java.lang.String r4 = "\\n"
            r0.append(r4)
            goto L16
        L72:
            java.lang.String r4 = "\\t"
            r0.append(r4)
            goto L16
        L78:
            java.lang.String r4 = "\\b"
            r0.append(r4)
            goto L16
        L7e:
            java.lang.String r4 = "\\\\"
            r0.append(r4)
            goto L16
        L84:
            java.lang.String r4 = "\\\""
            r0.append(r4)
            goto L16
        L8a:
            java.lang.String r4 = "\\r"
            r0.append(r4)
            goto L16
        L90:
            java.lang.String r4 = "\\f"
            r0.append(r4)
            goto L16
        L96:
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            byte[] r8 = r8.getBytes()
            return r8
    }

    private void writeMetaData(java.io.OutputStream r3, java.lang.String r4, java.lang.String r5) throws java.io.IOException {
            r2 = this;
            byte[] r0 = com.loopj.android.http.JsonStreamerEntity.STREAM_NAME
            r3.write(r0)
            r0 = 58
            r3.write(r0)
            byte[] r4 = escape(r4)
            r3.write(r4)
            r4 = 44
            r3.write(r4)
            byte[] r1 = com.loopj.android.http.JsonStreamerEntity.STREAM_TYPE
            r3.write(r1)
            r3.write(r0)
            byte[] r5 = escape(r5)
            r3.write(r5)
            r3.write(r4)
            byte[] r4 = com.loopj.android.http.JsonStreamerEntity.STREAM_CONTENTS
            r3.write(r4)
            r3.write(r0)
            r4 = 34
            r3.write(r4)
            return
    }

    private void writeToFromFile(java.io.OutputStream r9, com.loopj.android.http.RequestParams.FileWrapper r10) throws java.io.IOException {
            r8 = this;
            java.io.File r0 = r10.file
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = r10.contentType
            r8.writeMetaData(r9, r0, r1)
            java.io.File r0 = r10.file
            long r0 = r0.length()
            java.io.FileInputStream r2 = new java.io.FileInputStream
            java.io.File r10 = r10.file
            r2.<init>(r10)
            com.loopj.android.http.Base64OutputStream r10 = new com.loopj.android.http.Base64OutputStream
            r3 = 18
            r10.<init>(r9, r3)
            r3 = 0
        L21:
            byte[] r5 = r8.buffer
            int r5 = r2.read(r5)
            r6 = -1
            if (r5 == r6) goto L38
            byte[] r6 = r8.buffer
            r7 = 0
            r10.write(r6, r7, r5)
            long r5 = (long) r5
            long r3 = r3 + r5
            com.loopj.android.http.ResponseHandlerInterface r5 = r8.progressHandler
            r5.sendProgressMessage(r3, r0)
            goto L21
        L38:
            com.loopj.android.http.AsyncHttpClient.silentCloseOutputStream(r10)
            r8.endMetaData(r9)
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r2)
            return
    }

    private void writeToFromStream(java.io.OutputStream r5, com.loopj.android.http.RequestParams.StreamWrapper r6) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = r6.name
            java.lang.String r1 = r6.contentType
            r4.writeMetaData(r5, r0, r1)
            com.loopj.android.http.Base64OutputStream r0 = new com.loopj.android.http.Base64OutputStream
            r1 = 18
            r0.<init>(r5, r1)
        Le:
            java.io.InputStream r1 = r6.inputStream
            byte[] r2 = r4.buffer
            int r1 = r1.read(r2)
            r2 = -1
            if (r1 == r2) goto L20
            byte[] r2 = r4.buffer
            r3 = 0
            r0.write(r2, r3, r1)
            goto Le
        L20:
            com.loopj.android.http.AsyncHttpClient.silentCloseOutputStream(r0)
            r4.endMetaData(r5)
            boolean r5 = r6.autoClose
            if (r5 == 0) goto L2f
            java.io.InputStream r5 = r6.inputStream
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r5)
        L2f:
            return
    }

    public void addPart(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.jsonParams
            r0.put(r2, r3)
            return
    }

    @Override
    public void consumeContent() throws java.io.IOException, java.lang.UnsupportedOperationException {
            r0 = this;
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException, java.lang.UnsupportedOperationException {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = com.loopj.android.http.JsonStreamerEntity.ERR_UNSUPPORTED
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = r1.contentEncoding
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            r0 = -1
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r1 = this;
            cz.msebera.android.httpclient.Header r0 = com.loopj.android.http.JsonStreamerEntity.HEADER_JSON_CONTENT
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r14) throws java.io.IOException {
            r13 = this;
            if (r14 == 0) goto L1b6
            long r0 = java.lang.System.currentTimeMillis()
            cz.msebera.android.httpclient.Header r2 = r13.contentEncoding
            if (r2 == 0) goto L12
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream
            r3 = 4096(0x1000, float:5.74E-42)
            r2.<init>(r14, r3)
            r14 = r2
        L12:
            r2 = 123(0x7b, float:1.72E-43)
            r14.write(r2)
            java.util.Map<java.lang.String, java.lang.Object> r3 = r13.jsonParams
            java.util.Set r3 = r3.keySet()
            int r4 = r3.size()
            r5 = 125(0x7d, float:1.75E-43)
            if (r4 <= 0) goto L1ac
            r6 = 0
            java.util.Iterator r3 = r3.iterator()
        L2a:
            boolean r7 = r3.hasNext()
            r8 = 58
            java.lang.String r9 = ""
            if (r7 == 0) goto L162
            java.lang.Object r7 = r3.next()
            java.lang.String r7 = (java.lang.String) r7
            int r6 = r6 + 1
            r10 = 44
            java.util.Map<java.lang.String, java.lang.Object> r11 = r13.jsonParams     // Catch: java.lang.Throwable -> L157
            java.lang.Object r11 = r11.get(r7)     // Catch: java.lang.Throwable -> L157
            byte[] r7 = escape(r7)     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            r14.write(r8)     // Catch: java.lang.Throwable -> L157
            if (r11 != 0) goto L57
            byte[] r7 = com.loopj.android.http.JsonStreamerEntity.JSON_NULL     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L57:
            boolean r7 = r11 instanceof com.loopj.android.http.RequestParams.FileWrapper     // Catch: java.lang.Throwable -> L157
            if (r7 != 0) goto L139
            boolean r8 = r11 instanceof com.loopj.android.http.RequestParams.StreamWrapper     // Catch: java.lang.Throwable -> L157
            if (r8 == 0) goto L61
            goto L139
        L61:
            boolean r7 = r11 instanceof com.loopj.android.http.JsonValueInterface     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L70
            com.loopj.android.http.JsonValueInterface r11 = (com.loopj.android.http.JsonValueInterface) r11     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r11.getEscapedJsonValue()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L70:
            boolean r7 = r11 instanceof org.json.JSONObject     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L81
            java.lang.String r7 = r11.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L81:
            boolean r7 = r11 instanceof org.json.JSONArray     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L92
            java.lang.String r7 = r11.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L92:
            boolean r7 = r11 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto La8
            java.lang.Boolean r11 = (java.lang.Boolean) r11     // Catch: java.lang.Throwable -> L157
            boolean r7 = r11.booleanValue()     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto La1
            byte[] r7 = com.loopj.android.http.JsonStreamerEntity.JSON_TRUE     // Catch: java.lang.Throwable -> L157
            goto La3
        La1:
            byte[] r7 = com.loopj.android.http.JsonStreamerEntity.JSON_FALSE     // Catch: java.lang.Throwable -> L157
        La3:
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        La8:
            boolean r7 = r11 instanceof java.lang.Long     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto Lca
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L157
            r7.<init>()     // Catch: java.lang.Throwable -> L157
            java.lang.Number r11 = (java.lang.Number) r11     // Catch: java.lang.Throwable -> L157
            long r11 = r11.longValue()     // Catch: java.lang.Throwable -> L157
            r7.append(r11)     // Catch: java.lang.Throwable -> L157
            r7.append(r9)     // Catch: java.lang.Throwable -> L157
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        Lca:
            boolean r7 = r11 instanceof java.lang.Double     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto Leb
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L157
            r7.<init>()     // Catch: java.lang.Throwable -> L157
            java.lang.Number r11 = (java.lang.Number) r11     // Catch: java.lang.Throwable -> L157
            double r11 = r11.doubleValue()     // Catch: java.lang.Throwable -> L157
            r7.append(r11)     // Catch: java.lang.Throwable -> L157
            r7.append(r9)     // Catch: java.lang.Throwable -> L157
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        Leb:
            boolean r7 = r11 instanceof java.lang.Float     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L10c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L157
            r7.<init>()     // Catch: java.lang.Throwable -> L157
            java.lang.Number r11 = (java.lang.Number) r11     // Catch: java.lang.Throwable -> L157
            float r8 = r11.floatValue()     // Catch: java.lang.Throwable -> L157
            r7.append(r8)     // Catch: java.lang.Throwable -> L157
            r7.append(r9)     // Catch: java.lang.Throwable -> L157
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L10c:
            boolean r7 = r11 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L12d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L157
            r7.<init>()     // Catch: java.lang.Throwable -> L157
            java.lang.Number r11 = (java.lang.Number) r11     // Catch: java.lang.Throwable -> L157
            int r8 = r11.intValue()     // Catch: java.lang.Throwable -> L157
            r7.append(r8)     // Catch: java.lang.Throwable -> L157
            r7.append(r9)     // Catch: java.lang.Throwable -> L157
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L12d:
            java.lang.String r7 = r11.toString()     // Catch: java.lang.Throwable -> L157
            byte[] r7 = escape(r7)     // Catch: java.lang.Throwable -> L157
            r14.write(r7)     // Catch: java.lang.Throwable -> L157
            goto L14c
        L139:
            r14.write(r2)     // Catch: java.lang.Throwable -> L157
            if (r7 == 0) goto L144
            com.loopj.android.http.RequestParams$FileWrapper r11 = (com.loopj.android.http.RequestParams.FileWrapper) r11     // Catch: java.lang.Throwable -> L157
            r13.writeToFromFile(r14, r11)     // Catch: java.lang.Throwable -> L157
            goto L149
        L144:
            com.loopj.android.http.RequestParams$StreamWrapper r11 = (com.loopj.android.http.RequestParams.StreamWrapper) r11     // Catch: java.lang.Throwable -> L157
            r13.writeToFromStream(r14, r11)     // Catch: java.lang.Throwable -> L157
        L149:
            r14.write(r5)     // Catch: java.lang.Throwable -> L157
        L14c:
            byte[] r7 = r13.elapsedField
            if (r7 != 0) goto L152
            if (r6 >= r4) goto L2a
        L152:
            r14.write(r10)
            goto L2a
        L157:
            r0 = move-exception
            byte[] r1 = r13.elapsedField
            if (r1 != 0) goto L15e
            if (r6 >= r4) goto L161
        L15e:
            r14.write(r10)
        L161:
            throw r0
        L162:
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            byte[] r0 = r13.elapsedField
            if (r0 == 0) goto L187
            r14.write(r0)
            r14.write(r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            r14.write(r0)
        L187:
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "Uploaded JSON in "
            r1.append(r4)
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            double r2 = (double) r2
            double r2 = java.lang.Math.floor(r2)
            r1.append(r2)
            java.lang.String r2 = " seconds"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "JsonStreamerEntity"
            r0.i(r2, r1)
        L1ac:
            r14.write(r5)
            r14.flush()
            com.loopj.android.http.AsyncHttpClient.silentCloseOutputStream(r14)
            return
        L1b6:
            java.lang.IllegalStateException r14 = new java.lang.IllegalStateException
            java.lang.String r0 = "Output stream cannot be null."
            r14.<init>(r0)
            throw r14
    }
}
