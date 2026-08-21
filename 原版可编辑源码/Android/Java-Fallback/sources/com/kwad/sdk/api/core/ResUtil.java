package com.kwad.sdk.api.core;

class ResUtil {
    ResUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static int getAttrId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "attr"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    static int getColor(android.content.Context r2, java.lang.String r3) {
            android.content.res.Resources r0 = getResources(r2)
            java.lang.String r1 = "color"
            int r2 = getIdentifier(r2, r3, r1)
            int r2 = r0.getColor(r2)
            return r2
    }

    static int getDimenId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "dimen"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    static android.graphics.drawable.Drawable getDrawable(android.content.Context r2, java.lang.String r3) {
            android.content.res.Resources r0 = getResources(r2)
            java.lang.String r1 = "drawable"
            int r2 = getIdentifier(r2, r3, r1)
            android.graphics.drawable.Drawable r2 = r0.getDrawable(r2)
            return r2
    }

    static int getDrawableId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "drawable"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    static int getId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "id"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    private static int getIdentifier(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = getResources(r1)
            java.lang.String r1 = getPackageName(r1)
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
    }

    static int getLayoutId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "layout"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    private static java.lang.String getPackageName(android.content.Context r0) {
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    static int getRawId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "raw"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }

    private static android.content.res.Resources getResources(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            return r0
    }

    static java.lang.String getString(android.content.Context r2, java.lang.String r3) {
            android.content.res.Resources r0 = getResources(r2)
            java.lang.String r1 = "string"
            int r2 = getIdentifier(r2, r3, r1)
            java.lang.String r2 = r0.getString(r2)
            return r2
    }

    static int getStyleId(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "style"
            int r1 = getIdentifier(r1, r2, r0)
            return r1
    }
}
