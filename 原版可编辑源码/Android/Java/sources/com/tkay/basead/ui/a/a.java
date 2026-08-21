package com.tkay.basead.ui.a;

import android.view.View;
import android.view.ViewGroup;

public final class a {
    public static void a(View view) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.width = 0;
        view.setLayoutParams(layoutParams);
    }
}
