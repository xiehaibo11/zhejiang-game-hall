package com.kwad.components.ad.splashscreen.c;

import android.content.Context;
import android.os.Vibrator;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.bj;

public abstract class i extends e {
    private static long jM = 400;
    private com.kwad.components.ad.splashscreen.f.a CY;
    private Vibrator dP;

    private void lf() {
        if (this.CM != null) {
            com.kwad.components.ad.splashscreen.f.a aVar = this.CY;
            if (aVar == null) {
                this.CY = new com.kwad.components.ad.splashscreen.f.a(getContext(), this.CM.mAdTemplate) {
                    @Override
                    public final void aa(String str) {
                        i.this.Z(str);
                    }
                };
            } else {
                aVar.setAdTemplate(this.CM.mAdTemplate);
            }
            com.kwad.components.core.e.d.c cVar = this.CM.mApkDownloadHelper;
            if (cVar != null) {
                cVar.b(this.CY);
            }
        }
    }

    protected abstract void Z(String str);

    @Override
    public void ah() {
        super.ah();
        if (this.CM == null) {
            return;
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        lc();
        la();
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            lf();
        }
        lb();
        ld();
        le();
    }

    protected abstract void initView();

    protected abstract void la();

    protected abstract void lb();

    protected abstract void lc();

    protected abstract void ld();

    protected abstract void le();

    protected final void lg() {
        Context context = getContext();
        if (context != null) {
            this.dP = (Vibrator) context.getSystemService("vibrator");
        }
        bj.a(getContext(), this.dP);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        initView();
    }

    @Override
    public void onUnbind() {
        super.onUnbind();
        bj.b(getContext(), this.dP);
    }
}
