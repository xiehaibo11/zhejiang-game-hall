package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class StarLevelView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f5853a;

    public StarLevelView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
        this.f5853a = context;
    }

    public StarLevelView(Context context) {
        this(context, null);
        this.f5853a = context;
    }

    public StarLevelView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f5853a = context;
    }

    public void setState(boolean z) {
        if (z) {
            setImageResource(h.a(getContext(), "myoffer_splash_star", i.c));
        } else {
            setImageResource(h.a(getContext(), "myoffer_splash_star_gray", i.c));
        }
    }
}
