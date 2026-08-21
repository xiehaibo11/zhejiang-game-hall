package com.ss.android.socialbase.downloader.network.connectionpool;

public class FakeDownloadHeadHttpConnection implements com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection, com.ss.android.socialbase.downloader.network.connectionpool.IFakeDownloadHttpConnection {
    private static final java.lang.String TAG = "FakeDownloadHeadHttpCon";
    private static final java.util.ArrayList<java.lang.String> usedHeaders = null;
    private boolean isRequesting;
    private boolean isSuccessful;
    private long mCreateTime;
    protected final java.lang.Object mJoinLock;
    protected java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> mRequestHeaders;
    private int mResponseCode;
    private java.util.Map<java.lang.String, java.lang.String> mResponseHeaders;
    protected final long mStartOffset;
    protected final java.lang.String mUrl;
    private com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection realConnection;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 6
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders = r0
            java.lang.String r1 = "Content-Length"
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.lang.String r1 = "Content-Range"
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.lang.String r1 = "Transfer-Encoding"
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.lang.String r1 = "Accept-Ranges"
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.lang.String r1 = "Etag"
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.lang.String r1 = "Content-Disposition"
            r0.add(r1)
            return
    }

    public FakeDownloadHeadHttpConnection(java.lang.String r2, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3, long r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mResponseHeaders = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mJoinLock = r0
            r1.mUrl = r2
            r1.mRequestHeaders = r3
            r1.mStartOffset = r4
            return
    }

    private void parseHeaders(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            r3 = this;
            if (r4 == 0) goto L1f
            if (r5 != 0) goto L5
            goto L1f
        L5:
            java.util.ArrayList<java.lang.String> r0 = com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection.usedHeaders
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = r4.getResponseHeaderField(r1)
            r5.put(r1, r2)
            goto Lb
        L1f:
            return
    }

    @Override
    public void cancel() {
            r1 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r1.realConnection
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    @Override
    public void execute() throws java.lang.Exception {
            r5 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.mResponseHeaders
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1 = 0
            r5.isRequesting = r0     // Catch: java.lang.Throwable -> L48
            java.lang.String r0 = r5.mUrl     // Catch: java.lang.Throwable -> L48
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r2 = r5.mRequestHeaders     // Catch: java.lang.Throwable -> L48
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.downloadWithHeadConnection(r0, r2)     // Catch: java.lang.Throwable -> L48
            r5.realConnection = r0     // Catch: java.lang.Throwable -> L48
            java.lang.Object r0 = r5.mJoinLock
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2 = r5.realConnection     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L3c
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L45
            r2.<init>()     // Catch: java.lang.Throwable -> L45
            r5.mResponseHeaders = r2     // Catch: java.lang.Throwable -> L45
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r3 = r5.realConnection     // Catch: java.lang.Throwable -> L45
            r5.parseHeaders(r3, r2)     // Catch: java.lang.Throwable -> L45
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2 = r5.realConnection     // Catch: java.lang.Throwable -> L45
            int r2 = r2.getResponseCode()     // Catch: java.lang.Throwable -> L45
            r5.mResponseCode = r2     // Catch: java.lang.Throwable -> L45
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L45
            r5.mCreateTime = r2     // Catch: java.lang.Throwable -> L45
            int r2 = r5.mResponseCode     // Catch: java.lang.Throwable -> L45
            boolean r2 = r5.isSuccessful(r2)     // Catch: java.lang.Throwable -> L45
            r5.isSuccessful = r2     // Catch: java.lang.Throwable -> L45
        L3c:
            r5.isRequesting = r1     // Catch: java.lang.Throwable -> L45
            java.lang.Object r1 = r5.mJoinLock     // Catch: java.lang.Throwable -> L45
            r1.notifyAll()     // Catch: java.lang.Throwable -> L45
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            return
        L45:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r1
        L48:
            r0 = move-exception
            java.lang.Object r2 = r5.mJoinLock
            monitor-enter(r2)
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r3 = r5.realConnection     // Catch: java.lang.Throwable -> L7b
            if (r3 == 0) goto L72
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Throwable -> L7b
            r3.<init>()     // Catch: java.lang.Throwable -> L7b
            r5.mResponseHeaders = r3     // Catch: java.lang.Throwable -> L7b
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4 = r5.realConnection     // Catch: java.lang.Throwable -> L7b
            r5.parseHeaders(r4, r3)     // Catch: java.lang.Throwable -> L7b
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r3 = r5.realConnection     // Catch: java.lang.Throwable -> L7b
            int r3 = r3.getResponseCode()     // Catch: java.lang.Throwable -> L7b
            r5.mResponseCode = r3     // Catch: java.lang.Throwable -> L7b
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7b
            r5.mCreateTime = r3     // Catch: java.lang.Throwable -> L7b
            int r3 = r5.mResponseCode     // Catch: java.lang.Throwable -> L7b
            boolean r3 = r5.isSuccessful(r3)     // Catch: java.lang.Throwable -> L7b
            r5.isSuccessful = r3     // Catch: java.lang.Throwable -> L7b
        L72:
            r5.isRequesting = r1     // Catch: java.lang.Throwable -> L7b
            java.lang.Object r1 = r5.mJoinLock     // Catch: java.lang.Throwable -> L7b
            r1.notifyAll()     // Catch: java.lang.Throwable -> L7b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7b
            throw r0
        L7b:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L7b
            throw r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> getRequestHeaders() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r1.mRequestHeaders
            return r0
    }

    @Override
    public int getResponseCode() throws java.io.IOException {
            r1 = this;
            int r0 = r1.mResponseCode
            return r0
    }

    @Override
    public java.lang.String getResponseHeaderField(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mResponseHeaders
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        Lb:
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r1.realConnection
            if (r0 == 0) goto L14
            java.lang.String r2 = r0.getResponseHeaderField(r2)
            return r2
        L14:
            r2 = 0
            return r2
    }

    public java.util.Map<java.lang.String, java.lang.String> getResponseHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mResponseHeaders
            return r0
    }

    @Override
    public boolean isRequesting() {
            r1 = this;
            boolean r0 = r1.isRequesting
            return r0
    }

    @Override
    public boolean isSuccessful() {
            r1 = this;
            boolean r0 = r1.isSuccessful
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
            long r2 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHeadInfoOutdatedTime
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
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.mResponseHeaders     // Catch: java.lang.Throwable -> L12
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
