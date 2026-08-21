package android.support.v4.util;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class Preconditions {
    private Preconditions() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkArgument(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
    }

    public static void checkArgument(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static float checkArgumentFinite(float r1, java.lang.String r2) {
            boolean r0 = java.lang.Float.isNaN(r1)
            if (r0 != 0) goto L24
            boolean r0 = java.lang.Float.isInfinite(r1)
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " must not be infinite"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L24:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " must not be NaN"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static float checkArgumentInRange(float r5, float r6, float r7, java.lang.String r8) {
            boolean r0 = java.lang.Float.isNaN(r5)
            if (r0 != 0) goto L4f
            r0 = 2
            r1 = 1
            r2 = 0
            r3 = 3
            int r4 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r4 < 0) goto L31
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 > 0) goto L13
            return r5
        L13:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r4 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r8
            java.lang.Float r6 = java.lang.Float.valueOf(r6)
            r3[r1] = r6
            java.lang.Float r6 = java.lang.Float.valueOf(r7)
            r3[r0] = r6
            java.lang.String r6 = "%s is out of range of [%f, %f] (too high)"
            java.lang.String r6 = java.lang.String.format(r4, r6, r3)
            r5.<init>(r6)
            throw r5
        L31:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r4 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r8
            java.lang.Float r6 = java.lang.Float.valueOf(r6)
            r3[r1] = r6
            java.lang.Float r6 = java.lang.Float.valueOf(r7)
            r3[r0] = r6
            java.lang.String r6 = "%s is out of range of [%f, %f] (too low)"
            java.lang.String r6 = java.lang.String.format(r4, r6, r3)
            r5.<init>(r6)
            throw r5
        L4f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r8)
            java.lang.String r7 = " must not be NaN"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    public static int checkArgumentInRange(int r5, int r6, int r7, java.lang.String r8) {
            r0 = 2
            r1 = 1
            r2 = 0
            r3 = 3
            if (r5 < r6) goto L27
            if (r5 > r7) goto L9
            return r5
        L9:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r4 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r8
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r3[r0] = r6
            java.lang.String r6 = "%s is out of range of [%d, %d] (too high)"
            java.lang.String r6 = java.lang.String.format(r4, r6, r3)
            r5.<init>(r6)
            throw r5
        L27:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r4 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r8
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            r3[r0] = r6
            java.lang.String r6 = "%s is out of range of [%d, %d] (too low)"
            java.lang.String r6 = java.lang.String.format(r4, r6, r3)
            r5.<init>(r6)
            throw r5
    }

    public static long checkArgumentInRange(long r5, long r7, long r9, java.lang.String r11) {
            r0 = 2
            r1 = 1
            r2 = 0
            r3 = 3
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 < 0) goto L2b
            int r4 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r4 > 0) goto Ld
            return r5
        Ld:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r6 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r11
            java.lang.Long r7 = java.lang.Long.valueOf(r7)
            r3[r1] = r7
            java.lang.Long r7 = java.lang.Long.valueOf(r9)
            r3[r0] = r7
            java.lang.String r7 = "%s is out of range of [%d, %d] (too high)"
            java.lang.String r6 = java.lang.String.format(r6, r7, r3)
            r5.<init>(r6)
            throw r5
        L2b:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.util.Locale r6 = java.util.Locale.US
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r11
            java.lang.Long r7 = java.lang.Long.valueOf(r7)
            r3[r1] = r7
            java.lang.Long r7 = java.lang.Long.valueOf(r9)
            r3[r0] = r7
            java.lang.String r7 = "%s is out of range of [%d, %d] (too low)"
            java.lang.String r6 = java.lang.String.format(r6, r7, r3)
            r5.<init>(r6)
            throw r5
    }

    @android.support.annotation.IntRange(from = 0)
    public static int checkArgumentNonnegative(int r0) {
            if (r0 < 0) goto L3
            return r0
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
    }

    @android.support.annotation.IntRange(from = 0)
    public static int checkArgumentNonnegative(int r0, java.lang.String r1) {
            if (r0 < 0) goto L3
            return r0
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static long checkArgumentNonnegative(long r3) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 < 0) goto L7
            return r3
        L7:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    public static long checkArgumentNonnegative(long r3, java.lang.String r5) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 < 0) goto L7
            return r3
        L7:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>(r5)
            throw r3
    }

    public static int checkArgumentPositive(int r0, java.lang.String r1) {
            if (r0 <= 0) goto L3
            return r0
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static float[] checkArrayElementsInRange(float[] r8, float r9, float r10, java.lang.String r11) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            java.lang.String r1 = " must not be null"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            checkNotNull(r8, r0)
            r0 = 0
            r1 = 0
        L16:
            int r2 = r8.length
            if (r1 >= r2) goto L97
            r2 = r8[r1]
            boolean r3 = java.lang.Float.isNaN(r2)
            if (r3 != 0) goto L78
            r3 = 3
            r4 = 2
            r5 = 4
            r6 = 1
            int r7 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r7 < 0) goto L54
            int r2 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r2 > 0) goto L30
            int r1 = r1 + 1
            goto L16
        L30:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.util.Locale r2 = java.util.Locale.US
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r5[r0] = r11
            java.lang.Integer r11 = java.lang.Integer.valueOf(r1)
            r5[r6] = r11
            java.lang.Float r9 = java.lang.Float.valueOf(r9)
            r5[r4] = r9
            java.lang.Float r9 = java.lang.Float.valueOf(r10)
            r5[r3] = r9
            java.lang.String r9 = "%s[%d] is out of range of [%f, %f] (too high)"
            java.lang.String r9 = java.lang.String.format(r2, r9, r5)
            r8.<init>(r9)
            throw r8
        L54:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.util.Locale r2 = java.util.Locale.US
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r5[r0] = r11
            java.lang.Integer r11 = java.lang.Integer.valueOf(r1)
            r5[r6] = r11
            java.lang.Float r9 = java.lang.Float.valueOf(r9)
            r5[r4] = r9
            java.lang.Float r9 = java.lang.Float.valueOf(r10)
            r5[r3] = r9
            java.lang.String r9 = "%s[%d] is out of range of [%f, %f] (too low)"
            java.lang.String r9 = java.lang.String.format(r2, r9, r5)
            r8.<init>(r9)
            throw r8
        L78:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r11)
            java.lang.String r10 = "["
            r9.append(r10)
            r9.append(r1)
            java.lang.String r10 = "] must not be NaN"
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L97:
            return r8
    }

    public static <T> T[] checkArrayElementsNotNull(T[] r4, java.lang.String r5) {
            if (r4 == 0) goto L29
            r0 = 0
            r1 = 0
        L4:
            int r2 = r4.length
            if (r1 >= r2) goto L28
            r2 = r4[r1]
            if (r2 == 0) goto Le
            int r1 = r1 + 1
            goto L4
        Le:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.util.Locale r2 = java.util.Locale.US
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r0] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)
            r0 = 1
            r3[r0] = r5
            java.lang.String r5 = "%s[%d] must not be null"
            java.lang.String r5 = java.lang.String.format(r2, r5, r3)
            r4.<init>(r5)
            throw r4
        L28:
            return r4
        L29:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = " must not be null"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    @android.support.annotation.NonNull
    public static <C extends java.util.Collection<T>, T> C checkCollectionElementsNotNull(C r5, java.lang.String r6) {
            if (r5 == 0) goto L34
            r0 = 0
            java.util.Iterator r2 = r5.iterator()
        L8:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L33
            java.lang.Object r3 = r2.next()
            if (r3 == 0) goto L18
            r3 = 1
            long r0 = r0 + r3
            goto L8
        L18:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException
            java.util.Locale r2 = java.util.Locale.US
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            r3[r4] = r6
            r6 = 1
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r3[r6] = r0
            java.lang.String r6 = "%s[%d] must not be null"
            java.lang.String r6 = java.lang.String.format(r2, r6, r3)
            r5.<init>(r6)
            throw r5
        L33:
            return r5
        L34:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r6 = " must not be null"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
    }

    public static <T> java.util.Collection<T> checkCollectionNotEmpty(java.util.Collection<T> r1, java.lang.String r2) {
            if (r1 == 0) goto L20
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " is empty"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " must not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static int checkFlagsArgument(int r3, int r4) {
            r0 = r3 & r4
            if (r0 != r3) goto L5
            return r3
        L5:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Requested flags 0x"
            r1.append(r2)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r1.append(r3)
            java.lang.String r3 = ", but only 0x"
            r1.append(r3)
            java.lang.String r3 = java.lang.Integer.toHexString(r4)
            r1.append(r3)
            java.lang.String r3 = " are allowed"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @android.support.annotation.NonNull
    public static <T> T checkNotNull(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            r0.<init>()
            throw r0
    }

    @android.support.annotation.NonNull
    public static <T> T checkNotNull(T r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void checkState(boolean r1) {
            r0 = 0
            checkState(r1, r0)
            return
    }

    public static void checkState(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }

    @android.support.annotation.NonNull
    public static <T extends java.lang.CharSequence> T checkStringNotEmpty(T r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    @android.support.annotation.NonNull
    public static <T extends java.lang.CharSequence> T checkStringNotEmpty(T r1, java.lang.Object r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            throw r1
    }
}
