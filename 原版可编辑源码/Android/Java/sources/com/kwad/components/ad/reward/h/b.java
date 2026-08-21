package com.kwad.components.ad.reward.h;

import android.content.Context;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.av;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class b extends av implements av.a {
    private PlayableSource rX;

    public b(Context context, AdTemplate adTemplate, PlayableSource playableSource) {
        super(context, adTemplate);
        this.rX = playableSource;
        a(this);
    }

    @Override
    public final boolean dw() {
        com.kwad.components.ad.reward.b.fp().c(this.rX, new a(this.mContext));
        return false;
    }
}
