package com.mbridge.msdk.dycreator.baseview;

public class MBFeedBack extends com.mbridge.msdk.dycreator.baseview.MBTextView {
    public static java.lang.String FEEDBACK_BTN_BACKGROUND_COLOR_STR = "#60000000";

    static {
            return
    }

    public MBFeedBack(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public MBFeedBack(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public MBFeedBack(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    private void a() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "mbridge_cm_feedback_btn_text"
            java.lang.String r2 = "string"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            r3.setText(r0)
            android.content.Context r0 = r3.getContext()
            r1 = 1095761920(0x41500000, float:13.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r2 = 0
            r3.setPadding(r1, r2, r1, r2)
            r3.setTextIsSelectable(r2)
            r1 = 17
            r3.setGravity(r1)
            java.lang.String r1 = com.mbridge.msdk.dycreator.baseview.MBFeedBack.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r1 = android.graphics.Color.parseColor(r1)
            r3.setBackgroundColor(r1)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            float r0 = (float) r0
            r1.setCornerRadius(r0)
            java.lang.String r0 = com.mbridge.msdk.widget.FeedBackButton.FEEDBACK_BTN_BACKGROUND_COLOR_STR
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setColor(r0)
            r3.setBackground(r1)
            r0 = -1
            r3.setTextColor(r0)
            return
    }
}
