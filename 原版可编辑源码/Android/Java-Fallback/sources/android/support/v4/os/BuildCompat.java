package android.support.v4.os;

public class BuildCompat {
    private BuildCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static boolean isAtLeastN() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @java.lang.Deprecated
    public static boolean isAtLeastNMR1() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @java.lang.Deprecated
    public static boolean isAtLeastO() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @java.lang.Deprecated
    public static boolean isAtLeastOMR1() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 27
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @java.lang.Deprecated
    public static boolean isAtLeastP() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isAtLeastQ() {
            java.lang.String r0 = android.os.Build.VERSION.CODENAME
            int r0 = r0.length()
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L1f
            java.lang.String r0 = android.os.Build.VERSION.CODENAME
            char r0 = r0.charAt(r2)
            r3 = 81
            if (r0 < r3) goto L1f
            java.lang.String r0 = android.os.Build.VERSION.CODENAME
            char r0 = r0.charAt(r2)
            r3 = 90
            if (r0 > r3) goto L1f
            goto L20
        L1f:
            r1 = r2
        L20:
            return r1
    }
}
