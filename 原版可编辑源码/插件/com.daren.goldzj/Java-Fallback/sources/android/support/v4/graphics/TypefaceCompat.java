package android.support.v4.graphics;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.os.Build;
import android.os.CancellationSignal;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.provider.FontsContractCompat;
import android.support.v4.util.LruCache;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TypefaceCompat {
    private static final String TAG = "TypefaceCompat";
    private static final LruCache<String, Typeface> sTypefaceCache = null;
    private static final TypefaceCompatBaseImpl sTypefaceCompatImpl = null;

    static {
        if (Build.VERSION.SDK_INT < 28) goto L6;
        sTypefaceCompatImpl = new TypefaceCompatApi28Impl();
    L17:
        sTypefaceCache = new LruCache(16);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L9;
        sTypefaceCompatImpl = new TypefaceCompatApi26Impl();
        goto L17
    L9:
        if (Build.VERSION.SDK_INT < 24) goto L14;
        if (TypefaceCompatApi24Impl.isUsable() == false) goto L14;
        sTypefaceCompatImpl = new TypefaceCompatApi24Impl();
    L14:
        if (Build.VERSION.SDK_INT < 21) goto L16;
        sTypefaceCompatImpl = new TypefaceCompatApi21Impl();
        goto L17
    L16:
        sTypefaceCompatImpl = new TypefaceCompatBaseImpl();
        goto L17
    }

    private TypefaceCompat() {
    }

    @Nullable
    public static Typeface findFromCache(@NonNull Resources r1, int r2, int r3) {
        return sTypefaceCache.get(createResourceUid(r1, r2, r3));
    }

    private static String createResourceUid(Resources r1, int r2, int r3) {
        return r1.getResourcePackageName(r2) + "-" + r2 + "-" + r3;
    }

    @Nullable
    public static Typeface createFromResourcesFamilyXml(@NonNull Context r7, @NonNull FontResourcesParserCompat.FamilyResourceEntry r8, @NonNull Resources r9, int r10, int r11, @Nullable ResourcesCompat.FontCallback r12, @Nullable Handler r13, boolean r14) {
        if ((r8 instanceof FontResourcesParserCompat.ProviderResourceEntry) == false) goto L15;
        FontResourcesParserCompat.ProviderResourceEntry r0 = (FontResourcesParserCompat.ProviderResourceEntry) r8;
        boolean r4 = false;
        if (r14 == true) goto L7;
        if (r12 != null) goto L11;
    L10:
        r4 = true;
    L11:
        if (r14 == false) goto L13;
        int r5 = r0.getTimeout();
    L14:
        Typeface r02 = FontsContractCompat.getFontSync(r7, r0.getRequest(), r12, r13, r4, r5, r11);
    L20:
        if (r02 == null) goto L22;
        sTypefaceCache.put(createResourceUid(r9, r10, r11), r02);
    L22:
        return r02;
    L13:
        r5 = -1;
        goto L14
    L7:
        if (r0.getFetchStrategy() != 0) goto L11;
    L15:
        r02 = sTypefaceCompatImpl.createFromFontFamilyFilesResourceEntry(r7, (FontResourcesParserCompat.FontFamilyFilesResourceEntry) r8, r9, r11);
        if (r12 == null) goto L20;
        if (r02 == null) goto L19;
        r12.callbackSuccessAsync(r02, r13);
        goto L20
    L19:
        r12.callbackFailAsync(-3, r13);
        goto L20
    }

    @Nullable
    public static Typeface createFromResourcesFontFile(@NonNull Context r6, @NonNull Resources r7, int r8, String r9, int r10) {
        Typeface r62 = sTypefaceCompatImpl.createFromResourcesFontFile(r6, r7, r8, r9, r10);
        if (r62 == null) goto L5;
        String r72 = createResourceUid(r7, r8, r10);
        sTypefaceCache.put(r72, r62);
    L5:
        return r62;
    }

    @Nullable
    public static Typeface createFromFontInfo(@NonNull Context r1, @Nullable CancellationSignal r2, @NonNull FontsContractCompat.FontInfo[] r3, int r4) {
        return sTypefaceCompatImpl.createFromFontInfo(r1, r2, r3, r4);
    }
}
