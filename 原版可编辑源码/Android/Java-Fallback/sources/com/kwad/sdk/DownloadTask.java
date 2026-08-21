package com.kwad.sdk;

public class DownloadTask implements java.io.Serializable {
    private static final long serialVersionUID = -7092669850073266500L;
    public boolean downloadEnablePause;
    private int mAllowedNetworkTypes;
    protected transient com.kwad.framework.filedownloader.a mBaseDownloadTask;
    private java.lang.String mDestinationDir;
    private java.lang.String mDestinationFileName;
    private transient java.util.List<com.kwad.sdk.a> mDownloadListeners;
    private boolean mIsCanceled;
    private int mNotificationVisibility;
    private java.util.Map<java.lang.String, java.lang.String> mRequestHeaders;
    private java.io.Serializable mTag;
    private java.lang.String mUrl;
    private boolean mUserPause;
    private boolean mWakeInstallApk;
    private boolean notificationRemoved;






    public static class DownloadRequest implements java.io.Serializable {
        private static final long serialVersionUID = -3638290207248829674L;
        public boolean downloadEnablePause;
        private int mAllowedNetworkTypes;
        private java.lang.String mDestinationDir;
        private java.lang.String mDestinationFileName;
        private java.lang.String mDownloadUrl;
        private boolean mInstallAfterDownload;

        @java.lang.Deprecated
        private boolean mIsPhotoAdDownloadRequest;
        private int mNotificationVisibility;
        private final java.util.Map<java.lang.String, java.lang.String> mRequestHeaders;
        private java.io.Serializable mTag;

        public DownloadRequest(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r2.mRequestHeaders = r0
                r0 = 1
                r2.mInstallAfterDownload = r0
                r0 = 0
                r2.mIsPhotoAdDownloadRequest = r0
                r1 = 3
                r2.mAllowedNetworkTypes = r1
                r2.mNotificationVisibility = r0
                r2.downloadEnablePause = r0
                com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
                java.io.File r0 = r0.wQ()
                java.lang.String r0 = r0.getPath()
                r2.mDestinationDir = r0
                r2.mDownloadUrl = r3
                com.kwad.sdk.c r3 = com.kwad.sdk.c.wP()
                android.content.Context r3 = r3.getContext()
                android.net.NetworkInfo r3 = com.kwad.sdk.utils.ag.ci(r3)
                if (r3 == 0) goto L3e
                int r3 = r3.getType()
                if (r3 != 0) goto L3e
                r2.mAllowedNetworkTypes = r1
                return
            L3e:
                r3 = 2
                r2.mAllowedNetworkTypes = r3
                return
        }

        static boolean access$000(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                boolean r0 = r0.mInstallAfterDownload
                return r0
        }

        static java.lang.String access$100(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                java.lang.String r0 = r0.mDownloadUrl
                return r0
        }

        static int access$200(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                int r0 = r0.mAllowedNetworkTypes
                return r0
        }

        static int access$300(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                int r0 = r0.mNotificationVisibility
                return r0
        }

        static java.lang.String access$400(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                java.lang.String r0 = r0.mDestinationDir
                return r0
        }

        static java.lang.String access$500(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                java.lang.String r0 = r0.mDestinationFileName
                return r0
        }

        static java.util.Map access$600(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                java.util.Map<java.lang.String, java.lang.String> r0 = r0.mRequestHeaders
                return r0
        }

