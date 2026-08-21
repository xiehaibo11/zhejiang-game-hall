package android.support.v7.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleableRes;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.util.TypedValue;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TintTypedArray {
    private final Context mContext;
    private TypedValue mTypedValue;
    private final TypedArray mWrapped;

    public static TintTypedArray obtainStyledAttributes(Context r1, AttributeSet r2, int[] r3) {
        return new TintTypedArray(r1, r1.obtainStyledAttributes(r2, r3));
    }

    public static TintTypedArray obtainStyledAttributes(Context r1, AttributeSet r2, int[] r3, int r4, int r5) {
        return new TintTypedArray(r1, r1.obtainStyledAttributes(r2, r3, r4, r5));
    }

    public static TintTypedArray obtainStyledAttributes(Context r1, int r2, int[] r3) {
        return new TintTypedArray(r1, r1.obtainStyledAttributes(r2, r3));
    }

    private TintTypedArray(Context r1, TypedArray r2) {
        this.mContext = r1;
        this.mWrapped = r2;
    }

    public Drawable getDrawable(int r3) {
        if (this.mWrapped.hasValue(r3) == false) goto L9;
        int r0 = this.mWrapped.getResourceId(r3, 0);
        if (r0 == 0) goto L9;
        return AppCompatResources.getDrawable(this.mContext, r0);
    L9:
        return this.mWrapped.getDrawable(r3);
    }

    public Drawable getDrawableIfKnown(int r4) {
        if (this.mWrapped.hasValue(r4) == false) goto L8;
        int r42 = this.mWrapped.getResourceId(r4, 0);
        if (r42 != 0) goto L7;
        return null;
    L7:
        return AppCompatDrawableManager.get().getDrawable(this.mContext, r42, true);
    L8:
        return null;
    }

    @Nullable
    public Typeface getFont(@StyleableRes int r3, int r4, @Nullable ResourcesCompat.FontCallback r5) {
        int r32 = this.mWrapped.getResourceId(r3, 0);
        if (r32 != 0) goto L7;
        return null;
    L7:
        if (this.mTypedValue != null) goto L10;
        this.mTypedValue = new TypedValue();
    L10:
        return ResourcesCompat.getFont(this.mContext, r32, this.mTypedValue, r4, r5);
    }

    public int length() {
        return this.mWrapped.length();
    }

    public int getIndexCount() {
        return this.mWrapped.getIndexCount();
    }

    public int getIndex(int r2) {
        return this.mWrapped.getIndex(r2);
    }

    public Resources getResources() {
        return this.mWrapped.getResources();
    }

    public CharSequence getText(int r2) {
        return this.mWrapped.getText(r2);
    }

    public String getString(int r2) {
        return this.mWrapped.getString(r2);
    }

    public String getNonResourceString(int r2) {
        return this.mWrapped.getNonResourceString(r2);
    }

    public boolean getBoolean(int r2, boolean r3) {
        return this.mWrapped.getBoolean(r2, r3);
    }

    public int getInt(int r2, int r3) {
        return this.mWrapped.getInt(r2, r3);
    }

    public float getFloat(int r2, float r3) {
        return this.mWrapped.getFloat(r2, r3);
    }

    public int getColor(int r2, int r3) {
        return this.mWrapped.getColor(r2, r3);
    }

    public ColorStateList getColorStateList(int r3) {
        if (this.mWrapped.hasValue(r3) == false) goto L10;
        int r0 = this.mWrapped.getResourceId(r3, 0);
        if (r0 == 0) goto L10;
        ColorStateList r02 = AppCompatResources.getColorStateList(this.mContext, r0);
        if (r02 == null) goto L10;
        return r02;
    L10:
        return this.mWrapped.getColorStateList(r3);
    }

    public int getInteger(int r2, int r3) {
        return this.mWrapped.getInteger(r2, r3);
    }

    public float getDimension(int r2, float r3) {
        return this.mWrapped.getDimension(r2, r3);
    }

    public int getDimensionPixelOffset(int r2, int r3) {
        return this.mWrapped.getDimensionPixelOffset(r2, r3);
    }

    public int getDimensionPixelSize(int r2, int r3) {
        return this.mWrapped.getDimensionPixelSize(r2, r3);
    }

    public int getLayoutDimension(int r2, String r3) {
        return this.mWrapped.getLayoutDimension(r2, r3);
    }

    public int getLayoutDimension(int r2, int r3) {
        return this.mWrapped.getLayoutDimension(r2, r3);
    }

    public float getFraction(int r2, int r3, int r4, float r5) {
        return this.mWrapped.getFraction(r2, r3, r4, r5);
    }

    public int getResourceId(int r2, int r3) {
        return this.mWrapped.getResourceId(r2, r3);
    }

    public CharSequence[] getTextArray(int r2) {
        return this.mWrapped.getTextArray(r2);
    }

    public boolean getValue(int r2, TypedValue r3) {
        return this.mWrapped.getValue(r2, r3);
    }

    public int getType(int r3) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return this.mWrapped.getType(r3);
    L7:
        if (this.mTypedValue != null) goto L9;
        this.mTypedValue = new TypedValue();
    L9:
        this.mWrapped.getValue(r3, this.mTypedValue);
        return this.mTypedValue.type;
    }

    public boolean hasValue(int r2) {
        return this.mWrapped.hasValue(r2);
    }

    public TypedValue peekValue(int r2) {
        return this.mWrapped.peekValue(r2);
    }

    public String getPositionDescription() {
        return this.mWrapped.getPositionDescription();
    }

    public void recycle() {
        this.mWrapped.recycle();
    }

    @RequiresApi(21)
    public int getChangingConfigurations() {
        return this.mWrapped.getChangingConfigurations();
    }
}
