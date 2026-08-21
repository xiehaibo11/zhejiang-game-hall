package com.kwad.components.core.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;

public class KsStyledTextButton extends TextView implements d {
    public KsStyledTextButton(Context context) {
        super(context);
    }

    public KsStyledTextButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public KsStyledTextButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public KsStyledTextButton(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
    }

    @Override
    public final void a(e eVar) {
        com.kwad.components.core.t.g.b(eVar, getBackground());
    }
}
