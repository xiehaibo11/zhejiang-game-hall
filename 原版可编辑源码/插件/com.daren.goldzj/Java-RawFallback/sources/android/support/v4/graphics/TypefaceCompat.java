package android.support.v4.graphics;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompat {
    private static final java.lang.String TAG = "TypefaceCompat";
    private static final android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> sTypefaceCache = null;
    private static final android.support.v4.graphics.TypefaceCompatBaseImpl sTypefaceCompatImpl = null;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Le
            android.support.v4.graphics.TypefaceCompatApi28Impl r0 = new android.support.v4.graphics.TypefaceCompatApi28Impl
            r0.<init>()
            android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl = r0
            goto L45
        Le:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L1c
            android.support.v4.graphics.TypefaceCompatApi26Impl r0 = new android.support.v4.graphics.TypefaceCompatApi26Impl
            r0.<init>()
            android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl = r0
            goto L45
        L1c:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L30
            boolean r0 = android.support.v4.graphics.TypefaceCompatApi24Impl.isUsable()
            if (r0 == 0) goto L30
            android.support.v4.graphics.TypefaceCompatApi24Impl r0 = new android.support.v4.graphics.TypefaceCompatApi24Impl
            r0.<init>()
            android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl = r0
            goto L45
        L30:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L3e
            android.support.v4.graphics.TypefaceCompatApi21Impl r0 = new android.support.v4.graphics.TypefaceCompatApi21Impl
            r0.<init>()
            android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl = r0
            goto L45
        L3e:
            android.support.v4.graphics.TypefaceCompatBaseImpl r0 = new android.support.v4.graphics.TypefaceCompatBaseImpl
            r0.<init>()
            android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl = r0
        L45:
            android.support.v4.util.LruCache r0 = new android.support.v4.util.LruCache
            r1 = 16
            r0.<init>(r1)
            android.support.v4.graphics.TypefaceCompat.sTypefaceCache = r0
            return
    }

    private TypefaceCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.Nullable
    public static android.graphics.Typeface createFromFontInfo(@android.support.annotation.NonNull android.content.Context r1, @android.support.annotation.Nullable android.os.CancellationSignal r2, @android.support.annotation.NonNull android.support.v4.provider.FontsContractCompat.FontInfo[] r3, int r4) {
            android.support.v4.graphics.TypefaceCompatBaseImpl r0 = android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl
            android.graphics.Typeface r1 = r0.createFromFontInfo(r1, r2, r3, r4)
            return r1
    }

    @android.support.annotation.Nullable
    public static android.graphics.Typeface createFromResourcesFamilyXml(@android.support.annotation.NonNull android.content.Context r7, @android.support.annotation.NonNull android.support.v4.content.res.FontResourcesParserCompat.FamilyResourceEntry r8, @android.support.annotation.NonNull android.content.res.Resources r9, int r10, int r11, @android.support.annotation.Nullable android.support.v4.content.res.ResourcesCompat.FontCallback r12, @android.support.annotation.Nullable android.os.Handler r13, boolean r14) {
            boolean r1 = r8 instanceof android.support.v4.content.res.FontResourcesParserCompat.ProviderResourceEntry
            if (r1 == 0) goto L2c
            r0 = r8
            android.support.v4.content.res.FontResourcesParserCompat$ProviderResourceEntry r0 = (android.support.v4.content.res.FontResourcesParserCompat.ProviderResourceEntry) r0
            r1 = 1
            r4 = 0
            if (r14 == 0) goto L12
            int r5 = r0.getFetchStrategy()
            if (r5 != 0) goto L15
            goto L14
        L12:
            if (r12 != 0) goto L15
        L14:
            r4 = 1
        L15:
            if (r14 == 0) goto L1d
            int r1 = r0.getTimeout()
            r5 = r1
            goto L1f
        L1d:
            r1 = -1
            r5 = -1
        L1f:
            android.support.v4.provider.FontRequest r1 = r0.getRequest()
            r0 = r7
            r2 = r12
            r3 = r13
            r6 = r11
            android.graphics.Typeface r0 = android.support.v4.provider.FontsContractCompat.getFontSync(r0, r1, r2, r3, r4, r5, r6)
            goto L41
        L2c:
            android.support.v4.graphics.TypefaceCompatBaseImpl r1 = android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl
            r0 = r8
            android.support.v4.content.res.FontResourcesParserCompat$FontFamilyFilesResourceEntry r0 = (android.support.v4.content.res.FontResourcesParserCompat.FontFamilyFilesResourceEntry) r0
            android.graphics.Typeface r0 = r1.createFromFontFamilyFilesResourceEntry(r7, r0, r9, r11)
            if (r12 == 0) goto L41
            if (r0 == 0) goto L3d
            r12.callbackSuccessAsync(r0, r13)
            goto L41
        L3d:
            r1 = -3
            r12.callbackFailAsync(r1, r13)
        L41:
            if (r0 == 0) goto L4c
            android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> r1 = android.support.v4.graphics.TypefaceCompat.sTypefaceCache
            java.lang.String r2 = createResourceUid(r9, r10, r11)
            r1.put(r2, r0)
        L4c:
            return r0
    }

    @android.support.annotation.Nullable
    public static android.graphics.Typeface createFromResourcesFontFile(@android.support.annotation.NonNull android.content.Context r6, @android.support.annotation.NonNull android.content.res.Resources r7, int r8, java.lang.String r9, int r10) {
            android.support.v4.graphics.TypefaceCompatBaseImpl r0 = android.support.v4.graphics.TypefaceCompat.sTypefaceCompatImpl
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            android.graphics.Typeface r6 = r0.createFromResourcesFontFile(r1, r2, r3, r4, r5)
            if (r6 == 0) goto L16
            java.lang.String r7 = createResourceUid(r7, r8, r10)
            android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> r8 = android.support.v4.graphics.TypefaceCompat.sTypefaceCache
            r8.put(r7, r6)
        L16:
            return r6
    }

    private static java.lang.String createResourceUid(android.content.res.Resources r1, int r2, int r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r1.getResourcePackageName(r2)
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r0.toString()
            return r1
    }

    @android.support.annotation.Nullable
    public static android.graphics.Typeface findFromCache(@android.support.annotation.NonNull android.content.res.Resources r1, int r2, int r3) {
            android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> r0 = android.support.v4.graphics.TypefaceCompat.sTypefaceCache
            java.lang.String r1 = createResourceUid(r1, r2, r3)
            java.lang.Object r1 = r0.get(r1)
            android.graphics.Typeface r1 = (android.graphics.Typeface) r1
            return r1
    }
}
