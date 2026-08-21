package com.ss.android.socialbase.downloader.network.connectionpool;

public class DownloadConnectionPool {
    public static final int MAX_HOLD_CONNECTION = 3;
    private static final java.lang.String TAG = "DownloadConnectionPool";
    private final java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> mCachedDownloadConnections;
    private final java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> mCachedHeadConnections;
    protected int maxCacheSize;

    static class 1 {
    }

    private static final class InstanceHolder {
        private static final com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool INSTANCE = null;

        static {
                com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = new com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool
                r1 = 0
                r0.<init>(r1)
                com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.InstanceHolder.INSTANCE = r0
                return
        }

        private InstanceHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool access$100() {
                com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.InstanceHolder.INSTANCE
                return r0
        }
    }

    private DownloadConnectionPool() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.mCachedHeadConnections = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r1 = 3
            r0.<init>(r1)
            r2.mCachedDownloadConnections = r0
            r2.maxCacheSize = r1
            return
    }

    DownloadConnectionPool(com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool getInstance() {
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.InstanceHolder.access$100()
            return r0
    }

    public com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection getCachedDownloadConnection(java.lang.String r3, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r0 = r2.mCachedDownloadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r1 = r2.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L32
            java.lang.Object r3 = r1.remove(r3)     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r3 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection) r3     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L30
            java.util.List r0 = r3.getRequestHeaders()
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isHeaderEqual(r0, r4)
            if (r4 == 0) goto L2d
            r3.joinExecute()     // Catch: java.lang.InterruptedException -> L1c
            goto L20
        L1c:
            r4 = move-exception
            r4.printStackTrace()
        L20:
            boolean r4 = r3.isValid()
            if (r4 == 0) goto L2d
            boolean r4 = r3.isSuccessful()
            if (r4 == 0) goto L2d
            return r3
        L2d:
            r3.end()     // Catch: java.lang.Throwable -> L30
        L30:
            r3 = 0
            return r3
        L32:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r3
    }

    public com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection getCachedHeadConnection(java.lang.String r3, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r0 = r2.mCachedHeadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r1 = r2.mCachedHeadConnections     // Catch: java.lang.Throwable -> L32
            java.lang.Object r3 = r1.remove(r3)     // Catch: java.lang.Throwable -> L32
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r3 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection) r3     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L30
            java.util.List r0 = r3.getRequestHeaders()
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isHeaderEqual(r0, r4)
            if (r4 == 0) goto L2d
            r3.joinExecute()     // Catch: java.lang.InterruptedException -> L1c
            goto L20
        L1c:
            r4 = move-exception
            r4.printStackTrace()
        L20:
            boolean r4 = r3.isValid()
            if (r4 == 0) goto L2d
            boolean r4 = r3.isSuccessful()
            if (r4 == 0) goto L2d
            return r3
        L2d:
            r3.cancel()     // Catch: java.lang.Throwable -> L30
        L30:
            r3 = 0
            return r3
        L32:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r3
    }

    public boolean isDownloadConnectionExist(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r0 = r3.mCachedDownloadConnections
            java.lang.Object r4 = r0.get(r4)
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r4 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection) r4
            r0 = 0
            if (r4 == 0) goto L20
            boolean r1 = r4.isRequesting()
            r2 = 1
            if (r1 == 0) goto L13
            return r2
        L13:
            boolean r1 = r4.isValid()
            if (r1 == 0) goto L20
            boolean r4 = r4.isSuccessful()
            if (r4 == 0) goto L20
            r0 = r2
        L20:
            return r0
    }

    public boolean isHeadConnectionExist(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r0 = r3.mCachedHeadConnections
            java.lang.Object r4 = r0.get(r4)
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r4 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection) r4
            r0 = 0
            if (r4 == 0) goto L20
            boolean r1 = r4.isRequesting()
            r2 = 1
            if (r1 == 0) goto L13
            return r2
        L13:
            boolean r1 = r4.isValid()
            if (r1 == 0) goto L20
            boolean r4 = r4.isSuccessful()
            if (r4 == 0) goto L20
            r0 = r2
        L20:
            return r0
    }

    void putCachedDownloadConnections(java.lang.String r4, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r5) {
            r3 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r0 = r3.mCachedDownloadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r1 = r3.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L65
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L65
            int r2 = r3.maxCacheSize     // Catch: java.lang.Throwable -> L65
            if (r1 != r2) goto L32
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r1 = r3.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L65
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L65
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L65
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r2 == 0) goto L32
            java.lang.Object r1 = r1.next()     // Catch: java.lang.Throwable -> L65
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L32
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r2 = r3.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L65
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L65
            java.lang.Object r1 = r2.remove(r1)     // Catch: java.lang.Throwable -> L65
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r1 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection) r1     // Catch: java.lang.Throwable -> L65
            goto L33
        L32:
            r1 = 0
        L33:
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r2 = r3.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L65
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L65
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L3e
            r1.end()     // Catch: java.lang.Throwable -> L3e
        L3e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "mCachedConnections size = "
            r4.append(r5)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r5 = r3.mCachedDownloadConnections
            int r5 = r5.size()
            r4.append(r5)
            java.lang.String r5 = ", max size = "
            r4.append(r5)
            int r5 = r3.maxCacheSize
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "DownloadConnectionPool"
            com.ss.android.socialbase.downloader.logger.Logger.i(r5, r4)
            return
        L65:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L65
            throw r4
    }

    void putCachedHeadConnections(java.lang.String r3, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r4) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r0 = r2.mCachedHeadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r1 = r2.mCachedHeadConnections     // Catch: java.lang.Throwable -> La
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void releaseDownloadConnection(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r0 = r2.mCachedDownloadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection> r1 = r2.mCachedDownloadConnections     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r1.remove(r3)     // Catch: java.lang.Throwable -> L12
            com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r3 = (com.ss.android.socialbase.downloader.network.IDownloadHttpConnection) r3     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            if (r3 == 0) goto L11
            r3.end()     // Catch: java.lang.Throwable -> L11
        L11:
            return
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }

    public void releaseHeadConnection(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r0 = r2.mCachedHeadConnections
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection> r1 = r2.mCachedHeadConnections     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r1.remove(r3)     // Catch: java.lang.Throwable -> L12
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r3 = (com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection) r3     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            if (r3 == 0) goto L11
            r3.cancel()
        L11:
            return
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }

    void setMaxCachedDownloadConnectionSize(int r1) {
            r0 = this;
            r0.maxCacheSize = r1
            return
    }
}
