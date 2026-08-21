package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.util.AttributeSet;
import android.view.ViewGroup;
import com.tkay.core.common.l.u;
import com.tkay.core.common.ui.component.RoundImageView;

public class WrapRoundImageView extends RoundImageView {
    public WrapRoundImageView(Context context) {
        super(context);
    }

    public WrapRoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public int[] setBitmapAndResize(Bitmap bitmap, int i, int i2) {
        setImageBitmap(bitmap);
        if (i > 0 && i2 > 0) {
            try {
                int[] iArrA = u.a(i, i2, bitmap.getWidth() / bitmap.getHeight());
                ViewGroup.LayoutParams layoutParams = getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.width = iArrA[0];
                    layoutParams.height = iArrA[1];
                    setLayoutParams(layoutParams);
                    return iArrA;
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return null;
    }
}
