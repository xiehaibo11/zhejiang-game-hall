package com.kwad.components.ad.reward.widget.tailframe;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.kwad.components.ad.reward.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.KSFrameLayout;
import org.json.JSONObject;

public class TailFrameView extends KSFrameLayout {
    private com.kwad.components.ad.reward.widget.tailframe.a By;
    private j qx;

    static class a extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        public a() {
            super(R.layout.ksad_video_tf_view_landscape_horizontal);
        }

        @Override
        public final void a(AdTemplate adTemplate, JSONObject jSONObject, com.kwad.components.ad.reward.widget.tailframe.b bVar) {
            super.a(adTemplate, jSONObject, bVar);
            KSImageLoader.loadImage(this.Bp, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
        }
    }

    static class b extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        private ImageView BA;
        private ImageView BB;
        private ImageView Bz;

        public b() {
            super(R.layout.ksad_video_tf_view_landscape_vertical);
        }

        private void kr() {
            KSImageLoader.loadImage(this.Bz, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
            KSImageLoader.loadImage(this.BA, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
            KSImageLoader.loadImage(this.BB, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
        }

        @Override
        public final void D(Context context) {
            super.D(context);
            this.Bz = (ImageView) this.Bo.findViewById(R.id.ksad_video_thumb_left);
            this.BA = (ImageView) this.Bo.findViewById(R.id.ksad_video_thumb_mid);
            this.BB = (ImageView) this.Bo.findViewById(R.id.ksad_video_thumb_right);
        }

        @Override
        public final void a(AdTemplate adTemplate, JSONObject jSONObject, com.kwad.components.ad.reward.widget.tailframe.b bVar) {
            super.a(adTemplate, jSONObject, bVar);
            kr();
        }
    }

    static class c extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        private View BC;

        public c() {
            super(R.layout.ksad_video_tf_view_portrait_horizontal);
        }

        private void kr() {
            AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = com.kwad.sdk.core.response.b.a.aN(this.mAdInfo);
            int i = materialFeatureAN.width;
            int i2 = materialFeatureAN.height;
            int screenWidth = com.kwad.sdk.d.a.a.getScreenWidth(this.Bo.getContext());
            int i3 = (int) (screenWidth * (i2 / i));
            ViewGroup.LayoutParams layoutParams = this.Bp.getLayoutParams();
            layoutParams.width = screenWidth;
            layoutParams.height = i3;
            KSImageLoader.loadImage(this.Bp, materialFeatureAN.coverUrl, this.mAdTemplate);
        }

        @Override
        public final void D(Context context) {
            super.D(context);
            this.BC = this.Bo.findViewById(R.id.video_cover);
        }

        @Override
        public final void a(AdTemplate adTemplate, JSONObject jSONObject, com.kwad.components.ad.reward.widget.tailframe.b bVar) {
            super.a(adTemplate, jSONObject, bVar);
            if (com.kwad.sdk.core.response.b.d.s(this.mAdTemplate)) {
                this.BC.setVisibility(8);
                this.mLogoView.setVisibility(8);
                this.Bo.setBackground(null);
            }
            kr();
        }
    }

    static class d extends com.kwad.components.ad.reward.widget.tailframe.a {
        public d() {
            super(R.layout.ksad_video_tf_view_portrait_vertical);
        }

        @Override
        public final void a(AdTemplate adTemplate, JSONObject jSONObject, com.kwad.components.ad.reward.widget.tailframe.b bVar) {
            super.a(adTemplate, jSONObject, bVar);
            if (com.kwad.sdk.core.response.b.d.s(this.mAdTemplate)) {
                this.Bo.setBackground(null);
                this.Bp.setVisibility(8);
                this.mLogoView.setVisibility(8);
            }
            KSImageLoader.loadImage(this.Bp, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
        }
    }

    public TailFrameView(Context context) {
        super(context);
    }

    public TailFrameView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TailFrameView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public TailFrameView(Context context, View view) {
        super(context, view);
    }

    private void d(boolean z, boolean z2) {
        if (this.By != null) {
            return;
        }
        this.By = z ? z2 ? new d() : new c() : z2 ? new b() : new a();
    }

    public final void a(Context context, boolean z, boolean z2) {
        d(z, z2);
        this.By.D(context);
        this.By.d(z, z2);
        addView(this.By.kn(), -1, -1);
    }

    public final void a(com.kwad.components.ad.reward.widget.tailframe.b bVar) {
        this.By.setCallerContext(this.qx);
        this.By.a(this.qx.mAdTemplate, this.qx.mReportExtData, bVar);
    }

    public final void destroy() {
        com.kwad.components.ad.reward.widget.tailframe.a aVar = this.By;
        if (aVar != null) {
            aVar.destroy();
        }
    }

    public final void jV() {
        this.By.jV();
    }

    public void setCallerContext(j jVar) {
        this.qx = jVar;
    }
}
