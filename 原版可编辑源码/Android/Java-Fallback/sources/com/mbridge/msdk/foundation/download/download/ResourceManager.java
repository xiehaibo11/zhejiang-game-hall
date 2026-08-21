package com.mbridge.msdk.foundation.download.download;

public class ResourceManager {
    public static final int EXPIRE_TIME = 259200000;
    public static final java.lang.String KEY_INDEX_HTML = "foldername";
    public static final java.lang.String KEY_MD5CHECK = "nc";
    public static final java.lang.String KEY_MD5FILENAME = "md5filename";
    private static java.lang.String TAG = "ResourceManager";
    private java.lang.String mFileSaveSDDir;


    private static class ResourceManagerHolder {
        public static com.mbridge.msdk.foundation.download.download.ResourceManager instance;

        static {
                com.mbridge.msdk.foundation.download.download.ResourceManager r0 = new com.mbridge.msdk.foundation.download.download.ResourceManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.download.ResourceManager.ResourceManagerHolder.instance = r0
                return
        }

        private ResourceManagerHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    private ResourceManager() {
            r0 = this;
            r0.<init>()
            r0.init()
            return
    }

    ResourceManager(com.mbridge.msdk.foundation.download.download.ResourceManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$100(com.mbridge.msdk.foundation.download.download.ResourceManager r0) {
            java.lang.String r0 = r0.mFileSaveSDDir
            return r0
    }

    public static com.mbridge.msdk.foundation.download.download.ResourceManager getinstance() {
            com.mbridge.msdk.foundation.download.download.ResourceManager r0 = com.mbridge.msdk.foundation.download.download.ResourceManager.ResourceManagerHolder.instance
            return r0
    }

    private java.lang.String save(java.lang.String r3, java.lang.String r4, java.io.File r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.mFileSaveSDDir
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r3)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.x.a(r4, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L2c
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.x.b(r5)
        L2c:
            return r3
    }

    public void cleanZipRes() {
            r2 = this;
            java.lang.String r0 = r2.mFileSaveSDDir     // Catch: java.lang.Exception -> L15
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L1d
            com.mbridge.msdk.foundation.download.download.DownloadTask r0 = com.mbridge.msdk.foundation.download.download.DownloadTask.getInstance()     // Catch: java.lang.Exception -> L15
            com.mbridge.msdk.foundation.download.download.ResourceManager$1 r1 = new com.mbridge.msdk.foundation.download.download.ResourceManager$1     // Catch: java.lang.Exception -> L15
            r1.<init>(r2)     // Catch: java.lang.Exception -> L15
            r0.runTask(r1)     // Catch: java.lang.Exception -> L15
            goto L1d
        L15:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L1d
            r0.printStackTrace()
        L1d:
            return
    }

    public java.lang.String getResDirFromCampaign(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = "?"
            java.lang.String r1 = ""
            java.lang.String r2 = "/"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r3)     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r4.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = r8.mFileSaveSDDir     // Catch: java.lang.Exception -> Lfc
            r4.append(r5)     // Catch: java.lang.Exception -> Lfc
            r4.append(r2)     // Catch: java.lang.Exception -> Lfc
            r4.append(r3)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> Lfc
            android.net.Uri r4 = android.net.Uri.parse(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = "foldername"
            java.util.List r4 = r4.getQueryParameters(r5)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = com.mbridge.msdk.foundation.download.download.ResourceManager.TAG     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r6.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r7 = "check zip 下载情况：url:"
            r6.append(r7)     // Catch: java.lang.Exception -> Lfc
            r6.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lfc
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = com.mbridge.msdk.foundation.download.download.ResourceManager.TAG     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r6.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r7 = "check zip 下载情况：indexHtml:"
            r6.append(r7)     // Catch: java.lang.Exception -> Lfc
            r6.append(r4)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lfc
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)     // Catch: java.lang.Exception -> Lfc
            if (r4 == 0) goto L104
            int r5 = r4.size()     // Catch: java.lang.Exception -> Lfc
            if (r5 <= 0) goto L104
            r5 = 0
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Lfc
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lfc
            if (r5 != 0) goto L104
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r5.<init>()     // Catch: java.lang.Exception -> Lfc
            r5.append(r3)     // Catch: java.lang.Exception -> Lfc
            r5.append(r2)     // Catch: java.lang.Exception -> Lfc
            r5.append(r4)     // Catch: java.lang.Exception -> Lfc
            r5.append(r2)     // Catch: java.lang.Exception -> Lfc
            r5.append(r4)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r2 = ".html"
            r5.append(r2)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> Lfc
            boolean r3 = com.mbridge.msdk.foundation.tools.x.a(r2)     // Catch: java.lang.Exception -> Lfc
            if (r3 == 0) goto L104
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> Lfc
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> Lfc
            com.mbridge.msdk.c.a r3 = r3.b(r4)     // Catch: java.lang.Exception -> Lfc
            if (r3 == 0) goto Lc6
            java.lang.String r3 = r3.aL()     // Catch: java.lang.Exception -> Lfc
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lfc
            if (r3 != 0) goto Lc6
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> Lfc
            r3.<init>(r2)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.x.a(r3)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = com.iab.omid.library.mmadbridge.ScriptInjector.injectScriptContentIntoHtml(r5, r4)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = com.mbridge.msdk.a.b.a(r4)     // Catch: java.lang.Exception -> Lfc
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> Lfc
            com.mbridge.msdk.foundation.tools.x.a(r4, r3)     // Catch: java.lang.Exception -> Lfc
        Lc6:
            int r3 = r9.indexOf(r0)     // Catch: java.lang.Exception -> Ld1
            int r3 = r3 + 1
            java.lang.String r9 = r9.substring(r3)     // Catch: java.lang.Exception -> Ld1
            goto Ld2
        Ld1:
            r9 = r1
        Ld2:
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lfc
            if (r3 != 0) goto Le7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r1.<init>()     // Catch: java.lang.Exception -> Lfc
            r1.append(r0)     // Catch: java.lang.Exception -> Lfc
            r1.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lfc
        Le7:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r9.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r0 = "file://"
            r9.append(r0)     // Catch: java.lang.Exception -> Lfc
            r9.append(r2)     // Catch: java.lang.Exception -> Lfc
            r9.append(r1)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lfc
            return r9
        Lfc:
            r9 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L104
            r9.printStackTrace()
        L104:
            r9 = 0
            return r9
    }

