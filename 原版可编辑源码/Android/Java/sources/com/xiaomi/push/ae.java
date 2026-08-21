package com.xiaomi.push;

public class ae {
    private static int a;
    public static final String a;
    public static final boolean a;
    public static final boolean b;
    public static final boolean c;
    public static final boolean d;
    public static boolean e;
    public static final boolean f;
    public static final boolean g;

    static {
        int i;
        String str = ah.a ? "ONEBOX" : "@SHIP.TO.2A2FE0D7@";
        a = str;
        boolean zContains = str.contains("2A2FE0D7");
        a = zContains;
        boolean z = false;
        b = zContains || "DEBUG".equalsIgnoreCase(a);
        c = "LOGABLE".equalsIgnoreCase(a);
        d = a.contains("YY");
        e = a.equalsIgnoreCase("TEST");
        f = "BETA".equalsIgnoreCase(a);
        String str2 = a;
        if (str2 != null && str2.startsWith("RC")) {
            z = true;
        }
        g = z;
        a = 1;
        if (a.equalsIgnoreCase("SANDBOX")) {
            i = 2;
        } else {
            if (!a.equalsIgnoreCase("ONEBOX")) {
                a = 1;
                return;
            }
            i = 3;
        }
        a = i;
    }

    public static int a() {
        return a;
    }

    public static void a(int i) {
        a = i;
    }

    public static boolean a() {
        return a == 2;
    }

    public static boolean b() {
        return a == 3;
    }
}
