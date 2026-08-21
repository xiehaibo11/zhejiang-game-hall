package com.sigmob.sdk.nativead;

public class j extends android.widget.RelativeLayout {
    private android.widget.TextView a;
    private android.widget.TextView b;
    private android.widget.TextView c;
    private android.widget.TextView d;

    public j(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            int r0 = r2.getLayoutId()
            android.view.View.inflate(r3, r0, r2)
            android.content.Context r3 = r2.getContext()
            java.lang.String r0 = "sig_app_info_ver"
            int r3 = com.czhj.sdk.common.utils.ResourceUtil.getId(r3, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.a = r3
            android.content.Context r3 = r2.getContext()
            java.lang.String r0 = "sig_app_info_dev"
            int r3 = com.czhj.sdk.common.utils.ResourceUtil.getId(r3, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.b = r3
            android.content.Context r3 = r2.getContext()
            java.lang.String r0 = "sig_app_info_privacy"
            int r3 = com.czhj.sdk.common.utils.ResourceUtil.getId(r3, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.c = r3
            android.content.Context r3 = r2.getContext()
            java.lang.String r0 = "sig_app_info_permissions"
            int r3 = com.czhj.sdk.common.utils.ResourceUtil.getId(r3, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.d = r3
            android.widget.TextView r3 = r2.c
            android.text.TextPaint r3 = r3.getPaint()
            r0 = 8
            r3.setFlags(r0)
            android.widget.TextView r3 = r2.c
            android.text.TextPaint r3 = r3.getPaint()
            r1 = 1
            r3.setAntiAlias(r1)
            android.widget.TextView r3 = r2.d
            android.text.TextPaint r3 = r3.getPaint()
            r3.setFlags(r0)
            android.widget.TextView r3 = r2.d
            android.text.TextPaint r3 = r3.getPaint()
            r3.setAntiAlias(r1)
            return
    }

    private int getLayoutId() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "sig_app_info_layout"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getLayoutId(r0, r1)
            return r0
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.widget.TextView r0 = r1.a
            r0.setText(r2)
            android.widget.TextView r2 = r1.b
            r2.setText(r3)
            return
    }
}
