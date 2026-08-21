package com.bytedance.pangle.res;

public class PluginResources extends android.content.res.Resources {
    public java.lang.String pluginPkg;

    public PluginResources(android.content.res.Resources r3, java.lang.String r4) {
            r2 = this;
            android.content.res.AssetManager r0 = appendHostRes(r3)
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            r2.<init>(r0, r3, r1)
            r2.pluginPkg = r4
            return
    }

    public static android.content.res.AssetManager appendHostRes(android.content.res.Resources r9) {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r1 = com.bytedance.pangle.util.g.a
            if (r1 != 0) goto L18
            java.io.File r0 = r0.getCacheDir()
            java.io.File r0 = r0.getParentFile()
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.getAbsolutePath()
            com.bytedance.pangle.util.g.a = r0
        L18:
            java.lang.String r0 = com.bytedance.pangle.util.g.a
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r1 = com.bytedance.pangle.util.g.a(r1)
            java.util.List r2 = com.bytedance.pangle.util.j.b()
            com.bytedance.pangle.res.a r3 = new com.bytedance.pangle.res.a
            r3.<init>()
            android.content.res.AssetManager r9 = r9.getAssets()
            android.app.Application r4 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.res.AssetManager r4 = r4.getAssets()
            java.util.HashSet r5 = new java.util.HashSet
            java.util.List r6 = com.bytedance.pangle.util.j.a(r9)
            r5.<init>(r6)
            java.util.List r4 = com.bytedance.pangle.util.j.a(r4)
            java.util.Iterator r6 = r2.iterator()
        L48:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L60
            java.lang.Object r7 = r6.next()
            java.lang.String r7 = (java.lang.String) r7
            boolean r8 = r5.contains(r7)
            if (r8 != 0) goto L48
            r8 = 1
            android.content.res.AssetManager r9 = r3.a(r9, r7, r8)
            goto L48
        L60:
            java.util.Iterator r4 = r4.iterator()
        L64:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L88
            java.lang.Object r6 = r4.next()
            java.lang.String r6 = (java.lang.String) r6
            boolean r7 = isOtherPlugin(r6, r0, r1)
            if (r7 != 0) goto L64
            boolean r7 = r5.contains(r6)
            if (r7 != 0) goto L64
            boolean r7 = r2.contains(r6)
            if (r7 != 0) goto L64
            r7 = 0
            android.content.res.AssetManager r9 = r3.a(r9, r6, r7)
            goto L64
        L88:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "pluginAssets = "
            r0.<init>(r1)
            java.lang.String r1 = com.bytedance.pangle.util.j.b(r9)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Zeus/resources_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r0)
            return r9
    }

    private android.content.res.Resources.NotFoundException handleException(android.content.res.Resources.NotFoundException r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Resources#Assets: "
            r0.<init>(r1)
            android.content.res.AssetManager r1 = r3.getAssets()
            java.lang.String r1 = com.bytedance.pangle.util.j.b(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ","
            r2.append(r0)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            return r1
    }

    private static boolean isOtherPlugin(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r0 = r0.getPackageResourcePath()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L16
            java.lang.String r0 = r0.replaceFirst(r4, r5)
            java.lang.String r3 = r3.replaceFirst(r4, r5)
        L16:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r0)
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Zeus/resources_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r2, r1)
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            r1 = 0
            if (r0 == 0) goto L43
            return r1
        L43:
            java.lang.String r0 = "/tinker/patch-"
            boolean r0 = r3.contains(r0)
            if (r0 == 0) goto L4c
            return r1
        L4c:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L58
            boolean r4 = r3.contains(r4)
            if (r4 != 0) goto L64
        L58:
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L66
            boolean r3 = r3.contains(r5)
            if (r3 == 0) goto L66
        L64:
            r3 = 1
            return r3
        L66:
            return r1
    }

    @Override
    public android.content.res.XmlResourceParser getAnimation(int r1) {
            r0 = this;
            android.content.res.XmlResourceParser r1 = super.getAnimation(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public boolean getBoolean(int r1) {
            r0 = this;
            boolean r1 = super.getBoolean(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int getColor(int r1) {
            r0 = this;
            int r1 = super.getColor(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int getColor(int r1, android.content.res.Resources.Theme r2) {
            r0 = this;
            int r1 = super.getColor(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.ColorStateList getColorStateList(int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = super.getColorStateList(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.ColorStateList getColorStateList(int r1, android.content.res.Resources.Theme r2) {
            r0 = this;
            android.content.res.ColorStateList r1 = super.getColorStateList(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public float getDimension(int r1) {
            r0 = this;
            float r1 = super.getDimension(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int getDimensionPixelOffset(int r1) {
            r0 = this;
            int r1 = super.getDimensionPixelOffset(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int getDimensionPixelSize(int r1) {
            r0 = this;
            int r1 = super.getDimensionPixelSize(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.drawable.Drawable getDrawable(int r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = super.getDrawable(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.drawable.Drawable getDrawable(int r1, android.content.res.Resources.Theme r2) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = super.getDrawable(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.drawable.Drawable getDrawableForDensity(int r1, int r2) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = super.getDrawableForDensity(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.drawable.Drawable getDrawableForDensity(int r1, int r2, android.content.res.Resources.Theme r3) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = super.getDrawableForDensity(r1, r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public float getFloat(int r1) {
            r0 = this;
            float r1 = super.getFloat(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.Typeface getFont(int r1) {
            r0 = this;
            android.graphics.Typeface r1 = super.getFont(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public float getFraction(int r1, int r2, int r3) {
            r0 = this;
            float r1 = super.getFraction(r1, r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int[] getIntArray(int r1) {
            r0 = this;
            int[] r1 = super.getIntArray(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public int getInteger(int r1) {
            r0 = this;
            int r1 = super.getInteger(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.XmlResourceParser getLayout(int r1) {
            r0 = this;
            android.content.res.XmlResourceParser r1 = super.getLayout(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.graphics.Movie getMovie(int r1) {
            r0 = this;
            android.graphics.Movie r1 = super.getMovie(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getQuantityString(int r1, int r2) {
            r0 = this;
            java.lang.String r1 = super.getQuantityString(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getQuantityString(int r1, int r2, java.lang.Object... r3) {
            r0 = this;
            java.lang.String r1 = super.getQuantityString(r1, r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.CharSequence getQuantityText(int r1, int r2) {
            r0 = this;
            java.lang.CharSequence r1 = super.getQuantityText(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getResourceEntryName(int r1) {
            r0 = this;
            java.lang.String r1 = super.getResourceEntryName(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getResourceName(int r1) {
            r0 = this;
            java.lang.String r1 = super.getResourceName(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getResourcePackageName(int r1) {
            r0 = this;
            java.lang.String r1 = super.getResourcePackageName(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getResourceTypeName(int r1) {
            r0 = this;
            java.lang.String r1 = super.getResourceTypeName(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getString(int r1) {
            r0 = this;
            java.lang.String r1 = super.getString(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String getString(int r1, java.lang.Object... r2) {
            r0 = this;
            java.lang.String r1 = super.getString(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.String[] getStringArray(int r1) {
            r0 = this;
            java.lang.String[] r1 = super.getStringArray(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.CharSequence getText(int r1) {
            r0 = this;
            java.lang.CharSequence r1 = super.getText(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.CharSequence getText(int r1, java.lang.CharSequence r2) {
            r0 = this;
            java.lang.CharSequence r1 = super.getText(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.lang.CharSequence[] getTextArray(int r1) {
            r0 = this;
            java.lang.CharSequence[] r1 = super.getTextArray(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public void getValue(int r1, android.util.TypedValue r2, boolean r3) {
            r0 = this;
            super.getValue(r1, r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L4
            return
        L4:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public void getValue(java.lang.String r1, android.util.TypedValue r2, boolean r3) {
            r0 = this;
            super.getValue(r1, r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L4
            return
        L4:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public void getValueForDensity(int r1, int r2, android.util.TypedValue r3, boolean r4) {
            r0 = this;
            super.getValueForDensity(r1, r2, r3, r4)     // Catch: android.content.res.Resources.NotFoundException -> L4
            return
        L4:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.XmlResourceParser getXml(int r1) {
            r0 = this;
            android.content.res.XmlResourceParser r1 = super.getXml(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.TypedArray obtainTypedArray(int r1) {
            r0 = this;
            android.content.res.TypedArray r1 = super.obtainTypedArray(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.io.InputStream openRawResource(int r1) {
            r0 = this;
            java.io.InputStream r1 = super.openRawResource(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public java.io.InputStream openRawResource(int r1, android.util.TypedValue r2) {
            r0 = this;
            java.io.InputStream r1 = super.openRawResource(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }

    @Override
    public android.content.res.AssetFileDescriptor openRawResourceFd(int r1) {
            r0 = this;
            android.content.res.AssetFileDescriptor r1 = super.openRawResourceFd(r1)     // Catch: android.content.res.Resources.NotFoundException -> L5
            return r1
        L5:
            r1 = move-exception
            android.content.res.Resources$NotFoundException r1 = r0.handleException(r1)
            throw r1
    }
}
