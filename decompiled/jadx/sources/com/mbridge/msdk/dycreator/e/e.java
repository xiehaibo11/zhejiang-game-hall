package com.mbridge.msdk.dycreator.e;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.WindowManager;

/* JADX INFO: compiled from: DensityUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e {
    public static int a(Context context, float f) {
        return (int) ((f / a(context).density) + 0.5f);
    }

    public static DisplayMetrics a(Context context) {
        Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
        DisplayMetrics displayMetrics = new DisplayMetrics();
        defaultDisplay.getMetrics(displayMetrics);
        return displayMetrics;
    }
}
