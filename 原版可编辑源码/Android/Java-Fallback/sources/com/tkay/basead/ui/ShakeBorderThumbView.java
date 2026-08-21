package com.tkay.basead.ui;

public class ShakeBorderThumbView extends com.tkay.basead.ui.BaseShakeView {
    public ShakeBorderThumbView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ShakeBorderThumbView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ShakeBorderThumbView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public ShakeBorderThumbView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
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
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "myoffer_bg_shake_border_thumb"
            java.lang.String r2 = "drawable"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            r4.setBackgroundResource(r0)
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_shake_border_thumb"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r2 = 1
            r0.inflate(r1, r4, r2)
            android.content.Context r0 = r4.getContext()
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            android.content.Context r1 = r4.getContext()
            r2 = 1094713344(0x41400000, float:12.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.content.Context r2 = r4.getContext()
            r3 = 1086324736(0x40c00000, float:6.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            r4.setPadding(r0, r2, r1, r2)
            return
    }
}
