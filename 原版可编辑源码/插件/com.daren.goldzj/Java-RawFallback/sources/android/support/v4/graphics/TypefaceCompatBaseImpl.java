package android.support.v4.graphics;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
class TypefaceCompatBaseImpl {
    private static final java.lang.String CACHE_FILE_PREFIX = "cached_font_";
    private static final java.lang.String TAG = "TypefaceCompatBaseImpl";



    private interface StyleExtractor<T> {
        int getWeight(T r1);

        boolean isItalic(T r1);
    }

    TypefaceCompatBaseImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.support.v4.content.res.FontResourcesParserCompat.FontFileResourceEntry findBestEntry(android.support.v4.content.res.FontResourcesParserCompat.FontFamilyFilesResourceEntry r2, int r3) {
            r1 = this;
            android.support.v4.content.res.FontResourcesParserCompat$FontFileResourceEntry[] r2 = r2.getEntries()
            android.support.v4.graphics.TypefaceCompatBaseImpl$2 r0 = new android.support.v4.graphics.TypefaceCompatBaseImpl$2
            r0.<init>(r1)
            java.lang.Object r2 = findBestFont(r2, r3, r0)
            android.support.v4.content.res.FontResourcesParserCompat$FontFileResourceEntry r2 = (android.support.v4.content.res.FontResourcesParserCompat.FontFileResourceEntry) r2
            return r2
    }

    private static <T> T findBestFont(T[] r10, int r11, android.support.v4.graphics.TypefaceCompatBaseImpl.StyleExtractor<T> r12) {
            r0 = r11 & 1
            if (r0 != 0) goto L7
            r0 = 400(0x190, float:5.6E-43)
            goto L9
        L7:
            r0 = 700(0x2bc, float:9.81E-43)
        L9:
            r11 = r11 & 2
            r1 = 0
            r2 = 1
            if (r11 == 0) goto L11
            r11 = 1
            goto L12
        L11:
            r11 = 0
        L12:
            r3 = 0
            r4 = 2147483647(0x7fffffff, float:NaN)
            int r5 = r10.length
            r4 = r3
            r3 = 0
            r6 = 2147483647(0x7fffffff, float:NaN)
        L1c:
            if (r3 >= r5) goto L3e
            r7 = r10[r3]
            int r8 = r12.getWeight(r7)
            int r8 = r8 - r0
            int r8 = java.lang.Math.abs(r8)
            int r8 = r8 * 2
            boolean r9 = r12.isItalic(r7)
            if (r9 != r11) goto L33
            r9 = 0
            goto L34
        L33:
            r9 = 1
        L34:
            int r8 = r8 + r9
            if (r4 == 0) goto L39
            if (r6 <= r8) goto L3b
        L39:
            r4 = r7
            r6 = r8
        L3b:
            int r3 = r3 + 1
            goto L1c
        L3e:
            return r4
    }

    @android.support.annotation.Nullable
    public android.graphics.Typeface createFromFontFamilyFilesResourceEntry(android.content.Context r2, android.support.v4.content.res.FontResourcesParserCompat.FontFamilyFilesResourceEntry r3, android.content.res.Resources r4, int r5) {
            r1 = this;
            android.support.v4.content.res.FontResourcesParserCompat$FontFileResourceEntry r3 = r1.findBestEntry(r3, r5)
            if (r3 != 0) goto L8
            r2 = 0
            return r2
        L8:
            int r0 = r3.getResourceId()
            java.lang.String r3 = r3.getFileName()
            android.graphics.Typeface r2 = android.support.v4.graphics.TypefaceCompat.createFromResourcesFontFile(r2, r4, r0, r3, r5)
            return r2
    }

    public android.graphics.Typeface createFromFontInfo(android.content.Context r3, @android.support.annotation.Nullable android.os.CancellationSignal r4, @android.support.annotation.NonNull android.support.v4.provider.FontsContractCompat.FontInfo[] r5, int r6) {
            r2 = this;
            int r4 = r5.length
            r0 = 0
            r1 = 1
            if (r4 >= r1) goto L6
            return r0
        L6:
            android.support.v4.provider.FontsContractCompat$FontInfo r4 = r2.findBestInfo(r5, r6)
            r3.getContentResolver()     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L29
            android.net.Uri r4 = r4.getUri()     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L29
            android.content.Context r5 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L29
            java.io.InputStream r4 = com.qihoo360.replugin.loader.p.PluginProviderClient.openInputStream(r5, r4)     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L29
            android.graphics.Typeface r3 = r2.createFromInputStream(r3, r4)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L2a
            android.support.v4.graphics.TypefaceCompatUtil.closeQuietly(r4)
            return r3
        L21:
            r3 = move-exception
            r0 = r4
            goto L25
        L24:
            r3 = move-exception
        L25:
            android.support.v4.graphics.TypefaceCompatUtil.closeQuietly(r0)
            throw r3
        L29:
            r4 = r0
        L2a:
            android.support.v4.graphics.TypefaceCompatUtil.closeQuietly(r4)
            return r0
    }

    protected android.graphics.Typeface createFromInputStream(android.content.Context r2, java.io.InputStream r3) {
            r1 = this;
            java.io.File r2 = android.support.v4.graphics.TypefaceCompatUtil.getTempFile(r2)
            r0 = 0
            if (r2 != 0) goto L8
            return r0
        L8:
            boolean r3 = android.support.v4.graphics.TypefaceCompatUtil.copyToFile(r2, r3)     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            if (r3 != 0) goto L12
            r2.delete()
            return r0
        L12:
            java.lang.String r3 = r2.getPath()     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            android.graphics.Typeface r3 = android.graphics.Typeface.createFromFile(r3)     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            r2.delete()
            return r3
        L1e:
            r3 = move-exception
            r2.delete()
            throw r3
        L23:
            r2.delete()
            return r0
    }

    @android.support.annotation.Nullable
    public android.graphics.Typeface createFromResourcesFontFile(android.content.Context r1, android.content.res.Resources r2, int r3, java.lang.String r4, int r5) {
            r0 = this;
            java.io.File r1 = android.support.v4.graphics.TypefaceCompatUtil.getTempFile(r1)
            r4 = 0
            if (r1 != 0) goto L8
            return r4
        L8:
            boolean r2 = android.support.v4.graphics.TypefaceCompatUtil.copyToFile(r1, r2, r3)     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            if (r2 != 0) goto L12
            r1.delete()
            return r4
        L12:
            java.lang.String r2 = r1.getPath()     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            android.graphics.Typeface r2 = android.graphics.Typeface.createFromFile(r2)     // Catch: java.lang.Throwable -> L1e java.lang.RuntimeException -> L23
            r1.delete()
            return r2
        L1e:
            r2 = move-exception
            r1.delete()
            throw r2
        L23:
            r1.delete()
            return r4
    }

    protected android.support.v4.provider.FontsContractCompat.FontInfo findBestInfo(android.support.v4.provider.FontsContractCompat.FontInfo[] r2, int r3) {
            r1 = this;
            android.support.v4.graphics.TypefaceCompatBaseImpl$1 r0 = new android.support.v4.graphics.TypefaceCompatBaseImpl$1
            r0.<init>(r1)
            java.lang.Object r2 = findBestFont(r2, r3, r0)
            android.support.v4.provider.FontsContractCompat$FontInfo r2 = (android.support.v4.provider.FontsContractCompat.FontInfo) r2
            return r2
    }
}
