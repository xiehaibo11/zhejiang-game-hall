package com.huawei.hms.utils;

import android.content.Context;
import android.graphics.drawable.Drawable;
import com.tkay.expressad.foundation.h.i;

public abstract class ResourceLoaderUtil {
    public static Context a;
    public static String b;

    public static int getAnimId(String str) {
        return a.getResources().getIdentifier(str, i.f, b);
    }

    public static int getColorId(String str) {
        return a.getResources().getIdentifier(str, "color", b);
    }

    public static Drawable getDrawable(String str) {
        return a.getResources().getDrawable(getDrawableId(str));
    }

    public static int getDrawableId(String str) {
        return a.getResources().getIdentifier(str, i.c, b);
    }

    public static int getIdId(String str) {
        return a.getResources().getIdentifier(str, "id", b);
    }

    public static int getLayoutId(String str) {
        return a.getResources().getIdentifier(str, "layout", b);
    }

    public static String getString(String str) {
        return a.getResources().getString(getStringId(str));
    }

    public static int getStringId(String str) {
        return a.getResources().getIdentifier(str, i.g, b);
    }

    public static int getStyleId(String str) {
        return a.getResources().getIdentifier(str, "style", b);
    }

    public static Context getmContext() {
        return a;
    }

    public static void setmContext(Context context) {
        a = context;
        b = context.getPackageName();
    }

    public static String getString(String str, Object... objArr) {
        return a.getResources().getString(getStringId(str), objArr);
    }
}
