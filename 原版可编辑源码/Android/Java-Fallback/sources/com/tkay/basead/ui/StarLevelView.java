package com.tkay.basead.ui;

public class StarLevelView extends android.widget.ImageView {
    android.content.Context a;

    public StarLevelView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r1.a = r2
            return
    }

    public StarLevelView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            r1.a = r2
            return
    }

    public StarLevelView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a = r1
            return
    }

    public void setState(boolean r3) {
            r2 = this;
            java.lang.String r0 = "drawable"
            if (r3 == 0) goto L12
            android.content.Context r3 = r2.getContext()
            java.lang.String r1 = "myoffer_splash_star"
            int r3 = com.tkay.core.common.l.h.a(r3, r1, r0)
            r2.setImageResource(r3)
            return
        L12:
            android.content.Context r3 = r2.getContext()
            java.lang.String r1 = "myoffer_splash_star_gray"
            int r3 = com.tkay.core.common.l.h.a(r3, r1, r0)
            r2.setImageResource(r3)
            return
    }
}
