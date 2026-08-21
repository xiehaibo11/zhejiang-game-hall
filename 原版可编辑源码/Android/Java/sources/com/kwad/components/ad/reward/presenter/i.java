package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.bj;

public final class i extends a {
    @Override
    public final void ah() {
        super.ah();
        try {
            this.qx.oV.jN();
        } catch (Throwable th) {
            bj.postOnUiThread(new aw() {
                @Override
                public final void doTask() {
                    com.kwad.sdk.crash.b.l(th);
                    i.this.hw();
                }
            });
        }
    }
}
