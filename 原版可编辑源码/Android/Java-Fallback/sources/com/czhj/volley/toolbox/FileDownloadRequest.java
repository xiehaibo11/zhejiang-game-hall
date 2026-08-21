package com.czhj.volley.toolbox;

public class FileDownloadRequest extends com.czhj.volley.Request<com.czhj.volley.toolbox.DownloadItem> {
    private java.io.File a;
    private java.io.File b;
    private com.czhj.volley.toolbox.DownloadItem c;
    private long d;
    private final java.lang.Object e;
    private com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener f;

    public interface FileDownloadListener {
        void downloadProgress(com.czhj.volley.toolbox.DownloadItem r1, long r2, long r4);

        void onCancel(com.czhj.volley.toolbox.DownloadItem r1);

        void onErrorResponse(com.czhj.volley.toolbox.DownloadItem r1);

        void onSuccess(com.czhj.volley.toolbox.DownloadItem r1);
    }

    public FileDownloadRequest(com.czhj.volley.toolbox.DownloadItem r6, com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r7) {
            r5 = this;
            java.lang.String r0 = r6.url
            r1 = 0
            r2 = 0
            r5.<init>(r2, r0, r1)
            r3 = 0
            r5.d = r3
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r5.e = r0
            r5.f = r1
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.filePath
            r0.<init>(r1)
            r5.a = r0
            java.io.File r0 = r0.getParentFile()
            if (r0 == 0) goto L38
            java.io.File r0 = r5.a
            java.io.File r0 = r0.getParentFile()
            boolean r0 = r0.exists()
            if (r0 != 0) goto L38
            java.io.File r0 = r5.a
            java.io.File r0 = r0.getParentFile()
            r0.mkdirs()
        L38:
            java.io.File r0 = r5.a
            boolean r0 = r0.exists()
            if (r0 == 0) goto L45
            java.io.File r0 = r5.a
            r0.delete()
        L45:
            r5.c = r6
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r6.filePath
            r1.append(r3)
            java.lang.String r3 = ".tmp"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r5.b = r0
            boolean r0 = r6.userRange
            if (r0 != 0) goto L6a
            java.io.File r0 = r5.b
            r0.delete()
        L6a:
            r5.f = r7
            com.czhj.volley.DefaultRetryPolicy r7 = new com.czhj.volley.DefaultRetryPolicy
            r0 = 10000(0x2710, float:1.4013E-41)
            r1 = 0
            r3 = 2
            r7.<init>(r0, r3, r1)
            r5.setRetryPolicy(r7)
            r5.setShouldCache(r2)
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r0 = r6.filePath
            r7[r2] = r0
            r0 = 1
            java.lang.String r6 = r6.url
            r7[r0] = r6
            java.lang.String r6 = "FileDownloadRequest()  [ %s ], url = [%s]"
            com.czhj.volley.VolleyLog.d(r6, r7)
            return
    }

    @Override
    public void cancel() {
            r2 = this;
            super.cancel()
            java.lang.Object r0 = r2.e
            monitor-enter(r0)
            r1 = 0
            r2.f = r1     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r1
    }

    @Override
    public void deliverError(com.czhj.volley.VolleyError r3) {
            r2 = this;
            com.czhj.volley.toolbox.DownloadItem r0 = r2.c
            r1 = 0
            r0.status = r1
            java.io.File r0 = r2.a
            boolean r0 = r0.exists()
            if (r0 == 0) goto L12
            java.io.File r0 = r2.a
            r0.delete()
        L12:
            java.io.File r0 = r2.b
            boolean r0 = r0.exists()
            if (r0 == 0) goto L1f
            java.io.File r0 = r2.b
            r0.delete()
        L1f:
            com.czhj.volley.toolbox.DownloadItem r0 = r2.c
            r0.error = r3
            com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r3 = r2.f
            com.czhj.volley.toolbox.DownloadItem r0 = r2.c
            r3.onErrorResponse(r0)
            return
    }

    protected void deliverResponse(com.czhj.volley.toolbox.DownloadItem r3) {
            r2 = this;
            com.czhj.volley.toolbox.DownloadItem r0 = r2.c
            r1 = 1
            r0.status = r1
            com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r0 = r2.f
            r0.onSuccess(r3)
            return
    }

