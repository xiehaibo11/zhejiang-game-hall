package android.support.v4.content.res;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.support.annotation.ColorInt;
import android.support.annotation.ColorRes;
import android.support.annotation.DrawableRes;
import android.support.annotation.FontRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.graphics.TypefaceCompat;
import android.support.v4.util.Preconditions;
import android.util.Log;
import android.util.TypedValue;
import java.io.IOException;
import org.xmlpull.v1.XmlPullParserException;

public final class ResourcesCompat {
    private static final String TAG = "ResourcesCompat";

    public static abstract class FontCallback {
        public abstract void onFontRetrievalFailed(int r1);

        public abstract void onFontRetrieved(@NonNull Typeface r1);

        public FontCallback() {
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public final void callbackSuccessAsync(final Typeface r2, @Nullable Handler r3) {
            if (r3 != null) goto L4;
            r3 = new Handler(Looper.getMainLooper());
        L4:
            r3.post(new 1(this, r2));
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public final void callbackFailAsync(final int r2, @Nullable Handler r3) {
            if (r3 != null) goto L4;
            r3 = new Handler(Looper.getMainLooper());
        L4:
            r3.post(new 2(this, r2));
        }
    }

    @Nullable
    public static Drawable getDrawable(@NonNull Resources r2, @DrawableRes int r3, @Nullable Resources.Theme r4) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getDrawable(r3, r4);
    L7:
        return r2.getDrawable(r3);
    }

    @Nullable
    public static Drawable getDrawableForDensity(@NonNull Resources r2, @DrawableRes int r3, int r4, @Nullable Resources.Theme r5) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getDrawableForDensity(r3, r4, r5);
    L7:
        if (Build.VERSION.SDK_INT < 15) goto L11;
        return r2.getDrawableForDensity(r3, r4);
    L11:
        return r2.getDrawable(r3);
    }

    @ColorInt
    public static int getColor(@NonNull Resources r2, @ColorRes int r3, @Nullable Resources.Theme r4) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r2.getColor(r3, r4);
    L7:
        return r2.getColor(r3);
    }

    @Nullable
    public static ColorStateList getColorStateList(@NonNull Resources r2, @ColorRes int r3, @Nullable Resources.Theme r4) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r2.getColorStateList(r3, r4);
    L7:
        return r2.getColorStateList(r3);
    }

    @Nullable
    public static Typeface getFont(@NonNull Context r7, @FontRes int r8) throws Resources.NotFoundException {
        if (r7.isRestricted() == false) goto L7;
        return null;
    L7:
        return loadFont(r7, r8, new TypedValue(), 0, null, null, false);
    }

    public static void getFont(@NonNull Context r7, @FontRes int r8, @NonNull FontCallback r9, @Nullable Handler r10) throws Resources.NotFoundException {
        Preconditions.checkNotNull(r9);
        if (r7.isRestricted() == false) goto L6;
        r9.callbackFailAsync(-4, r10);
        return;
    L6:
        loadFont(r7, r8, new TypedValue(), 0, r9, r10, false);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static Typeface getFont(@NonNull Context r7, @FontRes int r8, TypedValue r9, int r10, @Nullable FontCallback r11) throws Resources.NotFoundException {
        if (r7.isRestricted() == false) goto L7;
        return null;
    L7:
        return loadFont(r7, r8, r9, r10, r11, null, true);
    }

    private static Typeface loadFont(@NonNull Context r8, int r9, TypedValue r10, int r11, @Nullable FontCallback r12, @Nullable Handler r13, boolean r14) {
        Resources r1 = r8.getResources();
        r1.getValue(r9, r10, true);
        Typeface r82 = loadFont(r8, r1, r10, r9, r11, r12, r13, r14);
        if (r82 != null) goto L8;
        if (r12 != null) goto L8;
        throw new Resources.NotFoundException("Font resource ID #0x" + Integer.toHexString(r9) + " could not be retrieved.");
    L8:
        return r82;
    }

    private static Typeface loadFont(@NonNull Context r15, Resources r16, TypedValue r17, int r18, int r19, @Nullable FontCallback r20, @Nullable Handler r21, boolean r22) {
        if (r17.string == null) goto L38;
        String r12 = r17.string.toString();
        if (r12.startsWith("res/") == true) goto L9;
        if (r20 == null) goto L8;
        r20.callbackFailAsync(-3, r21);
    L8:
        return null;
    L9:
        Typeface r1 = TypefaceCompat.findFromCache(r16, r18, r19);
        if (r1 == null) goto L39;
        if (r20 == null) goto L13;
        r20.callbackSuccessAsync(r1, r21);
    L13:
        return r1;
    L39:
    L30:
        e = move-exception;
        Log.e(TAG, "Failed to read xml resource " + r12, e);
    L34:
        if (r20 == null) goto L36;
        r20.callbackFailAsync(-3, r21);
    L36:
        return null;
    L32:
        e = move-exception;
        Log.e(TAG, "Failed to parse xml resource " + r12, e);
        goto L34
    L15:
        if (r12.toLowerCase().endsWith(".xml") == false) goto L24;
        FontResourcesParserCompat.FamilyResourceEntry r2 = FontResourcesParserCompat.parse(r16.getXml(r18), r16);     // Catch: IOException -> L30 XmlPullParserException -> L32
        if (r2 != null) goto L23;
        Log.e(TAG, "Failed to find font-family tag");     // Catch: IOException -> L30 XmlPullParserException -> L32
        if (r20 == null) goto L21;
        r20.callbackFailAsync(-3, r21);     // Catch: IOException -> L30 XmlPullParserException -> L32
    L21:
        return null;
    L23:
        return TypefaceCompat.createFromResourcesFamilyXml(r15, r2, r16, r18, r19, r20, r21, r22);
    L24:
        Typeface r0 = TypefaceCompat.createFromResourcesFontFile(r15, r16, r18, r12, r19);     // Catch: IOException -> L30 XmlPullParserException -> L32
        if (r20 == null) goto L29;
        if (r0 == null) goto L28;
        r20.callbackSuccessAsync(r0, r21);     // Catch: IOException -> L30 XmlPullParserException -> L32
        goto L29
    L28:
        r20.callbackFailAsync(-3, r21);     // Catch: IOException -> L30 XmlPullParserException -> L32
    L29:
        return r0;
    L38:
        throw new Resources.NotFoundException("Resource \"" + r16.getResourceName(r18) + "\" (" + Integer.toHexString(r18) + ") is not a Font: " + r17);
    }

    private ResourcesCompat() {
    }
}
