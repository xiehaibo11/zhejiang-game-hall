package com.sigmob.sdk.videoAd;

public class j extends android.widget.ImageView {
    private com.sigmob.sdk.base.views.s a;
    private final int b;

    public j(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.sigmob.sdk.base.views.s r0 = new com.sigmob.sdk.base.views.s
            r0.<init>(r2)
            r1.a = r0
            r1.setImageDrawable(r0)
            r0 = 1073741824(0x40000000, float:2.0)
            int r2 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r2)
            r1.b = r2
            return
    }

    public void a() {
            r2 = this;
            com.sigmob.sdk.base.views.s r0 = r2.a
            r0.a()
            com.sigmob.sdk.base.views.s r0 = r2.a
            r1 = 0
            r0.a(r1)
            return
    }

    public void a(int r2) {
            r1 = this;
            com.sigmob.sdk.base.views.s r0 = r1.a
            r0.a(r2)
            return
    }

    public void a(int r2, int r3) {
            r1 = this;
            com.sigmob.sdk.base.views.s r0 = r1.a
            r0.a(r2, r3)
            r2 = 0
            r1.setVisibility(r2)
            return
    }

    @java.lang.Deprecated
    com.sigmob.sdk.base.views.s getImageViewDrawable() {
            r1 = this;
            com.sigmob.sdk.base.views.s r0 = r1.a
            return r0
    }

    public void setAnchorId(int r4) {
            r3 = this;
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            int r1 = r3.b
            r2 = -1
            r0.<init>(r2, r1)
            r1 = 8
            r0.addRule(r1, r4)
            r3.setLayoutParams(r0)
            return
    }

    @java.lang.Deprecated
    void setImageViewDrawable(com.sigmob.sdk.base.views.s r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
