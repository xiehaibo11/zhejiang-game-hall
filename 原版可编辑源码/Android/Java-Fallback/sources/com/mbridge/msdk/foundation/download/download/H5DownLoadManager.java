package com.mbridge.msdk.foundation.download.download;

public class H5DownLoadManager {
    public static final java.lang.String SP_ENDING_PAGE_SAVE_TIME = "ending_page_save_time";
    public static final java.lang.String SP_ENDING_PAGE_SOURCE = "ending_page_source";
    private static final java.lang.String TAG = "H5DownLoadManager";
    private static com.mbridge.msdk.foundation.download.download.H5DownLoadManager sH5Manager;
    private com.mbridge.msdk.foundation.download.download.HTMLResourceManager htmlResourceManager;
    private boolean isUseDownloadModule;
    private java.util.concurrent.CopyOnWriteArrayList<java.lang.String> mResDownloadingList;
    private java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> mResDownloadingMap;
    private com.mbridge.msdk.foundation.download.download.ResourceManager resourceManager;




    public interface H5ResDownloadListerInter {
        void onFailed(java.lang.String r1, java.lang.String r2);

        void onSuccess(java.lang.String r1);
    }

    public interface IH5SourceDownloadListener extends com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter {
    }

    public interface IOnDownLoadH5Source {
        void onFailed(java.lang.String r1);

        void onStart();

        void onSuccess(java.lang.String r1, byte[] r2, java.lang.String r3);
    }

    public interface ZipDownloadListener extends com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter {
    }

