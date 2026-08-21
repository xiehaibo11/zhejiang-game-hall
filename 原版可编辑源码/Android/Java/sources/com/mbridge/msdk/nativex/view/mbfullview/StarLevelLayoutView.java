package com.mbridge.msdk.nativex.view.mbfullview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.tkay.expressad.foundation.h.i;

public class StarLevelLayoutView extends LinearLayout {
    public StarLevelLayoutView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public StarLevelLayoutView(Context context) {
        super(context);
    }

    public StarLevelLayoutView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setRating(int i) {
        removeAllViews();
        if (i == 0) {
            i = 5;
        }
        for (int i2 = 0; i2 < 5; i2++) {
            ImageView imageView = new ImageView(getContext());
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
            if (i2 < i) {
                imageView.setBackgroundResource(s.a(getContext(), "mbridge_demo_star_sel", i.c));
            } else {
                imageView.setBackgroundResource(s.a(getContext(), "mbridge_demo_star_nor", i.c));
            }
            layoutParams.leftMargin = ae.b(getContext(), 7.0f);
            addView(imageView, layoutParams);
        }
    }
}
