package com.kwad.sdk.m;

public final class h extends android.content.res.Resources {
    private final android.content.res.Resources aMz;

    public h(android.content.res.Resources r3, android.content.res.Resources r4) {
            r2 = this;
            android.content.res.AssetManager r0 = r3.getAssets()
            android.util.DisplayMetrics r1 = r3.getDisplayMetrics()
            android.content.res.Configuration r3 = r3.getConfiguration()
            r2.<init>(r0, r1, r3)
            r2.aMz = r4
            return
    }

    private static boolean ax(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.lang.String r0 = "ksad_"
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto L1f
            java.lang.String r1 = "com.kwad.dy.sdk"
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L1d
            goto L1f
        L1d:
            r1 = 0
            return r1
        L1f:
            r1 = 1
            return r1
    }

    private static boolean dr(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "0x"
            r0.<init>(r1)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "0x60"
            boolean r2 = r2.startsWith(r0)
            if (r2 != 0) goto L1c
            r2 = 1
            return r2
        L1c:
            r2 = 0
            return r2
    }

    @Override
    public final android.content.res.XmlResourceParser getAnimation(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getAnimation id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.content.res.XmlResourceParser r3 = r0.getAnimation(r3)
            return r3
        L24:
            android.content.res.XmlResourceParser r3 = super.getAnimation(r3)
            return r3
    }

    @Override
    public final boolean getBoolean(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getBoolean id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            boolean r3 = r0.getBoolean(r3)
            return r3
        L24:
            boolean r3 = super.getBoolean(r3)
            return r3
    }

    @Override
    @java.lang.Deprecated
    public final int getColor(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getColor id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getColor(r3)
            return r3
        L24:
            int r3 = super.getColor(r3)
            return r3
    }

    @Override
    public final int getColor(int r3, android.content.res.Resources.Theme r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getMovie id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getColor(r3, r4)
            return r3
        L24:
            int r3 = super.getColor(r3, r4)
            return r3
    }

    @Override
    public final float getDimension(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDimension id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            float r3 = r0.getDimension(r3)
            return r3
        L24:
            float r3 = super.getDimension(r3)
            return r3
    }

    @Override
    public final int getDimensionPixelOffset(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDimensionPixelOffset id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getDimensionPixelOffset(r3)
            return r3
        L24:
            int r3 = super.getDimensionPixelOffset(r3)
            return r3
    }

    @Override
    public final int getDimensionPixelSize(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDimensionPixelSize id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getDimensionPixelSize(r3)
            return r3
        L24:
            int r3 = super.getDimensionPixelSize(r3)
            return r3
    }

    @Override
    public final android.util.DisplayMetrics getDisplayMetrics() {
            r1 = this;
            android.util.DisplayMetrics r0 = super.getDisplayMetrics()
            return r0
    }

    @Override
    @java.lang.Deprecated
    public final android.graphics.drawable.Drawable getDrawable(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDrawable id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.graphics.drawable.Drawable r3 = r0.getDrawable(r3)
            return r3
        L24:
            android.graphics.drawable.Drawable r3 = super.getDrawable(r3)
            return r3
    }

    @Override
    public final android.graphics.drawable.Drawable getDrawable(int r3, android.content.res.Resources.Theme r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDrawable id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r4 = r2.aMz
            android.graphics.drawable.Drawable r3 = r4.getDrawable(r3)
            return r3
        L24:
            android.graphics.drawable.Drawable r3 = super.getDrawable(r3, r4)
            return r3
    }

    @Override
    @java.lang.Deprecated
    public final android.graphics.drawable.Drawable getDrawableForDensity(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDrawableForDensity id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.graphics.drawable.Drawable r3 = r0.getDrawableForDensity(r3, r4)
            return r3
        L24:
            android.graphics.drawable.Drawable r3 = super.getDrawableForDensity(r3, r4)
            return r3
    }

    @Override
    public final android.graphics.drawable.Drawable getDrawableForDensity(int r3, int r4, android.content.res.Resources.Theme r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getDrawable id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.graphics.drawable.Drawable r3 = r0.getDrawableForDensity(r3, r4, r5)
            return r3
        L24:
            android.graphics.drawable.Drawable r3 = super.getDrawableForDensity(r3, r4, r5)
            return r3
    }

