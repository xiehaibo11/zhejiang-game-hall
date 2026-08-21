package android.support.v4.graphics;

class TypefaceCompatApi24Impl extends android.support.v4.graphics.TypefaceCompatBaseImpl {
    private static final java.lang.String ADD_FONT_WEIGHT_STYLE_METHOD = "addFontWeightStyle";
    private static final java.lang.String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final java.lang.String FONT_FAMILY_CLASS = "android.graphics.FontFamily";
    private static final java.lang.String TAG = "TypefaceCompatApi24Impl";
    private static final java.lang.reflect.Method sAddFontWeightStyle = null;
    private static final java.lang.reflect.Method sCreateFromFamiliesWithDefault = null;
    private static final java.lang.Class sFontFamily = null;
    private static final java.lang.reflect.Constructor sFontFamilyCtor = null;

    static {
            r0 = 0
            java.lang.String r1 = "android.graphics.FontFamily"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.reflect.Constructor r3 = r1.getConstructor(r3)     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.String r4 = "addFontWeightStyle"
            r5 = 5
            java.lang.Class[] r5 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.Class<java.nio.ByteBuffer> r6 = java.nio.ByteBuffer.class
            r5[r2] = r6     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r7 = 1
            r5[r7] = r6     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r6 = 2
            java.lang.Class<java.util.List> r8 = java.util.List.class
            r5[r6] = r8     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r6 = 3
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r5[r6] = r8     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r6 = 4
            java.lang.Class r8 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r5[r6] = r8     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.reflect.Method r4 = r1.getMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.Object r5 = java.lang.reflect.Array.newInstance(r1, r7)     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.Class<android.graphics.Typeface> r6 = android.graphics.Typeface.class
            java.lang.String r8 = "createFromFamiliesWithDefault"
            java.lang.Class[] r7 = new java.lang.Class[r7]     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.Class r5 = r5.getClass()     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r7[r2] = r5     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            java.lang.reflect.Method r0 = r6.getMethod(r8, r7)     // Catch: java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L48
            r2 = r0
            r0 = r3
            goto L59
        L46:
            r1 = move-exception
            goto L49
        L48:
            r1 = move-exception
        L49:
            java.lang.Class r2 = r1.getClass()
            java.lang.String r2 = r2.getName()
            java.lang.String r3 = "TypefaceCompatApi24Impl"
            android.util.Log.e(r3, r2, r1)
            r1 = r0
            r2 = r1
            r4 = r2
        L59:
            android.support.v4.graphics.TypefaceCompatApi24Impl.sFontFamilyCtor = r0
            android.support.v4.graphics.TypefaceCompatApi24Impl.sFontFamily = r1
            android.support.v4.graphics.TypefaceCompatApi24Impl.sAddFontWeightStyle = r4
            android.support.v4.graphics.TypefaceCompatApi24Impl.sCreateFromFamiliesWithDefault = r2
            return
    }

