package com.kwad.components.ad.reward.m;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.kwad.components.ad.reward.widget.KsAuthorIconView;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;

/* JADX INFO: loaded from: classes2.dex */
public final class o extends s implements View.OnClickListener {
    private KsLogoView Aa;
    private KsAuthorIconView Ab;
    private RelativeLayout Ac;
    private String Ae;
    private TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private TextView zA;
    private KsLogoView zZ;
    private TextView zz;
    private boolean Ad = false;
    private Runnable Af = new Runnable() { // from class: com.kwad.components.ad.reward.m.o.2
        @Override // java.lang.Runnable
        public final void run() {
            try {
                com.kwad.sdk.d.a.a.a(o.this.lC, o.this.Ae, KsLogoView.a(o.this.zZ));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                o.this.lC.setText(o.this.Ae);
                o.this.lC.setVisibility(0);
            }
        }
    };

    public o(com.kwad.components.ad.reward.j jVar) {
        this.qx = jVar;
    }

    private void b(AdTemplate adTemplate) {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.zz.setText(com.kwad.sdk.core.response.b.a.bO(adInfoCg));
        com.kwad.components.core.widget.e eVar = new com.kwad.components.core.widget.e();
        this.Ab.setVisibility(0);
        this.Ab.b(adTemplate);
        this.Ab.a(eVar);
        this.zA.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        if (com.kwad.sdk.core.response.b.a.aX(adInfoCg) == 8) {
            this.Aa.setVisibility(0);
            this.Aa.aa(adTemplate);
            this.lC.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        } else {
            this.Ae = com.kwad.sdk.core.response.b.a.an(adInfoCg);
            KsLogoView ksLogoView = new KsLogoView(this.sw.getContext(), false);
            this.zZ = ksLogoView;
            ksLogoView.setLogoLoadFinishListener(new KsLogoView.a() { // from class: com.kwad.components.ad.reward.m.o.1
                @Override // com.kwad.components.core.widget.KsLogoView.a
                public final void kh() {
                    o.this.lC.post(o.this.Af);
                }
            });
            this.zZ.aa(adTemplate);
            this.Aa.setVisibility(8);
        }
    }

    private static void h(View view, int i) {
        if (view == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.gravity = 85;
            layoutParams2.bottomMargin = com.kwad.sdk.d.a.a.a(view.getContext(), 20.0f);
            view.requestLayout();
        }
    }

    private void initView() {
        if (this.sw == null) {
            return;
        }
        this.Ab = (KsAuthorIconView) this.sw.findViewById(R.id.ksad_live_author_icon);
        this.zz = (TextView) this.sw.findViewById(R.id.kwad_actionbar_title);
        this.lC = (TextView) this.sw.findViewById(R.id.kwad_actionbar_des_text);
        this.zA = (TextView) this.sw.findViewById(R.id.ksad_live_actionbar_btn);
        this.Aa = (KsLogoView) this.sw.findViewById(R.id.ksad_reward_live_kwai_logo);
        if (!this.Ad) {
            this.Ac = (RelativeLayout) this.sw.findViewById(R.id.ksad_reward_origin_live_relative);
        }
        this.sw.setOnClickListener(this);
        this.zA.setOnClickListener(this);
        this.Ab.setOnClickListener(this);
        this.lC.setOnClickListener(this);
        this.zz.setOnClickListener(this);
    }

    public final void a(ViewGroup viewGroup, int i) {
        boolean z;
        if (i == 8) {
            super.a(viewGroup, R.id.ksad_reward_origin_live_shop_stub, R.id.ksad_reward_origin_live_root);
            z = true;
        } else {
            super.a(viewGroup, R.id.ksad_reward_origin_live_base_stub, R.id.ksad_reward_origin_live_root);
            z = false;
        }
        this.Ad = z;
        initView();
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void a(r rVar) {
        super.a(rVar);
        b(rVar.getAdTemplate());
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void ad(boolean z) {
        super.ad(z);
        Context context = this.sw.getContext();
        if (ai.IN()) {
            return;
        }
        if (this.Ad) {
            ViewGroup.LayoutParams layoutParams = this.sw.getLayoutParams();
            layoutParams.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_live_subscribe_card_width_horizontal);
            this.sw.setLayoutParams(layoutParams);
            h(this.sw, 85);
            return;
        }
        this.sw.findViewById(R.id.ksad_reward_origin_live_base1).setVisibility(0);
        ViewGroup.LayoutParams layoutParams2 = this.Ac.getLayoutParams();
        layoutParams2.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_live_subscribe_card_width_horizontal);
        this.Ac.setLayoutParams(layoutParams2);
        ViewGroup.LayoutParams layoutParams3 = this.zA.getLayoutParams();
        layoutParams3.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_live_subscribe_card_width_horizontal);
        this.zA.setLayoutParams(layoutParams3);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        com.kwad.components.ad.reward.j jVar;
        Context context;
        int i;
        if (view.equals(this.zA)) {
            jVar = this.qx;
            context = view.getContext();
            i = 29;
        } else if (view.equals(this.Ab)) {
            jVar = this.qx;
            context = view.getContext();
            i = 30;
        } else if (view.equals(this.lC)) {
            jVar = this.qx;
            context = view.getContext();
            i = 32;
        } else if (!view.equals(this.zz)) {
            if (view.equals(this.sw)) {
                this.qx.a(1, view.getContext(), 53, 2);
                return;
            }
            return;
        } else {
            jVar = this.qx;
            context = view.getContext();
            i = 31;
        }
        jVar.a(1, context, i, 1);
    }
}
