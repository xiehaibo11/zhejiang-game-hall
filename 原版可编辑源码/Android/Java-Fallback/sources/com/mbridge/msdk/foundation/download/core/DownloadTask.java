package com.mbridge.msdk.foundation.download.core;

public class DownloadTask implements com.mbridge.msdk.foundation.download.core.IDownloadTask {
    private com.mbridge.msdk.foundation.download.database.IDatabaseHelper _databaseHelper;
    private volatile com.mbridge.msdk.foundation.download.DownloadMessage _downloadMessage;
    private volatile com.mbridge.msdk.foundation.download.database.DownloadModel _downloadModel;
    private com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder _downloaderReporter;
    private volatile boolean _needUpdateDownloadModel;
    private final java.lang.Object _object;
    private volatile com.mbridge.msdk.foundation.download.core.DownloadRequest _request;


    private DownloadTask(com.mbridge.msdk.foundation.download.core.DownloadRequest r2, com.mbridge.msdk.foundation.download.DownloadMessage r3, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1._downloadModel = r0
            r0 = 1
            r1._needUpdateDownloadModel = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1._object = r0
            r1._request = r2
            r1._downloadMessage = r3
            r1._databaseHelper = r4
            return
    }

    static java.lang.Object access$000(com.mbridge.msdk.foundation.download.core.DownloadTask r0) {
            java.lang.Object r0 = r0._object
            return r0
    }

    static boolean access$100(com.mbridge.msdk.foundation.download.core.DownloadTask r0) {
            boolean r0 = r0._needUpdateDownloadModel
            return r0
    }

    static com.mbridge.msdk.foundation.download.database.DownloadModel access$202(com.mbridge.msdk.foundation.download.core.DownloadTask r0, com.mbridge.msdk.foundation.download.database.DownloadModel r1) {
            r0._downloadModel = r1
            return r1
    }

    static com.mbridge.msdk.foundation.download.core.IDownloadTask create(com.mbridge.msdk.foundation.download.core.DownloadRequest r1, com.mbridge.msdk.foundation.download.DownloadMessage r2, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3) {
            com.mbridge.msdk.foundation.download.core.DownloadTask r0 = new com.mbridge.msdk.foundation.download.core.DownloadTask
            r0.<init>(r1, r2, r3)
            return r0
    }

