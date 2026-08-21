package com.loopj.android.http;

class SimpleMultipartEntity implements cz.msebera.android.httpclient.HttpEntity {
    private static final byte[] CR_LF = null;
    private static final java.lang.String LOG_TAG = "SimpleMultipartEntity";
    private static final char[] MULTIPART_CHARS = null;
    private static final java.lang.String STR_CR_LF = "\r\n";
    private static final byte[] TRANSFER_ENCODING_BINARY = null;
    private final java.lang.String boundary;
    private final byte[] boundaryEnd;
    private final byte[] boundaryLine;
    private long bytesWritten;
    private final java.util.List<com.loopj.android.http.SimpleMultipartEntity.FilePart> fileParts;
    private boolean isRepeatable;
    private final java.io.ByteArrayOutputStream out;
    private final com.loopj.android.http.ResponseHandlerInterface progressHandler;
    private long totalSize;

    private class FilePart {
        public final java.io.File file;
        public final byte[] header;
        final com.loopj.android.http.SimpleMultipartEntity this$0;

        public FilePart(com.loopj.android.http.SimpleMultipartEntity r1, java.lang.String r2, java.io.File r3, java.lang.String r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.lang.String r1 = r3.getName()
                byte[] r1 = r0.createHeader(r2, r1, r4)
                r0.header = r1
                r0.file = r3
                return
        }

        public FilePart(com.loopj.android.http.SimpleMultipartEntity r1, java.lang.String r2, java.io.File r3, java.lang.String r4, java.lang.String r5) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                boolean r1 = android.text.TextUtils.isEmpty(r5)
                if (r1 == 0) goto Lf
                java.lang.String r5 = r3.getName()
            Lf:
                byte[] r1 = r0.createHeader(r2, r5, r4)
                r0.header = r1
                r0.file = r3
                return
        }

        private byte[] createHeader(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
                r2 = this;
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                com.loopj.android.http.SimpleMultipartEntity r1 = r2.this$0     // Catch: java.io.IOException -> L2f
                byte[] r1 = com.loopj.android.http.SimpleMultipartEntity.access$000(r1)     // Catch: java.io.IOException -> L2f
                r0.write(r1)     // Catch: java.io.IOException -> L2f
                com.loopj.android.http.SimpleMultipartEntity r1 = r2.this$0     // Catch: java.io.IOException -> L2f
                byte[] r3 = com.loopj.android.http.SimpleMultipartEntity.access$100(r1, r3, r4)     // Catch: java.io.IOException -> L2f
                r0.write(r3)     // Catch: java.io.IOException -> L2f
                com.loopj.android.http.SimpleMultipartEntity r3 = r2.this$0     // Catch: java.io.IOException -> L2f
                byte[] r3 = com.loopj.android.http.SimpleMultipartEntity.access$200(r3, r5)     // Catch: java.io.IOException -> L2f
                r0.write(r3)     // Catch: java.io.IOException -> L2f
                byte[] r3 = com.loopj.android.http.SimpleMultipartEntity.access$300()     // Catch: java.io.IOException -> L2f
                r0.write(r3)     // Catch: java.io.IOException -> L2f
                byte[] r3 = com.loopj.android.http.SimpleMultipartEntity.access$400()     // Catch: java.io.IOException -> L2f
                r0.write(r3)     // Catch: java.io.IOException -> L2f
                goto L39
            L2f:
                r3 = move-exception
                com.loopj.android.http.LogInterface r4 = com.loopj.android.http.AsyncHttpClient.log
                java.lang.String r5 = "SimpleMultipartEntity"
                java.lang.String r1 = "createHeader ByteArrayOutputStream exception"
                r4.e(r5, r1, r3)
            L39:
                byte[] r3 = r0.toByteArray()
                return r3
        }

        public long getTotalLength() {
                r4 = this;
                java.io.File r0 = r4.file
                long r0 = r0.length()
                byte[] r2 = com.loopj.android.http.SimpleMultipartEntity.access$400()
                int r2 = r2.length
                long r2 = (long) r2
                long r0 = r0 + r2
                byte[] r2 = r4.header
                int r2 = r2.length
                long r2 = (long) r2
                long r2 = r2 + r0
                return r2
        }

