package com.mbridge.msdk.foundation.download.core;

public class Downloader implements java.lang.Runnable {
    private static final java.lang.String TAG = "DownloadTask";
    private com.mbridge.msdk.foundation.download.database.IDatabaseHelper databaseHelper;
    private volatile com.mbridge.msdk.foundation.download.DownloadMessage downloadMessage;
    public final com.mbridge.msdk.foundation.download.DownloadPriority downloadPriority;
    public volatile com.mbridge.msdk.foundation.download.core.DownloadRequest downloadRequest;
    public final int sequence;

    Downloader(com.mbridge.msdk.foundation.download.core.DownloadRequest r2) {
            r1 = this;
            r1.<init>()
            r1.downloadRequest = r2
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = r2.getDownloadPriority()
            r1.downloadPriority = r0
            int r2 = r2.getSequence()
            r1.sequence = r2
            return
    }

    @Override
    public void run() {
            r6 = this;
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r0.getLogger()
            java.lang.String r1 = "DownloadTask"
            java.lang.String r2 = "开始下载任务"
            r0.log(r1, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r0.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY
            if (r0 == r2) goto L24
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r2.getDownloadMessage()
            r0.handlerStartEvent(r2)
        L24:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadStatus r2 = com.mbridge.msdk.foundation.download.DownloadStatus.RUNNING
            r0.setStatus(r2)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r0.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "任务 "
            r2.append(r3)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r6.downloadRequest
            java.lang.String r3 = r3.getDownloadId()
            r2.append(r3)
            java.lang.String r3 = " 修改状态为 RUNNING"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.log(r1, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r0.getDownloadMessage()
            r6.downloadMessage = r0
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r0.getDatabaseHelper()
            r6.databaseHelper = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.core.IDownloadTask r0 = com.mbridge.msdk.foundation.download.core.SynchronizeAvailableDirectorPath.create(r0)
            r0.run()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            java.lang.String r0 = r0.getCacheDirectoryPath()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r6.downloadRequest
            int r2 = r2.getCacheDirectorPathType()
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = r6.downloadMessage
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            com.mbridge.msdk.foundation.download.DownloadMessage r5 = r6.downloadMessage
            java.lang.String r5 = r5.getSaveFileName()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.setSaveFilePath(r4)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r3 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r3 = r3.getLogger()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "cacheDirectoryPath： "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = " cacheDirectorPathType： "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = r4.toString()
            r3.log(r1, r0)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r6.downloadMessage
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r2 = r6.databaseHelper
            com.mbridge.msdk.foundation.download.core.IDownloadTask r0 = com.mbridge.msdk.foundation.download.core.DownloadTask.create(r0, r1, r2)
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r0.run()
            boolean r1 = r0.isSuccessful()
            if (r1 == 0) goto Ldf
            int r0 = r0.getFrom()
            r1 = 1
            if (r0 != r1) goto Ld7
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r6.downloadMessage
            r0.setFrom(r1)
        Ld7:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r6.downloadMessage
            r0.handlerSuccessEvent(r1)
            goto Lfe
        Ldf:
            com.mbridge.msdk.foundation.download.DownloadError r1 = r0.getError()
            if (r1 == 0) goto Lf1
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r6.downloadMessage
            com.mbridge.msdk.foundation.download.DownloadError r0 = r0.getError()
            r1.handlerErrorEvent(r2, r0)
            goto Lfe
        Lf1:
            boolean r0 = r0.isCancelled()
            if (r0 == 0) goto Lfe
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r6.downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r6.downloadMessage
            r0.handlerCancelEvent(r1)
        Lfe:
            return
    }
}
