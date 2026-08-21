package com.bianfeng.ymnsdk.util;

import android.R;
import android.app.Activity;
import android.os.Handler;
import android.view.View;
import android.view.ViewGroup;
import java.util.Observer;

public class ViewHelper {
    public ViewHelper() {
    }

    public static void setLogoView(Activity r4, final View r5, long r6, final Observer r8) {
        final ViewGroup r42 = (ViewGroup) r4.findViewById(R.id.content);     // Catch: Exception -> L5
        final View r1 = r42.getChildAt(0);     // Catch: Exception -> L5
        r42.removeView(r1);     // Catch: Exception -> L5
        r42.addView(r5, 0, new ViewGroup.LayoutParams(-1, -1));     // Catch: Exception -> L5
        new Handler(new 1(r42, r5, r1, r8)).sendEmptyMessageDelayed(0, r6);     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }
}
