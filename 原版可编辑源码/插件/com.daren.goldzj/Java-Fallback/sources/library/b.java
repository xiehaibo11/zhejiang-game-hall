package library;

public final class b {
    public static final boolean a = false;
    public static final boolean b = false;

    static {
        a = a("androidx.fragment.app.FragmentActivity");
        b = a("android.support.v4.app.FragmentActivity");
    }

    private static boolean a(String r0) {
        Class.forName(r0);     // Catch: ClassNotFoundException -> L4
        return true;
    L4:
        return false;
    }
}
