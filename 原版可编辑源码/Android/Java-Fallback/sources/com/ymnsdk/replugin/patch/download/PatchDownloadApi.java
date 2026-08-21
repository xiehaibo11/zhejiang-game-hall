package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PatchDownloadApi {
    private static com.ymnsdk.replugin.patch.download.PatchDownloadApi downloadApi;



    static {
            com.ymnsdk.replugin.patch.download.PatchDownloadApi r0 = new com.ymnsdk.replugin.patch.download.PatchDownloadApi
            r0.<init>()
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadApi = r0
            return
    }

    public PatchDownloadApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearCache(android.app.Activity r3, java.lang.String r4, com.ymnsdk.replugin.listener.ClearDownloadCacheListener r5) {
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()     // Catch: java.lang.Exception -> L2a
            r1 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L2a
            r0.setLoadState(r2)     // Catch: java.lang.Exception -> L2a
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()     // Catch: java.lang.Exception -> L2a
            r0.setIsDownloadRecovery(r1)     // Catch: java.lang.Exception -> L2a
            com.ymnsdk.replugin.util.FileUtils r0 = com.ymnsdk.replugin.util.FileUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "temp.patch"
            java.io.File r3 = r0.getPluginFile(r3, r4, r1)     // Catch: java.lang.Exception -> L2a
            boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L2a
            if (r4 == 0) goto L26
            r3.delete()     // Catch: java.lang.Exception -> L2a
        L26:
            r5.clearSuccess()     // Catch: java.lang.Exception -> L2a
            goto L35
        L2a:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = r3.toString()
            r5.clearFail(r3)
        L35:
            return
    }

    public static void downloadPatch(android.app.Activity r16, java.lang.String r17, java.lang.String r18, int r19, long r20, java.lang.String r22, int r23, int r24, int r25, com.ymnsdk.replugin.patch.download.DownloadCallback r26) {
            r11 = r17
            r12 = r22
            r13 = r26
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = 0
            r0.setIsNoNetTimeout(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.getLoadState()
            if (r0 != 0) goto Lfe
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.setLoadState(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r26
            r0.init(r1, r2, r3, r4, r5, r7, r8, r9, r10)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.io.File r1 = r16.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.setWriteablePath(r1)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r11)
            java.lang.String r2 = "old.apk"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = r0.joinPluginPath(r1)
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            boolean r1 = r1.checkMd5(r0, r12)
            r2 = 100
            if (r1 == 0) goto L78
            r13.downloading(r2)
            r13.downloadSuccess(r0)
            return
        L78:
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r0 = r0.joinPluginPath(r12)
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            boolean r1 = r1.checkMd5(r0, r12)
            if (r1 == 0) goto L91
            r13.downloading(r2)
            r13.downloadSuccess(r0)
            return
        L91:
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto Ldd
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            r3 = 139019(0x21f0b, float:1.94807E-40)
            r4 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r11)
            java.lang.String r2 = "|"
            r1.append(r2)
            r8 = r18
            r1.append(r8)
            r1.append(r2)
            r5 = r19
            r1.append(r5)
            r1.append(r2)
            r9 = r20
            r1.append(r9)
            r1.append(r2)
            r1.append(r12)
            java.lang.String r6 = r1.toString()
            java.lang.String r5 = "下载开始"
            r1 = r7
            r2 = r16
            r1.<init>(r2, r3, r4, r5, r6)
            r0.postEvent(r7)
            goto Le1
        Ldd:
            r8 = r18
            r9 = r20
        Le1:
            java.lang.Thread r14 = new java.lang.Thread
            com.ymnsdk.replugin.patch.download.PatchDownloadApi$1 r15 = new com.ymnsdk.replugin.patch.download.PatchDownloadApi$1
            r0 = r15
            r1 = r26
            r2 = r22
            r3 = r18
            r4 = r16
            r5 = r17
            r6 = r20
            r8 = r25
            r0.<init>(r1, r2, r3, r4, r5, r6, r8)
            r14.<init>(r15)
            r14.start()
            return
        Lfe:
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading
            r13.downloadFail(r0)
            return
    }

    public static void downloadRecovery(com.ymnsdk.replugin.entity.DownloadEntity r4, int r5) {
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isIsDownloadRecovery()
            if (r0 == 0) goto L12
            java.lang.String r4 = "ymn"
            java.lang.String r5 = "downloadRecovery isIsDownloadRecovery"
            android.util.Log.e(r4, r5)
            return
        L12:
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = 1
            r0.setIsDownloadRecovery(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 == 0) goto L42
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r0 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            long r1 = java.lang.System.currentTimeMillis()
            r0.silentRecoveryTime = r1
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.RecoveryDownloadingEvent r1 = new com.ymnsdk.replugin.event.silentdownload.RecoveryDownloadingEvent
            android.app.Activity r2 = r4.getActivity()
            java.lang.String r3 = r4.getPluginId()
            r1.<init>(r2, r3)
            r0.postToSeperllita(r1)
        L42:
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r1 = r4.getMd5()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r0.getDownloadFileInfo(r1)
            if (r0 == 0) goto L89
            boolean r0 = r0.getValid()
            if (r0 != 0) goto L89
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r1 = r4.getMd5()
            java.lang.String r0 = r0.joinPluginPath(r1)
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r2 = r4.getMd5()
            java.lang.String r3 = r4.getDownloadUri()
            r1.syncDownloadStatus(r2, r3, r0)
            com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.getInstance()
            java.lang.String r1 = r4.getMd5()
            r0.resume(r1)
            java.lang.Thread r0 = new java.lang.Thread
            com.ymnsdk.replugin.patch.download.PatchDownloadApi$2 r1 = new com.ymnsdk.replugin.patch.download.PatchDownloadApi$2
            r1.<init>(r4, r5)
            r0.<init>(r1)
            r0.start()
        L89:
            return
    }

    public static void downloadStop() {
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = 0
            r0.setIsDownloadRecovery(r1)
            com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.getInstance()
            r0.pause()
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            com.ymnsdk.replugin.entity.DownloadEntity r0 = r0.getDownloadEntity()
            if (r0 == 0) goto L51
            android.app.Activity r1 = r0.getActivity()
            if (r1 == 0) goto L51
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r1 = r1.isOpenSilentDownload()
            if (r1 == 0) goto L51
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r1 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            long r2 = r1.silentDownloadDur
            long r4 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r6 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            long r6 = r6.silentRecoveryTime
            long r4 = r4 - r6
            long r2 = r2 + r4
            r1.silentDownloadDur = r2
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.StopDownloadingEvent r2 = new com.ymnsdk.replugin.event.silentdownload.StopDownloadingEvent
            android.app.Activity r3 = r0.getActivity()
            java.lang.String r0 = r0.getPluginId()
            r2.<init>(r3, r0)
            r1.postToSeperllita(r2)
        L51:
            return
    }

    public static com.ymnsdk.replugin.patch.download.PatchDownloadApi getInstance() {
            com.ymnsdk.replugin.patch.download.PatchDownloadApi r0 = com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadApi
            return r0
    }
}
