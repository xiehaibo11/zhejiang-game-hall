package com.mbridge.msdk.mbbanner.common.b;

public class f implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IH5SourceDownloadListener {
    private static final java.lang.String a = null;
    private com.mbridge.msdk.mbbanner.common.c.b b;
    private java.lang.String c;

    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.b.f> r0 = com.mbridge.msdk.mbbanner.common.b.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.b.f.a = r0
            return
    }

    public f(com.mbridge.msdk.mbbanner.common.c.b r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    @Override
    public void onFailed(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r5 = com.mbridge.msdk.mbbanner.common.b.f.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DownloadBannerUrlListener HTML FAIL:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.b(r5, r0)
            com.mbridge.msdk.mbbanner.common.c.b r5 = r3.b
            if (r5 == 0) goto L21
            java.lang.String r0 = r3.c
            r1 = 3
            r2 = 0
            r5.a(r0, r1, r4, r2)
        L21:
            return
    }

    @Override
    public void onSuccess(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.b.f.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "DownloadBannerUrlListener HTML SUCCESS:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbbanner.common.c.b r0 = r4.b
            if (r0 == 0) goto L21
            java.lang.String r1 = r4.c
            r2 = 3
            r3 = 1
            r0.a(r1, r2, r5, r3)
        L21:
            return
    }
}
