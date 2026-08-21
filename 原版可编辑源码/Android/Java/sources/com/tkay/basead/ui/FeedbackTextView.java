package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

public class FeedbackTextView extends AutoResizeTextView {
    public FeedbackTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setBackgroundResource(h.a(context, "myoffer_bg_feedback_textview", i.c));
    }

    private void a(Context context) {
        setBackgroundResource(h.a(context, "myoffer_bg_feedback_textview", i.c));
    }
}