    private H5DownLoadManager() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.isUseDownloadModule = r0
            com.mbridge.msdk.foundation.download.download.ResourceManager r0 = com.mbridge.msdk.foundation.download.download.ResourceManager.getinstance()     // Catch: java.lang.Throwable -> L3a
            r3.resourceManager = r0     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()     // Catch: java.lang.Throwable -> L3a
            r3.htmlResourceManager = r0     // Catch: java.lang.Throwable -> L3a
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            r3.mResDownloadingList = r0     // Catch: java.lang.Throwable -> L3a
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            r3.mResDownloadingMap = r0     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L3a
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L44
            r1 = 1
            boolean r0 = r0.l(r1)     // Catch: java.lang.Throwable -> L3a
            r3.isUseDownloadModule = r0     // Catch: java.lang.Throwable -> L3a
            goto L44
        L3a:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "H5DownLoadManager"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L44:
            return
    }

    static com.mbridge.msdk.foundation.download.download.HTMLResourceManager access$000(com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0) {
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = r0.htmlResourceManager
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList access$100(com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0) {
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r0.mResDownloadingList
            return r0
    }

    private void downloadHTML(java.lang.String r4, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter r5) {
            r3 = this;
            java.lang.String r0 = "H5DownLoadManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "download url:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L31
            r1.append(r4)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L31
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r3.mResDownloadingList     // Catch: java.lang.Throwable -> L31
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L1f
            return
        L1f:
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r3.mResDownloadingList     // Catch: java.lang.Throwable -> L31
            r0.add(r4)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.download.download.DownloadTask r0 = com.mbridge.msdk.foundation.download.download.DownloadTask.getInstance()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$2 r1 = new com.mbridge.msdk.foundation.download.download.H5DownLoadManager$2     // Catch: java.lang.Throwable -> L31
            r1.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L31
            r0.runTask(r1)     // Catch: java.lang.Throwable -> L31
            goto L39
        L31:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L39
            r4.printStackTrace()
        L39:
            return
    }

    private void downloadHTMLByDownloadModule(java.lang.String r10, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter r11) {
            r9 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto Le
            if (r11 == 0) goto Ld
            java.lang.String r0 = "zip url is null"
            r11.onFailed(r0, r10)
        Ld:
            return
        Le:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L87
            r0.<init>(r10)     // Catch: java.lang.Exception -> L87
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.g
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r10)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            com.mbridge.msdk.foundation.download.DownloadMessage r8 = new com.mbridge.msdk.foundation.download.DownloadMessage
            java.lang.Object r3 = new java.lang.Object
            r3.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = ".html"
            r2.append(r1)
            java.lang.String r5 = r2.toString()
            r6 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r7 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_HTML
            r2 = r8
            r4 = r10
            r2.<init>(r3, r4, r5, r6, r7)
            com.mbridge.msdk.foundation.download.MBDownloadManager r1 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.download(r8)
            r2 = 30000(0x7530, double:1.4822E-319)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.withReadTimeout(r2)
            r2 = 20000(0x4e20, double:9.8813E-320)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.withConnectTimeout(r2)
            com.mbridge.msdk.foundation.download.DownloadPriority r2 = com.mbridge.msdk.foundation.download.DownloadPriority.HIGH
            com.mbridge.msdk.foundation.download.core.RequestBuilder r1 = r1.withDownloadPriority(r2)
            r2 = 1
            com.mbridge.msdk.foundation.download.core.RequestBuilder r1 = r1.withHttpRetryCounter(r2)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r1.withDirectoryPathInternal(r0)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$3 r1 = new com.mbridge.msdk.foundation.download.download.H5DownLoadManager$3
            r1.<init>(r9, r11, r10)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r10 = r0.withDownloadStateListener(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r10 = r10.build()
            r10.start()
            return
        L87:
            if (r11 == 0) goto L8e
            java.lang.String r0 = "zip url is unlawful"
            r11.onFailed(r0, r10)
        L8e:
            return
    }

    private void downloadZipByDownloadModule(java.lang.String r11, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener r12) {
            r10 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto Le
            if (r12 == 0) goto Ld
            java.lang.String r0 = "zip url is null"
            r12.onFailed(r11, r0)
        Ld:
            return
        Le:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L99
            r0.<init>(r11)     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.e
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r11)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = "/"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r3)
            r4.append(r1)
            java.lang.String r0 = r4.toString()
            com.mbridge.msdk.foundation.download.DownloadMessage r9 = new com.mbridge.msdk.foundation.download.DownloadMessage
            java.lang.Object r4 = new java.lang.Object
            r4.<init>()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = ".zip"
            r3.append(r1)
            java.lang.String r6 = r3.toString()
            r7 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r8 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_ZIP
            r3 = r9
            r5 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            com.mbridge.msdk.foundation.download.MBDownloadManager r11 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.download(r9)
            r3 = 30000(0x7530, double:1.4822E-319)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.withReadTimeout(r3)
            r3 = 20000(0x4e20, double:9.8813E-320)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.withConnectTimeout(r3)
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = com.mbridge.msdk.foundation.download.DownloadPriority.HIGH
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDownloadPriority(r1)
            r1 = 1
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withHttpRetryCounter(r1)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDirectoryPathInternal(r2)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$1 r1 = new com.mbridge.msdk.foundation.download.download.H5DownLoadManager$1
            r1.<init>(r10, r0, r12)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDownloadStateListener(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r11 = r11.build()
            r11.start()
            return
        L99:
            if (r12 == 0) goto La0
            java.lang.String r0 = "zip url is unlawful"
            r12.onFailed(r11, r0)
        La0:
            return
    }

    private void downloadZipByOldDownloadModule(java.lang.String r4, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener r5) {
            r3 = this;
            com.mbridge.msdk.foundation.download.download.ResourceManager r0 = r3.resourceManager     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = r0.getResDirFromCampaign(r4)     // Catch: java.lang.Exception -> L3b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L35
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r0 = r3.mResDownloadingMap     // Catch: java.lang.Exception -> L3b
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L22
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r0 = r3.mResDownloadingMap     // Catch: java.lang.Exception -> L3b
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Exception -> L3b
            com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener r0 = (com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener) r0     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L21
            r0.setZipDownloadListener(r5)     // Catch: java.lang.Exception -> L3b
        L21:
            return
        L22:
            com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener r0 = new com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener     // Catch: java.lang.Exception -> L3b
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r1 = r3.mResDownloadingMap     // Catch: java.lang.Exception -> L3b
            com.mbridge.msdk.foundation.download.download.ResourceManager r2 = r3.resourceManager     // Catch: java.lang.Exception -> L3b
            r0.<init>(r1, r2, r5, r4)     // Catch: java.lang.Exception -> L3b
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r1 = r3.mResDownloadingMap     // Catch: java.lang.Exception -> L3b
            r1.put(r4, r0)     // Catch: java.lang.Exception -> L3b
            r1 = 1
            com.mbridge.msdk.foundation.download.download.DownLoadUtils.getSourceCodeFromNetUrl(r4, r0, r1)     // Catch: java.lang.Exception -> L3b
            goto L4a
        L35:
            if (r5 == 0) goto L4a
            r5.onSuccess(r4)     // Catch: java.lang.Exception -> L3b
            goto L4a
        L3b:
            r0 = move-exception
            if (r5 == 0) goto L43
            java.lang.String r1 = "downloadzip failed"
            r5.onFailed(r4, r1)
        L43:
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L4a
            r0.printStackTrace()
        L4a:
            return
    }

    private java.lang.String getHtmlAddress(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = r1.htmlResourceManager
            if (r0 == 0) goto L8
            java.lang.String r2 = r0.getHtmlPathFromUrl(r2)
        L8:
            return r2
    }

    public static com.mbridge.msdk.foundation.download.download.H5DownLoadManager getInstance() {
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.sH5Manager
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.download.download.H5DownLoadManager> r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.sH5Manager     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = new com.mbridge.msdk.foundation.download.download.H5DownLoadManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager.sH5Manager = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.sH5Manager
            return r0
    }

    private long getPreSaveTimeFromSp(java.lang.String r6) {
            r5 = this;
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L30
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r3.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "ending_page_save_time"
            r3.append(r4)     // Catch: java.lang.Exception -> L30
            r3.append(r6)     // Catch: java.lang.Exception -> L30
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> L30
            java.lang.Long r3 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> L30
            java.lang.Object r6 = com.mbridge.msdk.foundation.tools.ag.b(r2, r6, r3)     // Catch: java.lang.Exception -> L30
            if (r6 == 0) goto L34
            boolean r2 = r6 instanceof java.lang.Long     // Catch: java.lang.Exception -> L30
            if (r2 == 0) goto L34
            java.lang.Long r6 = (java.lang.Long) r6     // Catch: java.lang.Exception -> L30
            long r0 = r6.longValue()     // Catch: java.lang.Exception -> L30
            return r0
        L30:
            r6 = move-exception
            r6.printStackTrace()
        L34:
            return r0
    }

    private void saveSourceContent(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "H5DownLoadManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "sourceContent:"
            r1.append(r2)     // Catch: java.lang.Exception -> L33
            r1.append(r4)     // Catch: java.lang.Exception -> L33
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L33
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "ending_page_source"
            r1.append(r2)     // Catch: java.lang.Exception -> L33
            r1.append(r5)     // Catch: java.lang.Exception -> L33
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.foundation.tools.ag.a(r0, r5, r4)     // Catch: java.lang.Exception -> L33
            goto L37
        L33:
            r4 = move-exception
            r4.printStackTrace()
        L37:
            return
    }

    private void updateEndingPageSaveTime(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L25
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L25
            r1.<init>()     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "ending_page_save_time"
            r1.append(r2)     // Catch: java.lang.Exception -> L25
            r1.append(r4)     // Catch: java.lang.Exception -> L25
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L25
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L25
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> L25
            com.mbridge.msdk.foundation.tools.ag.a(r0, r4, r1)     // Catch: java.lang.Exception -> L25
            goto L29
        L25:
            r4 = move-exception
            r4.printStackTrace()
        L29:
            return
    }

    public void download(java.lang.String r2) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$IH5SourceDownloadListener r0 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IH5SourceDownloadListener) r0
            r1.download(r2, r0)
            return
    }

    public void download(java.lang.String r2, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter r3) {
            r1 = this;
            boolean r0 = r1.isUseDownloadModule
            if (r0 == 0) goto L8
            r1.downloadHTMLByDownloadModule(r2, r3)
            goto Lb
        L8:
            r1.downloadHTML(r2, r3)
        Lb:
            return
    }

    public void downloadH5Res(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.downloadH5Res(r2, r0)
            return
    }

    public void downloadH5Res(java.lang.String r3, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter r4) {
            r2 = this;
            java.util.regex.Pattern r0 = android.util.Patterns.WEB_URL     // Catch: java.lang.Exception -> L37
            java.util.regex.Matcher r0 = r0.matcher(r3)     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.matches()     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L12
            boolean r0 = android.webkit.URLUtil.isValidUrl(r3)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L3b
        L12:
            android.net.Uri r0 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L37
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L37
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L37
            if (r1 != 0) goto L3b
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = ".zip"
            boolean r0 = r0.endsWith(r1)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L33
            r0 = r4
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r0     // Catch: java.lang.Exception -> L37
            r2.downloadZip(r3, r0)     // Catch: java.lang.Exception -> L37
            goto L36
        L33:
            r2.download(r3, r4)     // Catch: java.lang.Exception -> L37
        L36:
            return
        L37:
            r0 = move-exception
            r0.printStackTrace()
        L3b:
            if (r4 == 0) goto L42
            java.lang.String r0 = "The URL does not contain a path "
            r4.onFailed(r3, r0)
        L42:
            return
    }

    public void downloadZip(java.lang.String r2, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener r3) {
            r1 = this;
            boolean r0 = r1.isUseDownloadModule
            if (r0 == 0) goto L8
            r1.downloadZipByDownloadModule(r2, r3)
            return
        L8:
            r1.downloadZipByOldDownloadModule(r2, r3)
            return
    }

    public java.lang.String getH5ResAddress(java.lang.String r4) {
            r3 = this;
            java.util.regex.Pattern r0 = android.util.Patterns.WEB_URL     // Catch: java.lang.Exception -> L43
            java.util.regex.Matcher r0 = r0.matcher(r4)     // Catch: java.lang.Exception -> L43
            boolean r0 = r0.matches()     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L12
            boolean r0 = android.webkit.URLUtil.isValidUrl(r4)     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L47
        L12:
            android.net.Uri r0 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = r0.getPath()     // Catch: java.lang.Exception -> L43
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L43
            if (r2 != 0) goto L47
            java.lang.String r2 = "urlDebug"
            java.lang.String r0 = r0.getQueryParameter(r2)     // Catch: java.lang.Exception -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L2d
            return r4
        L2d:
            java.lang.String r0 = r1.toLowerCase()     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = ".zip"
            boolean r0 = r0.endsWith(r1)     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L3e
            java.lang.String r4 = r3.getResAddress(r4)     // Catch: java.lang.Exception -> L43
            return r4
        L3e:
            java.lang.String r4 = r3.getHtmlAddress(r4)     // Catch: java.lang.Exception -> L43
            return r4
        L43:
            r0 = move-exception
            r0.printStackTrace()
        L47:
            return r4
    }

    public java.lang.String getResAddress(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.download.ResourceManager r0 = r1.resourceManager
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.getResDirFromCampaign(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public java.lang.String getSourceContentFromSp(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2e
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2e
            r1.<init>()     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = "ending_page_source"
            r1.append(r2)     // Catch: java.lang.Exception -> L2e
            r1.append(r4)     // Catch: java.lang.Exception -> L2e
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L2e
            java.lang.String r1 = ""
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.ag.b(r0, r4, r1)     // Catch: java.lang.Exception -> L2e
            if (r4 == 0) goto L32
            boolean r0 = r4 instanceof java.lang.String     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L32
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L2e
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r4)     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L32
            return r4
        L2e:
            r4 = move-exception
            r4.printStackTrace()
        L32:
            r4 = 0
            return r4
    }
}
