package com.mbridge.msdk.foundation.webview;

public class ToolBar extends android.widget.LinearLayout {
    public ToolBar(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public ToolBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    private void a() {
            r6 = this;
            java.lang.String r0 = "drawable"
            r1 = 0
            r6.setOrientation(r1)
            android.content.Context r2 = r6.getContext()     // Catch: java.lang.Exception -> L13
            r3 = 1092616192(0x41200000, float:10.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Exception -> L13
            r6.setPadding(r1, r2, r1, r2)     // Catch: java.lang.Exception -> L13
        L13:
            android.view.View r1 = r6.b()     // Catch: java.lang.Exception -> L3e
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = "backward"
            r1.setTag(r2)     // Catch: java.lang.Exception -> L3e
            android.content.res.Resources r2 = r6.getResources()     // Catch: java.lang.Exception -> L3e
            android.content.res.Resources r3 = r6.getResources()     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = "mbridge_cm_backward"
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3e
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> L3e
            int r3 = r3.getIdentifier(r4, r0, r5)     // Catch: java.lang.Exception -> L3e
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)     // Catch: java.lang.Exception -> L3e
            r1.setImageDrawable(r2)     // Catch: java.lang.Exception -> L3e
            r6.addView(r1)     // Catch: java.lang.Exception -> L3e
        L3e:
            android.view.View r1 = r6.b()     // Catch: java.lang.Exception -> L69
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L69
            java.lang.String r2 = "forward"
            r1.setTag(r2)     // Catch: java.lang.Exception -> L69
            android.content.res.Resources r2 = r6.getResources()     // Catch: java.lang.Exception -> L69
            android.content.res.Resources r3 = r6.getResources()     // Catch: java.lang.Exception -> L69
            java.lang.String r4 = "mbridge_cm_forward"
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L69
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> L69
            int r3 = r3.getIdentifier(r4, r0, r5)     // Catch: java.lang.Exception -> L69
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)     // Catch: java.lang.Exception -> L69
            r1.setImageDrawable(r2)     // Catch: java.lang.Exception -> L69
            r6.addView(r1)     // Catch: java.lang.Exception -> L69
        L69:
            android.view.View r1 = r6.b()     // Catch: java.lang.Exception -> L94
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = "refresh"
            r1.setTag(r2)     // Catch: java.lang.Exception -> L94
            android.content.res.Resources r2 = r6.getResources()     // Catch: java.lang.Exception -> L94
            android.content.res.Resources r3 = r6.getResources()     // Catch: java.lang.Exception -> L94
            java.lang.String r4 = "mbridge_cm_refresh"
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L94
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> L94
            int r3 = r3.getIdentifier(r4, r0, r5)     // Catch: java.lang.Exception -> L94
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)     // Catch: java.lang.Exception -> L94
            r1.setImageDrawable(r2)     // Catch: java.lang.Exception -> L94
            r6.addView(r1)     // Catch: java.lang.Exception -> L94
        L94:
            android.view.View r1 = r6.b()     // Catch: java.lang.Exception -> Lbf
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> Lbf
            java.lang.String r2 = "exits"
            r1.setTag(r2)     // Catch: java.lang.Exception -> Lbf
            android.content.res.Resources r2 = r6.getResources()     // Catch: java.lang.Exception -> Lbf
            android.content.res.Resources r3 = r6.getResources()     // Catch: java.lang.Exception -> Lbf
            java.lang.String r4 = "mbridge_cm_exits"
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lbf
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> Lbf
            int r0 = r3.getIdentifier(r4, r0, r5)     // Catch: java.lang.Exception -> Lbf
            android.graphics.drawable.Drawable r0 = r2.getDrawable(r0)     // Catch: java.lang.Exception -> Lbf
            r1.setImageDrawable(r0)     // Catch: java.lang.Exception -> Lbf
            r6.addView(r1)     // Catch: java.lang.Exception -> Lbf
        Lbf:
            return
    }

    private android.view.View b() {
            r3 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r2 = 1065353216(0x3f800000, float:1.0)
            r1.weight = r2
            r0.setLayoutParams(r1)
            r1 = 1
            r0.setClickable(r1)
            return r0
    }

    public android.view.View getItem(java.lang.String r1) {
            r0 = this;
            android.view.View r1 = r0.findViewWithTag(r1)
            return r1
    }

    public void setOnItemClickListener(android.view.View.OnClickListener r4) {
            r3 = this;
            int r0 = r3.getChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L11
            android.view.View r2 = r3.getChildAt(r1)
            r2.setOnClickListener(r4)
            int r1 = r1 + 1
            goto L5
        L11:
            return
    }
}
