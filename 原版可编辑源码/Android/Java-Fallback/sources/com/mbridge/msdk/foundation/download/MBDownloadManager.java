package com.mbridge.msdk.foundation.download;

public final class MBDownloadManager {
    private boolean initialize;

    static class 1 {
    }

    private static final class ClassHolder {
        private static final com.mbridge.msdk.foundation.download.MBDownloadManager MB_DOWNLOAD_MANAGER = null;

        static {
                com.mbridge.msdk.foundation.download.MBDownloadManager r0 = new com.mbridge.msdk.foundation.download.MBDownloadManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.MBDownloadManager.ClassHolder.MB_DOWNLOAD_MANAGER = r0
                return
        }

        private ClassHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.mbridge.msdk.foundation.download.MBDownloadManager access$000() {
                com.mbridge.msdk.foundation.download.MBDownloadManager r0 = com.mbridge.msdk.foundation.download.MBDownloadManager.ClassHolder.MB_DOWNLOAD_MANAGER
                return r0
        }
    }

    private MBDownloadManager() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.initialize = r0
            return
    }

    MBDownloadManager(com.mbridge.msdk.foundation.download.MBDownloadManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.download.MBDownloadManager getInstance() {
            com.mbridge.msdk.foundation.download.MBDownloadManager r0 = com.mbridge.msdk.foundation.download.MBDownloadManager.ClassHolder.access$000()
            return r0
    }

    public final synchronized void cancel(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()     // Catch: java.lang.Throwable -> La
            r0.cancel(r2)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void cancelAll() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()     // Catch: java.lang.Throwable -> La
            r0.cancelAll()     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder download(com.mbridge.msdk.foundation.download.DownloadMessage<?> r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r0 = new com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder     // Catch: java.lang.Throwable -> L8
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return r0
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.lang.String getDownloadId(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = r0.getDownloadId(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized com.mbridge.msdk.foundation.download.DownloadStatus getStatus(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r0 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()     // Catch: java.lang.Throwable -> Lb
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = r0.getStatus(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void initialize(android.content.Context r2, com.mbridge.msdk.foundation.download.MBDownloadConfig r3, com.mbridge.msdk.foundation.download.resource.ResourceConfig r4) {
            r1 = this;
            boolean r0 = r1.initialize
            if (r0 != 0) goto L1c
            r0 = 1
            r1.initialize = r0
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            r0.initialize(r2, r3)
            com.mbridge.msdk.foundation.download.core.DownloadRequestQueue r2 = com.mbridge.msdk.foundation.download.core.DownloadRequestQueue.getInstance()
            r2.initialize()
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r2 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            r2.executeResourceStrategy(r4)
        L1c:
            return
    }

    public final synchronized void shutDown() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.ExecutorManager.shutDown()     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void updateZipResource(java.lang.String r2, java.lang.String r3, long r4) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()     // Catch: java.lang.Throwable -> Le
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r0.getDatabaseHelper()     // Catch: java.lang.Throwable -> Le
            r0.updateUnzipResource(r2, r3, r4)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
