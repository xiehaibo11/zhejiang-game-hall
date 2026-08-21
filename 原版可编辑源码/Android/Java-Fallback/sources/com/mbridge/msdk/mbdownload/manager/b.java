package com.mbridge.msdk.mbdownload.manager;

public final class b implements java.util.Observer {
    private boolean a;
    private com.mbridge.msdk.out.IDownloadListener b;

    public b(com.mbridge.msdk.out.IDownloadListener r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            r1.b = r2
            return
    }

    public final void a(com.mbridge.msdk.out.IDownloadListener r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public final void update(java.util.Observable r4, java.lang.Object r5) {
            r3 = this;
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            if (r4 == 0) goto L76
            r4 = 8
            if (r5 == 0) goto L6c
            com.mbridge.msdk.mbdownload.manager.c r5 = (com.mbridge.msdk.mbdownload.manager.c) r5     // Catch: java.lang.Exception -> L72
            int r0 = r5.b()     // Catch: java.lang.Exception -> L72
            r1 = -1
            if (r0 == r1) goto L66
            r1 = 5
            if (r0 == r1) goto L60
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L51
            r2 = 2
            if (r0 == r2) goto L37
            if (r0 == r4) goto L31
            r4 = 9
            if (r0 == r4) goto L2b
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            int r5 = r5.b()     // Catch: java.lang.Exception -> L72
            r4.onStatus(r5)     // Catch: java.lang.Exception -> L72
            goto L76
        L2b:
            com.mbridge.msdk.out.IDownloadListener r5 = r3.b     // Catch: java.lang.Exception -> L72
            r5.onStatus(r4)     // Catch: java.lang.Exception -> L72
            goto L76
        L31:
            com.mbridge.msdk.out.IDownloadListener r5 = r3.b     // Catch: java.lang.Exception -> L72
            r5.onStatus(r4)     // Catch: java.lang.Exception -> L72
            goto L76
        L37:
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            r4.onStatus(r2)     // Catch: java.lang.Exception -> L72
            boolean r4 = r3.a     // Catch: java.lang.Exception -> L72
            if (r4 == 0) goto L47
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            r4.onStart()     // Catch: java.lang.Exception -> L72
            r3.a = r1     // Catch: java.lang.Exception -> L72
        L47:
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            int r5 = r5.c()     // Catch: java.lang.Exception -> L72
            r4.onProgressUpdate(r5)     // Catch: java.lang.Exception -> L72
            goto L76
        L51:
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            java.lang.String r5 = r5.a()     // Catch: java.lang.Exception -> L72
            r4.onEnd(r2, r1, r5)     // Catch: java.lang.Exception -> L72
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            r4.onStatus(r2)     // Catch: java.lang.Exception -> L72
            goto L76
        L60:
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            r4.onStatus(r1)     // Catch: java.lang.Exception -> L72
            goto L76
        L66:
            com.mbridge.msdk.out.IDownloadListener r4 = r3.b     // Catch: java.lang.Exception -> L72
            r4.onStatus(r1)     // Catch: java.lang.Exception -> L72
            goto L76
        L6c:
            com.mbridge.msdk.out.IDownloadListener r5 = r3.b     // Catch: java.lang.Exception -> L72
            r5.onStatus(r4)     // Catch: java.lang.Exception -> L72
            goto L76
        L72:
            r4 = move-exception
            r4.printStackTrace()
        L76:
            return
    }
}
