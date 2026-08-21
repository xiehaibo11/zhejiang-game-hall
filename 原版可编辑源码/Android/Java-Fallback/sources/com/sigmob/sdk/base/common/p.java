package com.sigmob.sdk.base.common;

public class p {
    private static com.czhj.volley.toolbox.FileDownloader a;
    private static com.czhj.volley.toolbox.FileDownloader b;

    static {
            return
    }

    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.czhj.volley.toolbox.FileDownloader a() {
            com.czhj.volley.toolbox.FileDownloader r0 = com.sigmob.sdk.base.common.p.a
            if (r0 != 0) goto L22
            java.lang.Class<com.sigmob.sdk.base.common.p> r0 = com.sigmob.sdk.base.common.p.class
            monitor-enter(r0)
            com.czhj.volley.toolbox.FileDownloader r1 = com.sigmob.sdk.base.common.p.a     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L1d
            com.czhj.sdk.common.network.SigmobRequestQueue r1 = com.czhj.sdk.common.network.Networking.getDownloadRequestQueue()     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1d
            com.czhj.volley.toolbox.FileDownloader r1 = new com.czhj.volley.toolbox.FileDownloader     // Catch: java.lang.Throwable -> L1f
            com.czhj.sdk.common.network.SigmobRequestQueue r2 = com.czhj.sdk.common.network.Networking.getDownloadRequestQueue()     // Catch: java.lang.Throwable -> L1f
            r3 = 3
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1f
            com.sigmob.sdk.base.common.p.a = r1     // Catch: java.lang.Throwable -> L1f
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            goto L22
        L1f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r1
        L22:
            com.czhj.volley.toolbox.FileDownloader r0 = com.sigmob.sdk.base.common.p.a
            return r0
    }
}