    TypefaceCompatApi24Impl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean addFontWeightStyle(java.lang.Object r3, java.nio.ByteBuffer r4, int r5, int r6, boolean r7) {
            java.lang.reflect.Method r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.sAddFontWeightStyle     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r4 = 1
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r4 = 2
            r5 = 0
            r1[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r4 = 3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r4 = 4
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            boolean r3 = r3.booleanValue()     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            return r3
        L2c:
            r3 = move-exception
            goto L2f
        L2e:
            r3 = move-exception
        L2f:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    private static android.graphics.Typeface createFromFamiliesWithDefault(java.lang.Object r4) {
            java.lang.Class r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.sFontFamily     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            r1 = 1
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            r2 = 0
            java.lang.reflect.Array.set(r0, r2, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            java.lang.reflect.Method r4 = android.support.v4.graphics.TypefaceCompatApi24Impl.sCreateFromFamiliesWithDefault     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            r3 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            r1[r2] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            java.lang.Object r4 = r4.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            android.graphics.Typeface r4 = (android.graphics.Typeface) r4     // Catch: java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1b
            return r4
        L19:
            r4 = move-exception
            goto L1c
        L1b:
            r4 = move-exception
        L1c:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r4)
            throw r0
    }

    public static boolean isUsable() {
            java.lang.reflect.Method r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.sAddFontWeightStyle
            if (r0 != 0) goto Lb
            java.lang.String r0 = "TypefaceCompatApi24Impl"
            java.lang.String r1 = "Unable to collect necessary private methods.Fallback to legacy implementation."
            android.util.Log.w(r0, r1)
        Lb:
            java.lang.reflect.Method r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.sAddFontWeightStyle
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }

    private static java.lang.Object newFamily() {
            java.lang.reflect.Constructor r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.sFontFamilyCtor     // Catch: java.lang.reflect.InvocationTargetException -> La java.lang.InstantiationException -> Lc java.lang.IllegalAccessException -> Le
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> La java.lang.InstantiationException -> Lc java.lang.IllegalAccessException -> Le
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.reflect.InvocationTargetException -> La java.lang.InstantiationException -> Lc java.lang.IllegalAccessException -> Le
            return r0
        La:
            r0 = move-exception
            goto Lf
        Lc:
            r0 = move-exception
            goto Lf
        Le:
            r0 = move-exception
        Lf:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public android.graphics.Typeface createFromFontFamilyFilesResourceEntry(android.content.Context r8, android.support.v4.content.res.FontResourcesParserCompat.FontFamilyFilesResourceEntry r9, android.content.res.Resources r10, int r11) {
            r7 = this;
            java.lang.Object r11 = newFamily()
            android.support.v4.content.res.FontResourcesParserCompat$FontFileResourceEntry[] r9 = r9.getEntries()
            int r0 = r9.length
            r1 = 0
        La:
            if (r1 >= r0) goto L30
            r2 = r9[r1]
            int r3 = r2.getResourceId()
            java.nio.ByteBuffer r3 = android.support.v4.graphics.TypefaceCompatUtil.copyToDirectBuffer(r8, r10, r3)
            r4 = 0
            if (r3 != 0) goto L1a
            return r4
        L1a:
            int r5 = r2.getTtcIndex()
            int r6 = r2.getWeight()
            boolean r2 = r2.isItalic()
            boolean r2 = addFontWeightStyle(r11, r3, r5, r6, r2)
            if (r2 != 0) goto L2d
            return r4
        L2d:
            int r1 = r1 + 1
            goto La
        L30:
            android.graphics.Typeface r8 = createFromFamiliesWithDefault(r11)
            return r8
    }

    @Override
    public android.graphics.Typeface createFromFontInfo(android.content.Context r9, android.os.CancellationSignal r10, android.support.v4.provider.FontsContractCompat.FontInfo[] r11, int r12) {
            r8 = this;
            java.lang.Object r0 = newFamily()
            android.support.v4.util.SimpleArrayMap r1 = new android.support.v4.util.SimpleArrayMap
            r1.<init>()
            int r2 = r11.length
            r3 = 0
        Lb:
            if (r3 >= r2) goto L39
            r4 = r11[r3]
            android.net.Uri r5 = r4.getUri()
            java.lang.Object r6 = r1.get(r5)
            java.nio.ByteBuffer r6 = (java.nio.ByteBuffer) r6
            if (r6 != 0) goto L22
            java.nio.ByteBuffer r6 = android.support.v4.graphics.TypefaceCompatUtil.mmap(r9, r10, r5)
            r1.put(r5, r6)
        L22:
            int r5 = r4.getTtcIndex()
            int r7 = r4.getWeight()
            boolean r4 = r4.isItalic()
            boolean r4 = addFontWeightStyle(r0, r6, r5, r7, r4)
            if (r4 != 0) goto L36
            r9 = 0
            return r9
        L36:
            int r3 = r3 + 1
            goto Lb
        L39:
            android.graphics.Typeface r9 = createFromFamiliesWithDefault(r0)
            android.graphics.Typeface r9 = android.graphics.Typeface.create(r9, r12)
            return r9
    }
}
