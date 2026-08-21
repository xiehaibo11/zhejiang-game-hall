package android.support.v4.graphics;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.CancellationSignal;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.provider.FontsContractCompat;
import android.support.v4.util.SimpleArrayMap;
import android.util.Log;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.nio.ByteBuffer;
import java.util.List;

@RequiresApi(24)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class TypefaceCompatApi24Impl extends TypefaceCompatBaseImpl {
    private static final String ADD_FONT_WEIGHT_STYLE_METHOD = "addFontWeightStyle";
    private static final String CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD = "createFromFamiliesWithDefault";
    private static final String FONT_FAMILY_CLASS = "android.graphics.FontFamily";
    private static final String TAG = "TypefaceCompatApi24Impl";
    private static final Method sAddFontWeightStyle = null;
    private static final Method sCreateFromFamiliesWithDefault = null;
    private static final Class sFontFamily = null;
    private static final Constructor sFontFamilyCtor = null;

    TypefaceCompatApi24Impl() {
    }

    static {
        Constructor<?> r0 = null;
        Class<?> r1 = Class.forName(FONT_FAMILY_CLASS);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Constructor<?> r3 = r1.getConstructor(new Class[0]);     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r4 = r1.getMethod(ADD_FONT_WEIGHT_STYLE_METHOD, new Class[]{ByteBuffer.class, Integer.TYPE, List.class, Integer.TYPE, Boolean.TYPE});     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        Method r2 = Typeface.class.getMethod(CREATE_FROM_FAMILIES_WITH_DEFAULT_METHOD, new Class[]{Array.newInstance(r1, 1).getClass()});     // Catch: NoSuchMethodException -> L5 Throwable -> L7
        r0 = r3;
    L9:
        sFontFamilyCtor = r0;
        sFontFamily = r1;
        sAddFontWeightStyle = r4;
        sCreateFromFamiliesWithDefault = r2;
        return;
    L7:
        e = move-exception;
        Log.e(TAG, e.getClass().getName(), e);
        r1 = null;
        r2 = null;
        r4 = null;
        goto L9
    }

    public static boolean isUsable() {
        if (sAddFontWeightStyle != null) goto L6;
        Log.w(TAG, "Unable to collect necessary private methods.Fallback to legacy implementation.");
    L6:
        if (sAddFontWeightStyle == null) goto L8;
        return true;
    L8:
        return false;
    }

    private static Object newFamily() {
        return sFontFamilyCtor.newInstance(new Object[0]);
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private static boolean addFontWeightStyle(Object r3, ByteBuffer r4, int r5, int r6, boolean r7) {
        return ((Boolean) sAddFontWeightStyle.invoke(r3, new Object[]{r4, Integer.valueOf(r5), null, Integer.valueOf(r6), Boolean.valueOf(r7)})).booleanValue();
    L4:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private static Typeface createFromFamiliesWithDefault(Object r4) {
        Object r0 = Array.newInstance(sFontFamily, 1);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        Array.set(r0, 0, r4);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        return (Typeface) sCreateFromFamiliesWithDefault.invoke(null, new Object[]{r0});
    L6:
        e = move-exception;
        throw new RuntimeException(e);
    }

    @Override
    public Typeface createFromFontInfo(Context r9, @Nullable CancellationSignal r10, @NonNull FontsContractCompat.FontInfo[] r11, int r12) {
        Object r0 = newFamily();
        SimpleArrayMap r1 = new SimpleArrayMap();
        int r2 = r11.length;
        int r3 = 0;
    L3:
        if (r3 >= r2) goto L13;
        FontsContractCompat.FontInfo r4 = r11[r3];
        Uri r5 = r4.getUri();
        ByteBuffer r6 = (ByteBuffer) r1.get(r5);
        if (r6 != null) goto L8;
        r6 = TypefaceCompatUtil.mmap(r9, r10, r5);
        r1.put(r5, r6);
    L8:
        if (addFontWeightStyle(r0, r6, r4.getTtcIndex(), r4.getWeight(), r4.isItalic()) == false) goto L9;
        r3 = r3 + 1;
        goto L3
    L9:
        return null;
    L13:
        return Typeface.create(createFromFamiliesWithDefault(r0), r12);
    }

    @Override
    public Typeface createFromFontFamilyFilesResourceEntry(Context r8, FontResourcesParserCompat.FontFamilyFilesResourceEntry r9, Resources r10, int r11) {
        Object r112 = newFamily();
        FontResourcesParserCompat.FontFileResourceEntry[] r92 = r9.getEntries();
        int r0 = r92.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L12;
        FontResourcesParserCompat.FontFileResourceEntry r2 = r92[r1];
        ByteBuffer r3 = TypefaceCompatUtil.copyToDirectBuffer(r8, r10, r2.getResourceId());
        if (r3 == null) goto L6;
        if (addFontWeightStyle(r112, r3, r2.getTtcIndex(), r2.getWeight(), r2.isItalic()) == false) goto L9;
        r1 = r1 + 1;
        goto L3
    L9:
        return null;
    L6:
        return null;
    L12:
        return createFromFamiliesWithDefault(r112);
    }
}
