package com.kwad.components.ad.reward.m;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsPriceView;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.components.core.widget.KsStyledTextButton;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class k extends d implements com.kwad.sdk.widget.c {
    private TextView gQ;
    private KSCornerImageView lB;
    private TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private KsPriceView yW;
    private TextView yZ;
    private TextView za;
    private View zb;
    private ViewStub zu;
    private ViewGroup zv;
    private KsStyledTextButton zw;
    private KsStyledTextButton zx;

    public k(com.kwad.components.ad.reward.j jVar, ViewGroup viewGroup) {
        this.zv = viewGroup;
        this.qx = jVar;
    }

    public k(com.kwad.components.ad.reward.j jVar, ViewStub viewStub) {
        this.zu = viewStub;
        this.qx = jVar;
    }

    private void a(AdTemplate adTemplate, com.kwad.components.ad.reward.model.a aVar) {
        KSImageLoader.loadAppIcon(this.lB, aVar.gu(), adTemplate, 8);
        this.gQ.setText(aVar.getTitle());
        this.lC.setText(aVar.gv());
        int dimensionPixelSize = this.zv.getResources().getDimensionPixelSize(R.dimen.ksad_reward_jinniu_end_origin_text_size);
        this.yW.getConfig().ag(dimensionPixelSize).ai(dimensionPixelSize).ah(this.zv.getResources().getColor(R.color.ksad_jinniu_end_origin_color));
        this.yW.d(aVar.getPrice(), aVar.getOriginPrice(), true);
        String strHf = aVar.hf();
        this.zb.setVisibility(TextUtils.isEmpty(strHf) ? 8 : 0);
        if (strHf != null) {
            this.yZ.setText(strHf);
        }
        this.za.setText(aVar.hg());
    }

    private void d(View view, boolean z) {
        if (view.equals(this.zx)) {
            this.qx.a(2, view.getContext(), z ? 38 : 153, 1);
        } else if (view.equals(this.zw)) {
            this.qx.a(2, view.getContext(), z ? 37 : 153, 1);
        } else if (view.equals(this.zv)) {
            this.qx.a(2, view.getContext(), z ? 2 : 153, 2);
        }
    }

    @Override
    public final void a(View view) {
        d(view, true);
    }

    @Override
    public final void a(r rVar) {
        super.a(rVar);
        a(rVar.getAdTemplate(), com.kwad.components.ad.reward.model.a.v(rVar.getAdTemplate()));
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.qx.mAdTemplate)) {
            d(view, false);
        }
    }

    @Override
    public final ViewGroup gQ() {
        return this.zv;
    }

    public final void hide() {
        ViewGroup viewGroup = this.zv;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
    }
}
