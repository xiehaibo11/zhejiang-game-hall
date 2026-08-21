package com.kwad.components.ad.splashscreen.c;

public abstract class i extends com.kwad.components.ad.splashscreen.c.e {
    private static long jM = 400;
    private com.kwad.components.ad.splashscreen.f.a CY;
    private android.os.Vibrator dP;


    static {
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    private void lf() {
            r3 = this;
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 == 0) goto L2a
            com.kwad.components.ad.splashscreen.f.a r0 = r3.CY
            if (r0 != 0) goto L18
            com.kwad.components.ad.splashscreen.c.i$1 r0 = new com.kwad.components.ad.splashscreen.c.i$1
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.<init>(r3, r1, r2)
            r3.CY = r0
            goto L1f
        L18:
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
        L1f:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            if (r0 == 0) goto L2a
            com.kwad.components.ad.splashscreen.f.a r1 = r3.CY
            r0.b(r1)
        L2a:
            return
    }

    protected abstract void Z(java.lang.String r1);

    @Override
    public void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            if (r0 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r1.lc()
            r1.la()
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L1f
            r1.lf()
        L1f:
            r1.lb()
            r1.ld()
            r1.le()
            return
    }

    protected abstract void initView();

    protected abstract void la();

    protected abstract void lb();

    protected abstract void lc();

    protected abstract void ld();

    protected abstract void le();

    protected final void lg() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto L10
            java.lang.String r1 = "vibrator"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            r2.dP = r0
        L10:
            android.content.Context r0 = r2.getContext()
            android.os.Vibrator r1 = r2.dP
            com.kwad.sdk.utils.bj.a(r0, r1)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            r0.initView()
            return
    }

    @Override
    public void onUnbind() {
            r2 = this;
            super.onUnbind()
            android.content.Context r0 = r2.getContext()
            android.os.Vibrator r1 = r2.dP
            com.kwad.sdk.utils.bj.b(r0, r1)
            return
    }
}
