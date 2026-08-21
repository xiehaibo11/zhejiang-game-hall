package com.kwad.components.ad.reward.m;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.reward.widget.KSCouponLabelTextView;
import com.kwad.components.ad.widget.KsPriceView;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.CouponInfo;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;

/* JADX INFO: loaded from: classes2.dex */
public final class n extends d implements View.OnClickListener {
    private ViewGroup gg;
    private TextView yP;
    private ViewGroup zI;
    private KSCornerImageView zO;
    private LinearLayout zP;
    private KsPriceView zQ;
    private TextView zR;
    private View zS;
    private KSCornerImageView zT;
    private b zU;
    private a zV;

    public interface a {
        void hB();
    }

    public n(ViewGroup viewGroup, b bVar) {
        this.gg = viewGroup;
        this.zU = bVar;
        initView();
    }

    private static View a(Context context, CouponInfo couponInfo, ViewGroup viewGroup) {
        KSCouponLabelTextView kSCouponLabelTextView = (KSCouponLabelTextView) com.kwad.sdk.m.l.a(context, R.layout.ksad_reward_order_card_coupon, viewGroup, false);
        kSCouponLabelTextView.setText(couponInfo.getDisplayName());
        return kSCouponLabelTextView;
    }

    static /* synthetic */ View a(n nVar, Context context, CouponInfo couponInfo, ViewGroup viewGroup) {
        return a(context, couponInfo, viewGroup);
    }

    private void a(final AdProductInfo adProductInfo, AdTemplate adTemplate) {
        KSImageLoader.loadImage(this.zO, adProductInfo.getIcon(), adTemplate);
        this.yP.setText(adProductInfo.getName());
        if (adProductInfo.isCouponListEmpty()) {
            this.zP.setVisibility(8);
            this.zV.hB();
        } else {
            this.zP.setVisibility(0);
            this.zP.post(new Runnable() { // from class: com.kwad.components.ad.reward.m.n.1
                @Override // java.lang.Runnable
                public final void run() {
                    for (CouponInfo couponInfo : adProductInfo.getCouponList()) {
                        n nVar = n.this;
                        View viewA = n.a(nVar, nVar.zP.getContext(), couponInfo, n.this.zP);
                        ViewGroup.LayoutParams layoutParams = viewA.getLayoutParams();
                        if (layoutParams == null) {
                            layoutParams = new ViewGroup.LayoutParams(-2, -1);
                        } else {
                            layoutParams.width = -2;
                            layoutParams.height = -1;
                        }
                        n.this.zP.addView(viewA, layoutParams);
                        com.kwad.components.core.t.g.a(new com.kwad.components.core.widget.e(), n.this.zP);
                    }
                    if (n.this.zV != null) {
                        if (n.this.zP.getChildCount() > 0) {
                            n.this.zP.getChildAt(0).post(new Runnable() { // from class: com.kwad.components.ad.reward.m.n.1.1
                                @Override // java.lang.Runnable
                                public final void run() {
                                    n.this.zV.hB();
                                }
                            });
                        } else {
                            n.this.zV.hB();
                        }
                    }
                }
            });
        }
        this.zQ.f(adProductInfo.getPrice(), adProductInfo.getOriginPrice());
        String strX = com.kwad.components.ad.d.b.X();
        if (bc.isNullString(strX)) {
            return;
        }
        KSImageLoader.loadImage(this.zT, strX, adTemplate);
    }

    private void initView() {
        this.zI = (ViewGroup) this.gg.findViewById(R.id.ksad_reward_order_root);
        this.zO = (KSCornerImageView) this.gg.findViewById(R.id.ksad_reward_order_icon);
        this.yP = (TextView) this.gg.findViewById(R.id.ksad_reward_order_title);
        this.zP = (LinearLayout) this.gg.findViewById(R.id.ksad_reward_order_coupon_list);
        this.zQ = (KsPriceView) this.gg.findViewById(R.id.ksad_reward_order_price);
        this.zR = (TextView) this.gg.findViewById(R.id.ksad_reward_order_btn_buy);
        this.zS = this.gg.findViewById(R.id.ksad_reward_order_text_area);
        this.zT = (KSCornerImageView) this.gg.findViewById(R.id.ksad_reward_order_kwai_logo);
        this.zR.setText(com.kwad.components.ad.d.b.W());
        this.zR.setOnClickListener(this);
        this.zO.setOnClickListener(this);
        this.zS.setOnClickListener(this);
        Context context = this.gg.getContext();
        if (ai.IN()) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = this.gg.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_reward_follow_card_width_horizontal);
            this.gg.setLayoutParams(layoutParams2);
        }
    }

    public final void a(a aVar) {
        this.zV = aVar;
    }

    @Override // com.kwad.components.ad.reward.m.d
    public final void a(r rVar) {
        super.a(rVar);
        a(com.kwad.sdk.core.response.b.a.cy(com.kwad.sdk.core.response.b.d.cg(rVar.getAdTemplate())), rVar.getAdTemplate());
    }

    @Override // com.kwad.components.ad.reward.m.d
    public final ViewGroup gQ() {
        return this.zI;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (this.zU == null) {
            return;
        }
        if (view.equals(this.zR)) {
            this.zU.gU();
        } else if (view.equals(this.zO)) {
            this.zU.ip();
        } else if (view.equals(this.zS)) {
            this.zU.iq();
        }
    }
}
