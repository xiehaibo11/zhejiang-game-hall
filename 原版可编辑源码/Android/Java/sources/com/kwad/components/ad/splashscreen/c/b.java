package com.kwad.components.ad.splashscreen.c;

import android.util.DisplayMetrics;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;

public final class b extends e {
    private KsLogoView mLogoView;

    private void i(ViewGroup viewGroup) {
        if (!com.kwad.components.ad.splashscreen.f.c.v(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            if (com.kwad.components.ad.splashscreen.f.c.a(getContext(), this.CM.mRootContainer.getWidth(), this.CM.mRootContainer.getHeight())) {
                com.kwad.components.ad.splashscreen.f.c.a(findViewById(R.id.ksad_splash_logo_container), -1, 16, 16, -1);
                return;
            }
            return;
        }
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) viewGroup.getLayoutParams();
        layoutParams.gravity = 51;
        viewGroup.setLayoutParams(layoutParams);
        DisplayMetrics displayMetrics = viewGroup.getContext().getResources().getDisplayMetrics();
        if (((double) displayMetrics.heightPixels) / ((double) displayMetrics.widthPixels) > 1.7777777910232544d) {
            ViewGroup.LayoutParams layoutParams2 = viewGroup.getLayoutParams();
            if (layoutParams2 instanceof ViewGroup.MarginLayoutParams) {
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams2;
                marginLayoutParams.leftMargin = com.kwad.sdk.d.a.a.a(viewGroup.getContext(), 12.0f);
                marginLayoutParams.topMargin = com.kwad.sdk.d.a.a.a(viewGroup.getContext(), 12.0f);
            }
        }
    }

    @Override
    public final void ah() {
        AdInfo.AdSplashInfo adSplashInfo;
        super.ah();
        KsLogoView ksLogoView = (KsLogoView) this.CM.mRootContainer.findViewById(R.id.ksad_splash_logo_container);
        this.mLogoView = ksLogoView;
        ksLogoView.post(new Runnable() {
            @Override
            public final void run() {
                b bVar = b.this;
                bVar.i(bVar.mLogoView);
            }
        });
        if (this.CM.mAdTemplate.adInfoList.isEmpty() || (adSplashInfo = this.CM.mAdTemplate.adInfoList.get(0).adSplashInfo) == null) {
            return;
        }
        if (adSplashInfo.logoPosition == 0) {
            this.mLogoView.setVisibility(8);
        } else {
            this.mLogoView.setVisibility(0);
            this.mLogoView.aa(this.CM.mAdTemplate);
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }
}
