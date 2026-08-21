package a.a.a.a;

import android.os.Build;

public class e {
    public static String a() {
        return Build.MANUFACTURER;
    }

    public static boolean b() {
        return "huawei".equalsIgnoreCase(a());
    }

    public static boolean c() {
        return "Meizu".equalsIgnoreCase(a());
    }

    public static boolean d() {
        return "Xiaomi".equalsIgnoreCase(a());
    }

    public static boolean e() {
        return "oppo".equalsIgnoreCase(a());
    }

    public static boolean f() {
        return "vivo".equalsIgnoreCase(a());
    }
}
