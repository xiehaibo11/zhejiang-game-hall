package library;

public final class b {
    public static final boolean a = false;
    public static final boolean b = false;

    static {
            java.lang.String r0 = "androidx.fragment.app.FragmentActivity"
            boolean r0 = a(r0)
            library.b.a = r0
            java.lang.String r0 = "android.support.v4.app.FragmentActivity"
            boolean r0 = a(r0)
            library.b.b = r0
            return
    }

    private static boolean a(java.lang.String r0) {
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }
}
