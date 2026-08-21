package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;

public class MBHeatLevelLayoutView extends MBLinearLayout {
    public MBHeatLevelLayoutView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public void setHeatCount(int i) {
        try {
            removeAllViews();
            double dA = c.a(i, 10000.0d, 2);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, c.a(getContext(), 30.0f));
            layoutParams.setMargins(15, 0, 0, 0);
            TextView textView = new TextView(getContext());
            textView.setTypeface(Typeface.defaultFromStyle(1));
            textView.setGravity(17);
            textView.setTextColor(Color.parseColor("#FF000000"));
            textView.setTextSize(10.0f);
            Drawable drawable = getResources().getDrawable(s.a(getContext(), "mbridge_reward_user", i.c));
            if (drawable != null) {
                drawable.setBounds(0, 0, drawable.getMinimumWidth(), drawable.getMinimumHeight());
            }
            textView.setCompoundDrawables(null, null, drawable, null);
            textView.setText(dA + getResources().getString(getResources().getIdentifier("mbridge_reward_heat_count_unit", i.g, a.f().d())));
            addView(textView, layoutParams);
        } catch (Exception e) {
            z.d("MBHeatLevelLayoutView", e.getMessage());
        }
    }
}
