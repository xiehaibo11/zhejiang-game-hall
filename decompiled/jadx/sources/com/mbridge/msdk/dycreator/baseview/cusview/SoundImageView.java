package com.mbridge.msdk.dycreator.baseview.cusview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.foundation.tools.s;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes2.dex */
public class SoundImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3237a;

    public SoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f3237a = true;
    }

    public SoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3237a = true;
    }

    public SoundImageView(Context context) {
        super(context);
        this.f3237a = true;
    }

    public boolean getStatus() {
        return this.f3237a;
    }

    public void setSoundStatus(boolean z) {
        this.f3237a = z;
        if (z) {
            setImageResource(s.a(getContext(), "mbridge_reward_sound_open", i.c));
        } else {
            setImageResource(s.a(getContext(), "mbridge_reward_sound_close", i.c));
        }
    }
}
