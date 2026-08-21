package com.huawei.hms.utils;

public abstract class ResourceLoaderUtil {
    public static android.content.Context a;
    public static java.lang.String b;

    public ResourceLoaderUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getAnimId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "anim"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static int getColorId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "color"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static android.graphics.drawable.Drawable getDrawable(java.lang.String r1) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            int r1 = getDrawableId(r1)
            android.graphics.drawable.Drawable r1 = r0.getDrawable(r1)
            return r1
    }

    public static int getDrawableId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "drawable"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static int getIdId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "id"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static int getLayoutId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "layout"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static java.lang.String getString(java.lang.String r1) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            int r1 = getStringId(r1)
            java.lang.String r1 = r0.getString(r1)
            return r1
    }

    public static java.lang.String getString(java.lang.String r1, java.lang.Object... r2) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            int r1 = getStringId(r1)
            java.lang.String r1 = r0.getString(r1, r2)
            return r1
    }

    public static int getStringId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "string"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static int getStyleId(java.lang.String r3) {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.b
            java.lang.String r2 = "style"
            int r3 = r0.getIdentifier(r3, r2, r1)
            return r3
    }

    public static android.content.Context getmContext() {
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.a
            return r0
    }

    public static void setmContext(android.content.Context r0) {
            com.huawei.hms.utils.ResourceLoaderUtil.a = r0
            java.lang.String r0 = r0.getPackageName()
            com.huawei.hms.utils.ResourceLoaderUtil.b = r0
            return
    }
}
