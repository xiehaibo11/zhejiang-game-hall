package cz.msebera.android.httpclient.util;

public final class LangUtils {
    public static final int HASH_OFFSET = 37;
    public static final int HASH_SEED = 17;

    private LangUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean equals(java.lang.Object r0, java.lang.Object r1) {
            if (r0 != 0) goto L8
            if (r1 != 0) goto L6
            r0 = 1
            goto Lc
        L6:
            r0 = 0
            goto Lc
        L8:
            boolean r0 = r0.equals(r1)
        Lc:
            return r0
    }

    public static boolean equals(java.lang.Object[] r5, java.lang.Object[] r6) {
            r0 = 1
            r1 = 0
            if (r5 != 0) goto L9
            if (r6 != 0) goto L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
        L9:
            if (r6 == 0) goto L22
            int r2 = r5.length
            int r3 = r6.length
            if (r2 != r3) goto L22
            r2 = 0
        L10:
            int r3 = r5.length
            if (r2 >= r3) goto L21
            r3 = r5[r2]
            r4 = r6[r2]
            boolean r3 = equals(r3, r4)
            if (r3 != 0) goto L1e
            return r1
        L1e:
            int r2 = r2 + 1
            goto L10
        L21:
            return r0
        L22:
            return r1
    }

    public static int hashCode(int r0, int r1) {
            int r0 = r0 * 37
            int r0 = r0 + r1
            return r0
    }

    public static int hashCode(int r0, java.lang.Object r1) {
            if (r1 == 0) goto L7
            int r1 = r1.hashCode()
            goto L8
        L7:
            r1 = 0
        L8:
            int r0 = hashCode(r0, r1)
            return r0
    }

    public static int hashCode(int r0, boolean r1) {
            int r0 = hashCode(r0, r1)
            return r0
    }
}
