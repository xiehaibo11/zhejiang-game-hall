package com.ss.android.socialbase.downloader.network.connectionpool;

public class FakeDownloadHttpConnection implements com.ss.android.socialbase.downloader.network.IDownloadHttpConnection, com.ss.android.socialbase.downloader.network.connectionpool.IFakeDownloadHttpConnection {
    private boolean isRequesting;
    private com.ss.android.socialbase.downloader.network.IDownloadHttpConnection mConnection;
    private long mCreateTime;
    private java.io.InputStream mInputStream;
    protected final java.lang.Object mJoinLock;
    private final int mMaxLength;
    private final java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> mRequestHeaders;
    private final java.lang.String mUrl;

    public FakeDownloadHttpConnection(int r1, java.lang.String r2, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3, long r4) {
            r0 = this;
            r0.<init>()
            java.lang.Object r4 = new java.lang.Object
            r4.<init>()
            r0.mJoinLock = r4
            r0.mMaxLength = r1
            r0.mUrl = r2
            r0.mRequestHeaders = r3
            return
    }

    private com.ss.android.socialbase.downloader.network.IDownloadHttpConnection doExecute() throws java.io.IOException, com.ss.android.socialbase.downloader.exception.BaseException {
            r4 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDefaultHttpService()
            if (r0 == 0) goto L11
            int r1 = r4.mMaxLength
            java.lang.String r2 = r4.mUrl
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3 = r4.mRequestHeaders
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r0.downloadWithConnection(r1, r2, r3)
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public void cancel() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.mConnection
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    @Override
    public void end() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.mConnection
            if (r0 == 0) goto L7
            r0.end()
        L7:
            return
    }

    @Override
    public void execute() throws java.io.IOException, com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r5.mConnection
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.Object r0 = r5.mJoinLock
            monitor-enter(r0)
            r1 = 1
            r2 = 0
            r5.isRequesting = r1     // Catch: java.lang.Throwable -> L2b
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r5.doExecute()     // Catch: java.lang.Throwable -> L2b
            r5.mConnection = r1     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L22
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2b
            r5.mCreateTime = r3     // Catch: java.lang.Throwable -> L2b
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r5.mConnection     // Catch: java.lang.Throwable -> L2b
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L2b
            r5.mInputStream = r1     // Catch: java.lang.Throwable -> L2b
        L22:
            r5.isRequesting = r2     // Catch: java.lang.Throwable -> L34
            java.lang.Object r1 = r5.mJoinLock     // Catch: java.lang.Throwable -> L34
            r1.notifyAll()     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return
        L2b:
            r1 = move-exception
            r5.isRequesting = r2     // Catch: java.lang.Throwable -> L34
            java.lang.Object r2 = r5.mJoinLock     // Catch: java.lang.Throwable -> L34
            r2.notifyAll()     // Catch: java.lang.Throwable -> L34
            throw r1     // Catch: java.lang.Throwable -> L34
        L34:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r1
    }

    @Override
    public java.io.InputStream getInputStream() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.mInputStream
            if (r0 == 0) goto L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> getRequestHeaders() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r1.mRequestHeaders
            return r0
    }

    @Override
    public int getResponseCode() throws java.io.IOException {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.mConnection
            if (r0 == 0) goto L9
            int r0 = r0.getResponseCode()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getResponseHeaderField(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r0 = r1.mConnection
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.getResponseHeaderField(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    public boolean isRequesting() {
            r1 = this;
            boolean r0 = r1.isRequesting
            return r0
    }

    @Override
    public boolean isSuccessful() {
            r2 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r2.mConnection     // Catch: java.io.IOException -> L13
            if (r1 == 0) goto L12
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r2.mConnection     // Catch: java.io.IOException -> L13
            int r1 = r1.getResponseCode()     // Catch: java.io.IOException -> L13
            boolean r1 = r2.isSuccessful(r1)     // Catch: java.io.IOException -> L13
            if (r1 == 0) goto L12
            r0 = 1
        L12:
            return r0
        L13:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public boolean isSuccessful(int r2) {
            r1 = this;
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto La
            r0 = 300(0x12c, float:4.2E-43)
            if (r2 >= r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    @Override
    public boolean isValid() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.mCreateTime
            long r0 = r0 - r2
            long r2 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sConnectionOutdatedTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    @Override
    public void joinExecute() throws java.lang.InterruptedException {
            r2 = this;
            java.lang.Object r0 = r2.mJoinLock
            monitor-enter(r0)
            boolean r1 = r2.isRequesting     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L10
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r1 = r2.mConnection     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.lang.Object r1 = r2.mJoinLock     // Catch: java.lang.Throwable -> L12
            r1.wait()     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }
}
