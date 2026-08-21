package com.tkay.basead.ui;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.core.api.BaseAd;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import java.util.ArrayList;

public class ThirdPartySplashATView extends AsseblemSplashATView {
    BaseAd P;

    @Override
    protected final float a(a aVar, int i) {
        return 1.0f;
    }

    @Override
    protected final void c() {
    }

    @Override
    protected final boolean m() {
        return false;
    }

    @Override
    protected final void p() {
    }

    public ThirdPartySplashATView(Context context) {
        super(context);
    }

    public ThirdPartySplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar, String str) {
        BaseAd baseAd;
        super(context, iVar, hVar, aVar);
        this.P = com.tkay.basead.d.i.a().a(str);
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_lable_area", "id"));
        if (frameLayout != null) {
            frameLayout.setVisibility(0);
            this.r.add(frameLayout);
        }
        FrameLayout frameLayout2 = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_content_image_area", "id"));
        if (frameLayout2 == null || (baseAd = this.P) == null || baseAd.getAdMediaView(new Object[0]) == null) {
            return;
        }
        View adMediaView = this.P.getAdMediaView(new Object[0]);
        if (adMediaView.getParent() != null) {
            ((ViewGroup) adMediaView.getParent()).removeView(adMediaView);
        }
        frameLayout2.addView(adMediaView, new FrameLayout.LayoutParams(-1, -1));
    }

    @Override
    protected final void o() {
        super.o();
        if (this.J != null) {
            this.J.setVisibility(8);
        }
    }

    private void s() {
        BaseAd baseAd;
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_lable_area", "id"));
        if (frameLayout != null) {
            frameLayout.setVisibility(0);
            this.r.add(frameLayout);
        }
        FrameLayout frameLayout2 = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_content_image_area", "id"));
        if (frameLayout2 == null || (baseAd = this.P) == null || baseAd.getAdMediaView(new Object[0]) == null) {
            return;
        }
        View adMediaView = this.P.getAdMediaView(new Object[0]);
        if (adMediaView.getParent() != null) {
            ((ViewGroup) adMediaView.getParent()).removeView(adMediaView);
        }
        frameLayout2.addView(adMediaView, new FrameLayout.LayoutParams(-1, -1));
    }

    public void registerNativeClickListener(View view) {
        if (this.P != null) {
            if (this.c.m.x() == 0) {
                this.r.add(this);
                this.P.registerListener(view, this.r, null);
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.add(this.a);
                this.P.registerListener(view, arrayList, null);
            }
        }
    }
}
