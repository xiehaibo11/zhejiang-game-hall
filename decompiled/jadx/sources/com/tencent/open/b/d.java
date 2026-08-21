package com.tencent.open.b;

import android.content.Context;
import android.text.TextUtils;
import android.view.WindowManager;
import java.util.Locale;

/* JADX INFO: compiled from: ProGuard */
/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f5500a;
    private static String b;

    public static String a(Context context) {
        if (!TextUtils.isEmpty(f5500a)) {
            return f5500a;
        }
        if (context == null) {
            return "";
        }
        f5500a = "";
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager != null) {
            f5500a = windowManager.getDefaultDisplay().getWidth() + "x" + windowManager.getDefaultDisplay().getHeight();
        }
        return f5500a;
    }

    public static String a() {
        return Locale.getDefault().getLanguage();
    }
}
