package com.igexin.b.a.c;

import android.util.Log;
import com.igexin.push.config.n;
import com.igexin.push.core.d;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

public class b {
    public static boolean a = n.a.equals("debug");

    public static void a(String str, String str2) {
        if (a) {
            Log.d(str, str2);
        }
    }

    public static void a(String str, Object... objArr) {
        if (a || (d.K && d.L >= System.currentTimeMillis())) {
            if (objArr != null && objArr.length > 0) {
                str = String.format(str, objArr);
            }
            com.igexin.push.f.a.i().a(new SimpleDateFormat("yyyy-MM-dd HH:mm:ss:SSS", Locale.getDefault()).format(new Date()) + "|" + str);
        }
    }

    public static void b(String str, String str2) {
        if (a) {
            Log.e(str, str2);
        }
    }
}
