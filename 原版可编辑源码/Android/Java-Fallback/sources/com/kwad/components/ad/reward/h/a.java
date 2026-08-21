package com.kwad.components.ad.reward.h;

public final class a implements com.kwad.components.ad.reward.e.l {
    private android.content.Context mContext;

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    @Override
    public final boolean hc() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            if (r0 == 0) goto L15
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.string.ksad_reward_playable_load_error_toast
            java.lang.String r0 = r0.getString(r1)
            android.content.Context r1 = r4.mContext
            r2 = 0
            com.kwad.sdk.utils.v.c(r1, r0, r2)
        L15:
            r0 = 1
            return r0
    }
}
