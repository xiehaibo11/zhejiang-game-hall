package library;

public class e extends android.content.res.Resources {
    private android.content.Context a;
    private android.content.res.Resources b;
    private android.content.res.Resources c;

    public e(android.content.Context r4) {
            r3 = this;
            android.content.res.Resources r0 = r4.getResources()
            android.content.res.AssetManager r0 = r0.getAssets()
            android.content.res.Resources r1 = r4.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            android.content.res.Resources r2 = r4.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            r3.<init>(r0, r1, r2)
            r3.a = r4
            android.content.res.Resources r0 = r4.getResources()
            r3.b = r0
            boolean r0 = com.qihoo360.replugin.RePlugin.isHostInitialized()
            if (r0 == 0) goto L2d
            android.content.Context r4 = com.qihoo360.replugin.RePlugin.getHostContext()
        L2d:
            android.content.res.Resources r4 = r4.getResources()
            r3.c = r4
            return
    }

    @Override
    public android.content.res.XmlResourceParser getAnimation(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.XmlResourceParser r2 = r0.getAnimation(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.XmlResourceParser r2 = r0.getAnimation(r2)
            return r2
    }

    @Override
    @android.annotation.TargetApi(3)
    public boolean getBoolean(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            boolean r2 = r0.getBoolean(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            boolean r2 = r0.getBoolean(r2)
            return r2
    }

    @Override
    public int getColor(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            int r2 = r0.getColor(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            int r2 = r0.getColor(r2)
            return r2
    }

    @Override
    public android.content.res.ColorStateList getColorStateList(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.ColorStateList r2 = r0.getColorStateList(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.ColorStateList r2 = r0.getColorStateList(r2)
            return r2
    }

    @Override
    public android.content.res.Configuration getConfiguration() {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: java.lang.Exception -> L7
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.Configuration r0 = r0.getConfiguration()
            return r0
    }

    @Override
    public float getDimension(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            float r2 = r0.getDimension(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            float r2 = r0.getDimension(r2)
            return r2
    }

    @Override
    public int getDimensionPixelOffset(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            int r2 = r0.getDimensionPixelOffset(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            int r2 = r0.getDimensionPixelOffset(r2)
            return r2
    }

    @Override
    public int getDimensionPixelSize(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            int r2 = r0.getDimensionPixelSize(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c     // Catch: android.content.res.Resources.NotFoundException -> L12
            int r2 = r0.getDimensionPixelSize(r2)     // Catch: android.content.res.Resources.NotFoundException -> L12
            return r2
        L12:
            r2 = 0
            return r2
    }

    @Override
    public android.graphics.drawable.Drawable getDrawable(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.graphics.drawable.Drawable r2 = r0.getDrawable(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.graphics.drawable.Drawable r2 = r0.getDrawable(r2)
            return r2
    }

    @Override
    @android.annotation.TargetApi(21)
    public android.graphics.drawable.Drawable getDrawable(int r2, android.content.res.Resources.Theme r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.graphics.drawable.Drawable r2 = r0.getDrawable(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.graphics.drawable.Drawable r2 = r0.getDrawable(r2, r3)
            return r2
    }

    @Override
    @android.annotation.TargetApi(15)
    public android.graphics.drawable.Drawable getDrawableForDensity(int r2, int r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.graphics.drawable.Drawable r2 = r0.getDrawableForDensity(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.graphics.drawable.Drawable r2 = r0.getDrawableForDensity(r2, r3)
            return r2
    }

    @Override
    @android.annotation.TargetApi(15)
    public android.graphics.drawable.Drawable getDrawableForDensity(int r1, int r2, android.content.res.Resources.Theme r3) {
            r0 = this;
            android.content.res.Resources r3 = r0.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.graphics.drawable.Drawable r1 = r3.getDrawableForDensity(r1, r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r1
        L7:
            r3 = move-exception
            r3.printStackTrace()
            android.content.res.Resources r3 = r0.c
            android.graphics.drawable.Drawable r1 = r3.getDrawableForDensity(r1, r2)
            return r1
    }

    @Override
    @android.annotation.TargetApi(3)
    public float getFraction(int r2, int r3, int r4) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: java.lang.Exception -> L7
            float r2 = r0.getFraction(r2, r3, r4)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            float r2 = r0.getFraction(r2, r3, r4)
            return r2
    }

    @Override
    public int getIdentifier(java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r11 = this;
            r0 = 0
            boolean r1 = com.qihoo360.replugin.RePlugin.isHostInitialized()     // Catch: java.lang.Exception -> La1
            r2 = 2
            r3 = 1
            r4 = 3
            if (r1 == 0) goto L59
            android.content.Context r1 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> La1
            boolean r1 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Exception -> La1
            if (r1 != 0) goto L98
            android.content.Context r1 = com.qihoo360.replugin.RePlugin.getHostContext()     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> La1
            boolean r1 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Exception -> La1
            if (r1 != 0) goto L98
            android.content.res.Resources r1 = r11.c     // Catch: java.lang.Exception -> La1
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Exception -> La1
            java.lang.ClassLoader r5 = r1.getClassLoader()     // Catch: java.lang.Exception -> La1
            java.lang.String r6 = "android.content.res.Resources"
            java.lang.String r7 = "getIdentifier"
            android.content.res.Resources r8 = r11.c     // Catch: java.lang.Exception -> La1
            java.lang.Class[] r9 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r0] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r3] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r2] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Object[] r10 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> La1
            r10[r0] = r12     // Catch: java.lang.Exception -> La1
            r10[r3] = r13     // Catch: java.lang.Exception -> La1
            r10[r2] = r14     // Catch: java.lang.Exception -> La1
            java.lang.Object r12 = library.h.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> La1
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Exception -> La1
            int r12 = java.lang.Integer.parseInt(r12)     // Catch: java.lang.Exception -> La1
            return r12
        L59:
            android.content.Context r1 = r11.a     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> La1
            boolean r1 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Exception -> La1
            if (r1 != 0) goto L98
            android.content.res.Resources r1 = r11.c     // Catch: java.lang.Exception -> La1
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Exception -> La1
            java.lang.ClassLoader r5 = r1.getClassLoader()     // Catch: java.lang.Exception -> La1
            java.lang.String r6 = "android.content.res.Resources"
            java.lang.String r7 = "getIdentifier"
            android.content.res.Resources r8 = r11.c     // Catch: java.lang.Exception -> La1
            java.lang.Class[] r9 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r0] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r3] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9[r2] = r1     // Catch: java.lang.Exception -> La1
            java.lang.Object[] r10 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> La1
            r10[r0] = r12     // Catch: java.lang.Exception -> La1
            r10[r3] = r13     // Catch: java.lang.Exception -> La1
            r10[r2] = r14     // Catch: java.lang.Exception -> La1
            java.lang.Object r12 = library.h.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> La1
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Exception -> La1
            int r12 = java.lang.Integer.parseInt(r12)     // Catch: java.lang.Exception -> La1
            return r12
        L98:
            android.content.res.Resources r14 = r11.b     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "com.daren.goldzj"
            int r12 = r14.getIdentifier(r12, r13, r1)     // Catch: java.lang.Exception -> La1
            return r12
        La1:
            r12 = move-exception
            r12.printStackTrace()
            return r0
    }

    @Override
    public int[] getIntArray(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            int[] r2 = r0.getIntArray(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            int[] r2 = r0.getIntArray(r2)
            return r2
    }

    @Override
    public int getInteger(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            int r2 = r0.getInteger(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            int r2 = r0.getInteger(r2)
            return r2
    }

    @Override
    public android.content.res.XmlResourceParser getLayout(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.XmlResourceParser r2 = r0.getLayout(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.XmlResourceParser r2 = r0.getLayout(r2)
            return r2
    }

    @Override
    public android.graphics.Movie getMovie(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.graphics.Movie r2 = r0.getMovie(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.graphics.Movie r2 = r0.getMovie(r2)
            return r2
    }

    @Override
    public java.lang.String getQuantityString(int r2, int r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getQuantityString(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getQuantityString(r2, r3)
            return r2
    }

    @Override
    public java.lang.String getQuantityString(int r2, int r3, java.lang.Object... r4) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getQuantityString(r2, r3, r4)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getQuantityString(r2, r3, r4)
            return r2
    }

    @Override
    public java.lang.CharSequence getQuantityText(int r2, int r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.CharSequence r2 = r0.getQuantityText(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.CharSequence r2 = r0.getQuantityText(r2, r3)
            return r2
    }

    @Override
    public java.lang.String getResourceEntryName(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getResourceEntryName(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getResourceEntryName(r2)
            return r2
    }

    @Override
    public java.lang.String getResourceName(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getResourceName(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getResourceName(r2)
            return r2
    }

    @Override
    public java.lang.String getResourcePackageName(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getResourcePackageName(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getResourcePackageName(r2)
            return r2
    }

    @Override
    public java.lang.String getResourceTypeName(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getResourceTypeName(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getResourceTypeName(r2)
            return r2
    }

    @Override
    public java.lang.String getString(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getString(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getString(r2)
            return r2
    }

    @Override
    public java.lang.String getString(int r2, java.lang.Object... r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String r2 = r0.getString(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    @Override
    public java.lang.String[] getStringArray(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.String[] r2 = r0.getStringArray(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.String[] r2 = r0.getStringArray(r2)
            return r2
    }

    @Override
    public java.lang.CharSequence getText(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.CharSequence r2 = r0.getText(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.CharSequence r2 = r0.getText(r2)
            return r2
    }

    @Override
    public java.lang.CharSequence getText(int r2, java.lang.CharSequence r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: java.lang.Exception -> L7
            java.lang.CharSequence r2 = r0.getText(r2, r3)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.CharSequence r2 = r0.getText(r2, r3)
            return r2
    }

    @Override
    public java.lang.CharSequence[] getTextArray(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.lang.CharSequence[] r2 = r0.getTextArray(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.lang.CharSequence[] r2 = r0.getTextArray(r2)
            return r2
    }

    @Override
    public void getValue(int r2, android.util.TypedValue r3, boolean r4) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L6
            r0.getValue(r2, r3, r4)     // Catch: android.content.res.Resources.NotFoundException -> L6
            goto Lf
        L6:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            r0.getValue(r2, r3, r4)
        Lf:
            return
    }

    @Override
    @android.annotation.TargetApi(15)
    public void getValueForDensity(int r2, int r3, android.util.TypedValue r4, boolean r5) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L6
            r0.getValueForDensity(r2, r3, r4, r5)     // Catch: android.content.res.Resources.NotFoundException -> L6
            goto Lf
        L6:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            r0.getValueForDensity(r2, r3, r4, r5)
        Lf:
            return
    }

    @Override
    public android.content.res.XmlResourceParser getXml(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.XmlResourceParser r2 = r0.getXml(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.XmlResourceParser r2 = r0.getXml(r2)
            return r2
    }

    @Override
    public android.content.res.TypedArray obtainTypedArray(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.TypedArray r2 = r0.obtainTypedArray(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.TypedArray r2 = r0.obtainTypedArray(r2)
            return r2
    }

    @Override
    public java.io.InputStream openRawResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.io.InputStream r2 = r0.openRawResource(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.io.InputStream r2 = r0.openRawResource(r2)
            return r2
    }

    @Override
    @android.annotation.TargetApi(3)
    public java.io.InputStream openRawResource(int r2, android.util.TypedValue r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            java.io.InputStream r2 = r0.openRawResource(r2, r3)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            java.io.InputStream r2 = r0.openRawResource(r2, r3)
            return r2
    }

    @Override
    public android.content.res.AssetFileDescriptor openRawResourceFd(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.b     // Catch: android.content.res.Resources.NotFoundException -> L7
            android.content.res.AssetFileDescriptor r2 = r0.openRawResourceFd(r2)     // Catch: android.content.res.Resources.NotFoundException -> L7
            return r2
        L7:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r0 = r1.c
            android.content.res.AssetFileDescriptor r2 = r0.openRawResourceFd(r2)
            return r2
    }
}
