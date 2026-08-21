package com.sigmob.sdk.nativead;

public class k extends android.widget.RelativeLayout {
    private android.widget.TextView a;
    private android.widget.TextView b;
    private android.view.ViewGroup c;
    private com.sigmob.sdk.base.views.h d;

    public k(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            int r0 = r3.getLayoutId()
            android.view.View.inflate(r4, r0, r3)
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "sig_app_name"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.a = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "sig_app_cta"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.b = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "sig_app_icon"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r0, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.c = r0
            com.sigmob.sdk.base.views.h r0 = new com.sigmob.sdk.base.views.h
            r0.<init>(r4)
            r3.d = r0
            r4 = 0
            r0.setCircle(r4)
            com.sigmob.sdk.base.views.h r4 = r3.d
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP
            r4.setScaleType(r0)
            android.view.ViewGroup r4 = r3.c
            com.sigmob.sdk.base.views.h r0 = r3.d
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r4.addView(r0, r1)
            return
    }

    private int getLayoutId() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_app_layout"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getLayoutId(r0, r1)
            return r0
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.widget.TextView r0 = r1.a
            r0.setText(r3)
            android.widget.TextView r3 = r1.b
            r3.setText(r4)
            android.content.Context r3 = r1.getContext()
            com.czhj.sdk.common.utils.ImageManager r3 = com.czhj.sdk.common.utils.ImageManager.with(r3)
            com.czhj.sdk.common.utils.ImageManager$RequestCreatorRunnable r2 = r3.load(r2)
            com.sigmob.sdk.base.views.h r3 = r1.d
            r2.into(r3)
            return
    }

    public android.view.View getCtaView() {
            r1 = this;
            android.widget.TextView r0 = r1.b
            return r0
    }

    @Override
    public void setOnClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            android.widget.TextView r0 = r1.b
            r0.setOnClickListener(r2)
            return
    }
}
