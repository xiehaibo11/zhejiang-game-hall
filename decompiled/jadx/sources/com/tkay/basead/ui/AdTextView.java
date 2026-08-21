package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class AdTextView extends TextView {
    public AdTextView(Context context) {
        super(context);
        a(context);
    }

    public AdTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a(context);
    }

    public AdTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        a(context);
    }

    private void a(Context context) {
        setBackgroundResource(h.a(context, "myoffer_bg_banner_ad_choice", i.c));
        setTextColor(-1);
        setText(context.getResources().getString(h.a(context, "basead_ad_text", i.g)));
        setTextSize(8.0f);
        setGravity(17);
        setPadding(h.a(context, 3.0f), 0, h.a(context, 3.0f), 0);
    }
}
