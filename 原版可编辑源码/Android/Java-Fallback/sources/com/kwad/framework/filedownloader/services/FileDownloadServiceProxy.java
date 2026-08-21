package com.kwad.framework.filedownloader.services;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FileDownloadService.class)
public class FileDownloadServiceProxy extends com.kwad.sdk.l.a {
    private static final java.lang.String TAG = "filedownloader";
    public android.app.Service context;
    private com.kwad.framework.filedownloader.services.i handler;

    @com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FileDownloadService.SeparateProcessService.class)
    public static class SeparateProcessServiceProxy extends com.kwad.framework.filedownloader.services.FileDownloadServiceProxy {
        public SeparateProcessServiceProxy() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onCreate(android.app.Service r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 28
                if (r0 < r1) goto L11
                android.content.Context r0 = r3.getApplicationContext()     // Catch: java.lang.Exception -> L11
                java.lang.String r0 = com.kwad.sdk.utils.ap.getProcessName(r0)     // Catch: java.lang.Exception -> L11
                android.webkit.WebView.setDataDirectorySuffix(r0)     // Catch: java.lang.Exception -> L11
            L11:
                super.onCreate(r3)
                return
        }
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FileDownloadService.SharedMainProcessService.class)
    public static class SharedMainProcessServiceProxy extends com.kwad.framework.filedownloader.services.FileDownloadServiceProxy {
        public SharedMainProcessServiceProxy() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onCreate(android.app.Service r1) {
                r0 = this;
                super.onCreate(r1)
                return
        }
    }

    public FileDownloadServiceProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SeparateProcessService> r0 = com.kwad.sdk.api.proxy.app.FileDownloadService.SeparateProcessService.class
            java.lang.Class<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy$SeparateProcessServiceProxy> r1 = com.kwad.framework.filedownloader.services.FileDownloadServiceProxy.SeparateProcessServiceProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SharedMainProcessService> r0 = com.kwad.sdk.api.proxy.app.FileDownloadService.SharedMainProcessService.class
            java.lang.Class<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy$SharedMainProcessServiceProxy> r1 = com.kwad.framework.filedownloader.services.FileDownloadServiceProxy.SharedMainProcessServiceProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public android.os.IBinder onBind(android.app.Service r1, android.content.Intent r2) {
            r0 = this;
            com.kwad.framework.filedownloader.services.i r1 = r0.handler
            android.os.IBinder r1 = r1.vE()
            return r1
    }

    @Override
    public void onCreate(android.app.Service r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r2.context = r3
            com.kwad.framework.filedownloader.f.c.ap(r3)
            com.kwad.framework.filedownloader.f.e r3 = com.kwad.framework.filedownloader.f.e.vO()     // Catch: java.lang.IllegalAccessException -> L1b
            int r3 = r3.aeJ     // Catch: java.lang.IllegalAccessException -> L1b
            com.kwad.framework.filedownloader.f.f.bH(r3)     // Catch: java.lang.IllegalAccessException -> L1b
            com.kwad.framework.filedownloader.f.e r3 = com.kwad.framework.filedownloader.f.e.vO()     // Catch: java.lang.IllegalAccessException -> L1b
            long r0 = r3.aeK     // Catch: java.lang.IllegalAccessException -> L1b
            com.kwad.framework.filedownloader.f.f.O(r0)     // Catch: java.lang.IllegalAccessException -> L1b
            goto L1f
        L1b:
            r3 = move-exception
            r3.printStackTrace()
        L1f:
            com.kwad.framework.filedownloader.services.g r3 = new com.kwad.framework.filedownloader.services.g
            r3.<init>()
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r0 = r0.aeM
            if (r0 == 0) goto L39
            com.kwad.framework.filedownloader.services.e r0 = new com.kwad.framework.filedownloader.services.e
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.<init>(r1, r3)
        L36:
            r2.handler = r0
            return
        L39:
            com.kwad.framework.filedownloader.services.d r0 = new com.kwad.framework.filedownloader.services.d
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.<init>(r1, r3)
            goto L36
    }

    @Override
    public void onDestroy(android.app.Service r1) {
            r0 = this;
            com.kwad.framework.filedownloader.services.i r1 = r0.handler
            r1.onDestroy()
            return
    }

    @Override
    public int onStartCommand(android.app.Service r1, android.content.Intent r2, int r3, int r4) {
            r0 = this;
            com.kwad.framework.filedownloader.services.i r1 = r0.handler
            r1.vD()
            r1 = 2
            return r1
    }
}
