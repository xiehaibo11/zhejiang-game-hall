package com.tkay.china.b;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.p;
import java.util.regex.Pattern;

public final class a {
    private static String a = "";
    private static String b = "";
    private static String c = "";
    private static String d = "";
    private static String e = "";
    private static String f = "";
    private static String g = "";
    private static String h = "";
    private static String i = "";
    private static boolean j;

    public static void a(final Context context) {
        String strA = "";
        String strB = p.b(context, f.o, "oaid", "");
        c = strB;
        if (TextUtils.isEmpty(strB) && !m.a().c("oaid") && TextUtils.isEmpty(c)) {
            com.tkay.china.a.b.a(context, new com.tkay.china.a.a() {
                @Override
                public final void a() {
                }

                @Override
                public final void a(String str, boolean z) {
                    if (a.a(str)) {
                        return;
                    }
                    String unused = a.c = str;
                    p.a(context, f.o, "oaid", str);
                }
            });
        }
        if (!m.a().c("mac")) {
            if (Build.VERSION.SDK_INT < 23) {
                strA = d.a(context);
            } else {
                strA = d.a();
            }
        }
        a = strA;
        b = d(context);
        d = b.a();
        String[] strArrC = b.c(context);
        if (strArrC != null && strArrC.length == 2) {
            e = strArrC[0];
            f = strArrC[1];
        }
        g = b.b();
        h = b.c();
        i = b.d();
    }

    public static String b(Context context) {
        d(context);
        if (!TextUtils.isEmpty(b)) {
            return b;
        }
        String strC = c(context);
        return !TextUtils.isEmpty(strC) ? strC : "";
    }

    public static String c(final Context context) {
        if (m.a().c("oaid")) {
            return "";
        }
        if (!TextUtils.isEmpty(c)) {
            return c;
        }
        String strB = p.b(context, f.o, "oaid", "");
        c = strB;
        if (!TextUtils.isEmpty(strB)) {
            return c;
        }
        final Object obj = new Object();
        final boolean[] zArr = {false};
        com.tkay.china.a.b.a(context, new com.tkay.china.a.a() {
            @Override
            public final void a(String str, boolean z) {
                if (!a.a(str)) {
                    String unused = a.c = str;
                    p.a(context, f.o, "oaid", str);
                }
                try {
                    synchronized (obj) {
                        obj.notifyAll();
                    }
                } catch (Throwable unused2) {
                }
                zArr[0] = true;
            }

            @Override
            public final void a() {
                zArr[0] = true;
                try {
                    synchronized (obj) {
                        obj.notifyAll();
                    }
                } catch (Throwable unused) {
                }
            }
        });
        if (!zArr[0]) {
            try {
                synchronized (obj) {
                    obj.wait(1500L);
                }
            } catch (Exception unused) {
            }
        }
        String str = c;
        return str != null ? str : "";
    }

    private static boolean c(String str) {
        return Pattern.matches("^[0-]+$", str);
    }

    public static String a() {
        return m.a().c("mac") ? "" : a;
    }

    public static synchronized String d(Context context) {
        if (m.a().c("imei")) {
            return "";
        }
        if (!j && TextUtils.isEmpty(b) && com.tkay.china.common.d.a(context, "android.permission.READ_PHONE_STATE")) {
            b = c.a(context);
            j = true;
        }
        return b;
    }

    public static String b() {
        return m.a().c("oaid") ? "" : c;
    }

    public static String c() {
        return m.a().c("wifi_name") ? "" : b.b(m.a().f());
    }

    public static String d() {
        return d;
    }

    public static String e() {
        return b.a(m.a().f());
    }

    public static String f() {
        return e;
    }

    public static String g() {
        return f;
    }

    public static String h() {
        return g;
    }

    public static String i() {
        return h;
    }

    public static String j() {
        return i;
    }

    static boolean a(String str) {
        return Pattern.matches("^[0-]+$", str);
    }
}
