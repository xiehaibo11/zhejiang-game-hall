package com.xiaomi.channel.commonutils.logger;

import android.content.Context;
import android.os.Process;
import android.util.Log;
import com.xiaomi.push.m;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes4.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f7960a = 2;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Context f24a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static boolean f30a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private static boolean f31b;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static String f27a = "XMPush-" + Process.myPid();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static LoggerInterface f25a = new a();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final HashMap<Integer, Long> f28a = new HashMap<>();
    private static final HashMap<Integer, String> b = new HashMap<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Integer f26a = -1;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static AtomicInteger f29a = new AtomicInteger(1);

    class a implements LoggerInterface {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f7961a = b.f27a;

        a() {
        }

        @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
        public void log(String str) {
            Log.v(this.f7961a, str);
        }

        @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
        public void log(String str, Throwable th) {
            Log.v(this.f7961a, str, th);
        }

        @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
        public void setTag(String str) {
            this.f7961a = str;
        }
    }

    public static int a() {
        return f7960a;
    }

    public static Integer a(String str) {
        if (f7960a > 1) {
            return f26a;
        }
        Integer numValueOf = Integer.valueOf(f29a.incrementAndGet());
        f28a.put(numValueOf, Long.valueOf(System.currentTimeMillis()));
        b.put(numValueOf, str);
        f25a.log(str + " starts");
        return numValueOf;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static String m42a(String str) {
        return b() + str;
    }

    public static String a(String str, String str2) {
        return "[" + str + "] " + str2;
    }

    public static void a(int i) {
        if (i < 0 || i > 5) {
            a(2, "set log level as " + i);
        }
        f7960a = i;
    }

    public static void a(int i, String str) {
        if (i >= f7960a) {
            f25a.log(str);
        }
    }

    public static void a(int i, String str, Throwable th) {
        if (i >= f7960a) {
            f25a.log(str, th);
        }
    }

    public static void a(int i, Throwable th) {
        if (i >= f7960a) {
            f25a.log("", th);
        }
    }

    public static void a(Context context) {
        f24a = context;
        if (m.m575a(context)) {
            f30a = true;
        }
        if (m.m574a()) {
            f31b = true;
        }
    }

    public static void a(LoggerInterface loggerInterface) {
        f25a = loggerInterface;
    }

    public static void a(Integer num) {
        if (f7960a > 1 || !f28a.containsKey(num)) {
            return;
        }
        long jLongValue = f28a.remove(num).longValue();
        String strRemove = b.remove(num);
        long jCurrentTimeMillis = System.currentTimeMillis() - jLongValue;
        f25a.log(strRemove + " ends in " + jCurrentTimeMillis + " ms");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m43a(String str) {
        a(2, m42a(str));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m44a(String str, String str2) {
        a(2, b(str, str2));
    }

    public static void a(String str, Throwable th) {
        a(4, m42a(str), th);
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
        a(0, m42a(str));
    }

    public static void c(String str) {
        a(1, m42a(str));
    }

    public static void d(String str) {
        a(4, m42a(str));
    }

    public static void e(String str) {
        if (!f30a) {
            Log.w(f27a, m42a(str));
            if (f31b) {
                return;
            }
        }
        m43a(str);
    }
}