    public void init() {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.e
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            r1.mFileSaveSDDir = r0
            return
    }

    public synchronized java.lang.String saveResFile(java.lang.String r5, byte[] r6) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "unknow exception "
            if (r6 == 0) goto L8f
            int r1 = r6.length     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r1 <= 0) goto L8f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = r4.mFileSaveSDDir     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ak.a(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = ".zip"
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r2.<init>(r1)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r6 = com.mbridge.msdk.foundation.tools.x.a(r6, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            android.net.Uri r6 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r3 = "nc"
            java.util.List r3 = r6.getQueryParameters(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 == 0) goto L4f
            int r3 = r3.size()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 != 0) goto L49
            goto L4f
        L49:
            java.lang.String r5 = r4.save(r5, r1, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r0 = r5
            goto L78
        L4f:
            java.lang.String r3 = "md5filename"
            java.util.List r6 = r6.getQueryParameters(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            int r3 = r6.size()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 <= 0) goto L78
            r3 = 0
            java.lang.Object r6 = r6.get(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 != 0) goto L78
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.w.a(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r6 = r6.equals(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            java.lang.String r0 = r4.save(r5, r1, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
        L78:
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r5 != 0) goto L8f
            com.mbridge.msdk.foundation.tools.x.b(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            goto L8f
        L82:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L8a
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L92
        L8a:
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L92
            goto L90
        L8f:
            r5 = r0
        L90:
            monitor-exit(r4)
            return r5
        L92:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}
