package android.support.v4.util;

public class ObjectsCompat {
    private ObjectsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean equals(@android.support.annotation.Nullable java.lang.Object r2, @android.support.annotation.Nullable java.lang.Object r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = java.util.Objects.equals(r2, r3)
            return r2
        Lb:
            if (r2 == r3) goto L18
            if (r2 == 0) goto L16
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L16
            goto L18
        L16:
            r2 = 0
            goto L19
        L18:
            r2 = 1
        L19:
            return r2
    }

    public static int hash(@android.support.annotation.Nullable java.lang.Object... r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = java.util.Objects.hash(r2)
            return r2
        Lb:
            int r2 = java.util.Arrays.hashCode(r2)
            return r2
    }

    public static int hashCode(@android.support.annotation.Nullable java.lang.Object r0) {
            if (r0 == 0) goto L7
            int r0 = r0.hashCode()
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }
}