        static java.io.Serializable access$700(com.kwad.sdk.DownloadTask.DownloadRequest r0) {
                java.io.Serializable r0 = r0.mTag
                return r0
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest addRequestHeader(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.kwad.sdk.utils.ao.fE(r2)
                java.lang.String r0 = ":"
                boolean r0 = r2.contains(r0)
                if (r0 != 0) goto L15
                if (r3 != 0) goto Lf
                java.lang.String r3 = ""
            Lf:
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.mRequestHeaders
                r0.put(r2, r3)
                return r1
            L15:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "header may not contain ':'"
                r2.<init>(r3)
                throw r2
        }

        public int getAllowedNetworkTypes() {
                r1 = this;
                int r0 = r1.mAllowedNetworkTypes
                return r0
        }

        public java.lang.String getDestinationDir() {
                r1 = this;
                java.lang.String r0 = r1.mDestinationDir
                return r0
        }

        public java.lang.String getDestinationFileName() {
                r1 = this;
                java.lang.String r0 = r1.mDestinationFileName
                return r0
        }

        public java.lang.String getDownloadUrl() {
                r1 = this;
                java.lang.String r0 = r1.mDownloadUrl
                return r0
        }

        public java.io.Serializable getTag() {
                r1 = this;
                java.io.Serializable r0 = r1.mTag
                return r0
        }

        public boolean isDownloadEnablePause() {
                r1 = this;
                boolean r0 = r1.downloadEnablePause
                return r0
        }

        public boolean isPhotoAdDownloadRequest() {
                r1 = this;
                boolean r0 = r1.mIsPhotoAdDownloadRequest
                return r0
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setAllowedNetworkTypes(int r1) {
                r0 = this;
                r0.mAllowedNetworkTypes = r1
                return r0
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setDestinationDir(java.lang.String r1) {
                r0 = this;
                r0.mDestinationDir = r1
                return r0
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setDestinationFileName(java.lang.String r1) {
                r0 = this;
                r0.mDestinationFileName = r1
                return r0
        }

        public void setDownloadEnablePause(boolean r1) {
                r0 = this;
                r0.downloadEnablePause = r1
                return
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setInstallAfterDownload(boolean r1) {
                r0 = this;
                r0.mInstallAfterDownload = r1
                return r0
        }

        public void setIsPhotoAdDownloadRequest() {
                r1 = this;
                r0 = 1
                r1.mIsPhotoAdDownloadRequest = r0
                return
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setNotificationVisibility(int r1) {
                r0 = this;
                r0.mNotificationVisibility = r1
                return r0
        }

        public com.kwad.sdk.DownloadTask.DownloadRequest setTag(java.io.Serializable r1) {
                r0 = this;
                r0.mTag = r1
                return r0
        }
    }

    public DownloadTask(com.kwad.sdk.DownloadTask.DownloadRequest r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mDownloadListeners = r0
            r0 = 0
            r1.mIsCanceled = r0
            r1.downloadEnablePause = r0
            r1.notificationRemoved = r0
            r1.initDownloadRequestParams(r2)
            r1.instantiateDownloadTask()
            r1.initDownloadTaskParams()
            return
    }

    static void access$1000(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0.onPending(r1, r2, r3)
            return
    }

    static void access$1100(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0.onDownloading(r1, r2, r3)
            return
    }

    static void access$1200(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1) {
            r0.onBlockCompleted(r1)
            return
    }

    static void access$1300(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1) {
            r0.onCompleted(r1)
            return
    }

    static void access$1400(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0.onPause(r1, r2, r3)
            return
    }

    static void access$1500(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1, java.lang.Throwable r2) {
            r0.onError(r1, r2)
            return
    }

    static void access$1600(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1) {
            r0.onWarn(r1)
            return
    }

    static void access$800(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1, java.lang.String r2, boolean r3, int r4, int r5) {
            r0.onConnected(r1, r2, r3, r4, r5)
            return
    }

    static void access$900(com.kwad.sdk.DownloadTask r0, com.kwad.framework.filedownloader.a r1) {
            r0.onStarted(r1)
            return
    }

    private void initDownloadRequestParams(com.kwad.sdk.DownloadTask.DownloadRequest r2) {
            r1 = this;
            boolean r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$000(r2)
            r1.mWakeInstallApk = r0
            java.lang.String r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$100(r2)
            r1.mUrl = r0
            int r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$200(r2)
            r1.mAllowedNetworkTypes = r0
            int r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$300(r2)
            r1.mNotificationVisibility = r0
            java.lang.String r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$400(r2)
            r1.mDestinationDir = r0
            java.lang.String r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$500(r2)
            r1.mDestinationFileName = r0
            java.util.Map r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$600(r2)
            r1.mRequestHeaders = r0
            java.io.Serializable r0 = com.kwad.sdk.DownloadTask.DownloadRequest.access$700(r2)
            r1.mTag = r0
            boolean r2 = r2.isDownloadEnablePause()
            r1.downloadEnablePause = r2
            return
    }

    private void initDownloadTaskParams() {
            r4 = this;
            com.kwad.framework.filedownloader.a r0 = r4.mBaseDownloadTask
            java.io.Serializable r1 = r4.mTag
            r0.e(r1)
            com.kwad.framework.filedownloader.a r0 = r4.mBaseDownloadTask
            int r1 = r4.mAllowedNetworkTypes
            r1 = r1 ^ 2
            if (r1 != 0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            r0.aV(r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.mRequestHeaders
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L1f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L48
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            com.kwad.framework.filedownloader.a r2 = r4.mBaseDownloadTask
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r2.aV(r3)
            com.kwad.framework.filedownloader.a r2 = r4.mBaseDownloadTask
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r2.m(r3, r1)
            goto L1f
        L48:
            return
    }

    private void notify(com.kwad.sdk.DownloadTask r3, com.kwad.sdk.g.a<com.kwad.sdk.d> r4) {
            r2 = this;
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
            com.kwad.sdk.d r0 = r0.wR()
            if (r0 != 0) goto Lb
            return
        Lb:
            boolean r1 = r3.isCanceled()
            if (r1 == 0) goto L19
            int r3 = r3.getId()
            r0.bO(r3)
            return
        L19:
            r4.accept(r0)
            return
    }

    private void notifyDownloadCanceled() {
            r2 = this;
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
            com.kwad.sdk.d r0 = r0.wR()
            if (r0 != 0) goto Lb
            return
        Lb:
            int r1 = r2.getId()
            r0.bO(r1)
            return
    }

    private void notifyDownloadCompleted(com.kwad.framework.filedownloader.a r1) {
            r0 = this;
            int r1 = r0.mNotificationVisibility
            r1 = r1 & 2
            if (r1 == 0) goto Le
            com.kwad.sdk.DownloadTask$3 r1 = new com.kwad.sdk.DownloadTask$3
            r1.<init>(r0)
            r0.notify(r0, r1)
        Le:
            return
    }

    private void notifyDownloadError(com.kwad.framework.filedownloader.a r1) {
            r0 = this;
            int r1 = r0.mNotificationVisibility
            r1 = r1 & 1
            if (r1 == 0) goto Le
            com.kwad.sdk.DownloadTask$5 r1 = new com.kwad.sdk.DownloadTask$5
            r1.<init>(r0)
            r0.notify(r0, r1)
        Le:
            return
    }

    private void notifyDownloadPending() {
            r1 = this;
            int r0 = r1.mNotificationVisibility
            r0 = r0 & 2
            if (r0 == 0) goto Le
            com.kwad.sdk.DownloadTask$2 r0 = new com.kwad.sdk.DownloadTask$2
            r0.<init>(r1)
            r1.notify(r1, r0)
        Le:
            return
    }

    private void notifyDownloadProgress(com.kwad.framework.filedownloader.a r2, boolean r3) {
            r1 = this;
            int r0 = r2.getSmallFileTotalBytes()
            if (r0 != 0) goto Ld
            int r0 = r2.getSmallFileSoFarBytes()
            if (r0 != 0) goto Ld
            return
        Ld:
            java.lang.String r2 = r2.getFilename()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L18
            return
        L18:
            int r2 = r1.mNotificationVisibility
            r2 = r2 & 1
            if (r2 == 0) goto L26
            com.kwad.sdk.DownloadTask$4 r2 = new com.kwad.sdk.DownloadTask$4
            r2.<init>(r1, r3)
            r1.notify(r1, r2)
        L26:
            return
    }

    private void onBlockCompleted(com.kwad.framework.filedownloader.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r2 = r1.mDownloadListeners     // Catch: java.lang.Exception -> L11
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L11
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L11
            if (r0 == 0) goto L10
            r2.next()     // Catch: java.lang.Exception -> L11
            goto L6
        L10:
            return
        L11:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void onCanceled(com.kwad.framework.filedownloader.a r3) {
            r2 = this;
            r0 = 1
            r2.mIsCanceled = r0     // Catch: java.lang.Exception -> L34
            java.util.List<com.kwad.sdk.a> r0 = r2.mDownloadListeners     // Catch: java.lang.Exception -> L34
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L34
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L34
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L34
            com.kwad.sdk.a r1 = (com.kwad.sdk.a) r1     // Catch: java.lang.Exception -> L34
            r1.d(r2)     // Catch: java.lang.Exception -> L34
            goto L9
        L19:
            r3.cancel()     // Catch: java.lang.Exception -> L34
            r2.notifyDownloadCanceled()     // Catch: java.lang.Exception -> L34
            com.kwad.framework.filedownloader.r r3 = com.kwad.framework.filedownloader.r.tW()     // Catch: java.lang.Exception -> L34
            int r0 = r2.getId()     // Catch: java.lang.Exception -> L34
            com.kwad.framework.filedownloader.a r1 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = r1.getTargetFilePath()     // Catch: java.lang.Exception -> L34
            r3.i(r0, r1)     // Catch: java.lang.Exception -> L34
            r2.releaseDownloadTask()     // Catch: java.lang.Exception -> L34
            return
        L34:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private void onCompleted(com.kwad.framework.filedownloader.a r3) {
            r2 = this;
            java.util.List<com.kwad.sdk.a> r0 = r2.mDownloadListeners     // Catch: java.lang.Exception -> L21
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L21
        L6:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L21
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L21
            com.kwad.sdk.a r1 = (com.kwad.sdk.a) r1     // Catch: java.lang.Exception -> L21
            r1.a(r2)     // Catch: java.lang.Exception -> L21
            goto L6
        L16:
            r2.notifyDownloadCompleted(r3)     // Catch: java.lang.Exception -> L21
            boolean r3 = r2.mWakeInstallApk     // Catch: java.lang.Exception -> L21
            if (r3 == 0) goto L20
            r2.installApk()     // Catch: java.lang.Exception -> L21
        L20:
            return
        L21:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private void onConnected(com.kwad.framework.filedownloader.a r1, java.lang.String r2, boolean r3, int r4, int r5) {
            r0 = this;
            long r2 = (long) r5
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L1e
            java.lang.String r5 = r0.mDestinationDir     // Catch: java.lang.Exception -> L1e
            r4.<init>(r5)     // Catch: java.lang.Exception -> L1e
            boolean r4 = r4.exists()     // Catch: java.lang.Exception -> L1e
            if (r4 == 0) goto L15
            java.lang.String r4 = r0.mDestinationDir     // Catch: java.lang.Exception -> L1e
        L10:
            long r4 = com.kwad.sdk.crash.utils.h.getAvailableBytes(r4)     // Catch: java.lang.Exception -> L1e
            goto L23
        L15:
            java.io.File r4 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L1e
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Exception -> L1e
            goto L10
        L1e:
            r4 = move-exception
            r4.printStackTrace()
            r4 = r2
        L23:
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 >= 0) goto L39
            com.kwad.sdk.c r2 = com.kwad.sdk.c.wP()
            int r3 = r1.getId()
            r2.cancel(r3)
            r0.notifyDownloadCanceled()
            r0.onLowStorage(r1)
            return
        L39:
            java.util.List<com.kwad.sdk.a> r2 = r0.mDownloadListeners     // Catch: java.lang.Exception -> L4e
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L4e
        L3f:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L4e
            if (r3 == 0) goto L49
            r2.next()     // Catch: java.lang.Exception -> L4e
            goto L3f
        L49:
            r2 = 0
            r0.notifyDownloadProgress(r1, r2)     // Catch: java.lang.Exception -> L4e
            return
        L4e:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void onDownloading(com.kwad.framework.filedownloader.a r2, int r3, int r4) {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r2 = r1.mDownloadListeners     // Catch: java.lang.Exception -> L1d
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L1d
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L1d
            com.kwad.sdk.a r0 = (com.kwad.sdk.a) r0     // Catch: java.lang.Exception -> L1d
            r0.a(r1, r3, r4)     // Catch: java.lang.Exception -> L1d
            goto L6
        L16:
            com.kwad.framework.filedownloader.a r2 = r1.mBaseDownloadTask     // Catch: java.lang.Exception -> L1d
            r3 = 0
            r1.notifyDownloadProgress(r2, r3)     // Catch: java.lang.Exception -> L1d
            return
        L1d:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void onError(com.kwad.framework.filedownloader.a r3, java.lang.Throwable r4) {
            r2 = this;
            java.util.List<com.kwad.sdk.a> r0 = r2.mDownloadListeners     // Catch: java.lang.Exception -> L1a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L1a
        L6:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L1a
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L1a
            com.kwad.sdk.a r1 = (com.kwad.sdk.a) r1     // Catch: java.lang.Exception -> L1a
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L1a
            goto L6
        L16:
            r2.notifyDownloadError(r3)     // Catch: java.lang.Exception -> L1a
            return
        L1a:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private void onLowStorage(com.kwad.framework.filedownloader.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r2 = r1.mDownloadListeners     // Catch: java.lang.Exception -> L17
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L17
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L17
            com.kwad.sdk.a r0 = (com.kwad.sdk.a) r0     // Catch: java.lang.Exception -> L17
            r0.f(r1)     // Catch: java.lang.Exception -> L17
            goto L6
        L16:
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void onPause(com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0 = this;
            java.util.List<com.kwad.sdk.a> r2 = r0.mDownloadListeners     // Catch: java.lang.Exception -> L1b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L1b
        L6:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L1b
            if (r3 == 0) goto L16
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L1b
            com.kwad.sdk.a r3 = (com.kwad.sdk.a) r3     // Catch: java.lang.Exception -> L1b
            r3.c(r0)     // Catch: java.lang.Exception -> L1b
            goto L6
        L16:
            r2 = 1
            r0.notifyDownloadProgress(r1, r2)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void onPending(com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0 = this;
            java.util.List<com.kwad.sdk.a> r1 = r0.mDownloadListeners     // Catch: java.lang.Exception -> L14
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L14
        L6:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L14
            if (r2 == 0) goto L10
            r1.next()     // Catch: java.lang.Exception -> L14
            goto L6
        L10:
            r0.notifyDownloadPending()     // Catch: java.lang.Exception -> L14
            return
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void onResume(com.kwad.framework.filedownloader.a r1, int r2, int r3) {
            r0 = this;
            java.util.List<com.kwad.sdk.a> r2 = r0.mDownloadListeners     // Catch: java.lang.Exception -> L1b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L1b
        L6:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L1b
            if (r3 == 0) goto L16
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L1b
            com.kwad.sdk.a r3 = (com.kwad.sdk.a) r3     // Catch: java.lang.Exception -> L1b
            r3.e(r0)     // Catch: java.lang.Exception -> L1b
            goto L6
        L16:
            r2 = 1
            r0.notifyDownloadProgress(r1, r2)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void onStarted(com.kwad.framework.filedownloader.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r2 = r1.mDownloadListeners     // Catch: java.lang.Exception -> L17
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L17
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L17
            com.kwad.sdk.a r0 = (com.kwad.sdk.a) r0     // Catch: java.lang.Exception -> L17
            r0.b(r1)     // Catch: java.lang.Exception -> L17
            goto L6
        L16:
            return
        L17:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void onWarn(com.kwad.framework.filedownloader.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r2 = r1.mDownloadListeners     // Catch: java.lang.Exception -> L11
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L11
        L6:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L11
            if (r0 == 0) goto L10
            r2.next()     // Catch: java.lang.Exception -> L11
            goto L6
        L10:
            return
        L11:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void readObject(java.io.ObjectInputStream r1) {
            r0 = this;
            r1.defaultReadObject()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.mDownloadListeners = r1
            return
    }

    private void releaseDownloadTask() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            r1 = 0
            r0.a(r1)
            r2.clearListener()
            return
    }

    public void addListener(com.kwad.sdk.a r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            java.util.List<com.kwad.sdk.a> r0 = r1.mDownloadListeners
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Lf
            java.util.List<com.kwad.sdk.a> r0 = r1.mDownloadListeners
            r0.add(r2)
        Lf:
            return
    }

    void cancel() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask     // Catch: java.lang.Exception -> L6
            r1.onCanceled(r0)     // Catch: java.lang.Exception -> L6
            return
        L6:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public void clearListener() {
            r1 = this;
            java.util.List<com.kwad.sdk.a> r0 = r1.mDownloadListeners
            r0.clear()
            return
    }

    int downLoadProgress() {
            r5 = this;
            com.kwad.framework.filedownloader.a r0 = r5.mBaseDownloadTask
            int r0 = r0.getSmallFileTotalBytes()
            long r0 = (long) r0
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            if (r2 == 0) goto L1c
            r2 = 1120403456(0x42c80000, float:100.0)
            com.kwad.framework.filedownloader.a r4 = r5.mBaseDownloadTask
            int r4 = r4.getSmallFileSoFarBytes()
            float r4 = (float) r4
            float r4 = r4 * r2
            float r0 = (float) r0
            float r4 = r4 / r0
            int r0 = (int) r4
            goto L1d
        L1c:
            r0 = r3
        L1d:
            r1 = 100
            if (r0 != r1) goto L33
            java.io.File r1 = new java.io.File
            com.kwad.framework.filedownloader.a r2 = r5.mBaseDownloadTask
            java.lang.String r2 = r2.getTargetFilePath()
            r1.<init>(r2)
            boolean r1 = com.kwad.sdk.utils.q.M(r1)
            if (r1 != 0) goto L33
            goto L34
        L33:
            r3 = r0
        L34:
            return r3
    }

    public int getAllowedNetworkTypes() {
            r1 = this;
            int r0 = r1.mAllowedNetworkTypes
            return r0
    }

    public java.lang.String getDestinationDir() {
            r1 = this;
            java.lang.String r0 = r1.mDestinationDir
            return r0
    }

    public java.lang.String getFilename() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            java.lang.String r0 = r0.getFilename()
            return r0
    }

    public int getId() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            int r0 = r0.getId()
            return r0
    }

    public int getNotificationVisibility() {
            r1 = this;
            int r0 = r1.mNotificationVisibility
            return r0
    }

    public java.lang.String getPath() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            java.lang.String r0 = r0.getPath()
            return r0
    }

    public int getSmallFileSoFarBytes() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            int r0 = r0.getSmallFileSoFarBytes()
            return r0
    }

    public int getSmallFileTotalBytes() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            int r0 = r0.getSmallFileTotalBytes()
            return r0
    }

    public int getSpeed() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            int r0 = r0.getSpeed()
            return r0
    }

    public int getStatus() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            byte r0 = r0.sX()
            return r0
    }

    public long getStatusUpdateTime() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            long r0 = r0.getStatusUpdateTime()
            return r0
    }

    public java.lang.Object getTag() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            java.lang.Object r0 = r0.getTag()
            return r0
    }

    public java.lang.String getTargetFilePath() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            java.lang.String r0 = r0.getTargetFilePath()
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.mUrl
            return r0
    }

    void installApk() {
            r1 = this;
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()     // Catch: java.lang.Exception -> L8
            r0.g(r1)     // Catch: java.lang.Exception -> L8
            return
        L8:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    void instantiateDownloadTask() {
            r4 = this;
            com.kwad.framework.filedownloader.r.tW()
            java.lang.String r0 = r4.mUrl
            com.kwad.framework.filedownloader.a r0 = com.kwad.framework.filedownloader.r.aX(r0)
            r1 = 1
            com.kwad.framework.filedownloader.a r0 = r0.aT(r1)
            r1 = 3
            com.kwad.framework.filedownloader.a r0 = r0.aS(r1)
            java.lang.String r1 = r4.mDestinationFileName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1e
            java.lang.String r1 = r4.mDestinationDir
            goto L2b
        L1e:
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r4.mDestinationDir
            java.lang.String r3 = r4.mDestinationFileName
            r1.<init>(r2, r3)
            java.lang.String r1 = r1.getPath()
        L2b:
            java.lang.String r2 = r4.mDestinationFileName
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.kwad.framework.filedownloader.a r0 = r0.b(r1, r2)
            com.kwad.sdk.DownloadTask$1 r1 = new com.kwad.sdk.DownloadTask$1
            r1.<init>(r4)
            com.kwad.framework.filedownloader.a r0 = r0.a(r1)
            r4.mBaseDownloadTask = r0
            return
    }

    public boolean isCanceled() {
            r1 = this;
            boolean r0 = r1.mIsCanceled
            return r0
    }

    public boolean isCompleted() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            byte r0 = r0.sX()
            r1 = -3
            if (r0 != r1) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public boolean isError() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            byte r0 = r0.sX()
            r1 = -1
            if (r0 != r1) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public boolean isErrorBecauseWifiRequired() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            boolean r0 = r0.te()
            if (r0 == 0) goto L1a
            boolean r0 = r1.isError()
            if (r0 == 0) goto L1a
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            java.lang.Throwable r0 = r0.sZ()
            boolean r0 = r0 instanceof com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException
            if (r0 == 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public boolean isInvalid() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            byte r0 = r0.sX()
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public boolean isNotificationRemoved() {
            r1 = this;
            boolean r0 = r1.notificationRemoved
            return r0
    }

    public boolean isPaused() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            byte r0 = r0.sX()
            r1 = -2
            if (r0 != r1) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public boolean isRunning() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            boolean r0 = r0.isRunning()
            return r0
    }

    boolean isUserPause() {
            r1 = this;
            boolean r0 = r1.mUserPause
            return r0
    }

    void pause() {
            r2 = this;
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            r0.pause()
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask
            r1 = 1
            r2.notifyDownloadProgress(r0, r1)
            return
    }

    public void removeListener(com.kwad.sdk.a r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.sdk.a> r0 = r1.mDownloadListeners
            r0.remove(r2)
        L7:
            return
    }

    void resume(com.kwad.sdk.DownloadTask.DownloadRequest r3) {
            r2 = this;
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
            android.content.Context r0 = r0.getContext()
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 != 0) goto Lf
            return
        Lf:
            if (r3 == 0) goto L17
            r2.initDownloadRequestParams(r3)
            r2.initDownloadTaskParams()
        L17:
            r3 = 0
            r2.mUserPause = r3
            com.kwad.framework.filedownloader.a r3 = r2.mBaseDownloadTask
            boolean r3 = r3.isRunning()
            if (r3 != 0) goto L4d
            com.kwad.framework.filedownloader.a r3 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L48
            byte r3 = r3.sX()     // Catch: java.lang.Exception -> L48
            boolean r3 = com.kwad.framework.filedownloader.d.d.bA(r3)     // Catch: java.lang.Exception -> L48
            if (r3 == 0) goto L33
            com.kwad.framework.filedownloader.a r3 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L48
            r3.sP()     // Catch: java.lang.Exception -> L48
        L33:
            r2.submit()     // Catch: java.lang.Exception -> L48
            com.kwad.framework.filedownloader.a r3 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L48
            com.kwad.framework.filedownloader.a r0 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L48
            int r0 = r0.getSmallFileSoFarBytes()     // Catch: java.lang.Exception -> L48
            com.kwad.framework.filedownloader.a r1 = r2.mBaseDownloadTask     // Catch: java.lang.Exception -> L48
            int r1 = r1.getSmallFileTotalBytes()     // Catch: java.lang.Exception -> L48
            r2.onResume(r3, r0, r1)     // Catch: java.lang.Exception -> L48
            return
        L48:
            r3 = move-exception
            r3.printStackTrace()
            return
        L4d:
            com.kwad.framework.filedownloader.a r3 = r2.mBaseDownloadTask
            int r0 = r3.getSmallFileSoFarBytes()
            com.kwad.framework.filedownloader.a r1 = r2.mBaseDownloadTask
            int r1 = r1.getSmallFileTotalBytes()
            r2.onResume(r3, r0, r1)
            return
    }

    public void setAllowedNetworkTypes(int r2) {
            r1 = this;
            r1.mAllowedNetworkTypes = r2
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            r2 = r2 ^ 2
            if (r2 != 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            r0.aV(r2)
            return
    }

    public void setNotificationRemoved(boolean r1) {
            r0 = this;
            r0.notificationRemoved = r1
            return
    }

    public void submit() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask     // Catch: java.lang.Throwable -> Le
            boolean r0 = r0.isRunning()     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Ld
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask     // Catch: java.lang.Throwable -> Le
            r0.start()     // Catch: java.lang.Throwable -> Le
        Ld:
            return
        Le:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    com.kwad.framework.filedownloader.a unwrap() {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r1.mBaseDownloadTask
            return r0
    }

    void userPause() {
            r1 = this;
            r0 = 1
            r1.mUserPause = r0
            r1.pause()
            return
    }
}
