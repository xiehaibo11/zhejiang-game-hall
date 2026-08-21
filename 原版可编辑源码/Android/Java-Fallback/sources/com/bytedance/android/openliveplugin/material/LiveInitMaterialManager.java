package com.bytedance.android.openliveplugin.material;

public class LiveInitMaterialManager {
    private static final java.lang.String FETCH_PLUGIN_SETTINGS_URL = "/webcast/openapi/pangle/setting/";
    private static final java.lang.String HOST = "https://webcast-open.douyin.com";
    private static final java.lang.String MATERIAL_NAME = "material";
    private static final java.lang.String TAG = "LiveInitMaterialManager";
    private volatile boolean isDownloading;
    private final java.util.concurrent.atomic.AtomicInteger mRetryCount;


    public LiveInitMaterialManager() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.mRetryCount = r0
            return
    }

    static com.bytedance.android.openliveplugin.material.ConfigParams access$000(com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0, android.content.Context r1) {
            com.bytedance.android.openliveplugin.material.ConfigParams r0 = r0.getLocalConfigParams(r1)
            return r0
    }

    static boolean access$102(com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0, boolean r1) {
            r0.isDownloading = r1
            return r1
    }

    static java.util.concurrent.atomic.AtomicInteger access$200(com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.mRetryCount
            return r0
    }

    static void access$300(com.bytedance.android.openliveplugin.material.LiveInitMaterialManager r0, android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.bytedance.android.openliveplugin.material.ILiveMaterialGet r5) {
            r0.download(r1, r2, r3, r4, r5)
            return
    }

    private void download(android.content.Context r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, com.bytedance.android.openliveplugin.material.ILiveMaterialGet r15) {
            r10 = this;
            boolean r0 = r10.isDownloading
            java.lang.String r1 = "LiveInitMaterialManager"
            if (r0 == 0) goto Lc
            java.lang.String r11 = "live init : Downloading..."
            com.bytedance.android.openliveplugin.material.TTLogger.d(r1, r11)
            return
        Lc:
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = com.ss.android.socialbase.downloader.downloader.Downloader.with(r11)     // Catch: java.lang.Throwable -> L42
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.url(r12)     // Catch: java.lang.Throwable -> L42
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.savePath(r13)     // Catch: java.lang.Throwable -> L42
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.name(r14)     // Catch: java.lang.Throwable -> L42
            r2 = 3
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.retryCount(r2)     // Catch: java.lang.Throwable -> L42
            r2 = 0
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needRetryDelay(r2)     // Catch: java.lang.Throwable -> L42
            com.bytedance.android.openliveplugin.material.LiveInitMaterialManager$1 r9 = new com.bytedance.android.openliveplugin.material.LiveInitMaterialManager$1     // Catch: java.lang.Throwable -> L42
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r15
            r6 = r12
            r7 = r13
            r8 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L42
            com.ss.android.socialbase.downloader.model.DownloadTask r11 = r0.subThreadListener(r9)     // Catch: java.lang.Throwable -> L42
            r11.download()     // Catch: java.lang.Throwable -> L42
            java.lang.String r11 = "live init : Download start."
            com.bytedance.android.openliveplugin.material.TTLogger.d(r1, r11)     // Catch: java.lang.Throwable -> L42
            r11 = 1
            r10.isDownloading = r11     // Catch: java.lang.Throwable -> L42
            goto L57
        L42:
            r11 = move-exception
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "live init : Download file error: "
            r12.append(r13)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            com.bytedance.android.openliveplugin.material.TTLogger.e(r1, r11)
        L57:
            return
    }

    private com.bytedance.android.openliveplugin.material.ConfigParams getLocalConfigParams(android.content.Context r9) {
            r8 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r9 = r8.getMaterialDownloadPath(r9)
            r0.<init>(r9)
            boolean r9 = r0.exists()
            r1 = 0
            if (r9 != 0) goto L11
            return r1
        L11:
            java.io.File[] r9 = r0.listFiles()
            if (r9 == 0) goto Lb1
            int r0 = r9.length
            if (r0 > 0) goto L1c
            goto Lb1
        L1c:
            int r0 = r9.length
            r2 = 0
            r3 = r1
            r4 = r3
        L20:
            if (r2 >= r0) goto L52
            r5 = r9[r2]
            boolean r6 = r5.isFile()
            if (r6 == 0) goto L37
            java.lang.String r6 = r5.getName()
            java.lang.String r7 = "_config"
            boolean r6 = r6.contains(r7)
            if (r6 == 0) goto L37
            r3 = r5
        L37:
            boolean r6 = r5.isFile()
            if (r6 == 0) goto L4a
            java.lang.String r6 = r5.getAbsolutePath()
            java.lang.String r7 = ".lic"
            boolean r6 = r6.endsWith(r7)
            if (r6 == 0) goto L4a
            r4 = r5
        L4a:
            if (r3 == 0) goto L4f
            if (r4 == 0) goto L4f
            goto L52
        L4f:
            int r2 = r2 + 1
            goto L20
        L52:
            if (r3 == 0) goto Lb1
            java.lang.String r9 = com.bytedance.android.openliveplugin.material.ZipFileUtil.readTextFile(r3)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L97
            r0.<init>(r9)     // Catch: org.json.JSONException -> L97
            com.bytedance.android.openliveplugin.material.ConfigParams r9 = new com.bytedance.android.openliveplugin.material.ConfigParams     // Catch: org.json.JSONException -> L97
            r9.<init>()     // Catch: org.json.JSONException -> L97
            java.lang.String r1 = "appid"
            long r1 = r0.optLong(r1)     // Catch: org.json.JSONException -> L94
            r9.appID = r1     // Catch: org.json.JSONException -> L94
            java.lang.String r1 = "webcast_appid"
            long r1 = r0.optLong(r1)     // Catch: org.json.JSONException -> L94
            r9.webcastAppID = r1     // Catch: org.json.JSONException -> L94
            java.lang.String r1 = "ttsdk_appid"
            long r1 = r0.optLong(r1)     // Catch: org.json.JSONException -> L94
            r9.ttsdkAppID = r1     // Catch: org.json.JSONException -> L94
            java.lang.String r1 = "client_key"
            java.lang.String r1 = r0.optString(r1)     // Catch: org.json.JSONException -> L94
            r9.clientKey = r1     // Catch: org.json.JSONException -> L94
            java.lang.String r1 = "version"
            long r0 = r0.optLong(r1)     // Catch: org.json.JSONException -> L94
            r9.version = r0     // Catch: org.json.JSONException -> L94
            if (r4 == 0) goto L92
            java.lang.String r0 = r4.getAbsolutePath()     // Catch: org.json.JSONException -> L94
            r9.ttSDKLicensePath = r0     // Catch: org.json.JSONException -> L94
        L92:
            r1 = r9
            goto Lb1
        L94:
            r0 = move-exception
            r1 = r9
            goto L98
        L97:
            r0 = move-exception
        L98:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r2 = "live init : parse local file error : "
            r9.append(r2)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            java.lang.String r2 = "LiveInitMaterialManager"
            com.bytedance.android.openliveplugin.material.TTLogger.e(r2, r9)
            r0.printStackTrace()
        Lb1:
            return r1
    }

    private java.lang.String getMaterialDownloadPath(android.content.Context r2) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = r2.getFilesDir()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "pangle_"
            r0.append(r2)
            java.lang.String r2 = "com.byted.live.lite"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = ".msdata_lc"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private com.bytedance.android.openliveplugin.material.ResPackage startCheckLiveInitMaterial(java.lang.String r5, android.app.Application r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L60
            if (r6 != 0) goto La
            goto L60
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "https://webcast-open.douyin.com/webcast/openapi/pangle/setting/?app_id="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = "&package_name="
            r0.append(r5)
            java.lang.String r5 = r6.getPackageName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.bytedance.android.openliveplugin.net.NetApi r6 = com.bytedance.android.openliveplugin.net.NetApi.getInstance()
            r0 = 0
            java.lang.String r5 = r6.request(r0, r5, r1)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L37
            return r1
        L37:
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L60
            r6.<init>(r5)     // Catch: org.json.JSONException -> L60
            com.bytedance.android.openliveplugin.material.ResPackage r5 = new com.bytedance.android.openliveplugin.material.ResPackage     // Catch: org.json.JSONException -> L60
            r5.<init>()     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = "status_code"
            long r2 = r6.optLong(r0)     // Catch: org.json.JSONException -> L60
            r5.statusCode = r2     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = "data"
            org.json.JSONObject r6 = r6.optJSONObject(r0)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = "setting_url"
            java.lang.String r0 = r6.optString(r0)     // Catch: org.json.JSONException -> L60
            r5.resUrl = r0     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = "version"
            long r2 = r6.optLong(r0)     // Catch: org.json.JSONException -> L60
            r5.version = r2     // Catch: org.json.JSONException -> L60
            return r5
        L60:
            return r1
    }

    public void run(java.lang.String r8, android.app.Application r9, com.bytedance.android.openliveplugin.material.ILiveMaterialGet r10) {
            r7 = this;
            com.bytedance.android.openliveplugin.material.ResPackage r8 = r7.startCheckLiveInitMaterial(r8, r9)
            if (r8 == 0) goto L63
            boolean r0 = r8.isLegal()
            if (r0 != 0) goto Ld
            goto L63
        Ld:
            r0 = 0
            com.bytedance.android.openliveplugin.material.ConfigParams r2 = r7.getLocalConfigParams(r9)
            if (r2 == 0) goto L17
            long r0 = r2.version
        L17:
            long r3 = r8.version
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L5d
            java.lang.String r0 = r8.resUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2b
            java.lang.String r8 = "live init : material task res download url empty error"
            com.bytedance.android.openliveplugin.material.TTLogger.e(r8)
            return
        L2b:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.getMaterialDownloadPath(r9)
            r0.<init>(r1)
            com.bytedance.android.openliveplugin.material.ZipFileUtil.removeDir(r0)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.getMaterialDownloadPath(r9)
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L49
            r0.mkdir()
        L49:
            java.lang.String r0 = "live init : start download material res"
            com.bytedance.android.openliveplugin.material.TTLogger.d(r0)
            java.lang.String r3 = r8.resUrl
            java.lang.String r4 = r7.getMaterialDownloadPath(r9)
            java.lang.String r5 = "material"
            r1 = r7
            r2 = r9
            r6 = r10
            r1.download(r2, r3, r4, r5, r6)
            goto L62
        L5d:
            if (r10 == 0) goto L62
            r10.onMaterialGet(r2)
        L62:
            return
        L63:
            java.lang.String r8 = "live init : material task res package null error"
            com.bytedance.android.openliveplugin.material.TTLogger.e(r8)
            com.bytedance.android.openliveplugin.material.ConfigParams r8 = r7.getLocalConfigParams(r9)
            if (r8 == 0) goto L73
            if (r10 == 0) goto L73
            r10.onMaterialGet(r8)
        L73:
            return
    }
}
