package android.support.v4.graphics;

@android.support.annotation.RequiresApi(26)
@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompatApi26Impl extends android.support.v4.graphics.TypefaceCompatApi21Impl {
    private static final java.lang.String ABORT_CREATION_METHOD = "abortCreation";
    private static final java.lang.String ADD_FONT_FROM_ASSET_MANAGER_METHOD = "addFontFromAssetManager";
    private static final java.lang.String ADD_FONT_FROM_BUFFER_METHOD = "addFontFromBuffer";
    private static final java.lang.String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final java.lang.String DEFAULT_FAMILY = "sans-serif";
    private static final java.lang.String FONT_FAMILY_CLASS = "android.graphics.FontFamily";
    private static final java.lang.String FREEZE_METHOD = "freeze";
    private static final int RESOLVE_BY_FONT_TABLE = -1;
    private static final java.lang.String TAG = "TypefaceCompatApi26Impl";
    protected final java.lang.reflect.Method mAbortCreation;
    protected final java.lang.reflect.Method mAddFontFromAssetManager;
    protected final java.lang.reflect.Method mAddFontFromBuffer;
    protected final java.lang.reflect.Method mCreateFromFamiliesWithDefault;
    protected final java.lang.Class mFontFamily;
    protected final java.lang.reflect.Constructor mFontFamilyCtor;
    protected final java.lang.reflect.Method mFreeze;

    public TypefaceCompatApi26Impl() {
            r8 = this;
            r8.<init>()
            r0 = 0
            java.lang.Class r1 = r8.obtainFontFamily()     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Constructor r2 = r8.obtainFontFamilyCtor(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Method r3 = r8.obtainAddFontFromAssetManagerMethod(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Method r4 = r8.obtainAddFontFromBufferMethod(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Method r5 = r8.obtainFreezeMethod(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Method r6 = r8.obtainAbortCreationMethod(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            java.lang.reflect.Method r0 = r8.obtainCreateFromFamiliesWithDefaultMethod(r1)     // Catch: java.lang.NoSuchMethodException -> L24 java.lang.ClassNotFoundException -> L26
            r7 = r1
            r1 = r0
            r0 = r7
            goto L4b
        L24:
            r1 = move-exception
            goto L27
        L26:
            r1 = move-exception
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unable to collect necessary methods for class "
            r2.append(r3)
            java.lang.Class r3 = r1.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "TypefaceCompatApi26Impl"
            android.util.Log.e(r3, r2, r1)
            r1 = r0
            r2 = r1
            r3 = r2
            r4 = r3
            r5 = r4
            r6 = r5
        L4b:
            r8.mFontFamily = r0
            r8.mFontFamilyCtor = r2
            r8.mAddFontFromAssetManager = r3
            r8.mAddFontFromBuffer = r4
            r8.mFreeze = r5
            r8.mAbortCreation = r6
            r8.mCreateFromFamiliesWithDefault = r1
            return
    }

    private void abortCreation(java.lang.Object r3) {
            r2 = this;
            java.lang.reflect.Method r0 = r2.mAbortCreation     // Catch: java.lang.reflect.InvocationTargetException -> L9 java.lang.IllegalAccessException -> Lb
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L9 java.lang.IllegalAccessException -> Lb
            r0.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L9 java.lang.IllegalAccessException -> Lb
            return
        L9:
            r3 = move-exception
            goto Lc
        Lb:
            r3 = move-exception
        Lc:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r3)
            throw r0
    }

    private boolean addFontFromAssetManager(android.content.Context r4, java.lang.Object r5, java.lang.String r6, int r7, int r8, int r9, @android.support.annotation.Nullable android.graphics.fonts.FontVariationAxis[] r10) {
            r3 = this;
            java.lang.reflect.Method r0 = r3.mAddFontFromAssetManager     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1 = 8
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 1
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 3
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 4
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 5
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r1[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            r4 = 7
            r1[r4] = r10     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            java.lang.Object r4 = r0.invoke(r5, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            boolean r4 = r4.booleanValue()     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L43
            return r4
        L41:
            r4 = move-exception
            goto L44
        L43:
            r4 = move-exception
        L44:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            r5.<init>(r4)
            throw r5
    }

    private boolean addFontFromBuffer(java.lang.Object r4, java.nio.ByteBuffer r5, int r6, int r7, int r8) {
            r3 = this;
            java.lang.reflect.Method r0 = r3.mAddFontFromBuffer     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r5 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r5 = 2
            r6 = 0
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r5 = 3
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r5 = 4
            java.lang.Integer r6 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            r1[r5] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            java.lang.Object r4 = r0.invoke(r4, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            boolean r4 = r4.booleanValue()     // Catch: java.lang.reflect.InvocationTargetException -> L2c java.lang.IllegalAccessException -> L2e
            return r4
        L2c:
            r4 = move-exception
            goto L2f
        L2e:
            r4 = move-exception
        L2f:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            r5.<init>(r4)
            throw r5
    }

    private boolean freeze(java.lang.Object r3) {
            r2 = this;
            java.lang.reflect.Method r0 = r2.mFreeze     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L12
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L12
            java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L12
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L12
            boolean r3 = r3.booleanValue()     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L12
            return r3
        L10:
            r3 = move-exception
            goto L13
        L12:
            r3 = move-exception
        L13:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r3)
            throw r0
    }

    private boolean isFontFamilyPrivateAPIAvailable() {
            r2 = this;
            java.lang.reflect.Method r0 = r2.mAddFontFromAssetManager
            if (r0 != 0) goto Lb
            java.lang.String r0 = "TypefaceCompatApi26Impl"
            java.lang.String r1 = "Unable to collect necessary private methods. Fallback to legacy implementation."
            android.util.Log.w(r0, r1)
        Lb:
            java.lang.reflect.Method r0 = r2.mAddFontFromAssetManager
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }

    private java.lang.Object newFamily() {
            r2 = this;
            java.lang.reflect.Constructor r0 = r2.mFontFamilyCtor     // Catch: java.lang.reflect.InvocationTargetException -> La java.lang.InstantiationException -> Lc java.lang.IllegalAccessException -> Le
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

    protected android.graphics.Typeface createFromFamiliesWithDefault(java.lang.Object r6) {
            r5 = this;
            java.lang.Class r0 = r5.mFontFamily     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r1 = 1
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r2 = 0
            java.lang.reflect.Array.set(r0, r2, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            java.lang.reflect.Method r6 = r5.mCreateFromFamiliesWithDefault     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r3 = 0
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r4[r2] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r0 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r4[r1] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r1 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            r4[r1] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            java.lang.Object r6 = r6.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            android.graphics.Typeface r6 = (android.graphics.Typeface) r6     // Catch: java.lang.reflect.InvocationTargetException -> L28 java.lang.IllegalAccessException -> L2a
            return r6
        L28:
            r6 = move-exception
            goto L2b
        L2a:
            r6 = move-exception
        L2b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r6)
            throw r0
    }

    @Override
    public android.graphics.Typeface createFromFontFamilyFilesResourceEntry(android.content.Context r11, android.support.v4.content.res.FontResourcesParserCompat.FontFamilyFilesResourceEntry r12, android.content.res.Resources r13, int r14) {
            r10 = this;
            boolean r0 = r10.isFontFamilyPrivateAPIAvailable()
            if (r0 != 0) goto Lb
            android.graphics.Typeface r11 = super.createFromFontFamilyFilesResourceEntry(r11, r12, r13, r14)
            return r11
        Lb:
            java.lang.Object r13 = r10.newFamily()
            android.support.v4.content.res.FontResourcesParserCompat$FontFileResourceEntry[] r12 = r12.getEntries()
            int r14 = r12.length
            r0 = 0
            r8 = 0
        L16:
            r9 = 0
            if (r8 >= r14) goto L43
            r0 = r12[r8]
            java.lang.String r3 = r0.getFileName()
            int r4 = r0.getTtcIndex()
            int r5 = r0.getWeight()
            boolean r6 = r0.isItalic()
            java.lang.String r0 = r0.getVariationSettings()
            android.graphics.fonts.FontVariationAxis[] r7 = android.graphics.fonts.FontVariationAxis.fromFontVariationSettings(r0)
            r0 = r10
            r1 = r11
            r2 = r13
            boolean r0 = r0.addFontFromAssetManager(r1, r2, r3, r4, r5, r6, r7)
            if (r0 != 0) goto L40
            r10.abortCreation(r13)
            return r9
        L40:
            int r8 = r8 + 1
            goto L16
        L43:
            boolean r11 = r10.freeze(r13)
            if (r11 != 0) goto L4a
            return r9
        L4a:
            android.graphics.Typeface r11 = r10.createFromFamiliesWithDefault(r13)
            return r11
    }

    @Override
    public android.graphics.Typeface createFromFontInfo(android.content.Context r12, @android.support.annotation.Nullable android.os.CancellationSignal r13, @android.support.annotation.NonNull android.support.v4.provider.FontsContractCompat.FontInfo[] r14, int r15) {
            r11 = this;
            int r0 = r14.length
            r1 = 1
            r2 = 0
            if (r0 >= r1) goto L6
            return r2
        L6:
            boolean r0 = r11.isFontFamilyPrivateAPIAvailable()
            if (r0 != 0) goto L67
            android.support.v4.provider.FontsContractCompat$FontInfo r14 = r11.findBestInfo(r14, r15)
            r12.getContentResolver()
            android.net.Uri r12 = r14.getUri()     // Catch: java.io.IOException -> L66
            java.lang.String r15 = "r"
            android.content.Context r0 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.io.IOException -> L66
            android.os.ParcelFileDescriptor r12 = com.qihoo360.replugin.loader.p.PluginProviderClient.openFileDescriptor(r0, r12, r15, r13)     // Catch: java.io.IOException -> L66
            if (r12 != 0) goto L29
            if (r12 == 0) goto L28
            r12.close()     // Catch: java.io.IOException -> L66
        L28:
            return r2
        L29:
            android.graphics.Typeface$Builder r13 = new android.graphics.Typeface$Builder     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            java.io.FileDescriptor r15 = r12.getFileDescriptor()     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            r13.<init>(r15)     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            int r15 = r14.getWeight()     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            android.graphics.Typeface$Builder r13 = r13.setWeight(r15)     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            boolean r14 = r14.isItalic()     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            android.graphics.Typeface$Builder r13 = r13.setItalic(r14)     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            android.graphics.Typeface r13 = r13.build()     // Catch: java.lang.Throwable -> L4c java.lang.Throwable -> L4f
            if (r12 == 0) goto L4b
            r12.close()     // Catch: java.io.IOException -> L66
        L4b:
            return r13
        L4c:
            r13 = move-exception
            r14 = r2
            goto L55
        L4f:
            r13 = move-exception
            throw r13     // Catch: java.lang.Throwable -> L51
        L51:
            r14 = move-exception
            r10 = r14
            r14 = r13
            r13 = r10
        L55:
            if (r12 == 0) goto L65
            if (r14 == 0) goto L62
            r12.close()     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L66
            goto L65
        L5d:
            r12 = move-exception
            r14.addSuppressed(r12)     // Catch: java.io.IOException -> L66
            goto L65
        L62:
            r12.close()     // Catch: java.io.IOException -> L66
        L65:
            throw r13     // Catch: java.io.IOException -> L66
        L66:
            return r2
        L67:
            java.util.Map r12 = android.support.v4.provider.FontsContractCompat.prepareFontData(r12, r14, r13)
            java.lang.Object r13 = r11.newFamily()
            int r0 = r14.length
            r3 = 0
            r9 = 0
        L72:
            if (r9 >= r0) goto L9f
            r4 = r14[r9]
            android.net.Uri r5 = r4.getUri()
            java.lang.Object r5 = r12.get(r5)
            java.nio.ByteBuffer r5 = (java.nio.ByteBuffer) r5
            if (r5 != 0) goto L83
            goto L9c
        L83:
            int r6 = r4.getTtcIndex()
            int r7 = r4.getWeight()
            boolean r8 = r4.isItalic()
            r3 = r11
            r4 = r13
            boolean r3 = r3.addFontFromBuffer(r4, r5, r6, r7, r8)
            if (r3 != 0) goto L9b
            r11.abortCreation(r13)
            return r2
        L9b:
            r3 = 1
        L9c:
            int r9 = r9 + 1
            goto L72
        L9f:
            if (r3 != 0) goto La5
            r11.abortCreation(r13)
            return r2
        La5:
            boolean r12 = r11.freeze(r13)
            if (r12 != 0) goto Lac
            return r2
        Lac:
            android.graphics.Typeface r12 = r11.createFromFamiliesWithDefault(r13)
            android.graphics.Typeface r12 = android.graphics.Typeface.create(r12, r15)
            return r12
    }

    @Override
    @android.support.annotation.Nullable
    public android.graphics.Typeface createFromResourcesFontFile(android.content.Context r9, android.content.res.Resources r10, int r11, java.lang.String r12, int r13) {
            r8 = this;
            boolean r0 = r8.isFontFamilyPrivateAPIAvailable()
            if (r0 != 0) goto Lb
            android.graphics.Typeface r9 = super.createFromResourcesFontFile(r9, r10, r11, r12, r13)
            return r9
        Lb:
            java.lang.Object r10 = r8.newFamily()
            r4 = 0
            r5 = -1
            r6 = -1
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r12
            boolean r9 = r0.addFontFromAssetManager(r1, r2, r3, r4, r5, r6, r7)
            r11 = 0
            if (r9 != 0) goto L22
            r8.abortCreation(r10)
            return r11
        L22:
            boolean r9 = r8.freeze(r10)
            if (r9 != 0) goto L29
            return r11
        L29:
            android.graphics.Typeface r9 = r8.createFromFamiliesWithDefault(r10)
            return r9
    }

    protected java.lang.reflect.Method obtainAbortCreationMethod(java.lang.Class r3) throws java.lang.NoSuchMethodException {
            r2 = this;
            r0 = 0
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.String r1 = "abortCreation"
            java.lang.reflect.Method r3 = r3.getMethod(r1, r0)
            return r3
    }

    protected java.lang.reflect.Method obtainAddFontFromAssetManagerMethod(java.lang.Class r4) throws java.lang.NoSuchMethodException {
            r3 = this;
            r0 = 8
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<android.content.res.AssetManager> r1 = android.content.res.AssetManager.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r2 = 1
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 2
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Boolean.TYPE
            r2 = 3
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 4
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 5
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 6
            r0[r2] = r1
            java.lang.Class<android.graphics.fonts.FontVariationAxis[]> r1 = android.graphics.fonts.FontVariationAxis[].class
            r2 = 7
            r0[r2] = r1
            java.lang.String r1 = "addFontFromAssetManager"
            java.lang.reflect.Method r4 = r4.getMethod(r1, r0)
            return r4
    }

    protected java.lang.reflect.Method obtainAddFontFromBufferMethod(java.lang.Class r4) throws java.lang.NoSuchMethodException {
            r3 = this;
            r0 = 5
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<java.nio.ByteBuffer> r1 = java.nio.ByteBuffer.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 1
            r0[r2] = r1
            java.lang.Class<android.graphics.fonts.FontVariationAxis[]> r1 = android.graphics.fonts.FontVariationAxis[].class
            r2 = 2
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 3
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "addFontFromBuffer"
            java.lang.reflect.Method r4 = r4.getMethod(r1, r0)
            return r4
    }

    protected java.lang.reflect.Method obtainCreateFromFamiliesWithDefaultMethod(java.lang.Class r5) throws java.lang.NoSuchMethodException {
            r4 = this;
            r0 = 1
            java.lang.Object r5 = java.lang.reflect.Array.newInstance(r5, r0)
            java.lang.Class<android.graphics.Typeface> r1 = android.graphics.Typeface.class
            r2 = 3
            java.lang.Class[] r2 = new java.lang.Class[r2]
            java.lang.Class r5 = r5.getClass()
            r3 = 0
            r2[r3] = r5
            java.lang.Class r5 = java.lang.Integer.TYPE
            r2[r0] = r5
            java.lang.Class r5 = java.lang.Integer.TYPE
            r3 = 2
            r2[r3] = r5
            java.lang.String r5 = "createFromFamiliesWithDefault"
            java.lang.reflect.Method r5 = r1.getDeclaredMethod(r5, r2)
            r5.setAccessible(r0)
            return r5
    }

    protected java.lang.Class obtainFontFamily() throws java.lang.ClassNotFoundException {
            r1 = this;
            java.lang.String r0 = "android.graphics.FontFamily"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            return r0
    }

    protected java.lang.reflect.Constructor obtainFontFamilyCtor(java.lang.Class r2) throws java.lang.NoSuchMethodException {
            r1 = this;
            r0 = 0
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.reflect.Constructor r2 = r2.getConstructor(r0)
            return r2
    }

    protected java.lang.reflect.Method obtainFreezeMethod(java.lang.Class r3) throws java.lang.NoSuchMethodException {
            r2 = this;
            r0 = 0
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.String r1 = "freeze"
            java.lang.reflect.Method r3 = r3.getMethod(r1, r0)
            return r3
    }
}
