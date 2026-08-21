package com.kwad.sdk.e;

public final class a {
    public static void a(android.content.Context r3, java.lang.String r4, com.kwad.sdk.DownloadTask.DownloadRequest r5) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1b
            java.lang.Class<com.kwad.sdk.api.proxy.app.DownloadService> r1 = com.kwad.sdk.api.proxy.app.DownloadService.class
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "download_service_type_tag"
            r2 = 1
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "download_service_id_tag"
            r0.putExtra(r1, r4)     // Catch: java.lang.Exception -> L1b
            java.lang.String r4 = "download_service_args_tag"
            r0.putExtra(r4, r5)     // Catch: java.lang.Exception -> L1b
            r3.startService(r0)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public static void z(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "DownloadClient"
            java.lang.String r1 = "pauseDownload"
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1c
            java.lang.Class<com.kwad.sdk.api.proxy.app.DownloadService> r1 = com.kwad.sdk.api.proxy.app.DownloadService.class
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = "download_service_type_tag"
            r2 = 2
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = "download_service_id_tag"
            r0.putExtra(r1, r4)     // Catch: java.lang.Exception -> L1c
            r3.startService(r0)     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }
}