    @Override
    public final float getFloat(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getFloat id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            float r3 = r0.getFloat(r3)
            return r3
        L24:
            float r3 = super.getFloat(r3)
            return r3
    }

    @Override
    public final android.graphics.Typeface getFont(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getFont id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.graphics.Typeface r3 = r0.getFont(r3)
            return r3
        L24:
            android.graphics.Typeface r3 = super.getFont(r3)
            return r3
    }

    @Override
    public final float getFraction(int r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getFraction id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            float r3 = r0.getFraction(r3, r4, r5)
            return r3
        L24:
            float r3 = super.getFraction(r3, r4, r5)
            return r3
    }

    @Override
    public final int getIdentifier(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getIdentifier id: 0x# name:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = " :defPackage"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = ax(r3, r5)
            if (r0 == 0) goto L28
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getIdentifier(r3, r4, r5)
            return r3
        L28:
            int r3 = super.getIdentifier(r3, r4, r5)
            return r3
    }

    @Override
    public final int[] getIntArray(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getIntArray id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int[] r3 = r0.getIntArray(r3)
            return r3
        L24:
            int[] r3 = super.getIntArray(r3)
            return r3
    }

    @Override
    public final int getInteger(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getInteger id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            int r3 = r0.getInteger(r3)
            return r3
        L24:
            int r3 = super.getInteger(r3)
            return r3
    }

    @Override
    public final android.content.res.XmlResourceParser getLayout(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getLayout id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.content.res.XmlResourceParser r3 = r0.getLayout(r3)
            return r3
        L24:
            android.content.res.XmlResourceParser r3 = super.getLayout(r3)
            return r3
    }

    @Override
    @java.lang.Deprecated
    public final android.graphics.Movie getMovie(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getMovie id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.graphics.Movie r3 = r0.getMovie(r3)
            return r3
        L24:
            android.graphics.Movie r3 = super.getMovie(r3)
            return r3
    }

    @Override
    public final java.lang.String getQuantityString(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getQuantityString id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getQuantityString(r3, r4)
            return r3
        L24:
            java.lang.String r3 = super.getQuantityString(r3, r4)
            return r3
    }

    @Override
    public final java.lang.String getQuantityString(int r3, int r4, java.lang.Object... r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getQuantityString id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getQuantityString(r3, r4, r5)
            return r3
        L24:
            java.lang.String r3 = super.getQuantityString(r3, r4, r5)
            return r3
    }

    @Override
    public final java.lang.CharSequence getQuantityText(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getQuantityText id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.CharSequence r3 = r0.getQuantityText(r3, r4)
            return r3
        L24:
            java.lang.CharSequence r3 = super.getQuantityText(r3, r4)
            return r3
    }

    @Override
    public final java.lang.String getResourceEntryName(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getResourceEntryName id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getResourceEntryName(r3)
            return r3
        L24:
            java.lang.String r3 = super.getResourceEntryName(r3)
            return r3
    }

    @Override
    public final java.lang.String getResourceName(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getResourceName id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getResourceName(r3)
            return r3
        L24:
            java.lang.String r3 = super.getResourceName(r3)
            return r3
    }

    @Override
    public final java.lang.String getResourcePackageName(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getResourcePackageName id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getResourcePackageName(r3)
            return r3
        L24:
            java.lang.String r3 = super.getResourcePackageName(r3)
            return r3
    }

    @Override
    public final java.lang.String getResourceTypeName(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getResourceTypeName id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getResourceTypeName(r3)
            return r3
        L24:
            java.lang.String r3 = super.getResourceTypeName(r3)
            return r3
    }

    @Override
    public final java.lang.String getString(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getString id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getString(r3)
            return r3
        L24:
            java.lang.String r3 = super.getString(r3)
            return r3
    }

    @Override
    public final java.lang.String getString(int r3, java.lang.Object... r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getString id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String r3 = r0.getString(r3, r4)
            return r3
        L24:
            java.lang.String r3 = super.getString(r3, r4)
            return r3
    }

    @Override
    public final java.lang.String[] getStringArray(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getStringArray id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.String[] r3 = r0.getStringArray(r3)
            return r3
        L24:
            java.lang.String[] r3 = super.getStringArray(r3)
            return r3
    }

    @Override
    public final java.lang.CharSequence getText(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getText id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.CharSequence r3 = r0.getText(r3)
            return r3
        L24:
            java.lang.CharSequence r3 = super.getText(r3)
            return r3
    }

