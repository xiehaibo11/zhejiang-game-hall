package cz.msebera.android.httpclient.util;

public class Args {
    public Args() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void check(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static void check(boolean r2, java.lang.String r3, java.lang.Object r4) {
            if (r2 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r2.<init>(r3)
            throw r2
    }

    public static void check(boolean r0, java.lang.String r1, java.lang.Object... r2) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }

    public static <T extends java.lang.CharSequence> T containsNoBlanks(T r1, java.lang.String r2) {
            if (r1 == 0) goto L20
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.containsBlanks(r1)
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not contain blanks"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static <T extends java.lang.CharSequence> T notBlank(T r1, java.lang.String r2) {
            if (r1 == 0) goto L20
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r1)
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be blank"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static <T extends java.lang.CharSequence> T notEmpty(T r1, java.lang.String r2) {
            if (r1 == 0) goto L20
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be empty"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static <E, T extends java.util.Collection<E>> T notEmpty(T r1, java.lang.String r2) {
            if (r1 == 0) goto L20
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be empty"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static int notNegative(int r1, java.lang.String r2) {
            if (r1 < 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be negative"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static long notNegative(long r3, java.lang.String r5) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 < 0) goto L7
            return r3
        L7:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            java.lang.String r5 = " may not be negative"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    public static <T> T notNull(T r1, java.lang.String r2) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static int positive(int r1, java.lang.String r2) {
            if (r1 <= 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " may not be negative or zero"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static long positive(long r3, java.lang.String r5) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 <= 0) goto L7
            return r3
        L7:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            java.lang.String r5 = " may not be negative or zero"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }
}
