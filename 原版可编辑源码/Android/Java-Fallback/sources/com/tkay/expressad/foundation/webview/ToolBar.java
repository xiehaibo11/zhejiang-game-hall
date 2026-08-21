package com.tkay.expressad.foundation.webview;

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
            r0 = 0
            r6.setOrientation(r0)
            android.content.Context r1 = r6.getContext()
            r2 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r6.setPadding(r0, r1, r0, r1)
            android.view.View r0 = r6.b()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            java.lang.String r1 = "backward"
            r0.setTag(r1)
            android.content.res.Resources r1 = r6.getResources()
            android.content.res.Resources r2 = r6.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r4 = "drawable"
            java.lang.String r5 = "tkay_expressad_backward"
            int r2 = r2.getIdentifier(r5, r4, r3)
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            r6.addView(r0)
            android.view.View r0 = r6.b()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            java.lang.String r1 = "forward"
            r0.setTag(r1)
            android.content.res.Resources r1 = r6.getResources()
            android.content.res.Resources r2 = r6.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_expressad_forward"
            int r2 = r2.getIdentifier(r5, r4, r3)
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            r6.addView(r0)
            android.view.View r0 = r6.b()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            java.lang.String r1 = "refresh"
            r0.setTag(r1)
            android.content.res.Resources r1 = r6.getResources()
            android.content.res.Resources r2 = r6.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_expressad_refresh"
            int r2 = r2.getIdentifier(r5, r4, r3)
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            r6.addView(r0)
            android.view.View r0 = r6.b()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            java.lang.String r1 = "exits"
            r0.setTag(r1)
            android.content.res.Resources r1 = r6.getResources()
            android.content.res.Resources r2 = r6.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_expressad_exits"
            int r2 = r2.getIdentifier(r5, r4, r3)
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            r6.addView(r0)
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