    @Override
    public final java.lang.CharSequence getText(int r3, java.lang.CharSequence r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getText id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.CharSequence r3 = r0.getText(r3, r4)
            return r3
        L24:
            java.lang.CharSequence r3 = super.getText(r3, r4)
            return r3
    }

    @Override
    public final java.lang.CharSequence[] getTextArray(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getTextArray id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.lang.CharSequence[] r3 = r0.getTextArray(r3)
            return r3
        L24:
            java.lang.CharSequence[] r3 = super.getTextArray(r3)
            return r3
    }

    @Override
    public final void getValue(int r3, android.util.TypedValue r4, boolean r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getValue id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L23
            android.content.res.Resources r0 = r2.aMz
            r0.getValue(r3, r4, r5)
            return
        L23:
            super.getValue(r3, r4, r5)
            return
    }

    @Override
    public final void getValue(java.lang.String r4, android.util.TypedValue r5, boolean r6) {
            r3 = this;
            java.lang.String r0 = "string"
            r1 = 0
            int r0 = r3.getIdentifier(r4, r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "getValue id: 0x#"
            r1.<init>(r2)
            java.lang.String r2 = java.lang.Integer.toHexString(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r2, r1)
            boolean r0 = dr(r0)
            if (r0 == 0) goto L2a
            android.content.res.Resources r0 = r3.aMz
            r0.getValue(r4, r5, r6)
            return
        L2a:
            super.getValue(r4, r5, r6)
            return
    }

    @Override
    public final void getValueForDensity(int r3, int r4, android.util.TypedValue r5, boolean r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getValueForDensity id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L23
            android.content.res.Resources r0 = r2.aMz
            r0.getValueForDensity(r3, r4, r5, r6)
            return
        L23:
            super.getValueForDensity(r3, r4, r5, r6)
            return
    }

    @Override
    public final android.content.res.XmlResourceParser getXml(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getXml id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.content.res.XmlResourceParser r3 = r0.getXml(r3)
            return r3
        L24:
            android.content.res.XmlResourceParser r3 = super.getXml(r3)
            return r3
    }

    @Override
    public final android.content.res.TypedArray obtainAttributes(android.util.AttributeSet r1, int[] r2) {
            r0 = this;
            android.content.res.TypedArray r1 = super.obtainAttributes(r1, r2)
            return r1
    }

    @Override
    public final android.content.res.TypedArray obtainTypedArray(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "obtainTypedArray id: #0x"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.content.res.TypedArray r3 = r0.obtainTypedArray(r3)
            return r3
        L24:
            android.content.res.TypedArray r3 = super.obtainTypedArray(r3)
            return r3
    }

    @Override
    public final java.io.InputStream openRawResource(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "openRawResource id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.io.InputStream r3 = r0.openRawResource(r3)
            return r3
        L24:
            java.io.InputStream r3 = super.openRawResource(r3)
            return r3
    }

    @Override
    public final java.io.InputStream openRawResource(int r3, android.util.TypedValue r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "openRawResource id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            java.io.InputStream r3 = r0.openRawResource(r3, r4)
            return r3
        L24:
            java.io.InputStream r3 = super.openRawResource(r3, r4)
            return r3
    }

    @Override
    public final android.content.res.AssetFileDescriptor openRawResourceFd(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "openRawResourceFd id: 0x#"
            r0.<init>(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSDY/KSResource"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = dr(r3)
            if (r0 == 0) goto L24
            android.content.res.Resources r0 = r2.aMz
            android.content.res.AssetFileDescriptor r3 = r0.openRawResourceFd(r3)
            return r3
        L24:
            android.content.res.AssetFileDescriptor r3 = super.openRawResourceFd(r3)
            return r3
    }

    @Override
    public final void parseBundleExtra(java.lang.String r1, android.util.AttributeSet r2, android.os.Bundle r3) {
            r0 = this;
            super.parseBundleExtra(r1, r2, r3)
            return
    }

    @Override
    public final void parseBundleExtras(android.content.res.XmlResourceParser r1, android.os.Bundle r2) {
            r0 = this;
            super.parseBundleExtras(r1, r2)
            return
    }

    @Override
    public final void updateConfiguration(android.content.res.Configuration r1, android.util.DisplayMetrics r2) {
            r0 = this;
            super.updateConfiguration(r1, r2)
            return
    }
}
