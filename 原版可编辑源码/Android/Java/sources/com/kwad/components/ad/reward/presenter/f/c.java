package com.kwad.components.ad.reward.presenter.f;

import android.widget.FrameLayout;
import com.kwad.sdk.R;

public final class c extends h {
    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-image-video-card", this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.wg = (FrameLayout) findViewById(R.id.ksad_js_reward_image_card);
    }
}
