package com.tkay.basead.ui;

public class MuteImageView extends android.widget.ImageView {
    private boolean a;

    public MuteImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.a = r1
            return
    }

    public void setMute(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L7
            r1 = 1
            r0.setSelected(r1)
            return
        L7:
            r1 = 0
            r0.setSelected(r1)
            return
    }
}
