package com.mbridge.msdk.mbnative.controller;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.support.v4.view.ViewCompat;
import android.view.View;

public final class d {
    private static View a(View view) {
        if (view == null) {
            return null;
        }
        try {
            ViewCompat.isAttachedToWindow(view);
        } catch (Throwable unused) {
        }
        try {
            View rootView = view.getRootView();
            if (rootView == null) {
                return null;
            }
            View viewFindViewById = rootView.findViewById(R.id.content);
            return viewFindViewById != null ? viewFindViewById : rootView;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public static View a(Context context, View view) {
        View viewFindViewById = null;
        if (context != null && (context instanceof Activity)) {
            viewFindViewById = ((Activity) context).getWindow().getDecorView().findViewById(R.id.content);
        }
        return viewFindViewById != null ? viewFindViewById : a(view);
    }
}
