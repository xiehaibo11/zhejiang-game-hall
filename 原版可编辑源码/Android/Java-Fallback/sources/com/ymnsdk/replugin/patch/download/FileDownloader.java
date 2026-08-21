package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class FileDownloader {
    private static okhttp3.OkHttpClient mDownloadClient;
    private com.ymnsdk.replugin.patch.download.DownloadCallback mCallback;
    private okhttp3.Call mCurrentCall;
    private volatile java.lang.String mCurrentTask;
    private final okhttp3.Interceptor mDownloadResume;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 1 {
        static final int[] $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = null;

        static {
                com.ymnsdk.replugin.patch.download.DownloadCode$Code[] r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L1d
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileRenameFailed     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L28
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L33
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileSyncReadStatusException     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L3e
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L49
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileIsBroken     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L54
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L60
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                int[] r0 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L6c
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop     // Catch: java.lang.NoSuchFieldError -> L6c
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L6c
                r2 = 9
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L6c
            L6c:
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final com.ymnsdk.replugin.patch.download.FileDownloader instance = null;

        static {
                com.ymnsdk.replugin.patch.download.FileDownloader r0 = new com.ymnsdk.replugin.patch.download.FileDownloader
                r1 = 0
                r0.<init>(r1)
                com.ymnsdk.replugin.patch.download.FileDownloader.Factory.instance = r0
                return
        }

        private Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ymnsdk.replugin.patch.download.FileDownloader access$000() {
                com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.Factory.instance
                return r0
        }
    }

    static {
            return
    }

    private FileDownloader() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mCurrentTask = r0
            r1.mCurrentCall = r0
            r1.mCallback = r0
            com.ymnsdk.replugin.patch.download.-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs r0 = com.ymnsdk.replugin.patch.download.-$$Lambda$FileDownloader$xbiRJJYc9H5SW7s69CK1t4yn2Gs.INSTANCE
            r1.mDownloadResume = r0
            r1.initDownloadClient()
            return
    }

    FileDownloader(com.ymnsdk.replugin.patch.download.FileDownloader.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean downloadFailed(com.ymnsdk.replugin.patch.download.DownloadCode.Code r10, int r11) {
            r9 = this;
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "downloadFailed: "
            r1.append(r2)
            java.lang.String r2 = r9.mCurrentTask
            r1.append(r2)
            java.lang.String r2 = com.ymnsdk.replugin.patch.download.DownloadCode.translate(r10)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "code is "
            r0.append(r1)
            java.lang.String r1 = r10.toString()
            r0.append(r1)
            java.lang.String r1 = "|"
            r0.append(r1)
            java.lang.String r1 = com.ymnsdk.replugin.patch.download.DownloadCode.translate(r10)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.e(r1, r0)
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading
            r1 = 0
            if (r10 != r0) goto L4b
            return r1
        L4b:
            r9.closeCall()
            com.ymnsdk.replugin.patch.download.DownloadCallback r0 = r9.mCallback
            if (r0 == 0) goto L55
            r0.downloadFail(r10)
        L55:
            java.lang.String r0 = r9.mCurrentTask
            if (r0 != 0) goto L5a
            return r1
        L5a:
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r2 = r9.mCurrentTask
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r0.getDownloadFileInfo(r2)
            r0.addRoadMap(r10)
            com.ymnsdk.replugin.patch.download.DownloadFileState r2 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r2.updateTaskState(r0)
            int[] r2 = com.ymnsdk.replugin.patch.download.FileDownloader.1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code
            int r3 = r10.ordinal()
            r2 = r2[r3]
            switch(r2) {
                case 1: goto La6;
                case 2: goto La6;
                case 3: goto La6;
                case 4: goto La6;
                case 5: goto La6;
                case 6: goto L86;
                case 7: goto L86;
                case 8: goto L86;
                case 9: goto L7a;
                default: goto L79;
            }
        L79:
            goto Lce
        L7a:
            com.ymnsdk.replugin.patch.download.DownloadState r10 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r1)
            r10.setLoadState(r11)
            goto Lce
        L86:
            com.ymnsdk.replugin.patch.download.DownloadFileState r10 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r2 = r9.mCurrentTask
            r10.resetStatus(r2)
            r9.resetTask()
            java.lang.String r4 = r0.getURL()
            java.lang.String r5 = r0.getHash()
            java.lang.String r6 = r0.getSavePath()
            com.ymnsdk.replugin.patch.download.DownloadCallback r7 = r9.mCallback
            r3 = r9
            r8 = r11
            r3.download(r4, r5, r6, r7, r8)
            goto Lce
        La6:
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r2 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException
            if (r10 == r2) goto Lae
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r2 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail
            if (r10 != r2) goto Lb8
        Lae:
            r0.addNetworkRetryCount()
            com.ymnsdk.replugin.patch.download.DownloadFileState r10 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r10.updateTaskState(r0)
        Lb8:
            r9.resetTask()
            java.lang.String r3 = r0.getURL()
            java.lang.String r4 = r0.getHash()
            java.lang.String r5 = r0.getSavePath()
            com.ymnsdk.replugin.patch.download.DownloadCallback r6 = r9.mCallback
            r2 = r9
            r7 = r11
            r2.download(r3, r4, r5, r6, r7)
        Lce:
            return r1
    }

    private boolean downloadSuccess(int r5) {
            r4 = this;
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "downloadSuccess: "
            r1.append(r2)
            java.lang.String r2 = r4.mCurrentTask
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r4.closeCall()
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r1 = r4.mCurrentTask
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r0.getDownloadFileInfo(r1)
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.Success
            r0.addRoadMap(r1)
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r1.updateTaskState(r0)
            if (r0 != 0) goto L3a
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError
            boolean r5 = r4.downloadFailed(r0, r5)
            return r5
        L3a:
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r2 = r0.getSaveCachePath()
            java.lang.String r3 = r0.getHash()
            boolean r1 = r1.checkMd5(r2, r3)
            if (r1 != 0) goto L53
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed
            boolean r5 = r4.downloadFailed(r0, r5)
            return r5
        L53:
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r2 = r0.getSaveCachePath()
            java.lang.String r3 = r0.getSavePath()
            boolean r1 = r1.renameFile(r2, r3)
            if (r1 != 0) goto L6c
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileRenameFailed
            boolean r5 = r4.downloadFailed(r0, r5)
            return r5
        L6c:
            com.ymnsdk.replugin.patch.download.DownloadFileState r5 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r1 = r4.mCurrentTask
            r5.removeTaskHistory(r1)
            com.ymnsdk.replugin.patch.download.DownloadCallback r5 = r4.mCallback
            if (r5 == 0) goto L80
            java.lang.String r0 = r0.getSavePath()
            r5.downloadSuccess(r0)
        L80:
            r5 = 1
            return r5
    }

    public static com.ymnsdk.replugin.patch.download.FileDownloader getInstance() {
            com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.Factory.access$000()
            return r0
    }

    static okhttp3.Response lambda$new$0(okhttp3.Interceptor.Chain r5) throws java.io.IOException {
            okhttp3.Request r0 = r5.request()
            java.lang.Object r1 = r0.tag()
            java.lang.String r1 = (java.lang.String) r1
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.ymnsdk.replugin.patch.download.DownloadFileState r3 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            long r3 = r3.getDownloadSize(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r3 = 0
            r2[r3] = r1
            java.lang.String r1 = "bytes=%d-"
            java.lang.String r1 = java.lang.String.format(r1, r2)
            okhttp3.Request$Builder r0 = r0.newBuilder()
            java.lang.String r2 = "range"
            okhttp3.Request$Builder r0 = r0.header(r2, r1)
            okhttp3.Request r0 = r0.build()
            okhttp3.Response r5 = r5.proceed(r0)
            return r5
    }

    private void writeDownloadStream(okhttp3.ResponseBody r12, int r13) throws java.io.IOException {
            r11 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.lang.String r1 = r11.mCurrentTask
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r0.getDownloadFileInfo(r1)
            if (r0 != 0) goto L12
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r12 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileIsBroken
            r11.downloadFailed(r12, r13)
            return
        L12:
            r1 = 0
            r0.setNetworkRetryCount(r1)
            com.ymnsdk.replugin.patch.download.DownloadFileState r2 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r2.updateTaskState(r0)
            java.lang.String r2 = r0.getSaveCachePath()
            if (r2 != 0) goto L29
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r12 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileStatusSyncError
            r11.downloadFailed(r12, r13)
            return
        L29:
            java.lang.String r2 = r0.getSaveCachePath()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "path is "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ymn"
            android.util.Log.e(r4, r3)
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> L106
            java.lang.String r5 = "rw"
            r3.<init>(r2, r5)     // Catch: java.lang.Exception -> L106
            long r5 = r0.getSavedSize()     // Catch: java.lang.Throwable -> Lfa
            r3.seek(r5)     // Catch: java.lang.Throwable -> Lfa
            com.ymnsdk.replugin.patch.download.DownloadFileState r2 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r5 = r11.mCurrentTask     // Catch: java.lang.Throwable -> Lfa
            long r6 = r12.contentLength()     // Catch: java.lang.Throwable -> Lfa
            boolean r2 = r2.verifySaveFileSize(r5, r6)     // Catch: java.lang.Throwable -> Lfa
            if (r2 != 0) goto L6a
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r12 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed     // Catch: java.lang.Throwable -> Lfa
            r11.downloadFailed(r12, r13)     // Catch: java.lang.Throwable -> Lfa
            r3.close()     // Catch: java.lang.Exception -> L106
            return
        L6a:
            r2 = 131072(0x20000, float:1.83671E-40)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> Lfa
            java.io.InputStream r12 = r12.byteStream()     // Catch: java.lang.Throwable -> Lfa
            r5 = -1
        L74:
            int r7 = r12.read(r2)     // Catch: java.lang.Throwable -> Lfa
            r8 = -1
            if (r7 == r8) goto Lf0
            r3.write(r2, r1, r7)     // Catch: java.lang.Throwable -> Lfa
            com.ymnsdk.replugin.patch.download.DownloadFileState r8 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r9 = r11.mCurrentTask     // Catch: java.lang.Throwable -> Lfa
            boolean r7 = r8.syncDownloadFileSize(r9, r7)     // Catch: java.lang.Throwable -> Lfa
            if (r7 != 0) goto L96
            r3.close()     // Catch: java.lang.Throwable -> Lfa
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r12 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileSyncReadStatusException     // Catch: java.lang.Throwable -> Lfa
            r11.downloadFailed(r12, r13)     // Catch: java.lang.Throwable -> Lfa
            r3.close()     // Catch: java.lang.Exception -> L106
            return
        L96:
            r7 = 1
            if (r13 != r7) goto La9
            boolean r7 = com.ymnsdk.replugin.util.DownloadUtils.isUserDownload     // Catch: java.lang.Throwable -> Lfa
            if (r7 == 0) goto La9
            r3.close()     // Catch: java.lang.Throwable -> Lfa
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r12 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop     // Catch: java.lang.Throwable -> Lfa
            r11.downloadFailed(r12, r13)     // Catch: java.lang.Throwable -> Lfa
            r3.close()     // Catch: java.lang.Exception -> L106
            return
        La9:
            com.ymnsdk.replugin.patch.download.DownloadCallback r7 = r11.mCallback     // Catch: java.lang.Throwable -> Lfa
            if (r7 == 0) goto L74
            long r7 = r0.getSavedSize()     // Catch: java.lang.Throwable -> Lfa
            r9 = 100
            long r7 = r7 * r9
            long r9 = r0.getTotalSize()     // Catch: java.lang.Throwable -> Lfa
            long r7 = r7 / r9
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 == 0) goto Lea
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r5.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r6 = "当前的进度是:"
            r5.append(r6)     // Catch: java.lang.Throwable -> Lfa
            r5.append(r7)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r6 = "hash值是:"
            r5.append(r6)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r6 = r0.getHash()     // Catch: java.lang.Throwable -> Lfa
            r5.append(r6)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r6 = "下载的存发的地址是:"
            r5.append(r6)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r6 = r0.getSavePath()     // Catch: java.lang.Throwable -> Lfa
            r5.append(r6)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lfa
            android.util.Log.e(r4, r5)     // Catch: java.lang.Throwable -> Lfa
            r5 = r7
        Lea:
            com.ymnsdk.replugin.patch.download.DownloadCallback r9 = r11.mCallback     // Catch: java.lang.Throwable -> Lfa
            r9.downloading(r7)     // Catch: java.lang.Throwable -> Lfa
            goto L74
        Lf0:
            r3.close()     // Catch: java.lang.Throwable -> Lfa
            r11.downloadSuccess(r13)     // Catch: java.lang.Throwable -> Lfa
            r3.close()     // Catch: java.lang.Exception -> L106
            return
        Lfa:
            r12 = move-exception
            throw r12     // Catch: java.lang.Throwable -> Lfc
        Lfc:
            r13 = move-exception
            r3.close()     // Catch: java.lang.Throwable -> L101
            goto L105
        L101:
            r0 = move-exception
            r12.addSuppressed(r0)     // Catch: java.lang.Exception -> L106
        L105:
            throw r13     // Catch: java.lang.Exception -> L106
        L106:
            r12 = move-exception
            throw r12
    }

    public void closeCall() {
            r2 = this;
            okhttp3.Call r0 = r2.mCurrentCall
            if (r0 != 0) goto L5
            return
        L5:
            r0.cancel()
            r0 = 0
            r2.mCurrentCall = r0
            r0 = 1000(0x3e8, double:4.94E-321)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public boolean download(java.lang.String r3, java.lang.String r4, java.lang.String r5, com.ymnsdk.replugin.patch.download.DownloadCallback r6, int r7) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "download: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.e(r1, r0)
            java.lang.String r0 = r2.mCurrentTask
            if (r0 == 0) goto L29
            java.lang.String r0 = r2.mCurrentTask
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L29
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r3 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.TaskIsDownloading
            boolean r3 = r2.downloadFailed(r3, r7)
            return r3
        L29:
            r2.closeCall()
            r2.resetTask()
            r2.mCurrentTask = r4
            r2.mCallback = r6
            com.ymnsdk.replugin.util.DownloadUtils r6 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r6.checkDirectories(r5)
            com.ymnsdk.replugin.patch.download.DownloadFileState r6 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r6.syncDownloadStatus(r4, r3, r5)
            com.ymnsdk.replugin.patch.download.DownloadFileState r5 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r5 = r5.getDownloadFileInfo(r4)
            boolean r5 = r5.getValid()
            if (r5 != 0) goto L56
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r3 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.ManualStop
            boolean r3 = r2.downloadFailed(r3, r7)
            return r3
        L56:
            java.lang.String r5 = "到了execute"
            android.util.Log.e(r1, r5)
            okhttp3.OkHttpClient r5 = com.ymnsdk.replugin.patch.download.FileDownloader.mDownloadClient
            okhttp3.Request r3 = r2.newRequest(r3, r4)
            okhttp3.Response r3 = r2.execute(r5, r3)
            java.lang.String r4 = "到了execute,有响应"
            android.util.Log.e(r1, r4)
            if (r3 == 0) goto L79
            int r4 = r3.code()
            r5 = 416(0x1a0, float:5.83E-43)
            if (r4 != r5) goto L79
            boolean r3 = r2.downloadSuccess(r7)
            return r3
        L79:
            if (r3 == 0) goto Lb5
            boolean r4 = r3.isSuccessful()
            if (r4 == 0) goto Lb5
            okhttp3.ResponseBody r4 = r3.body()
            if (r4 != 0) goto L88
            goto Lb5
        L88:
            okhttp3.ResponseBody r4 = r3.body()     // Catch: java.lang.Exception -> La7
            r2.writeDownloadStream(r4, r7)     // Catch: java.lang.Throwable -> L99
            r3.close()     // Catch: java.lang.Throwable -> L99
            if (r4 == 0) goto L97
            r4.close()     // Catch: java.lang.Exception -> La7
        L97:
            r3 = 1
            return r3
        L99:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L9b
        L9b:
            r6 = move-exception
            if (r4 == 0) goto La6
            r4.close()     // Catch: java.lang.Throwable -> La2
            goto La6
        La2:
            r4 = move-exception
            r5.addSuppressed(r4)     // Catch: java.lang.Exception -> La7
        La6:
            throw r6     // Catch: java.lang.Exception -> La7
        La7:
            r4 = move-exception
            r4.printStackTrace()
            r3.close()
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r3 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException
            boolean r3 = r2.downloadFailed(r3, r7)
            return r3
        Lb5:
            com.ymnsdk.replugin.patch.download.DownloadCode$Code r3 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail
            boolean r3 = r2.downloadFailed(r3, r7)
            return r3
    }

    public okhttp3.Response execute(okhttp3.OkHttpClient r1, okhttp3.Request r2) {
            r0 = this;
            okhttp3.Call r1 = r1.newCall(r2)
            r0.mCurrentCall = r1
            okhttp3.Response r1 = r1.execute()     // Catch: java.io.IOException -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public void initDownloadClient() {
            r7 = this;
            okhttp3.OkHttpClient r0 = com.ymnsdk.replugin.patch.download.FileDownloader.mDownloadClient
            if (r0 != 0) goto L3d
            okhttp3.ConnectionPool r0 = new okhttp3.ConnectionPool
            r1 = 1024(0x400, float:1.435E-42)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MINUTES
            r3 = 30
            r0.<init>(r1, r3, r2)
            okhttp3.OkHttpClient r1 = new okhttp3.OkHttpClient
            r1.<init>()
            com.ymnsdk.replugin.patch.download.FileDownloader.mDownloadClient = r1
            okhttp3.OkHttpClient$Builder r1 = r1.newBuilder()
            r5 = 5
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS
            okhttp3.OkHttpClient$Builder r1 = r1.connectTimeout(r5, r2)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS
            okhttp3.OkHttpClient$Builder r1 = r1.readTimeout(r3, r2)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS
            okhttp3.OkHttpClient$Builder r1 = r1.writeTimeout(r3, r2)
            okhttp3.OkHttpClient$Builder r0 = r1.connectionPool(r0)
            okhttp3.Interceptor r1 = r7.mDownloadResume
            r0.addInterceptor(r1)
            okhttp3.OkHttpClient r0 = r0.build()
            com.ymnsdk.replugin.patch.download.FileDownloader.mDownloadClient = r0
        L3d:
            return
    }

    public okhttp3.Request newRequest(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            okhttp3.Request$Builder r0 = new okhttp3.Request$Builder
            r0.<init>()
            okhttp3.Request$Builder r2 = r0.url(r2)
            okhttp3.Request$Builder r2 = r2.tag(r3)
            okhttp3.Request r2 = r2.build()
            return r2
    }

    public void pause() {
            r1 = this;
            r1.resetTask()
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r0.pause()
            r1.closeCall()
            return
    }

    public boolean pause(java.lang.String r2) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r0.pause(r2)
            java.lang.String r0 = r1.mCurrentTask
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L14
            r1.closeCall()
            r2 = 1
            return r2
        L14:
            r2 = 0
            return r2
    }

    public void resetTask() {
            r1 = this;
            r0 = 0
            r1.mCurrentTask = r0
            return
    }

    public void resume() {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r0.resume()
            return
    }

    public boolean resume(java.lang.String r2) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r0.resume(r2)
            r2 = 1
            return r2
    }
}
