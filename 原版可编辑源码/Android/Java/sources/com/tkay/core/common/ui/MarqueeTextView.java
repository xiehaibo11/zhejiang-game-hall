package com.tkay.core.common.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;

public class MarqueeTextView extends TextView {
    @Override
    public boolean isFocused() {
        return true;
    }

    public MarqueeTextView(Context context) {
        super(context);
    }

    public MarqueeTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }
}
