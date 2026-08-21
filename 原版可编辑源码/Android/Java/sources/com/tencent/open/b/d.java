package com.tencent.open.b;

import android.content.Context;
import android.text.TextUtils;
import android.view.WindowManager;
import java.util.Locale;

public class d {
    private static String a;
    private static String b;

    public static String a(Context context) {
        if (!TextUtils.isEmpty(a)) {
            return a;
        }
        if (context == null) {
            return "";
        }
        a = "";
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager != null) {
            a = windowManager.getDefaultDisplay().getWidth() + "x" + windowManager.getDefaultDisplay().getHeight();
        }
        return a;
    }

    public static String a() {
        return Locale.getDefault().getLanguage();
    }
}
