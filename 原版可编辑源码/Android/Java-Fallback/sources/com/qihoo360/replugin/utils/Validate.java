package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Validate {
    private static final java.lang.String DEFAULT_EXCLUSIVE_BETWEEN_EX_MESSAGE = "The value %s is not in the specified exclusive range of %s to %s";
    private static final java.lang.String DEFAULT_FINITE_EX_MESSAGE = "The value is invalid: %f";
    private static final java.lang.String DEFAULT_INCLUSIVE_BETWEEN_EX_MESSAGE = "The value %s is not in the specified inclusive range of %s to %s";
    private static final java.lang.String DEFAULT_IS_ASSIGNABLE_EX_MESSAGE = "Cannot assign a %s to a %s";
    private static final java.lang.String DEFAULT_IS_INSTANCE_OF_EX_MESSAGE = "Expected type: %s, actual: %s";
    private static final java.lang.String DEFAULT_IS_NULL_EX_MESSAGE = "The validated object is null";
    private static final java.lang.String DEFAULT_IS_TRUE_EX_MESSAGE = "The validated expression is false";
    private static final java.lang.String DEFAULT_MATCHES_PATTERN_EX = "The string %s does not match the pattern %s";
    private static final java.lang.String DEFAULT_NOT_BLANK_EX_MESSAGE = "The validated character sequence is blank";
    private static final java.lang.String DEFAULT_NOT_EMPTY_ARRAY_EX_MESSAGE = "The validated array is empty";
    private static final java.lang.String DEFAULT_NOT_EMPTY_CHAR_SEQUENCE_EX_MESSAGE = "The validated character sequence is empty";
    private static final java.lang.String DEFAULT_NOT_EMPTY_COLLECTION_EX_MESSAGE = "The validated collection is empty";
    private static final java.lang.String DEFAULT_NOT_EMPTY_MAP_EX_MESSAGE = "The validated map is empty";
    private static final java.lang.String DEFAULT_NOT_NAN_EX_MESSAGE = "The validated value is not a number";
    private static final java.lang.String DEFAULT_NO_NULL_ELEMENTS_ARRAY_EX_MESSAGE = "The validated array contains null element at index: %d";
    private static final java.lang.String DEFAULT_NO_NULL_ELEMENTS_COLLECTION_EX_MESSAGE = "The validated collection contains null element at index: %d";
    private static final java.lang.String DEFAULT_VALID_INDEX_ARRAY_EX_MESSAGE = "The validated array index is invalid: %d";
    private static final java.lang.String DEFAULT_VALID_INDEX_CHAR_SEQUENCE_EX_MESSAGE = "The validated character sequence index is invalid: %d";
    private static final java.lang.String DEFAULT_VALID_INDEX_COLLECTION_EX_MESSAGE = "The validated collection index is invalid: %d";
    private static final java.lang.String DEFAULT_VALID_STATE_EX_MESSAGE = "The validated state is false";

    public Validate() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void exclusiveBetween(double r3, double r5, double r7) {
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 <= 0) goto L9
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 >= 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Double r7 = java.lang.Double.valueOf(r7)
            r1[r2] = r7
            r7 = 1
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            r1[r7] = r3
            r3 = 2
            java.lang.Double r4 = java.lang.Double.valueOf(r5)
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified exclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static void exclusiveBetween(double r0, double r2, double r4, java.lang.String r6) {
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L9
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 >= 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
    }

    public static void exclusiveBetween(long r3, long r5, long r7) {
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 <= 0) goto L9
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 >= 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Long r7 = java.lang.Long.valueOf(r7)
            r1[r2] = r7
            r7 = 1
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1[r7] = r3
            r3 = 2
            java.lang.Long r4 = java.lang.Long.valueOf(r5)
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified exclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static void exclusiveBetween(long r0, long r2, long r4, java.lang.String r6) {
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L9
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 >= 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
    }

    public static <T> void exclusiveBetween(T r3, T r4, java.lang.Comparable<T> r5) {
            int r0 = r5.compareTo(r3)
            if (r0 <= 0) goto Ld
            int r0 = r5.compareTo(r4)
            if (r0 >= 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r5
            r5 = 1
            r1[r5] = r3
            r3 = 2
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified exclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static <T> void exclusiveBetween(T r0, T r1, java.lang.Comparable<T> r2, java.lang.String r3, java.lang.Object... r4) {
            int r0 = r2.compareTo(r0)
            if (r0 <= 0) goto Ld
            int r0 = r2.compareTo(r1)
            if (r0 >= 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r3, r4)
            r0.<init>(r1)
            throw r0
    }

    public static void finite(double r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Double r1 = java.lang.Double.valueOf(r3)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "The value is invalid: %f"
            finite(r3, r1, r0)
            return
    }

    public static void finite(double r1, java.lang.String r3, java.lang.Object... r4) {
            boolean r0 = java.lang.Double.isNaN(r1)
            if (r0 != 0) goto Ld
            boolean r1 = java.lang.Double.isInfinite(r1)
            if (r1 != 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.format(r3, r4)
            r1.<init>(r2)
            throw r1
    }

    public static void inclusiveBetween(double r3, double r5, double r7) {
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 < 0) goto L9
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Double r7 = java.lang.Double.valueOf(r7)
            r1[r2] = r7
            r7 = 1
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            r1[r7] = r3
            r3 = 2
            java.lang.Double r4 = java.lang.Double.valueOf(r5)
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified inclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static void inclusiveBetween(double r0, double r2, double r4, java.lang.String r6) {
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L9
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
    }

    public static void inclusiveBetween(long r3, long r5, long r7) {
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 < 0) goto L9
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Long r7 = java.lang.Long.valueOf(r7)
            r1[r2] = r7
            r7 = 1
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1[r7] = r3
            r3 = 2
            java.lang.Long r4 = java.lang.Long.valueOf(r5)
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified inclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static void inclusiveBetween(long r0, long r2, long r4, java.lang.String r6) {
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L9
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
    }

    public static <T> void inclusiveBetween(T r3, T r4, java.lang.Comparable<T> r5) {
            int r0 = r5.compareTo(r3)
            if (r0 < 0) goto Ld
            int r0 = r5.compareTo(r4)
            if (r0 > 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r5
            r5 = 1
            r1[r5] = r3
            r3 = 2
            r1[r3] = r4
            java.lang.String r3 = "The value %s is not in the specified inclusive range of %s to %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static <T> void inclusiveBetween(T r0, T r1, java.lang.Comparable<T> r2, java.lang.String r3, java.lang.Object... r4) {
            int r0 = r2.compareTo(r0)
            if (r0 < 0) goto Ld
            int r0 = r2.compareTo(r1)
            if (r0 > 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r3, r4)
            r0.<init>(r1)
            throw r0
    }

    public static void isAssignableFrom(java.lang.Class<?> r3, java.lang.Class<?> r4) {
            boolean r0 = r3.isAssignableFrom(r4)
            if (r0 != 0) goto L28
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            if (r4 != 0) goto L11
            java.lang.String r4 = "null"
            goto L15
        L11:
            java.lang.String r4 = r4.getName()
        L15:
            r1[r2] = r4
            r4 = 1
            java.lang.String r3 = r3.getName()
            r1[r4] = r3
            java.lang.String r3 = "Cannot assign a %s to a %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
        L28:
            return
    }

    public static void isAssignableFrom(java.lang.Class<?> r0, java.lang.Class<?> r1, java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = r0.isAssignableFrom(r1)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r2, r3)
            r0.<init>(r1)
            throw r0
    }

    public static void isInstanceOf(java.lang.Class<?> r3, java.lang.Object r4) {
            boolean r0 = r3.isInstance(r4)
            if (r0 != 0) goto L2c
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r3.getName()
            r1[r2] = r3
            r3 = 1
            if (r4 != 0) goto L18
            java.lang.String r4 = "null"
            goto L20
        L18:
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
        L20:
            r1[r3] = r4
            java.lang.String r3 = "Expected type: %s, actual: %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
        L2c:
            return
    }

    public static void isInstanceOf(java.lang.Class<?> r0, java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = r0.isInstance(r1)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r2, r3)
            r0.<init>(r1)
            throw r0
    }

    public static void isTrue(boolean r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The validated expression is false"
            r1.<init>(r0)
            throw r1
    }

    public static void isTrue(boolean r2, java.lang.String r3, double r4) {
            if (r2 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            r0[r1] = r4
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r2.<init>(r3)
            throw r2
    }

    public static void isTrue(boolean r2, java.lang.String r3, long r4) {
            if (r2 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r0[r1] = r4
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r2.<init>(r3)
            throw r2
    }

    public static void isTrue(boolean r0, java.lang.String r1, java.lang.Object... r2) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }

    public static void matchesPattern(java.lang.CharSequence r3, java.lang.String r4) {
            boolean r0 = java.util.regex.Pattern.matches(r4, r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            r3 = 1
            r1[r3] = r4
            java.lang.String r3 = "The string %s does not match the pattern %s"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static void matchesPattern(java.lang.CharSequence r0, java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = java.util.regex.Pattern.matches(r1, r0)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r2, r3)
            r0.<init>(r1)
            throw r0
    }

    public static <T extends java.lang.CharSequence> T notEmpty(T r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated character sequence is empty"
            java.lang.CharSequence r2 = notEmpty(r2, r1, r0)
            return r2
    }

    public static <T extends java.lang.CharSequence> T notEmpty(T r1, java.lang.String r2, java.lang.Object... r3) {
            if (r1 == 0) goto L13
            int r0 = r1.length()
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
        L13:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
    }

    public static <T extends java.util.Collection<?>> T notEmpty(T r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated collection is empty"
            java.util.Collection r2 = notEmpty(r2, r1, r0)
            return r2
    }

    public static <T extends java.util.Collection<?>> T notEmpty(T r1, java.lang.String r2, java.lang.Object... r3) {
            if (r1 == 0) goto L13
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
        L13:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
    }

    public static <T extends java.util.Map<?, ?>> T notEmpty(T r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated map is empty"
            java.util.Map r2 = notEmpty(r2, r1, r0)
            return r2
    }

    public static <T extends java.util.Map<?, ?>> T notEmpty(T r1, java.lang.String r2, java.lang.Object... r3) {
            if (r1 == 0) goto L13
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
        L13:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
    }

    public static <T> T[] notEmpty(T[] r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated array is empty"
            java.lang.Object[] r2 = notEmpty(r2, r1, r0)
            return r2
    }

    public static <T> T[] notEmpty(T[] r1, java.lang.String r2, java.lang.Object... r3) {
            if (r1 == 0) goto L10
            int r0 = r1.length
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r1.<init>(r2)
            throw r1
    }

    public static void notNaN(double r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated value is not a number"
            notNaN(r2, r1, r0)
            return
    }

    public static void notNaN(double r0, java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = java.lang.Double.isNaN(r0)
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r2, r3)
            r0.<init>(r1)
            throw r0
    }

    public static <T> T notNull(T r2) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "The validated object is null"
            java.lang.Object r2 = notNull(r2, r1, r0)
            return r2
    }

    public static <T> T notNull(T r0, java.lang.String r1, java.lang.Object... r2) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }

    public static <T extends java.lang.CharSequence> T validIndex(T r3, int r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "The validated character sequence index is invalid: %d"
            java.lang.CharSequence r3 = validIndex(r3, r4, r1, r0)
            return r3
    }

    public static <T extends java.lang.CharSequence> T validIndex(T r1, int r2, java.lang.String r3, java.lang.Object... r4) {
            notNull(r1)
            if (r2 < 0) goto Lc
            int r0 = r1.length()
            if (r2 >= r0) goto Lc
            return r1
        Lc:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.String r2 = java.lang.String.format(r3, r4)
            r1.<init>(r2)
            throw r1
    }

    public static <T extends java.util.Collection<?>> T validIndex(T r3, int r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "The validated collection index is invalid: %d"
            java.util.Collection r3 = validIndex(r3, r4, r1, r0)
            return r3
    }

    public static <T extends java.util.Collection<?>> T validIndex(T r1, int r2, java.lang.String r3, java.lang.Object... r4) {
            notNull(r1)
            if (r2 < 0) goto Lc
            int r0 = r1.size()
            if (r2 >= r0) goto Lc
            return r1
        Lc:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.String r2 = java.lang.String.format(r3, r4)
            r1.<init>(r2)
            throw r1
    }

    public static <T> T[] validIndex(T[] r3, int r4) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "The validated array index is invalid: %d"
            java.lang.Object[] r3 = validIndex(r3, r4, r1, r0)
            return r3
    }

    public static <T> T[] validIndex(T[] r1, int r2, java.lang.String r3, java.lang.Object... r4) {
            notNull(r1)
            if (r2 < 0) goto L9
            int r0 = r1.length
            if (r2 >= r0) goto L9
            return r1
        L9:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.String r2 = java.lang.String.format(r3, r4)
            r1.<init>(r2)
            throw r1
    }

    public static void validState(boolean r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "The validated state is false"
            r1.<init>(r0)
            throw r1
    }

    public static void validState(boolean r0, java.lang.String r1, java.lang.Object... r2) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }
}
