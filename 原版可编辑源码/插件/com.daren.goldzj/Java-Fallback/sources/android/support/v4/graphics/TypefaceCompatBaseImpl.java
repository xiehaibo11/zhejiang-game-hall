package android.support.v4.graphics;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.os.CancellationSignal;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.provider.FontsContractCompat;
import android.support.v7.widget.ActivityChooserView;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class TypefaceCompatBaseImpl {
    private static final String CACHE_FILE_PREFIX = "cached_font_";
    private static final String TAG = "TypefaceCompatBaseImpl";

    private interface StyleExtractor<T> {
        int getWeight(T r1);

        boolean isItalic(T r1);
    }

    TypefaceCompatBaseImpl() {
    }

    private static <T> T findBestFont(T[] r10, int r11, StyleExtractor<T> r12) {
        if ((r11 & 1) != 0) goto L5;
        int r0 = 400;
    L7:
        if ((r11 & 2) == 0) goto L9;
        boolean r112 = true;
    L10:
        int r5 = r10.length;
        T r4 = null;
        int r3 = 0;
        int r6 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
    L11:
        if (r3 >= r5) goto L21;
        T r7 = r10[r3];
        int r8 = Math.abs(r12.getWeight(r7) - r0) * 2;
        if (r12.isItalic(r7) != r112) goto L15;
        int r9 = 0;
    L16:
        int r82 = r8 + r9;
        if (r4 == null) goto L19;
        if (r6 > r82) goto L19;
    L20:
        r3 = r3 + 1;
    L19:
        r4 = r7;
        r6 = r82;
        goto L20
    L15:
        r9 = 1;
        goto L16
    L21:
        return r4;
    L9:
        r112 = false;
        goto L10
    L5:
        r0 = 700;
        goto L7
    }

    protected FontsContractCompat.FontInfo findBestInfo(FontsContractCompat.FontInfo[] r2, int r3) {
        return (FontsContractCompat.FontInfo) findBestFont(r2, r3, new 1(this));
    }

    protected Typeface createFromInputStream(Context r2, InputStream r3) {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
            this = this;
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
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.graphics.TypefaceCompatBaseImpl.createFromInputStream(android.content.Context, java.io.InputStream):android.graphics.Typeface");
    }

    public Typeface createFromFontInfo(Context r3, @Nullable CancellationSignal r4, @NonNull FontsContractCompat.FontInfo[] r5, int r6) {
        InputStream r0 = null;
        if (r5.length >= 1) goto L5;
        return null;
    L5:
        FontsContractCompat.FontInfo r42 = findBestInfo(r5, r6);
        r3.getContentResolver();     // Catch: Throwable -> L12 IOException -> L15
        InputStream r43 = PluginProviderClient.openInputStream(RePlugin.getPluginContext(), r42.getUri());     // Catch: Throwable -> L12 IOException -> L15
    L21:
        Typeface r32 = createFromInputStream(r3, r43);     // Catch: Throwable -> L10 IOException -> L18
        TypefaceCompatUtil.closeQuietly(r43);
        return r32;
    L10:
        th = th;
        r0 = r43;
    L13:
        TypefaceCompatUtil.closeQuietly(r0);
        throw th;
    L16:
        TypefaceCompatUtil.closeQuietly(r43);
        return null;
    L15:
        r43 = null;
    L12:
        th = th;
        goto L13
    }

    private FontResourcesParserCompat.FontFileResourceEntry findBestEntry(FontResourcesParserCompat.FontFamilyFilesResourceEntry r2, int r3) {
        return (FontResourcesParserCompat.FontFileResourceEntry) findBestFont(r2.getEntries(), r3, new 2(this));
    }

    @Nullable
    public Typeface createFromFontFamilyFilesResourceEntry(Context r2, FontResourcesParserCompat.FontFamilyFilesResourceEntry r3, Resources r4, int r5) {
        FontResourcesParserCompat.FontFileResourceEntry r32 = findBestEntry(r3, r5);
        if (r32 != null) goto L7;
        return null;
    L7:
        return TypefaceCompat.createFromResourcesFontFile(r2, r4, r32.getResourceId(), r32.getFileName(), r5);
    }

    @Nullable
    public Typeface createFromResourcesFontFile(Context r1, Resources r2, int r3, String r4, int r5) {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
            this = this;
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
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.graphics.TypefaceCompatBaseImpl.createFromResourcesFontFile(android.content.Context, android.content.res.Resources, int, java.lang.String, int):android.graphics.Typeface");
    }
}