    @Override
    protected void deliverResponse(com.czhj.volley.toolbox.DownloadItem r1) {
            r0 = this;
            com.czhj.volley.toolbox.DownloadItem r1 = (com.czhj.volley.toolbox.DownloadItem) r1
            r0.deliverResponse(r1)
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.io.File r1 = r5.b
            long r1 = r1.length()
            r5.d = r1
            java.lang.String r1 = "Connection"
            java.lang.String r2 = "Keep-Alive"
            r0.put(r1, r2)
            java.lang.String r1 = "Accept-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "bytes="
            r1.append(r2)
            long r2 = r5.d
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "Range"
            r0.put(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Range,bytes="
            r1.append(r3)
            long r3 = r5.d
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r5.addMarker(r1)
            return r0
    }

    @Override
    public com.czhj.volley.Request.Priority getPriority() {
            r1 = this;
            com.czhj.volley.Request$Priority r0 = com.czhj.volley.Request.Priority.LOW
            return r0
    }

    public byte[] handleRawResponse(com.czhj.volley.toolbox.HttpResponse r20) throws java.io.IOException {
            r19 = this;
            r1 = r19
            java.lang.String r2 = "Error occured when calling consumingContent"
            java.util.List r0 = r20.getHeaders()
            java.util.Map r0 = com.czhj.volley.toolbox.FileDownloadNetwork.convertHeaders(r0)
            boolean r3 = com.czhj.volley.toolbox.HttpHeaderParser.isSupportRange(r0)
            int r4 = r20.getContentLength()
            long r4 = (long) r4
            java.lang.String r6 = "Transfer-Encoding"
            boolean r7 = r0.containsKey(r6)
            r8 = -1
            r9 = 0
            r11 = 0
            if (r7 == 0) goto L38
            java.lang.Object r6 = r0.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r7 = "chunked"
            boolean r6 = r6.equalsIgnoreCase(r7)
            if (r6 == 0) goto L38
            java.lang.Object[] r0 = new java.lang.Object[r11]
            java.lang.String r6 = "Response doesn't present Content-Length!"
            com.czhj.volley.VolleyLog.d(r6, r0)
            goto Le6
        L38:
            int r6 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r6 < 0) goto Le8
            java.lang.String r7 = "Content-Length"
            boolean r7 = r0.containsKey(r7)
            if (r7 == 0) goto Le8
            if (r6 != 0) goto L69
            java.io.File r6 = r1.a
            boolean r6 = r6.exists()
            if (r6 == 0) goto L69
            java.io.File r6 = r1.a
            long r6 = r6.length()
            int r6 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r6 != 0) goto L69
            java.io.File r0 = r1.a
            java.io.File r2 = r1.b
            r0.renameTo(r2)
            java.io.InputStream r0 = r20.getContent()
            r0.close()
            byte[] r0 = new byte[r11]
            return r0
        L69:
            if (r3 == 0) goto Le6
            java.io.File r6 = r1.b
            long r6 = r6.length()
            long r4 = r4 + r6
            java.lang.String r12 = "Content-Range"
            java.lang.String r0 = com.czhj.volley.toolbox.HttpHeaderParser.getHeader(r0, r12)
            r12 = 1
            java.lang.Object[] r12 = new java.lang.Object[r12]
            r12[r11] = r0
            java.lang.String r13 = "Content-Range %s"
            com.czhj.volley.VolleyLog.d(r13, r12)
            boolean r12 = android.text.TextUtils.isEmpty(r0)
            if (r12 != 0) goto Lee
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "bytes "
            r12.append(r13)
            r12.append(r6)
            java.lang.String r13 = "-"
            r12.append(r13)
            r13 = 1
            long r13 = r4 - r13
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            int r13 = android.text.TextUtils.indexOf(r0, r12)
            if (r13 == r8) goto Lac
            goto Lee
        Lac:
            java.io.InputStream r2 = r20.getContent()
            r2.close()
            java.io.File r2 = r1.b
            r2.delete()
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "The Content-Range Header is invalid Assume["
            r3.append(r4)
            r3.append(r12)
            java.lang.String r4 = "] vs Real["
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "], has remove the temporary file ["
            r3.append(r0)
            java.io.File r0 = r1.b
            r3.append(r0)
            java.lang.String r0 = "]."
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
        Le6:
            r6 = r9
            goto Lee
        Le8:
            java.io.File r0 = r1.b
            long r6 = r0.length()
        Lee:
            r12 = 0
            java.io.RandomAccessFile r14 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L1ef
            java.io.File r0 = r1.b     // Catch: java.lang.Throwable -> L1ef
            java.lang.String r13 = "rw"
            r14.<init>(r0, r13)     // Catch: java.lang.Throwable -> L1ef
            if (r3 == 0) goto Lff
            r14.seek(r6)     // Catch: java.lang.Throwable -> L1eb
            r9 = r6
            goto L102
        Lff:
            r14.setLength(r9)     // Catch: java.lang.Throwable -> L1eb
        L102:
            java.io.InputStream r3 = r20.getContent()     // Catch: java.lang.Throwable -> L1eb
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r6 = new byte[r0]     // Catch: java.lang.Throwable -> L1e6
        L10a:
            int r7 = r3.read(r6)     // Catch: java.lang.Throwable -> L1e6
            java.lang.String r15 = " offset "
            java.lang.String r13 = " total: "
            java.lang.String r12 = "recv: "
            if (r7 == r8) goto L1ad
            boolean r0 = r19.isCanceled()     // Catch: java.lang.Throwable -> L1e6
            if (r0 == 0) goto L13c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r0.<init>()     // Catch: java.lang.Throwable -> L138
            com.czhj.volley.toolbox.DownloadItem r6 = r1.c     // Catch: java.lang.Throwable -> L138
            java.lang.String r6 = r6.url     // Catch: java.lang.Throwable -> L138
            r0.append(r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r6 = " download  is cancel"
            r0.append(r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L138
            java.lang.Object[] r6 = new java.lang.Object[r11]     // Catch: java.lang.Throwable -> L138
            com.czhj.volley.VolleyLog.v(r0, r6)     // Catch: java.lang.Throwable -> L138
            goto L1ad
        L138:
            r0 = move-exception
            r12 = r3
            goto L1ec
        L13c:
            r14.write(r6, r11, r7)     // Catch: java.lang.Throwable -> L1e6
            r20 = r12
            long r11 = (long) r7     // Catch: java.lang.Throwable -> L1e6
            long r9 = r9 + r11
            com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r0 = r1.f     // Catch: java.lang.Throwable -> L1e6
            if (r0 == 0) goto L17e
            com.czhj.volley.toolbox.FileDownloadRequest$FileDownloadListener r12 = r1.f     // Catch: java.lang.Throwable -> L15b
            com.czhj.volley.toolbox.DownloadItem r0 = r1.c     // Catch: java.lang.Throwable -> L15b
            r11 = r20
            r8 = r13
            r13 = r0
            r18 = r14
            r1 = r15
            r14 = r4
            r16 = r9
            r12.downloadProgress(r13, r14, r16)     // Catch: java.lang.Throwable -> L159
            goto L184
        L159:
            r0 = move-exception
            goto L162
        L15b:
            r0 = move-exception
            r11 = r20
            r8 = r13
            r18 = r14
            r1 = r15
        L162:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e4
            r12.<init>()     // Catch: java.lang.Throwable -> L1e4
            java.lang.String r13 = "callback downloadProgress  error "
            r12.append(r13)     // Catch: java.lang.Throwable -> L1e4
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L1e4
            r12.append(r0)     // Catch: java.lang.Throwable -> L1e4
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L1e4
            r12 = 0
            java.lang.Object[] r13 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L1e4
            com.czhj.volley.VolleyLog.e(r0, r13)     // Catch: java.lang.Throwable -> L1e4
            goto L184
        L17e:
            r11 = r20
            r8 = r13
            r18 = r14
            r1 = r15
        L184:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e4
            r0.<init>()     // Catch: java.lang.Throwable -> L1e4
            r0.append(r11)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r9)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r8)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r4)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r1)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r7)     // Catch: java.lang.Throwable -> L1e4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1e4
            r1 = 0
            java.lang.Object[] r7 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1e4
            com.czhj.volley.VolleyLog.d(r0, r7)     // Catch: java.lang.Throwable -> L1e4
            r14 = r18
            r8 = -1
            r11 = 0
            r1 = r19
            goto L10a
        L1ad:
            r11 = r12
            r8 = r13
            r18 = r14
            r1 = r15
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e4
            r0.<init>()     // Catch: java.lang.Throwable -> L1e4
            r0.append(r11)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r9)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r8)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r4)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r1)     // Catch: java.lang.Throwable -> L1e4
            r0.append(r7)     // Catch: java.lang.Throwable -> L1e4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1e4
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1e4
            com.czhj.volley.VolleyLog.d(r0, r4)     // Catch: java.lang.Throwable -> L1e4
            if (r3 == 0) goto L1de
            r3.close()     // Catch: java.lang.Throwable -> L1d9
            goto L1de
        L1d9:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.czhj.volley.VolleyLog.v(r2, r0)
        L1de:
            r18.close()
            byte[] r0 = new byte[r1]
            return r0
        L1e4:
            r0 = move-exception
            goto L1e9
        L1e6:
            r0 = move-exception
            r18 = r14
        L1e9:
            r12 = r3
            goto L1f2
        L1eb:
            r0 = move-exception
        L1ec:
            r18 = r14
            goto L1f2
        L1ef:
            r0 = move-exception
            r18 = r12
        L1f2:
            throw r0     // Catch: java.lang.Throwable -> L1f3
        L1f3:
            r0 = move-exception
            r1 = r0
            if (r12 == 0) goto L201
            r12.close()     // Catch: java.lang.Throwable -> L1fb
            goto L201
        L1fb:
            r3 = 0
            java.lang.Object[] r0 = new java.lang.Object[r3]
            com.czhj.volley.VolleyLog.v(r2, r0)
        L201:
            if (r18 == 0) goto L206
            r18.close()
        L206:
            throw r1
    }

    @Override
    protected com.czhj.volley.Response<com.czhj.volley.toolbox.DownloadItem> parseNetworkResponse(com.czhj.volley.NetworkResponse r9) {
            r8 = this;
            com.czhj.volley.toolbox.DownloadItem r0 = r8.c
            long r1 = r9.networkTimeMs
            r0.networkMs = r1
            boolean r0 = r8.isCanceled()
            if (r0 != 0) goto L180
            java.util.List<com.czhj.volley.Header> r9 = r9.allHeaders
            java.util.Map r9 = com.czhj.volley.toolbox.FileDownloadNetwork.convertHeaders(r9)
            java.lang.String r0 = "Transfer-Encoding"
            boolean r1 = r9.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L31
            java.lang.Object r0 = r9.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "chunked"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L31
            java.io.File r0 = r8.b
            long r0 = r0.length()
            goto L48
        L31:
            java.lang.String r0 = "content-length"
            boolean r1 = r9.containsKey(r0)
            if (r1 == 0) goto L47
            java.lang.Object r0 = r9.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            long r0 = java.lang.Long.parseLong(r0)
            long r4 = r8.d
            long r0 = r0 + r4
            goto L48
        L47:
            r0 = r2
        L48:
            com.czhj.volley.toolbox.DownloadItem r4 = r8.c
            r4.size = r0
            java.io.File r4 = r8.b
            boolean r4 = r4.canRead()
            r5 = 0
            if (r4 == 0) goto L146
            java.io.File r4 = r8.b
            long r6 = r4.length()
            int r4 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r4 <= 0) goto L146
            java.io.File r4 = r8.b
            long r6 = r4.length()
            int r4 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r4 == 0) goto L6d
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L146
        L6d:
            boolean r9 = com.czhj.volley.toolbox.HttpHeaderParser.isGzipContent(r9)
            if (r9 == 0) goto L129
            r9 = 0
            java.util.zip.GZIPInputStream r0 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0
            java.io.File r2 = r8.b     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lb7 java.io.IOException -> Lba
            java.io.File r2 = r8.a     // Catch: java.lang.Throwable -> Lb7 java.io.IOException -> Lba
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lb7 java.io.IOException -> Lba
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r2]     // Catch: java.io.IOException -> Lb5 java.lang.Throwable -> L106
        L8b:
            int r4 = r0.read(r3, r9, r2)     // Catch: java.io.IOException -> Lb5 java.lang.Throwable -> L106
            r6 = -1
            if (r4 == r6) goto L96
            r1.write(r3, r9, r4)     // Catch: java.io.IOException -> Lb5 java.lang.Throwable -> L106
            goto L8b
        L96:
            r2 = 1
            r0.close()     // Catch: java.io.IOException -> L9b
            goto La5
        L9b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r3 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r3)
        La5:
            r1.close()     // Catch: java.io.IOException -> La9
            goto Lb3
        La9:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r9 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r9)
        Lb3:
            r9 = r2
            goto Lec
        Lb5:
            r2 = move-exception
            goto Lc3
        Lb7:
            r2 = move-exception
            r1 = r5
            goto L107
        Lba:
            r2 = move-exception
            r1 = r5
            goto Lc3
        Lbd:
            r2 = move-exception
            r1 = r5
            goto L108
        Lc0:
            r2 = move-exception
            r0 = r5
            r1 = r0
        Lc3:
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L106
            java.lang.Object[] r3 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L106
            com.czhj.volley.VolleyLog.e(r2, r3)     // Catch: java.lang.Throwable -> L106
            if (r0 == 0) goto Ldc
            r0.close()     // Catch: java.io.IOException -> Ld2
            goto Ldc
        Ld2:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r2 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r2)
        Ldc:
            if (r1 == 0) goto Lec
            r1.close()     // Catch: java.io.IOException -> Le2
            goto Lec
        Le2:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r1 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r1)
        Lec:
            java.io.File r0 = r8.b
            r0.delete()
            if (r9 == 0) goto Lfa
            com.czhj.volley.toolbox.DownloadItem r9 = r8.c
            com.czhj.volley.Response r9 = com.czhj.volley.Response.success(r9, r5)
            return r9
        Lfa:
            com.czhj.volley.VolleyError r9 = new com.czhj.volley.VolleyError
            java.lang.String r0 = "error gzip unzip the download temporary file!"
            r9.<init>(r0)
            com.czhj.volley.Response r9 = com.czhj.volley.Response.error(r9)
            return r9
        L106:
            r2 = move-exception
        L107:
            r5 = r0
        L108:
            if (r5 == 0) goto L118
            r5.close()     // Catch: java.io.IOException -> L10e
            goto L118
        L10e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r3 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r3)
        L118:
            if (r1 == 0) goto L128
            r1.close()     // Catch: java.io.IOException -> L11e
            goto L128
        L11e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r9 = new java.lang.Object[r9]
            com.czhj.volley.VolleyLog.e(r0, r9)
        L128:
            throw r2
        L129:
            java.io.File r9 = r8.b
            java.io.File r0 = r8.a
            boolean r9 = r9.renameTo(r0)
            if (r9 == 0) goto L13a
            com.czhj.volley.toolbox.DownloadItem r9 = r8.c
            com.czhj.volley.Response r9 = com.czhj.volley.Response.success(r9, r5)
            return r9
        L13a:
            com.czhj.volley.VolleyError r9 = new com.czhj.volley.VolleyError
            java.lang.String r0 = "Can't rename the download temporary file!"
            r9.<init>(r0)
            com.czhj.volley.Response r9 = com.czhj.volley.Response.error(r9)
            return r9
        L146:
            java.io.File r9 = r8.a
            boolean r9 = r9.canRead()
            if (r9 == 0) goto L15f
            java.io.File r9 = r8.a
            long r2 = r9.length()
            int r9 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r9 != 0) goto L15f
            com.czhj.volley.toolbox.DownloadItem r9 = r8.c
            com.czhj.volley.Response r9 = com.czhj.volley.Response.success(r9, r5)
            return r9
        L15f:
            com.czhj.volley.VolleyError r9 = new com.czhj.volley.VolleyError
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Download temporary file was invalid!"
            r0.append(r1)
            java.io.File r1 = r8.b
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r9.<init>(r0)
            com.czhj.volley.Response r9 = com.czhj.volley.Response.error(r9)
            return r9
        L180:
            com.czhj.volley.VolleyError r9 = new com.czhj.volley.VolleyError
            java.lang.String r0 = "Request was Canceled!"
            r9.<init>(r0)
            com.czhj.volley.Response r9 = com.czhj.volley.Response.error(r9)
            return r9
    }

    public void setListener(com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
