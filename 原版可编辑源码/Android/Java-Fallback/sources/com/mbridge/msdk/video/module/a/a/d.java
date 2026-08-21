package com.mbridge.msdk.video.module.a.a;

public class d implements com.mbridge.msdk.foundation.same.c.c {
    private com.mbridge.msdk.foundation.entity.CampaignEx a;
    protected android.widget.ImageView b;
    private java.lang.String c;


    public d(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public d(android.widget.ImageView r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r2
            r0.c = r3
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.video.module.a.a.d r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.a
            return r0
    }

    static java.lang.String b(com.mbridge.msdk.video.module.a.a.d r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    @Override
    public void onFailedLoad(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.video.module.a.a.d$1 r3 = new com.mbridge.msdk.video.module.a.a.d$1
            r3.<init>(r1, r2)
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            if (r0 == 0) goto L17
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            r0.execute(r3)
            goto L1a
        L17:
            r3.run()
        L1a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "desc:"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "ImageLoaderListener"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
            return
    }

    @Override
    public void onSuccessLoad(android.graphics.Bitmap r1, java.lang.String r2) {
            r0 = this;
            if (r1 != 0) goto La
            java.lang.String r1 = "ImageLoaderListener"
            java.lang.String r2 = "bitmap=null"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L20
            return
        La:
            android.widget.ImageView r2 = r0.b     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L28
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto L28
            android.widget.ImageView r2 = r0.b     // Catch: java.lang.Throwable -> L20
            r2.setImageBitmap(r1)     // Catch: java.lang.Throwable -> L20
            android.widget.ImageView r1 = r0.b     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L20
            goto L28
        L20:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L28
            r1.printStackTrace()
        L28:
            return
    }
}
