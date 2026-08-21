package com.mbridge.msdk.foundation.tools;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;

/* JADX INFO: compiled from: ViewUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class an {
    public static void a(View view) {
        if (view != null) {
            ViewParent parent = view.getParent();
            if (parent instanceof ViewGroup) {
                ((ViewGroup) parent).removeView(view);
            }
        }
    }
}
