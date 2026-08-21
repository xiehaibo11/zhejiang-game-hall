package com.sigmob.sdk.nativead;

public class c extends com.sigmob.sdk.base.common.v {
    private com.sigmob.sdk.nativead.NativeAdBroadcastReceiver d;


    interface a extends com.sigmob.sdk.base.common.m.b, com.sigmob.sdk.base.common.m.c {
        void c();

        void d();

        void e();
    }

    protected c(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static boolean a(com.sigmob.sdk.base.models.rtb.MaterialMeta r0) {
            r0 = 1
            return r0
    }

    @Override
    protected void a(com.sigmob.sdk.base.common.m.b r3) {
            r2 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r2.c
            java.io.File r3 = r3.getAdPrivacyTemplateFile()
            if (r3 == 0) goto L35
            boolean r0 = r3.exists()
            if (r0 != 0) goto L35
            com.czhj.volley.toolbox.DownloadItem r0 = new com.czhj.volley.toolbox.DownloadItem
            r0.<init>()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.c
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r1.getadPrivacy()
            java.lang.String r1 = r1.privacy_template_url
            r0.url = r1
            java.lang.String r3 = r3.getAbsolutePath()
            r0.filePath = r3
            com.czhj.volley.toolbox.DownloadItem$FileType r3 = com.czhj.volley.toolbox.DownloadItem.FileType.OTHER
            r0.type = r3
            com.czhj.volley.toolbox.FileDownloader r3 = com.sigmob.sdk.base.common.p.a()
            if (r3 == 0) goto L35
            com.sigmob.sdk.nativead.c$1 r1 = new com.sigmob.sdk.nativead.c$1
            r1.<init>(r2)
            r3.add(r0, r1)
        L35:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r4, android.os.Bundle r5) {
            r3 = this;
            super.a(r4, r5)
            android.content.Context r4 = com.sigmob.sdk.b.b()
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r0 = com.sigmob.sdk.base.common.AdActivity.class
            java.lang.String r1 = r3.a
            java.lang.String r2 = "LandNative"
            com.sigmob.sdk.base.common.AdActivity.a(r4, r0, r1, r5, r2)
            return
    }

    @Override
    public void a(java.util.Map<java.lang.String, java.lang.Object> r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            super.a(r2, r3)
            com.sigmob.sdk.nativead.NativeAdBroadcastReceiver r2 = r1.d
            if (r2 != 0) goto L1d
            com.sigmob.sdk.base.common.m$b r2 = r1.b
            boolean r2 = r2 instanceof com.sigmob.sdk.nativead.c.a
            if (r2 == 0) goto L1d
            com.sigmob.sdk.nativead.NativeAdBroadcastReceiver r2 = new com.sigmob.sdk.nativead.NativeAdBroadcastReceiver
            com.sigmob.sdk.base.common.m$b r3 = r1.b
            com.sigmob.sdk.nativead.c$a r3 = (com.sigmob.sdk.nativead.c.a) r3
            java.lang.String r0 = r1.a
            r2.<init>(r3, r0)
            r1.d = r2
            r2.a(r2)
        L1d:
            return
    }

    @Override
    protected boolean a(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r2.getMaterial()
            if (r0 == 0) goto Lf
            com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = r2.getMaterial()
            boolean r2 = a(r2)
            return r2
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            super.b(r1)
            return
    }
}
