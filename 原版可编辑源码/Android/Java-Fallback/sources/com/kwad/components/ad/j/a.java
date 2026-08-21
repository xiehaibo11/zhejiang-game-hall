package com.kwad.components.ad.j;

import com.kwad.components.core.video.h;

public abstract class a<L extends com.kwad.components.core.video.h> {
    public com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public a(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            return
    }

    public abstract void a(L r1);

    public abstract void b(L r1);

    public long getPlayDuration() {
            r2 = this;
            r0 = 0
            return r0
    }

    public abstract void pause();

    public void release() {
            r0 = this;
            return
    }

    public abstract void resume();

    public void setAudioEnabled(boolean r1, boolean r2) {
            r0 = this;
            return
    }

    public void skipToEnd() {
            r0 = this;
            return
    }
}
