package com.tkay.expressad.video.widget;

public class SoundImageView extends android.widget.ImageView {
    private boolean a;

    public SoundImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.a = r1
            return
    }

    public SoundImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.a = r1
            return
    }

    public SoundImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1
            r0.a = r1
            return
    }

    public boolean getStatus() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public void setSoundStatus(boolean r3) {
            r2 = this;
            r2.a = r3
            java.lang.String r0 = "drawable"
            if (r3 == 0) goto L14
            android.content.Context r3 = r2.getContext()
            java.lang.String r1 = "tkay_reward_sound_open"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r1, r0)
            r2.setImageResource(r3)
            return
        L14:
            android.content.Context r3 = r2.getContext()
            java.lang.String r1 = "tkay_reward_sound_close"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r1, r0)
            r2.setImageResource(r3)
            return
    }
}
