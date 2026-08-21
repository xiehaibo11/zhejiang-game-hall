package com.mbridge.msdk.nativex.view.mbfullview;

public class MBridgeTopFullView extends com.mbridge.msdk.nativex.view.mbfullview.BaseView {
    public static final java.lang.String INTERFACE_RESULT = null;
    protected android.widget.ImageView j;
    protected android.widget.TextView k;
    protected android.widget.TextView l;
    protected com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView m;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class<com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView> r1 = com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "WithResault"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView.INTERFACE_RESULT = r0
            return
    }

    public MBridgeTopFullView(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            android.content.Context r4 = r3.getContext()
            java.lang.String r0 = "mbridge_nativex_fullscreen_top"
            java.lang.String r1 = "layout"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r0, r1)
            android.content.Context r0 = r3.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.widget.RelativeLayout r1 = r3.i
            android.view.View r4 = r0.inflate(r4, r1)
            if (r4 == 0) goto L7d
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "mbridge_full_tv_display_icon"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.j = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_tv_display_title"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.k = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_tv_display_description"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.l = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "mbridge_full_tv_feeds_star"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r4.findViewById(r0)
            com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView r0 = (com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView) r0
            r3.m = r0
            android.widget.TextView r0 = r3.l
            r1 = -7829368(0xffffffffff888888, float:NaN)
            r0.setTextColor(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.setLayoutParams(r0)
            r3.updateLayoutParams()
        L7d:
            return
    }

    public android.widget.TextView getMBridgeFullViewDisplayDscription() {
            r1 = this;
            android.widget.TextView r0 = r1.l
            return r0
    }

    public android.widget.ImageView getMBridgeFullViewDisplayIcon() {
            r1 = this;
            android.widget.ImageView r0 = r1.j
            return r0
    }

    public android.widget.TextView getMBridgeFullViewDisplayTitle() {
            r1 = this;
            android.widget.TextView r0 = r1.k
            return r0
    }

    public com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView getStarLevelLayoutView() {
            r1 = this;
            com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView r0 = r1.m
            return r0
    }

    public void updateLayoutParams() {
            r4 = this;
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 10
            r0.addRule(r2)
            android.widget.RelativeLayout r3 = r4.a
            r3.setLayoutParams(r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r3 = -2
            r0.<init>(r1, r3)
            r0.addRule(r2)
            android.widget.RelativeLayout r1 = r4.b
            r1.setLayoutParams(r0)
            return
    }
}
