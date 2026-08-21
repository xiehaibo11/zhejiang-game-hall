package com.tkay.basead.ui;

public class ShakeTextHintView extends com.tkay.basead.ui.BaseShakeView {
    public ShakeTextHintView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ShakeTextHintView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ShakeTextHintView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public ShakeTextHintView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    final void a() {
            r4 = this;
            r0 = 0
            r4.setOrientation(r0)
            r0 = 17
            r4.setGravity(r0)
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_shake_text_hint"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r2 = 1
            r0.inflate(r1, r4, r2)
            android.content.Context r0 = r4.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            r4.setPadding(r0, r0, r0, r0)
            return
    }
}
