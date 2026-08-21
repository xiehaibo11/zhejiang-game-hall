package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class ShakeBorderThumbView extends BaseShakeView {
    public ShakeBorderThumbView(Context context) {
        super(context);
    }

    public ShakeBorderThumbView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public ShakeBorderThumbView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public ShakeBorderThumbView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
    }

    @Override // com.tkay.basead.ui.BaseShakeView
    final void a() {
        setOrientation(0);
        setGravity(17);
        setBackgroundResource(h.a(m.a().f(), "myoffer_bg_shake_border_thumb", i.c));
        LayoutInflater.from(getContext()).inflate(h.a(getContext(), "myoffer_shake_border_thumb", "layout"), (ViewGroup) this, true);
        int iA = h.a(getContext(), 10.0f);
        int iA2 = h.a(getContext(), 12.0f);
        int iA3 = h.a(getContext(), 6.0f);
        setPadding(iA, iA3, iA2, iA3);
    }
}
