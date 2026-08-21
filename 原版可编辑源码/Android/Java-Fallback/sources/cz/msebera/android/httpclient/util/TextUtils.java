package cz.msebera.android.httpclient.util;

public final class TextUtils {
    public TextUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean containsBlanks(java.lang.CharSequence r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = 0
        L5:
            int r2 = r3.length()
            if (r1 >= r2) goto L1a
            char r2 = r3.charAt(r1)
            boolean r2 = java.lang.Character.isWhitespace(r2)
            if (r2 == 0) goto L17
            r3 = 1
            return r3
        L17:
            int r1 = r1 + 1
            goto L5
        L1a:
            return r0
    }

    public static boolean isBlank(java.lang.CharSequence r4) {
            r0 = 1
            if (r4 != 0) goto L4
            return r0
        L4:
            r1 = 0
            r2 = 0
        L6:
            int r3 = r4.length()
            if (r2 >= r3) goto L1a
            char r3 = r4.charAt(r2)
            boolean r3 = java.lang.Character.isWhitespace(r3)
            if (r3 != 0) goto L17
            return r1
        L17:
            int r2 = r2 + 1
            goto L6
        L1a:
            return r0
    }

    public static boolean isEmpty(java.lang.CharSequence r1) {
            r0 = 1
            if (r1 != 0) goto L4
            return r0
        L4:
            int r1 = r1.length()
            if (r1 != 0) goto Lb
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }
}