    private void sendProgress(com.mbridge.msdk.foundation.download.core.DownloadRequest r8, com.mbridge.msdk.foundation.download.DownloadMessage r9) {
            r7 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r8.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L21
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r7._request
            long r2 = r0.getDownloadedBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r7._request
            long r4 = r0.getTotalBytes()
            int r6 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r4, r2)
            com.mbridge.msdk.foundation.download.DownloadProgress r0 = new com.mbridge.msdk.foundation.download.DownloadProgress
            r1 = r0
            r1.<init>(r2, r4, r6)
            r8.handlerProcessEvent(r9, r0)
        L21:
            return
    }

    @Override
    public com.mbridge.msdk.foundation.download.DownloadResponse run() {
            r23 = this;
            r1 = r23
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = new com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder
            java.lang.String r2 = "2000116"
            r0.<init>(r2)
            r1._downloaderReporter = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r1._request
            int r2 = r2.getRetryedCount()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "rc"
            r0.add(r3, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r1._request
            java.lang.String r5 = r0.getDownloadId()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r1._request
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r0.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            r8 = 1
            if (r0 != r2) goto L34
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r0.<init>()
            r0.setCancelled(r8)
            return r0
        L34:
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r1._downloadMessage
            int r0 = r0.getDownloadRate()
            if (r0 != 0) goto L45
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r0.<init>()
            r0.setSuccessful(r8)
            return r0
        L45:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r1._request
            java.lang.String r9 = r0.getCacheDirectoryPath()
            java.util.concurrent.CountDownLatch r2 = new java.util.concurrent.CountDownLatch
            r2.<init>(r8)
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r1._databaseHelper
            com.mbridge.msdk.foundation.download.core.DownloadTask$1 r3 = new com.mbridge.msdk.foundation.download.core.DownloadTask$1
            r3.<init>(r1, r2)
            r0.find(r5, r9, r3)
            r3 = 10
            r6 = 0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L6c java.lang.InterruptedException -> L6f
            r2.await(r3, r0)     // Catch: java.lang.Throwable -> L6c java.lang.InterruptedException -> L6f
            java.lang.Object r2 = r1._object
            monitor-enter(r2)
            r1._needUpdateDownloadModel = r6     // Catch: java.lang.Throwable -> L69
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L69
            goto La8
        L69:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L69
            throw r0
        L6c:
            r0 = move-exception
            goto L158
        L6f:
            r0 = move-exception
            com.mbridge.msdk.foundation.download.core.GlobalComponent r3 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.download.utils.ILogger r3 = r3.getLogger()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "DownloadTask"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r7.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r10 = ""
            r7.append(r10)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L6c
            r7.append(r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L6c
            r3.log(r4, r0)     // Catch: java.lang.Throwable -> L6c
            r2.countDown()     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r1._downloaderReporter     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "qt"
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6c
            r0.add(r2, r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.Object r2 = r1._object
            monitor-enter(r2)
            r1._needUpdateDownloadModel = r6     // Catch: java.lang.Throwable -> L155
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L155
        La8:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r1._request
            com.mbridge.msdk.foundation.download.database.DownloadModel r3 = r1._downloadModel
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r4 = r1._databaseHelper
            com.mbridge.msdk.foundation.download.DownloadMessage r6 = r1._downloadMessage
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r7 = r1._downloaderReporter
            com.mbridge.msdk.foundation.download.core.IDownloadTask r0 = com.mbridge.msdk.foundation.download.core.FindFileFromCache.create(r2, r3, r4, r5, r6, r7)
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r0.run()
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.isNotNull(r0)
            if (r2 == 0) goto L135
            boolean r2 = r0.isSuccessful()
            if (r2 == 0) goto L135
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r1._request
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = r1._downloadMessage
            r1.sendProgress(r2, r3)
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r10 = r2.getDownloadId()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r11 = r2.getDownloadUrl()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r12 = r2.getResourceUrl()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r13 = r2.getEtag()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r14 = r2.getSaveDirectorPath()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            java.lang.String r15 = r2.getSaveFileName()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r1._request
            long r16 = r2.getTotalBytes()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            long r18 = r2.getDownloadedBytes()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            int r20 = r2.getDownloadRate()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            int r2 = r2.getUsageCounter()
            int r21 = r2 + 1
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            com.mbridge.msdk.foundation.download.DownloadResourceType r22 = r2.getDownloadResourceType()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r10, r11, r12, r13, r14, r15, r16, r18, r20, r21, r22)
            r1._downloadModel = r2
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r2 = r1._databaseHelper
            com.mbridge.msdk.foundation.download.database.DownloadModel r3 = r1._downloadModel
            r2.update(r3, r9)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r2 = r1._downloaderReporter
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "rfc"
            r2.add(r4, r3)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r2 = r1._downloaderReporter
            com.mbridge.msdk.foundation.download.core.DownloaderReporter r2 = r2.build()
            r2.report()
            return r0
        L135:
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r1._downloaderReporter
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "rfc"
            r0.add(r3, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r1._request
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r1._downloadModel
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3 = r1._databaseHelper
            com.mbridge.msdk.foundation.download.DownloadMessage r4 = r1._downloadMessage
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r5 = r1._downloaderReporter
            com.mbridge.msdk.foundation.download.core.IDownloadTask r0 = com.mbridge.msdk.foundation.download.core.OkHTTPFileDownloadTask.create(r0, r2, r3, r4, r5)
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r0.run()
            return r0
        L155:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L155
            throw r0
        L158:
            java.lang.Object r2 = r1._object
            monitor-enter(r2)
            r1._needUpdateDownloadModel = r6     // Catch: java.lang.Throwable -> L15f
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15f
            throw r0
        L15f:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15f
            throw r0
    }
}