        public void writeTo(java.io.OutputStream r7) throws java.io.IOException {
                r6 = this;
                byte[] r0 = r6.header
                r7.write(r0)
                com.loopj.android.http.SimpleMultipartEntity r0 = r6.this$0
                byte[] r1 = r6.header
                int r1 = r1.length
                long r1 = (long) r1
                com.loopj.android.http.SimpleMultipartEntity.access$500(r0, r1)
                java.io.FileInputStream r0 = new java.io.FileInputStream
                java.io.File r1 = r6.file
                r0.<init>(r1)
                r1 = 4096(0x1000, float:5.74E-42)
                byte[] r1 = new byte[r1]
            L19:
                int r2 = r0.read(r1)
                r3 = -1
                if (r2 == r3) goto L2b
                r3 = 0
                r7.write(r1, r3, r2)
                com.loopj.android.http.SimpleMultipartEntity r3 = r6.this$0
                long r4 = (long) r2
                com.loopj.android.http.SimpleMultipartEntity.access$500(r3, r4)
                goto L19
            L2b:
                byte[] r1 = com.loopj.android.http.SimpleMultipartEntity.access$400()
                r7.write(r1)
                com.loopj.android.http.SimpleMultipartEntity r1 = r6.this$0
                byte[] r2 = com.loopj.android.http.SimpleMultipartEntity.access$400()
                int r2 = r2.length
                long r2 = (long) r2
                com.loopj.android.http.SimpleMultipartEntity.access$500(r1, r2)
                r7.flush()
                com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
                return
        }
    }

    static {
            java.lang.String r0 = "\r\n"
            byte[] r0 = r0.getBytes()
            com.loopj.android.http.SimpleMultipartEntity.CR_LF = r0
            java.lang.String r0 = "Content-Transfer-Encoding: binary\r\n"
            byte[] r0 = r0.getBytes()
            com.loopj.android.http.SimpleMultipartEntity.TRANSFER_ENCODING_BINARY = r0
            java.lang.String r0 = "-_1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
            char[] r0 = r0.toCharArray()
            com.loopj.android.http.SimpleMultipartEntity.MULTIPART_CHARS = r0
            return
    }

    public SimpleMultipartEntity(com.loopj.android.http.ResponseHandlerInterface r6) {
            r5 = this;
            r5.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.fileParts = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r5.out = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            r2 = 0
        L1c:
            r3 = 30
            if (r2 >= r3) goto L2f
            char[] r3 = com.loopj.android.http.SimpleMultipartEntity.MULTIPART_CHARS
            int r4 = r3.length
            int r4 = r1.nextInt(r4)
            char r3 = r3[r4]
            r0.append(r3)
            int r2 = r2 + 1
            goto L1c
        L2f:
            java.lang.String r0 = r0.toString()
            r5.boundary = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--"
            r0.append(r1)
            java.lang.String r2 = r5.boundary
            r0.append(r2)
            java.lang.String r2 = "\r\n"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            r5.boundaryLine = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r3 = r5.boundary
            r0.append(r3)
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            r5.boundaryEnd = r0
            r5.progressHandler = r6
            return
    }

    static byte[] access$000(com.loopj.android.http.SimpleMultipartEntity r0) {
            byte[] r0 = r0.boundaryLine
            return r0
    }

    static byte[] access$100(com.loopj.android.http.SimpleMultipartEntity r0, java.lang.String r1, java.lang.String r2) {
            byte[] r0 = r0.createContentDisposition(r1, r2)
            return r0
    }

    static byte[] access$200(com.loopj.android.http.SimpleMultipartEntity r0, java.lang.String r1) {
            byte[] r0 = r0.createContentType(r1)
            return r0
    }

    static byte[] access$300() {
            byte[] r0 = com.loopj.android.http.SimpleMultipartEntity.TRANSFER_ENCODING_BINARY
            return r0
    }

    static byte[] access$400() {
            byte[] r0 = com.loopj.android.http.SimpleMultipartEntity.CR_LF
            return r0
    }

    static void access$500(com.loopj.android.http.SimpleMultipartEntity r0, long r1) {
            r0.updateProgress(r1)
            return
    }

    private byte[] createContentDisposition(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Content-Disposition: form-data; name=\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\""
            r0.append(r3)
            java.lang.String r3 = "\r\n"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            byte[] r3 = r3.getBytes()
            return r3
    }

    private byte[] createContentDisposition(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Content-Disposition: form-data; name=\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\""
            r0.append(r3)
            java.lang.String r1 = "; filename=\""
            r0.append(r1)
            r0.append(r4)
            r0.append(r3)
            java.lang.String r3 = "\r\n"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            byte[] r3 = r3.getBytes()
            return r3
    }

    private byte[] createContentType(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Content-Type: "
            r0.append(r1)
            java.lang.String r3 = r2.normalizeContentType(r3)
            r0.append(r3)
            java.lang.String r3 = "\r\n"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            byte[] r3 = r3.getBytes()
            return r3
    }

    private java.lang.String normalizeContentType(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L4
            java.lang.String r1 = "application/octet-stream"
        L4:
            return r1
    }

    private void updateProgress(long r5) {
            r4 = this;
            long r0 = r4.bytesWritten
            long r0 = r0 + r5
            r4.bytesWritten = r0
            com.loopj.android.http.ResponseHandlerInterface r5 = r4.progressHandler
            long r0 = r4.bytesWritten
            long r2 = r4.totalSize
            r5.sendProgressMessage(r0, r2)
            return
    }

    public void addPart(java.lang.String r2, java.io.File r3) {
            r1 = this;
            r0 = 0
            r1.addPart(r2, r3, r0)
            return
    }

    public void addPart(java.lang.String r3, java.io.File r4, java.lang.String r5) {
            r2 = this;
            java.util.List<com.loopj.android.http.SimpleMultipartEntity$FilePart> r0 = r2.fileParts
            com.loopj.android.http.SimpleMultipartEntity$FilePart r1 = new com.loopj.android.http.SimpleMultipartEntity$FilePart
            java.lang.String r5 = r2.normalizeContentType(r5)
            r1.<init>(r2, r3, r4, r5)
            r0.add(r1)
            return
    }

    public void addPart(java.lang.String r9, java.io.File r10, java.lang.String r11, java.lang.String r12) {
            r8 = this;
            java.util.List<com.loopj.android.http.SimpleMultipartEntity$FilePart> r0 = r8.fileParts
            com.loopj.android.http.SimpleMultipartEntity$FilePart r7 = new com.loopj.android.http.SimpleMultipartEntity$FilePart
            java.lang.String r5 = r8.normalizeContentType(r11)
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.add(r7)
            return
    }

    public void addPart(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.addPartWithCharset(r2, r3, r0)
            return
    }

    public void addPart(java.lang.String r3, java.lang.String r4, java.io.InputStream r5, java.lang.String r6) throws java.io.IOException {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = r2.out
            byte[] r1 = r2.boundaryLine
            r0.write(r1)
            java.io.ByteArrayOutputStream r0 = r2.out
            byte[] r3 = r2.createContentDisposition(r3, r4)
            r0.write(r3)
            java.io.ByteArrayOutputStream r3 = r2.out
            byte[] r4 = r2.createContentType(r6)
            r3.write(r4)
            java.io.ByteArrayOutputStream r3 = r2.out
            byte[] r4 = com.loopj.android.http.SimpleMultipartEntity.TRANSFER_ENCODING_BINARY
            r3.write(r4)
            java.io.ByteArrayOutputStream r3 = r2.out
            byte[] r4 = com.loopj.android.http.SimpleMultipartEntity.CR_LF
            r3.write(r4)
            r3 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r3]
        L2b:
            int r4 = r5.read(r3)
            r6 = -1
            if (r4 == r6) goto L39
            java.io.ByteArrayOutputStream r6 = r2.out
            r0 = 0
            r6.write(r3, r0, r4)
            goto L2b
        L39:
            java.io.ByteArrayOutputStream r3 = r2.out
            byte[] r4 = com.loopj.android.http.SimpleMultipartEntity.CR_LF
            r3.write(r4)
            java.io.ByteArrayOutputStream r3 = r2.out
            r3.flush()
            return
    }

    public void addPart(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r1 = r2.boundaryLine     // Catch: java.io.IOException -> L31
            r0.write(r1)     // Catch: java.io.IOException -> L31
            java.io.ByteArrayOutputStream r0 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r3 = r2.createContentDisposition(r3)     // Catch: java.io.IOException -> L31
            r0.write(r3)     // Catch: java.io.IOException -> L31
            java.io.ByteArrayOutputStream r3 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r5 = r2.createContentType(r5)     // Catch: java.io.IOException -> L31
            r3.write(r5)     // Catch: java.io.IOException -> L31
            java.io.ByteArrayOutputStream r3 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r5 = com.loopj.android.http.SimpleMultipartEntity.CR_LF     // Catch: java.io.IOException -> L31
            r3.write(r5)     // Catch: java.io.IOException -> L31
            java.io.ByteArrayOutputStream r3 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r4 = r4.getBytes()     // Catch: java.io.IOException -> L31
            r3.write(r4)     // Catch: java.io.IOException -> L31
            java.io.ByteArrayOutputStream r3 = r2.out     // Catch: java.io.IOException -> L31
            byte[] r4 = com.loopj.android.http.SimpleMultipartEntity.CR_LF     // Catch: java.io.IOException -> L31
            r3.write(r4)     // Catch: java.io.IOException -> L31
            goto L3b
        L31:
            r3 = move-exception
            com.loopj.android.http.LogInterface r4 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r5 = "SimpleMultipartEntity"
            java.lang.String r0 = "addPart ByteArrayOutputStream exception"
            r4.e(r5, r0, r3)
        L3b:
            return
    }

    public void addPartWithCharset(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            if (r5 != 0) goto L4
            java.lang.String r5 = "UTF-8"
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "text/plain; charset="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r2.addPart(r3, r4, r5)
            return
    }

    @Override
    public void consumeContent() throws java.io.IOException, java.lang.UnsupportedOperationException {
            r2 = this;
            boolean r0 = r2.isStreaming()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Streaming entity does not implement #consumeContent()"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException, java.lang.UnsupportedOperationException {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "getContent() is not supported. Use writeTo() instead."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public long getContentLength() {
            r8 = this;
            java.io.ByteArrayOutputStream r0 = r8.out
            int r0 = r0.size()
            long r0 = (long) r0
            java.util.List<com.loopj.android.http.SimpleMultipartEntity$FilePart> r2 = r8.fileParts
            java.util.Iterator r2 = r2.iterator()
        Ld:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L28
            java.lang.Object r3 = r2.next()
            com.loopj.android.http.SimpleMultipartEntity$FilePart r3 = (com.loopj.android.http.SimpleMultipartEntity.FilePart) r3
            long r3 = r3.getTotalLength()
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L26
            r0 = -1
            return r0
        L26:
            long r0 = r0 + r3
            goto Ld
        L28:
            byte[] r2 = r8.boundaryEnd
            int r2 = r2.length
            long r2 = (long) r2
            long r0 = r0 + r2
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r3 = this;
            cz.msebera.android.httpclient.message.BasicHeader r0 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "multipart/form-data; boundary="
            r1.append(r2)
            java.lang.String r2 = r3.boundary
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Content-Type"
            r0.<init>(r2, r1)
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
            boolean r0 = r1.isRepeatable
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void setIsRepeatable(boolean r1) {
            r0 = this;
            r0.isRepeatable = r1
            return
    }

    @Override
    public void writeTo(java.io.OutputStream r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            r2.bytesWritten = r0
            long r0 = r2.getContentLength()
            int r1 = (int) r0
            long r0 = (long) r1
            r2.totalSize = r0
            java.io.ByteArrayOutputStream r0 = r2.out
            r0.writeTo(r3)
            java.io.ByteArrayOutputStream r0 = r2.out
            int r0 = r0.size()
            long r0 = (long) r0
            r2.updateProgress(r0)
            java.util.List<com.loopj.android.http.SimpleMultipartEntity$FilePart> r0 = r2.fileParts
            java.util.Iterator r0 = r0.iterator()
        L21:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()
            com.loopj.android.http.SimpleMultipartEntity$FilePart r1 = (com.loopj.android.http.SimpleMultipartEntity.FilePart) r1
            r1.writeTo(r3)
            goto L21
        L31:
            byte[] r0 = r2.boundaryEnd
            r3.write(r0)
            byte[] r3 = r2.boundaryEnd
            int r3 = r3.length
            long r0 = (long) r3
            r2.updateProgress(r0)
            return
    }
}
