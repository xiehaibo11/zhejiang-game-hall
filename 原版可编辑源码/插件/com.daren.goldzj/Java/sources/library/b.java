package library;

public final class b {
    public static final boolean a = a("androidx.fragment.app.FragmentActivity");
    public static final boolean b = a("android.support.v4.app.FragmentActivity");

    private static boolean a(String str) {
        try {
            Class.forName(str);
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }
}
