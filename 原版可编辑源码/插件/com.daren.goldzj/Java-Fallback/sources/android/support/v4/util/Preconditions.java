package android.support.v4.util;

import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import android.text.TextUtils;
import java.util.Collection;
import java.util.Iterator;
import java.util.Locale;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class Preconditions {
    public static void checkArgument(boolean r0) {
        if (r0 == false) goto L5;
        return;
    L5:
        throw new IllegalArgumentException();
    }

    public static void checkArgument(boolean r0, Object r1) {
        if (r0 == false) goto L5;
        return;
    L5:
        throw new IllegalArgumentException(String.valueOf(r1));
    }

    @NonNull
    public static <T extends CharSequence> T checkStringNotEmpty(T r1) {
        if (TextUtils.isEmpty(r1) == true) goto L6;
        return r1;
    L6:
        throw new IllegalArgumentException();
    }

    @NonNull
    public static <T extends CharSequence> T checkStringNotEmpty(T r1, Object r2) {
        if (TextUtils.isEmpty(r1) == true) goto L6;
        return r1;
    L6:
        throw new IllegalArgumentException(String.valueOf(r2));
    }

    @NonNull
    public static <T> T checkNotNull(T r0) {
        if (r0 == null) goto L5;
        return r0;
    L5:
        throw new NullPointerException();
    }

    @NonNull
    public static <T> T checkNotNull(T r0, Object r1) {
        if (r0 == null) goto L5;
        return r0;
    L5:
        throw new NullPointerException(String.valueOf(r1));
    }

    public static void checkState(boolean r0, String r1) {
        if (r0 == false) goto L5;
        return;
    L5:
        throw new IllegalStateException(r1);
    }

    public static void checkState(boolean r1) {
        checkState(r1, null);
    }

    public static int checkFlagsArgument(int r3, int r4) {
        if ((r3 & r4) != r3) goto L6;
        return r3;
    L6:
        throw new IllegalArgumentException("Requested flags 0x" + Integer.toHexString(r3) + ", but only 0x" + Integer.toHexString(r4) + " are allowed");
    }

    @IntRange(from = 0)
    public static int checkArgumentNonnegative(int r0, String r1) {
        if (r0 < 0) goto L5;
        return r0;
    L5:
        throw new IllegalArgumentException(r1);
    }

    @IntRange(from = 0)
    public static int checkArgumentNonnegative(int r0) {
        if (r0 < 0) goto L5;
        return r0;
    L5:
        throw new IllegalArgumentException();
    }

    public static long checkArgumentNonnegative(long r3) {
        if (r3 < 0) goto L6;
        return r3;
    L6:
        throw new IllegalArgumentException();
    }

    public static long checkArgumentNonnegative(long r3, String r5) {
        if (r3 < 0) goto L6;
        return r3;
    L6:
        throw new IllegalArgumentException(r5);
    }

    public static int checkArgumentPositive(int r0, String r1) {
        if (r0 <= 0) goto L5;
        return r0;
    L5:
        throw new IllegalArgumentException(r1);
    }

    public static float checkArgumentFinite(float r1, String r2) {
        if (Float.isNaN(r1) == true) goto L10;
        if (Float.isInfinite(r1) == true) goto L8;
        return r1;
    L8:
        throw new IllegalArgumentException(r2 + " must not be infinite");
    L10:
        throw new IllegalArgumentException(r2 + " must not be NaN");
    }

    public static float checkArgumentInRange(float r5, float r6, float r7, String r8) {
        if (Float.isNaN(r5) == true) goto L14;
        if (r5 < r6) goto L12;
        if (r5 > r7) goto L10;
        return r5;
    L10:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%f, %f] (too high)", new Object[]{r8, Float.valueOf(r6), Float.valueOf(r7)}));
    L12:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%f, %f] (too low)", new Object[]{r8, Float.valueOf(r6), Float.valueOf(r7)}));
    L14:
        throw new IllegalArgumentException(r8 + " must not be NaN");
    }

    public static int checkArgumentInRange(int r5, int r6, int r7, String r8) {
        if (r5 < r6) goto L9;
        if (r5 > r7) goto L7;
        return r5;
    L7:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%d, %d] (too high)", new Object[]{r8, Integer.valueOf(r6), Integer.valueOf(r7)}));
    L9:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%d, %d] (too low)", new Object[]{r8, Integer.valueOf(r6), Integer.valueOf(r7)}));
    }

    public static long checkArgumentInRange(long r5, long r7, long r9, String r11) {
        if (r5 < r7) goto L10;
        if (r5 > r9) goto L8;
        return r5;
    L8:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%d, %d] (too high)", new Object[]{r11, Long.valueOf(r7), Long.valueOf(r9)}));
    L10:
        throw new IllegalArgumentException(String.format(Locale.US, "%s is out of range of [%d, %d] (too low)", new Object[]{r11, Long.valueOf(r7), Long.valueOf(r9)}));
    }

    public static <T> T[] checkArrayElementsNotNull(T[] r4, String r5) {
        if (r4 == null) goto L13;
        int r1 = 0;
    L5:
        if (r1 >= r4.length) goto L11;
        if (r4[r1] == null) goto L10;
        r1 = r1 + 1;
        goto L5
    L10:
        throw new NullPointerException(String.format(Locale.US, "%s[%d] must not be null", new Object[]{r5, Integer.valueOf(r1)}));
    L11:
        return r4;
    L13:
        throw new NullPointerException(r5 + " must not be null");
    }

    @NonNull
    public static <C extends Collection<T>, T> C checkCollectionElementsNotNull(C r5, String r6) {
        if (r5 == null) goto L13;
        long r0 = 0;
        Iterator r2 = r5.iterator();
    L5:
        if (r2.hasNext() == false) goto L11;
        if (r2.next() == null) goto L10;
        r0 = r0 + 1;
        goto L5
    L10:
        throw new NullPointerException(String.format(Locale.US, "%s[%d] must not be null", new Object[]{r6, Long.valueOf(r0)}));
    L11:
        return r5;
    L13:
        throw new NullPointerException(r6 + " must not be null");
    }

    public static <T> Collection<T> checkCollectionNotEmpty(Collection<T> r1, String r2) {
        if (r1 == null) goto L9;
        if (r1.isEmpty() == true) goto L7;
        return r1;
    L7:
        throw new IllegalArgumentException(r2 + " is empty");
    L9:
        throw new NullPointerException(r2 + " must not be null");
    }

    public static float[] checkArrayElementsInRange(float[] r8, float r9, float r10, String r11) {
        checkNotNull(r8, r11 + " must not be null");
        int r1 = 0;
    L4:
        if (r1 >= r8.length) goto L18;
        float r2 = r8[r1];
        if (Float.isNaN(r2) == true) goto L17;
        if (r2 < r9) goto L15;
        if (r2 > r10) goto L13;
        r1 = r1 + 1;
        goto L4
    L13:
        throw new IllegalArgumentException(String.format(Locale.US, "%s[%d] is out of range of [%f, %f] (too high)", new Object[]{r11, Integer.valueOf(r1), Float.valueOf(r9), Float.valueOf(r10)}));
    L15:
        throw new IllegalArgumentException(String.format(Locale.US, "%s[%d] is out of range of [%f, %f] (too low)", new Object[]{r11, Integer.valueOf(r1), Float.valueOf(r9), Float.valueOf(r10)}));
    L17:
        throw new IllegalArgumentException(r11 + "[" + r1 + "] must not be NaN");
    L18:
        return r8;
    }

    private Preconditions() {
    }
}
