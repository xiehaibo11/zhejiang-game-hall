package com.loopj.android.http;

public abstract class FileAsyncHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "FileAsyncHttpRH";
    protected final boolean append;
    protected final java.io.File file;
    protected java.io.File frontendFile;
    protected final boolean renameIfExists;

    public FileAsyncHttpResponseHandler(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            java.io.File r1 = r0.getTemporaryFile(r1)
            r0.file = r1
            r1 = 0
            r0.append = r1
            r0.renameIfExists = r1
            return
    }

    public FileAsyncHttpResponseHandler(java.io.File r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FileAsyncHttpResponseHandler(java.io.File r2, boolean r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public FileAsyncHttpResponseHandler(java.io.File r2, boolean r3, boolean r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public FileAsyncHttpResponseHandler(java.io.File r3, boolean r4, boolean r5, boolean r6) {
            r2 = this;
            r2.<init>(r6)
            if (r3 == 0) goto L7
            r6 = 1
            goto L8
        L7:
            r6 = 0
        L8:
            java.lang.String r0 = "File passed into FileAsyncHttpResponseHandler constructor must not be null"
            com.loopj.android.http.Utils.asserts(r6, r0)
            boolean r6 = r3.isDirectory()
            if (r6 != 0) goto L2a
            java.io.File r6 = r3.getParentFile()
            boolean r6 = r6.isDirectory()
            if (r6 != 0) goto L2a
            java.io.File r6 = r3.getParentFile()
            boolean r6 = r6.mkdirs()
            java.lang.String r0 = "Cannot create parent directories for requested File location"
            com.loopj.android.http.Utils.asserts(r6, r0)
        L2a:
            boolean r6 = r3.isDirectory()
            if (r6 == 0) goto L3f
            boolean r6 = r3.mkdirs()
            if (r6 != 0) goto L3f
            com.loopj.android.http.LogInterface r6 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r0 = "FileAsyncHttpRH"
            java.lang.String r1 = "Cannot create directories for requested Directory location, might not be a problem"
            r6.d(r0, r1)
        L3f:
            r2.file = r3
            r2.append = r4
            r2.renameIfExists = r5
            return
    }

    public boolean deleteTargetFile() {
            r1 = this;
            java.io.File r0 = r1.getTargetFile()
            if (r0 == 0) goto L12
            java.io.File r0 = r1.getTargetFile()
            boolean r0 = r0.delete()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    protected java.io.File getOriginalFile() {
            r2 = this;
            java.io.File r0 = r2.file
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            java.lang.String r1 = "Target file is null, fatal!"
            com.loopj.android.http.Utils.asserts(r0, r1)
            java.io.File r0 = r2.file
            return r0
    }

    @Override
    protected byte[] getResponseData(cz.msebera.android.httpclient.HttpEntity r9) throws java.io.IOException {
            r8 = this;
            if (r9 == 0) goto L4c
            java.io.InputStream r0 = r9.getContent()
            long r1 = r9.getContentLength()
            java.io.FileOutputStream r9 = new java.io.FileOutputStream
            java.io.File r3 = r8.getTargetFile()
            boolean r4 = r8.append
            r9.<init>(r3, r4)
            if (r0 == 0) goto L4c
            r3 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L41
            r4 = 0
            r5 = 0
        L1d:
            int r6 = r0.read(r3)     // Catch: java.lang.Throwable -> L41
            r7 = -1
            if (r6 == r7) goto L37
            java.lang.Thread r7 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L41
            boolean r7 = r7.isInterrupted()     // Catch: java.lang.Throwable -> L41
            if (r7 != 0) goto L37
            int r5 = r5 + r6
            r9.write(r3, r4, r6)     // Catch: java.lang.Throwable -> L41
            long r6 = (long) r5     // Catch: java.lang.Throwable -> L41
            r8.sendProgressMessage(r6, r1)     // Catch: java.lang.Throwable -> L41
            goto L1d
        L37:
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
            r9.flush()
            com.loopj.android.http.AsyncHttpClient.silentCloseOutputStream(r9)
            goto L4c
        L41:
            r1 = move-exception
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
            r9.flush()
            com.loopj.android.http.AsyncHttpClient.silentCloseOutputStream(r9)
            throw r1
        L4c:
            r9 = 0
            return r9
    }

    public java.io.File getTargetFile() {
            r1 = this;
            java.io.File r0 = r1.frontendFile
            if (r0 != 0) goto L19
            java.io.File r0 = r1.getOriginalFile()
            boolean r0 = r0.isDirectory()
            if (r0 == 0) goto L13
            java.io.File r0 = r1.getTargetFileByParsingURL()
            goto L17
        L13:
            java.io.File r0 = r1.getOriginalFile()
        L17:
            r1.frontendFile = r0
        L19:
            java.io.File r0 = r1.frontendFile
            return r0
    }

    protected java.io.File getTargetFileByParsingURL() {
            r8 = this;
            java.io.File r0 = r8.getOriginalFile()
            boolean r0 = r0.isDirectory()
            java.lang.String r1 = "Target file is not a directory, cannot proceed"
            com.loopj.android.http.Utils.asserts(r0, r1)
            java.net.URI r0 = r8.getRequestURI()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = 0
        L18:
            java.lang.String r3 = "RequestURI is null, cannot proceed"
            com.loopj.android.http.Utils.asserts(r0, r3)
            java.net.URI r0 = r8.getRequestURI()
            java.lang.String r0 = r0.toString()
            r3 = 47
            int r3 = r0.lastIndexOf(r3)
            int r3 = r3 + r1
            int r4 = r0.length()
            java.lang.String r0 = r0.substring(r3, r4)
            java.io.File r3 = new java.io.File
            java.io.File r4 = r8.getOriginalFile()
            r3.<init>(r4, r0)
            boolean r4 = r3.exists()
            if (r4 == 0) goto La9
            boolean r4 = r8.renameIfExists
            if (r4 == 0) goto La9
            java.lang.String r3 = "."
            boolean r3 = r0.contains(r3)
            java.lang.String r4 = " (%d)"
            if (r3 != 0) goto L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r4)
            java.lang.String r0 = r3.toString()
            goto L89
        L61:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r5 = 46
            int r6 = r0.lastIndexOf(r5)
            java.lang.String r6 = r0.substring(r2, r6)
            r3.append(r6)
            r3.append(r4)
            int r4 = r0.lastIndexOf(r5)
            int r5 = r0.length()
            java.lang.String r0 = r0.substring(r4, r5)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
        L89:
            r3 = 0
        L8a:
            java.io.File r4 = new java.io.File
            java.io.File r5 = r8.getOriginalFile()
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r3)
            r6[r2] = r7
            java.lang.String r6 = java.lang.String.format(r0, r6)
            r4.<init>(r5, r6)
            boolean r5 = r4.exists()
            if (r5 != 0) goto La6
            return r4
        La6:
            int r3 = r3 + 1
            goto L8a
        La9:
            return r3
    }

    protected java.io.File getTemporaryFile(android.content.Context r4) {
            r3 = this;
            if (r4 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            java.lang.String r1 = "Tried creating temporary file without having Context"
            com.loopj.android.http.Utils.asserts(r0, r1)
            java.lang.String r0 = "temp_"
            java.lang.String r1 = "_handled"
            java.io.File r4 = r4.getCacheDir()     // Catch: java.io.IOException -> L17
            java.io.File r4 = java.io.File.createTempFile(r0, r1, r4)     // Catch: java.io.IOException -> L17
            return r4
        L17:
            r4 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "FileAsyncHttpRH"
            java.lang.String r2 = "Cannot create temporary file"
            r0.e(r1, r2, r4)
            r4 = 0
            return r4
    }

    public abstract void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.Throwable r3, java.io.File r4);

    @Override
    public final void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3, java.lang.Throwable r4) {
            r0 = this;
            java.io.File r3 = r0.getTargetFile()
            r0.onFailure(r1, r2, r4, r3)
            return
    }

    public abstract void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, java.io.File r3);

    @Override
    public final void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3) {
            r0 = this;
            java.io.File r3 = r0.getTargetFile()
            r0.onSuccess(r1, r2, r3)
            return
    }
}
