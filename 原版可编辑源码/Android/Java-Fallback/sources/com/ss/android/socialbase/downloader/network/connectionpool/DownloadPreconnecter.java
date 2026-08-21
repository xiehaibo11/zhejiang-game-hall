package com.ss.android.socialbase.downloader.network.connectionpool;

public class DownloadPreconnecter {
    private static final long DEFAULT_CONNECTION_OUTDATE_TIME = 300000;
    private static final long DEFAULT_HEAD_INFO_OUTDATE_TIME = 300000;
    private static java.lang.Runnable sCancelRunnable;
    static long sConnectionOutdatedTime;
    private static final android.os.Handler sHandler = null;
    static long sHeadInfoOutdatedTime;
    private static final android.os.HandlerThread sPreconnectThread = null;




    private static class CancelRunnable implements java.lang.Runnable {
        private final java.lang.String mUrl;

        public CancelRunnable(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.mUrl = r1
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()     // Catch: java.lang.Throwable -> L9
                java.lang.String r1 = r2.mUrl     // Catch: java.lang.Throwable -> L9
                r0.releaseDownloadConnection(r1)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }
    }

    static {
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "Downloader-preconnecter"
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sPreconnectThread = r0
            init()
            android.os.HandlerThread r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sPreconnectThread
            r0.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.HandlerThread r1 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sPreconnectThread
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHandler = r0
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$1 r1 = new com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$1
            r1.<init>()
            r0.post(r1)
            return
    }

    public DownloadPreconnecter() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.List access$000(long r0, com.ss.android.socialbase.downloader.model.DownloadInfo r2, java.util.List r3) {
            java.util.List r0 = getExtraHeaders(r0, r2, r3)
            return r0
    }

    static void access$100(java.lang.String r0, java.util.List r1, long r2) {
            fetchHeadInfo(r0, r1, r2)
            return
    }

    static void access$200(int r0, java.lang.String r1, java.util.List r2, long r3) {
            createConnection(r0, r1, r2, r3)
            return
    }

    static java.lang.Runnable access$300() {
            java.lang.Runnable r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sCancelRunnable
            return r0
    }

    static java.lang.Runnable access$302(java.lang.Runnable r0) {
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sCancelRunnable = r0
            return r0
    }

    static android.os.Handler access$400() {
            android.os.Handler r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHandler
            return r0
    }

    public static void asyncFetchHttpHeadInfo(java.lang.String r2, com.ss.android.socialbase.downloader.network.IFetchHttpHeadInfoListener r3) {
            android.os.Handler r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHandler
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$2 r1 = new com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$2
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    private static void asyncPreconnect(int r10, java.lang.String r11, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r12, long r13, boolean r15, boolean r16) {
            android.os.Handler r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHandler
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$3 r9 = new com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter$3
            r1 = r9
            r2 = r16
            r3 = r11
            r4 = r12
            r5 = r13
            r7 = r15
            r8 = r10
            r1.<init>(r2, r3, r4, r5, r7, r8)
            r0.post(r9)
            return
    }

    private static void createConnection(int r7, java.lang.String r8, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r9, long r10) {
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            boolean r0 = r0.isDownloadConnectionExist(r8)
            if (r0 == 0) goto Lb
            return
        Lb:
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection r0 = new com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHttpConnection
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r1.<init>(r2, r3, r4, r5)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r7 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            r7.putCachedDownloadConnections(r8, r0)
            r0.execute()     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r7 = move-exception
            r7.printStackTrace()
        L24:
            return
    }

    private static void fetchHeadInfo(java.lang.String r1, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r2, long r3) {
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            boolean r0 = r0.isHeadConnectionExist(r1)
            if (r0 == 0) goto Lb
            return
        Lb:
            com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection r0 = new com.ss.android.socialbase.downloader.network.connectionpool.FakeDownloadHeadHttpConnection
            r0.<init>(r1, r2, r3)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r2 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            r2.putCachedHeadConnections(r1, r0)
            r0.execute()     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
        L1a:
            r0.cancel()     // Catch: java.lang.Throwable -> L25
            goto L25
        L1e:
            r1 = move-exception
            goto L26
        L20:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L1e
            goto L1a
        L25:
            return
        L26:
            r0.cancel()     // Catch: java.lang.Throwable -> L29
        L29:
            throw r1
    }

    private static java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> getExtraHeaders(long r6, com.ss.android.socialbase.downloader.model.DownloadInfo r8, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r9) {
            if (r8 != 0) goto L4
            r8 = 0
            goto L8
        L4:
            java.lang.String r8 = r8.geteTag()
        L8:
            r1 = r8
            r4 = 0
            r0 = r9
            r2 = r6
            java.util.List r6 = com.ss.android.socialbase.downloader.utils.DownloadUtils.addRangeHeader(r0, r1, r2, r4)
            return r6
    }

    public static android.os.Looper getLooper() {
            android.os.HandlerThread r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sPreconnectThread
            android.os.Looper r0 = r0.getLooper()
            return r0
    }

    private static void init() {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 300000(0x493e0, double:1.482197E-318)
            java.lang.String r3 = "preconnect_connection_outdate_time"
            long r3 = r0.optLong(r3, r1)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sConnectionOutdatedTime = r3
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r3 = "preconnect_head_info_outdate_time"
            long r0 = r0.optLong(r3, r1)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.sHeadInfoOutdatedTime = r0
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool r0 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadConnectionPool.getInstance()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r2 = "preconnect_max_cache_size"
            r3 = 3
            int r1 = r1.optInt(r2, r3)
            r0.setMaxCachedDownloadConnectionSize(r1)
            return
    }

    public static void preconnect(int r9, java.lang.String r10, java.lang.String r11, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r12, boolean r13, boolean r14) {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r0.getDownloadInfo(r10, r11)
            if (r11 == 0) goto L28
            boolean r0 = r11.isDownloadingStatus()
            if (r0 != 0) goto L27
            boolean r0 = r11.isDownloaded()
            if (r0 != 0) goto L27
            int r0 = r11.getChunkCount()
            r1 = 1
            if (r0 <= r1) goto L22
            goto L27
        L22:
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getFirstOffset(r11)
            goto L2a
        L27:
            return
        L28:
            r0 = 0
        L2a:
            r5 = r0
            java.util.List r4 = getExtraHeaders(r5, r11, r12)
            r2 = r9
            r3 = r10
            r7 = r13
            r8 = r14
            asyncPreconnect(r2, r3, r4, r5, r7, r8)
            return
    }

    public static void preconnect(java.lang.String r6, java.lang.String r7, boolean r8) {
            r0 = -1
            r3 = 0
            r5 = 1
            r1 = r6
            r2 = r7
            r4 = r8
            preconnect(r0, r1, r2, r3, r4, r5)
            return
    }
}
