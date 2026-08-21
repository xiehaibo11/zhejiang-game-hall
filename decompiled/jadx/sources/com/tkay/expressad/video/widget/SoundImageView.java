package com.tkay.expressad.video.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class SoundImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f7449a;

    public SoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f7449a = true;
    }

    public SoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f7449a = true;
    }

    public SoundImageView(Context context) {
        super(context);
        this.f7449a = true;
    }

    public boolean getStatus() {
        return this.f7449a;
    }

    public void setSoundStatus(boolean z) {
        this.f7449a = z;
        if (z) {
            setImageResource(i.a(getContext(), "tkay_reward_sound_open", i.c));
        } else {
            setImageResource(i.a(getContext(), "tkay_reward_sound_close", i.c));
        }
    }
}
