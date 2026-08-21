package com.mbridge.msdk.foundation.download.core;

class FindFileFromCache implements com.mbridge.msdk.foundation.download.core.IDownloadTask {
    private final com.mbridge.msdk.foundation.download.database.IDatabaseHelper _databaseHelper;
    private final java.lang.String _downloadId;
    private com.mbridge.msdk.foundation.download.DownloadMessage _downloadMessage;
    private final com.mbridge.msdk.foundation.download.database.DownloadModel _downloadModel;
    private com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder _downloaderReporter;
    private final com.mbridge.msdk.foundation.download.core.DownloadRequest _request;

    private FindFileFromCache(com.mbridge.msdk.foundation.download.core.DownloadRequest r1, com.mbridge.msdk.foundation.download.database.DownloadModel r2, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3, java.lang.String r4, com.mbridge.msdk.foundation.download.DownloadMessage r5, com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r6) {
            r0 = this;
            r0.<init>()
            r0._request = r1
            r0._downloadModel = r2
            r0._databaseHelper = r3
            r0._downloadId = r4
            r0._downloadMessage = r5
            r0._downloaderReporter = r6
            return
    }

    private boolean checkDownloadReadyRate(long r3) {
            r2 = this;
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r2._downloadModel
            long r0 = r0.getTotalBytes()
            int r3 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r0, r3)
            com.mbridge.msdk.foundation.download.DownloadMessage r4 = r2._downloadMessage
            int r4 = r4.getDownloadRate()
            if (r3 < r4) goto L14
            r3 = 1
            goto L15
        L14:
            r3 = 0
        L15:
            return r3
    }

    private boolean checkUseFileResume() {
            r4 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r4._request     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = "do_us_fi_re"
            r2 = 1
            java.lang.String r2 = java.lang.Boolean.toString(r2)     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = r0.get(r1, r2)     // Catch: java.lang.Exception -> L12
            boolean r0 = java.lang.Boolean.parseBoolean(r0)     // Catch: java.lang.Exception -> L12
            goto L22
        L12:
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r0.getLogger()
            java.lang.String r1 = "DownloadTask"
            java.lang.String r2 = "类型转换错误： do_us_fi_re"
            r0.log(r1, r2)
            r0 = 0
        L22:
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r1 = r4._downloaderReporter
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "c "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ffr"
            r1.add(r3, r2)
            return r0
    }

    static com.mbridge.msdk.foundation.download.core.IDownloadTask create(com.mbridge.msdk.foundation.download.core.DownloadRequest r8, com.mbridge.msdk.foundation.download.database.DownloadModel r9, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r10, java.lang.String r11, com.mbridge.msdk.foundation.download.DownloadMessage r12, com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r13) {
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r13)
            if (r0 == 0) goto Ld
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r13 = new com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder
            java.lang.String r0 = "2000116"
            r13.<init>(r0)
        Ld:
            r7 = r13
            com.mbridge.msdk.foundation.download.core.FindFileFromCache r13 = new com.mbridge.msdk.foundation.download.core.FindFileFromCache
            r1 = r13
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r13
    }

    private void resumeDownloadAndDeleteFile(com.mbridge.msdk.foundation.download.DownloadResponse r4, java.io.File r5) {
            r3 = this;
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3._request
            r1 = 0
            r0.setDownloadedBytes(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r3._request
            r0.setTotalBytes(r1)
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r3._databaseHelper
            java.lang.String r1 = r3._downloadId
            r0.remove(r1)
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            r0.deleteFile(r5)
            r5 = 0
            r4.setSuccessful(r5)
            return
    }

    private void resumeDownloadFromFile(com.mbridge.msdk.foundation.download.DownloadResponse r17, long r18) {
            r16 = this;
            r0 = r16
            r14 = r18
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r0._request
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r0._downloadModel
            long r2 = r2.getTotalBytes()
            r1.setTotalBytes(r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r0._request
            r1.setDownloadedBytes(r14)
            com.mbridge.msdk.foundation.download.database.DownloadModel r1 = r0._downloadModel
            java.lang.String r1 = r1.getDownloadId()
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r0._downloadModel
            java.lang.String r2 = r2.getDownloadUrl()
            com.mbridge.msdk.foundation.download.database.DownloadModel r3 = r0._downloadModel
            java.lang.String r3 = r3.getResourceUrl()
            com.mbridge.msdk.foundation.download.database.DownloadModel r4 = r0._downloadModel
            java.lang.String r4 = r4.getEtag()
            com.mbridge.msdk.foundation.download.database.DownloadModel r5 = r0._downloadModel
            java.lang.String r5 = r5.getSaveDirectorPath()
            com.mbridge.msdk.foundation.download.database.DownloadModel r6 = r0._downloadModel
            java.lang.String r6 = r6.getSaveFileName()
            com.mbridge.msdk.foundation.download.database.DownloadModel r7 = r0._downloadModel
            long r7 = r7.getTotalBytes()
            com.mbridge.msdk.foundation.download.database.DownloadModel r9 = r0._downloadModel
            int r11 = r9.getDownloadRate()
            com.mbridge.msdk.foundation.download.database.DownloadModel r9 = r0._downloadModel
            int r12 = r9.getUsageCounter()
            com.mbridge.msdk.foundation.download.database.DownloadModel r9 = r0._downloadModel
            com.mbridge.msdk.foundation.download.DownloadResourceType r13 = r9.getDownloadResourceType()
            r9 = r18
            com.mbridge.msdk.foundation.download.database.DownloadModel r1 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r1, r2, r3, r4, r5, r6, r7, r9, r11, r12, r13)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r2 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r2 = r2.getDatabaseHelper()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._request
            java.lang.String r3 = r3.getCacheDirectoryPath()
            r2.update(r1, r3)
            boolean r1 = r0.checkDownloadReadyRate(r14)
            r2 = r17
            r2.setSuccessful(r1)
            return
    }

    @Override
    public com.mbridge.msdk.foundation.download.DownloadResponse run() {
            r9 = this;
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r9._downloadModel
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 == 0) goto La
            r0 = 0
            return r0
        La:
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r0.<init>()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r9._request
            java.lang.String r1 = r1.getCacheDirectoryPath()
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r9._downloadMessage
            java.lang.String r2 = r2.getSaveFileName()
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            boolean r4 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r3, r1, r2)
            r5 = 0
            java.lang.String r6 = "ffr"
            if (r4 != 0) goto L51
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r1 = r9._downloaderReporter
            java.lang.String r2 = "d"
            r1.add(r6, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r9._request
            r2 = 0
            r1.setDownloadedBytes(r2)
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r1 = r9._databaseHelper
            java.lang.String r2 = r9._downloadId
            r1.remove(r2)
            r0.setSuccessful(r5)
            return r0
        L51:
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r4 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            long r1 = r4.getFileSize(r3, r1, r2)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r4 = r9._downloaderReporter
            java.lang.String r7 = java.lang.String.valueOf(r1)
            java.lang.String r8 = "ffs"
            r4.add(r8, r7)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r4 = r9._downloaderReporter
            com.mbridge.msdk.foundation.download.database.DownloadModel r7 = r9._downloadModel
            long r7 = r7.getTotalBytes()
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r8 = "fts"
            r4.add(r8, r7)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r4 = r9._downloaderReporter
            com.mbridge.msdk.foundation.download.database.DownloadModel r7 = r9._downloadModel
            long r7 = r7.getDownloadedBytes()
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r8 = "fds"
            r4.add(r8, r7)
            com.mbridge.msdk.foundation.download.database.DownloadModel r4 = r9._downloadModel
            long r7 = r4.getDownloadedBytes()
            int r4 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r4 == 0) goto Lbc
            boolean r4 = r9.checkUseFileResume()
            com.mbridge.msdk.foundation.download.core.GlobalComponent r5 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r5 = r5.getLogger()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "数据库记录和文件大小不一致，是否以文件大小为基准进行断点续传： "
            r6.append(r7)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "DownloadTask"
            r5.log(r7, r6)
            if (r4 == 0) goto Lb8
            r9.resumeDownloadFromFile(r0, r1)
            goto Lbb
        Lb8:
            r9.resumeDownloadAndDeleteFile(r0, r3)
        Lbb:
            return r0
        Lbc:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r9._request
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r9._downloadModel
            long r2 = r2.getTotalBytes()
            r1.setTotalBytes(r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r9._request
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = r9._downloadModel
            long r2 = r2.getDownloadedBytes()
            r1.setDownloadedBytes(r2)
            com.mbridge.msdk.foundation.download.database.DownloadModel r1 = r9._downloadModel
            long r1 = r1.getDownloadedBytes()
            boolean r1 = r9.checkDownloadReadyRate(r1)
            if (r1 == 0) goto Lf3
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r1 = r9._downloaderReporter
            java.lang.String r2 = "a"
            r1.add(r6, r2)
            com.mbridge.msdk.foundation.download.database.DownloadModel r1 = r9._downloadModel
            int r1 = r1.getFrom()
            r0.setFrom(r1)
            r1 = 1
            r0.setSuccessful(r1)
            goto Lfd
        Lf3:
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r1 = r9._downloaderReporter
            java.lang.String r2 = "b"
            r1.add(r6, r2)
            r0.setSuccessful(r5)
        Lfd:
            return r0
    }
}
