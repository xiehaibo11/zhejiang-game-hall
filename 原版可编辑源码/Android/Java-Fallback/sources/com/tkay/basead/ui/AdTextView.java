package com.tkay.basead.ui;

public class AdTextView extends android.widget.TextView {
    public AdTextView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a(r1)
            return
    }

    public AdTextView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a(r1)
            return
    }

    public AdTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a(r1)
            return
    }

    private void a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "myoffer_bg_banner_ad_choice"
            java.lang.String r1 = "drawable"
            int r0 = com.tkay.core.common.l.h.a(r4, r0, r1)
            r3.setBackgroundResource(r0)
            r0 = -1
            r3.setTextColor(r0)
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "basead_ad_text"
            java.lang.String r2 = "string"
            int r1 = com.tkay.core.common.l.h.a(r4, r1, r2)
            java.lang.String r0 = r0.getString(r1)
            r3.setText(r0)
            r0 = 1090519040(0x41000000, float:8.0)
            r3.setTextSize(r0)
            r0 = 17
            r3.setGravity(r0)
            r0 = 1077936128(0x40400000, float:3.0)
            int r1 = com.tkay.core.common.l.h.a(r4, r0)
            int r4 = com.tkay.core.common.l.h.a(r4, r0)
            r0 = 0
            r3.setPadding(r1, r0, r4, r0)
            return
    }
}
