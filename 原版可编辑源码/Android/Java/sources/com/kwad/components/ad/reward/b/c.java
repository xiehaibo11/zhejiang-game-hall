package com.kwad.components.ad.reward.b;

import android.view.ViewGroup;
import com.kwad.components.ad.reward.b.b;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class c extends com.kwad.components.ad.reward.presenter.a implements b.a {
    private AdTemplate mAdTemplate;
    private boolean rl = false;

    static boolean a(c cVar, boolean z) {
        cVar.rl = true;
        return true;
    }

    private static boolean l(AdInfo adInfo) {
        AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
        return (!com.kwad.components.ad.reward.a.b.i(adInfo) || adProductInfoCy == null || adProductInfoCy.isCouponListEmpty()) ? false : true;
    }

    @Override
    public final void ah() {
        super.ah();
        this.mAdTemplate = this.qx.mAdTemplate;
    }

    @Override
    public final void gU() {
        this.qx.a(1, getContext(), 29, 1);
    }

    public final void showDialog() {
        com.kwad.sdk.core.e.c.d("RewardCouponDialogPresenter", "onBind hasShown : " + this.rl);
        if (this.rl) {
            return;
        }
        AdInfo adInfoCg = d.cg(this.mAdTemplate);
        ViewGroup viewGroup = (ViewGroup) this.qx.mRootContainer.findViewById(R.id.ksad_reward_order_coupon_list);
        if (viewGroup == null) {
            return;
        }
        int childCount = viewGroup.getChildCount();
        ViewGroup childAt = viewGroup;
        if (childCount > 0) {
            childAt = viewGroup.getChildAt(0);
        }
        final int[] iArrD = com.kwad.sdk.d.a.a.D(childAt);
        if (!l(adInfoCg) || iArrD == null) {
            return;
        }
        childAt.post(new Runnable() {
            @Override
            public final void run() {
                com.kwad.sdk.core.e.c.d("RewardCouponDialogPresenter", "targetView x: " + iArrD[0] + ", y: " + iArrD[1]);
                b.a(c.this.getActivity(), c.this.mAdTemplate, c.this, iArrD);
                c.a(c.this, true);
            }
        });
    }
}
