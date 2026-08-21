package com.mbridge.msdk.foundation.download.core;

class SynchronizeAvailableDirectorPath implements com.mbridge.msdk.foundation.download.core.IDownloadTask {
    private int cacheDirectorPathType;
    private java.lang.String cacheDirectoryPath;
    private java.lang.String cacheDirectoryPathExternal;
    private java.lang.String cacheDirectoryPathInternal;
    private com.mbridge.msdk.foundation.download.core.DownloadRequest downloadRequest;

    public SynchronizeAvailableDirectorPath(com.mbridge.msdk.foundation.download.core.DownloadRequest r1) {
            r0 = this;
            r0.<init>()
            r0.downloadRequest = r1
            return
    }

    public static com.mbridge.msdk.foundation.download.core.IDownloadTask create(com.mbridge.msdk.foundation.download.core.DownloadRequest r1) {
            com.mbridge.msdk.foundation.download.core.SynchronizeAvailableDirectorPath r0 = new com.mbridge.msdk.foundation.download.core.SynchronizeAvailableDirectorPath
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.DownloadResponse run() {
            r3 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.downloadRequest
            java.lang.String r0 = r0.getDirectoryPathExternal()
            r3.cacheDirectoryPathExternal = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.downloadRequest
            java.lang.String r0 = r0.getDirectoryPathInternal()
            r3.cacheDirectoryPathInternal = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6a
            r0 = 0
            java.lang.String r1 = r3.cacheDirectoryPathExternal     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            if (r1 == 0) goto L26
            java.lang.String r1 = r3.cacheDirectoryPathInternal     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectoryPath = r1     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectorPathType = r0     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            goto L40
        L26:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r2 = 28
            if (r1 <= r2) goto L33
            java.lang.String r1 = r3.cacheDirectoryPathInternal     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectoryPath = r1     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectorPathType = r0     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            goto L40
        L33:
            com.mbridge.msdk.foundation.download.core.GlobalComponent r1 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r1.getContext()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            java.lang.String r1 = r3.cacheDirectoryPathInternal     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectoryPath = r1     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r3.cacheDirectorPathType = r0     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
        L40:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.downloadRequest
            java.lang.String r1 = r3.cacheDirectoryPath
            goto L4f
        L45:
            r0 = move-exception
            goto L5b
        L47:
            java.lang.String r1 = r3.cacheDirectoryPathInternal     // Catch: java.lang.Throwable -> L45
            r3.cacheDirectoryPath = r1     // Catch: java.lang.Throwable -> L45
            r3.cacheDirectorPathType = r0     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.downloadRequest
        L4f:
            r0.setCacheDirectoryPath(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3.downloadRequest
            int r1 = r3.cacheDirectorPathType
            r0.setCacheDirectorPathType(r1)
            r0 = 0
            return r0
        L5b:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r3.downloadRequest
            java.lang.String r2 = r3.cacheDirectoryPath
            r1.setCacheDirectoryPath(r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r3.downloadRequest
            int r2 = r3.cacheDirectorPathType
            r1.setCacheDirectorPathType(r2)
            throw r0
        L6a:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "必须指定 cacheDirectoryPathInternal"
            r0.<init>(r1)
            throw r0
    }
}
