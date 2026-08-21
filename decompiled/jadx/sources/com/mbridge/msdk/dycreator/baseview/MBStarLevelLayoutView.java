package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes2.dex */
public class MBStarLevelLayoutView extends MBLinearLayout {
    public MBStarLevelLayoutView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public void setRating(int i) {
        try {
            removeAllViews();
            if (i == 0) {
                i = 5;
            }
            for (int i2 = 0; i2 < 5; i2++) {
                ImageView imageView = new ImageView(getContext());
                LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
                if (i2 < i) {
                    imageView.setImageResource(s.a(a.f().j(), "mbridge_download_message_dialog_star_sel", i.c));
                } else {
                    imageView.setImageResource(s.a(a.f().j(), "mbridge_download_message_dilaog_star_nor", i.c));
                }
                layoutParams.leftMargin = c.a(getContext(), 5.0f);
                addView(imageView, layoutParams);
            }
        } catch (Exception e) {
            z.d("MBStarLevelLayoutView", e.getMessage());
        }
    }
}
