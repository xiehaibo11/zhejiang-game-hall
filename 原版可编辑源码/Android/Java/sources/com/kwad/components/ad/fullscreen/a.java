package com.kwad.components.ad.fullscreen;

import android.content.Context;
import com.kwad.components.ad.b.g;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.d {
    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.d.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final void loadFullScreenVideoAd(KsScene ksScene, KsLoadManager.FullScreenVideoAdListener fullScreenVideoAdListener) {
        d.loadFullScreenVideoAd(ksScene, fullScreenVideoAdListener);
    }

    @Override
    public final int priority() {
        com.kwad.sdk.components.a aVarF = com.kwad.sdk.components.c.f(g.class);
        if (aVarF != null) {
            return aVarF.priority() + 1;
        }
        return 1;
    }
}
