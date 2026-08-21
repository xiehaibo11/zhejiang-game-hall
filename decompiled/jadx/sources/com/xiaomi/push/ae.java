package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class ae {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f8030a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public static final String f106a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public static final boolean f107a;
    public static final boolean b;
    public static final boolean c;
    public static final boolean d;
    public static boolean e;
    public static final boolean f;
    public static final boolean g;

    static {
        int i;
        String str = ah.f108a ? "ONEBOX" : "@SHIP.TO.2A2FE0D7@";
        f106a = str;
        boolean zContains = str.contains("2A2FE0D7");
        f107a = zContains;
        boolean z = false;
        b = zContains || "DEBUG".equalsIgnoreCase(f106a);
        c = "LOGABLE".equalsIgnoreCase(f106a);
        d = f106a.contains("YY");
        e = f106a.equalsIgnoreCase("TEST");
        f = "BETA".equalsIgnoreCase(f106a);
        String str2 = f106a;
        if (str2 != null && str2.startsWith("RC")) {
            z = true;
        }
        g = z;
        f8030a = 1;
        if (f106a.equalsIgnoreCase("SANDBOX")) {
            i = 2;
        } else {
            if (!f106a.equalsIgnoreCase("ONEBOX")) {
                f8030a = 1;
                return;
            }
            i = 3;
        }
        f8030a = i;
    }

    public static int a() {
        return f8030a;
    }

    public static void a(int i) {
        f8030a = i;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m117a() {
        return f8030a == 2;
    }

    public static boolean b() {
        return f8030a == 3;
    }
}
