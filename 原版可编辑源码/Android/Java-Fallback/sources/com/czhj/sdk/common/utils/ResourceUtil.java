package com.czhj.sdk.common.utils;

public class ResourceUtil {
    public ResourceUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
    }

    public static int getAnimId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "anim"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getArrayId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "array"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getAttrId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "attr"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getBoolId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "bool"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getColorId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "color"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getDimenId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "dimen"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getDrawableId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "drawable"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "id"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getIntegerId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "integer"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getLayoutId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "layout"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getMipmapId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "mipmap"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getStringId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "string"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int getStyleId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "style"
            int r1 = a(r1, r2, r0)
            return r1
    }
}
