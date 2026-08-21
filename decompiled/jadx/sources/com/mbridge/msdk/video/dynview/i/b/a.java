package com.mbridge.msdk.video.dynview.i.b;

import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.view.View;
import com.mbridge.msdk.foundation.tools.ae;

/* JADX INFO: compiled from: UIDrawableUtil.java */
/* JADX INFO: loaded from: classes3.dex */
public final class a {
    public static void a(View view, float f, float f2, String str, String[] strArr, GradientDrawable.Orientation orientation) {
        if (view == null || strArr == null) {
            return;
        }
        int[] iArr = new int[strArr.length];
        for (int i = 0; i < strArr.length; i++) {
            iArr[i] = Color.parseColor(strArr[i]);
        }
        GradientDrawable gradientDrawable = new GradientDrawable(orientation, iArr);
        gradientDrawable.setCornerRadius(ae.b(view.getContext(), f2));
        gradientDrawable.setStroke(ae.b(view.getContext(), f), Color.parseColor(str));
        view.setBackground(gradientDrawable);
    }
}
