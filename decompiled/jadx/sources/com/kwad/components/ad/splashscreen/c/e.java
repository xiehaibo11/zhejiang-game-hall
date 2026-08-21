package com.kwad.components.ad.splashscreen.c;

import com.kwad.sdk.mvp.Presenter;

/* JADX INFO: loaded from: classes2.dex */
public class e extends Presenter {
    public com.kwad.components.ad.splashscreen.h CM;

    @Override // com.kwad.sdk.mvp.Presenter
    public void ah() {
        super.ah();
        Object objGk = Gk();
        if (objGk instanceof com.kwad.components.ad.splashscreen.h) {
            this.CM = (com.kwad.components.ad.splashscreen.h) objGk;
        }
    }
}
