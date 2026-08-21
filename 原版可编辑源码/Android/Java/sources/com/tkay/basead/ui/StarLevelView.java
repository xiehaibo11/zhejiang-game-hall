package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

public class StarLevelView extends ImageView {
    Context a;

    public StarLevelView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
        this.a = context;
    }

    public StarLevelView(Context context) {
        this(context, null);
        this.a = context;
    }

    public StarLevelView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = context;
    }

    public void setState(boolean z) {
        if (z) {
            setImageResource(h.a(getContext(), "myoffer_splash_star", i.c));
        } else {
            setImageResource(h.a(getContext(), "myoffer_splash_star_gray", i.c));
        }
    }
}
