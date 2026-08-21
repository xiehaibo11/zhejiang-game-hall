package a.a.a.a;

import android.os.Build;

public class e {
    public static String a() {
        return Build.MANUFACTURER;
    }

    public static boolean b() {
        if ("huawei".equalsIgnoreCase(a()) == false) goto L6;
        return true;
    L6:
        return false;
    }

    public static boolean c() {
        if ("Meizu".equalsIgnoreCase(a()) == false) goto L6;
        return true;
    L6:
        return false;
    }

    public static boolean d() {
        if ("Xiaomi".equalsIgnoreCase(a()) == false) goto L6;
        return true;
    L6:
        return false;
    }

    public static boolean e() {
        if ("oppo".equalsIgnoreCase(a()) == false) goto L6;
        return true;
    L6:
        return false;
    }

    public static boolean f() {
        if ("vivo".equalsIgnoreCase(a()) == false) goto L6;
        return true;
    L6:
        return false;
    }
}
