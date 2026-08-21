package android.support.v4.content.res;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.support.annotation.AnyRes;
import android.support.annotation.ColorInt;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleableRes;
import android.util.AttributeSet;
import android.util.TypedValue;
import org.xmlpull.v1.XmlPullParser;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TypedArrayUtils {
    private static final String NAMESPACE = "http://schemas.android.com/apk/res/android";

    public static boolean hasAttribute(@NonNull XmlPullParser r1, @NonNull String r2) {
        if (r1.getAttributeValue(NAMESPACE, r2) == null) goto L5;
        return true;
    L5:
        return false;
    }

    public static float getNamedFloat(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3, float r4) {
        if (hasAttribute(r1, r2) == true) goto L6;
        return r4;
    L6:
        return r0.getFloat(r3, r4);
    }

    public static boolean getNamedBoolean(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3, boolean r4) {
        if (hasAttribute(r1, r2) == true) goto L6;
        return r4;
    L6:
        return r0.getBoolean(r3, r4);
    }

    public static int getNamedInt(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3, int r4) {
        if (hasAttribute(r1, r2) == true) goto L6;
        return r4;
    L6:
        return r0.getInt(r3, r4);
    }

    @ColorInt
    public static int getNamedColor(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3, @ColorInt int r4) {
        if (hasAttribute(r1, r2) == true) goto L6;
        return r4;
    L6:
        return r0.getColor(r3, r4);
    }

    public static ComplexColorCompat getNamedComplexColor(@NonNull TypedArray r1, @NonNull XmlPullParser r2, @Nullable Resources.Theme r3, @NonNull String r4, @StyleableRes int r5, @ColorInt int r6) {
        if (hasAttribute(r2, r4) == false) goto L14;
        TypedValue r22 = new TypedValue();
        r1.getValue(r5, r22);
        if (r22.type >= 28) goto L7;
    L10:
        ComplexColorCompat r12 = ComplexColorCompat.inflate(r1.getResources(), r1.getResourceId(r5, 0), r3);
        if (r12 == null) goto L14;
        return r12;
    L7:
        if (r22.type > 31) goto L10;
        return ComplexColorCompat.from(r22.data);
    L14:
        return ComplexColorCompat.from(r6);
    }

    @AnyRes
    public static int getNamedResourceId(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3, @AnyRes int r4) {
        if (hasAttribute(r1, r2) == true) goto L6;
        return r4;
    L6:
        return r0.getResourceId(r3, r4);
    }

    @Nullable
    public static String getNamedString(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, @StyleableRes int r3) {
        if (hasAttribute(r1, r2) == true) goto L7;
        return null;
    L7:
        return r0.getString(r3);
    }

    @Nullable
    public static TypedValue peekNamedValue(@NonNull TypedArray r0, @NonNull XmlPullParser r1, @NonNull String r2, int r3) {
        if (hasAttribute(r1, r2) == true) goto L7;
        return null;
    L7:
        return r0.peekValue(r3);
    }

    @NonNull
    public static TypedArray obtainAttributes(@NonNull Resources r0, @Nullable Resources.Theme r1, @NonNull AttributeSet r2, @NonNull int[] r3) {
        if (r1 != null) goto L6;
        return r0.obtainAttributes(r2, r3);
    L6:
        return r1.obtainStyledAttributes(r2, r3, 0, 0);
    }

    public static boolean getBoolean(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2, boolean r3) {
        return r0.getBoolean(r1, r0.getBoolean(r2, r3));
    }

    @Nullable
    public static Drawable getDrawable(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2) {
        Drawable r12 = r0.getDrawable(r1);
        if (r12 == null) goto L5;
        return r12;
    L5:
        return r0.getDrawable(r2);
    }

    public static int getInt(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2, int r3) {
        return r0.getInt(r1, r0.getInt(r2, r3));
    }

    @AnyRes
    public static int getResourceId(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2, @AnyRes int r3) {
        return r0.getResourceId(r1, r0.getResourceId(r2, r3));
    }

    @Nullable
    public static String getString(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2) {
        String r12 = r0.getString(r1);
        if (r12 == null) goto L5;
        return r12;
    L5:
        return r0.getString(r2);
    }

    @Nullable
    public static CharSequence getText(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2) {
        CharSequence r12 = r0.getText(r1);
        if (r12 == null) goto L5;
        return r12;
    L5:
        return r0.getText(r2);
    }

    @Nullable
    public static CharSequence[] getTextArray(@NonNull TypedArray r0, @StyleableRes int r1, @StyleableRes int r2) {
        CharSequence[] r12 = r0.getTextArray(r1);
        if (r12 == null) goto L5;
        return r12;
    L5:
        return r0.getTextArray(r2);
    }

    public static int getAttr(@NonNull Context r2, int r3, int r4) {
        TypedValue r0 = new TypedValue();
        r2.getTheme().resolveAttribute(r3, r0, true);
        if (r0.resourceId == 0) goto L5;
        return r3;
    L5:
        return r4;
    }

    private TypedArrayUtils() {
    }
}
