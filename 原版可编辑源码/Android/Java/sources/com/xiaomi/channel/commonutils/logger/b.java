package com.xiaomi.channel.commonutils.logger;

import android.content.Context;
import android.os.Process;
import android.util.Log;
import com.xiaomi.push.m;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicInteger;

public abstract class b {
    private static int a = 2;
    private static Context a;
    private static boolean a;
    private static boolean b;
    private static String a = "XMPush-" + Process.myPid();
    private static LoggerInterface a = new a();
    private static final HashMap<Integer, Long> a = new HashMap<>();
    private static final HashMap<Integer, String> b = new HashMap<>();
    private static final Integer a = -1;
    private static AtomicInteger a = new AtomicInteger(1);

    class a implements LoggerInterface {
        private String a = b.a;

        a() {
        }

        @Override
        public void log(String str) {
            Log.v(this.a, str);
        }

        @Override
        public void log(String str, Throwable th) {
            Log.v(this.a, str, th);
        }

        @Override
        public void setTag(String str) {
            this.a = str;
        }
    }

    public static int a() {
        return a;
    }

    public static Integer a(String str) {
        if (a > 1) {
            return a;
        }
        Integer numValueOf = Integer.valueOf(a.incrementAndGet());
        a.put(numValueOf, Long.valueOf(System.currentTimeMillis()));
        b.put(numValueOf, str);
        a.log(str + " starts");
        return numValueOf;
    }

    private static String a(String str) {
        return b() + str;
    }

    public static String a(String str, String str2) {
        return "[" + str + "] " + str2;
    }

    public static void a(int i) {
        if (i < 0 || i > 5) {
            a(2, "set log level as " + i);
        }
        a = i;
    }

    public static void a(int i, String str) {
        if (i >= a) {
            a.log(str);
        }
    }

    public static void a(int i, String str, Throwable th) {
        if (i >= a) {
            a.log(str, th);
        }
    }

    public static void a(int i, Throwable th) {
        if (i >= a) {
            a.log("", th);
        }
    }

    public static void a(Context context) {
        a = context;
        if (m.a(context)) {
            a = true;
        }
        if (m.a()) {
            b = true;
        }
    }

    public static void a(LoggerInterface loggerInterface) {
        a = loggerInterface;
    }

    public static void a(Integer num) {
        if (a > 1 || !a.containsKey(num)) {
            return;
        }
        long jLongValue = a.remove(num).longValue();
        String strRemove = b.remove(num);
        long jCurrentTimeMillis = System.currentTimeMillis() - jLongValue;
        a.log(strRemove + " ends in " + jCurrentTimeMillis + " ms");
    }

    public static void a(String str) {
        a(2, a(str));
    }

    public static void a(String str, String str2) {
        a(2, b(str, str2));
    }

    public static void a(String str, Throwable th) {
        a(4, a(str), th);
    }

    public static void a(Throwable th) {
        a(4, th);
    }

    private static String b() {
        return "[Tid:" + Thread.currentThread().getId() + "] ";
    }

    private static String b(String str, String str2) {
        return b() + a(str, str2);
    }

    public static void b(String str) {
        a(0, a(str));
    }

    public static void c(String str) {
        a(1, a(str));
    }

    public static void d(String str) {
        a(4, a(str));
    }

    public static void e(String str) {
        if (!a) {
            Log.w(a, a(str));
            if (b) {
                return;
            }
        }
        a(str);
    }
}
