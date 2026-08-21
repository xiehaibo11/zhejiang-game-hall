package com.mbridge.msdk.foundation.download.download;

public class HTMLResourceManager {
    public static final int EXPIRE_TIME = 259200000;
    private static final java.lang.String TAG = "HTMLResourceManager";
    private java.lang.String mFileSaveSDDir;


    private static class ResourceManagerHolder {
        public static com.mbridge.msdk.foundation.download.download.HTMLResourceManager instance;

        static {
                com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = new com.mbridge.msdk.foundation.download.download.HTMLResourceManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.download.HTMLResourceManager.ResourceManagerHolder.instance = r0
                return
        }

        private ResourceManagerHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private HTMLResourceManager() {
            r0 = this;
            r0.<init>()
            r0.init()
            return
    }

    HTMLResourceManager(com.mbridge.msdk.foundation.download.download.HTMLResourceManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$100(com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0) {
            java.lang.String r0 = r0.mFileSaveSDDir
            return r0
    }

    public static com.mbridge.msdk.foundation.download.download.HTMLResourceManager getInstance() {
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.ResourceManagerHolder.instance
            return r0
    }

    public void cleanHtmlRes() {
            r2 = this;
            java.lang.String r0 = r2.mFileSaveSDDir     // Catch: java.lang.Exception -> L15
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L1d
            com.mbridge.msdk.foundation.download.download.DownloadTask r0 = com.mbridge.msdk.foundation.download.download.DownloadTask.getInstance()     // Catch: java.lang.Exception -> L15
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager$1 r1 = new com.mbridge.msdk.foundation.download.download.HTMLResourceManager$1     // Catch: java.lang.Exception -> L15
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

    public java.lang.String getHtmlContentFromUrl(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ak.a(r3)     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r3)     // Catch: java.lang.Throwable -> L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r2.mFileSaveSDDir     // Catch: java.lang.Throwable -> L33
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            r0.append(r3)     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = ".html"
            r0.append(r3)     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L33
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L33
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L33
            boolean r3 = r0.exists()     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L3b
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.x.a(r0)     // Catch: java.lang.Throwable -> L33
            return r3
        L33:
            r3 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L3b
            r3.printStackTrace()
        L3b:
            r3 = 0
            return r3
    }

    public java.lang.String getHtmlPathFromUrl(java.lang.String r4) {
            r3 = this;
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L71
            r0.<init>()     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = r3.mFileSaveSDDir     // Catch: java.lang.Throwable -> L71
            r0.append(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L71
            r0.append(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = ".html"
            r0.append(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L71
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L71
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L71
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L71
            if (r1 == 0) goto L79
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L71
            if (r1 == 0) goto L5f
            java.lang.String r1 = r1.aL()     // Catch: java.lang.Throwable -> L71
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L71
            if (r1 != 0) goto L5f
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.x.a(r0)     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = com.iab.omid.library.mmadbridge.ScriptInjector.injectScriptContentIntoHtml(r2, r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = com.mbridge.msdk.a.b.a(r1)     // Catch: java.lang.Throwable -> L71
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.foundation.tools.x.a(r1, r0)     // Catch: java.lang.Throwable -> L71
        L5f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L71
            r0.<init>()     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "file:////"
            r0.append(r1)     // Catch: java.lang.Throwable -> L71
            r0.append(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L71
            return r4
        L71:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L79
            r4.printStackTrace()
        L79:
            r4 = 0
            return r4
    }

    public void init() {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.g
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            r1.mFileSaveSDDir = r0
            return
    }

    public boolean saveResHtmlFile(java.lang.String r4, byte[] r5) {
            r3 = this;
            java.lang.String r0 = "HTMLResourceManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            r1.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = "saveResHtmlFile url:"
            r1.append(r2)     // Catch: java.lang.Exception -> L5f
            r1.append(r4)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L5f
            if (r5 == 0) goto L67
            int r1 = r5.length     // Catch: java.lang.Exception -> L5f
            if (r1 <= 0) goto L67
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            r1.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = r3.mFileSaveSDDir     // Catch: java.lang.Exception -> L5f
            r1.append(r2)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ak.a(r4)     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)     // Catch: java.lang.Exception -> L5f
            r1.append(r4)     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = ".html"
            r1.append(r4)     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L5f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            r1.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = "saveResHtmlFile folderName:"
            r1.append(r2)     // Catch: java.lang.Exception -> L5f
            r1.append(r4)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L5f
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L5f
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L5f
            r0.<init>(r4)     // Catch: java.lang.Exception -> L5f
            boolean r4 = com.mbridge.msdk.foundation.tools.x.a(r5, r0)     // Catch: java.lang.Exception -> L5f
            if (r4 == 0) goto L67
            r4 = 1
            return r4
        L5f:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L67
            r4.printStackTrace()
        L67:
            r4 = 0
            return r4
    }
}
