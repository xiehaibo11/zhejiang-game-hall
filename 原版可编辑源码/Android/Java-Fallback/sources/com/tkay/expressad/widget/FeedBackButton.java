package com.tkay.expressad.widget;

public class FeedBackButton extends android.widget.TextView {
    public static java.lang.String FEEDBACK_BTN_BACKGROUND_COLOR_STR = "#60000000";

    static {
            return
    }

    public FeedBackButton(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public FeedBackButton(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public FeedBackButton(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    public FeedBackButton(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.a()
            return
    }

    private void a() {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            java.lang.String r1 = "tkay_cm_feedback_btn_text"
            java.lang.String r2 = "string"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            r5.setText(r0)
            android.content.Context r0 = r5.getContext()
            r1 = 1084227584(0x40a00000, float:5.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            int r3 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            int r4 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            int r1 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r5.setPadding(r2, r3, r4, r1)
            r1 = 0
            r5.setTextIsSelectable(r1)
            r1 = 17
            r5.setGravity(r1)
            java.lang.String r1 = com.tkay.expressad.widget.FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r1 = android.graphics.Color.parseColor(r1)
            r5.setBackgroundColor(r1)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r2)
            float r0 = (float) r0
            r1.setCornerRadius(r0)
            java.lang.String r0 = com.tkay.expressad.widget.FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setColor(r0)
            r5.setBackground(r1)
            r0 = -1
            r5.setTextColor(r0)
            return
    }
}
