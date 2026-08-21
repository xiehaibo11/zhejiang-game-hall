package com.czhj.sdk.logger;

import android.text.TextUtils;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;
import java.util.logging.Handler;
import java.util.logging.Level;
import java.util.logging.LogManager;
import java.util.logging.LogRecord;
import java.util.logging.Logger;

/* JADX INFO: loaded from: classes.dex */
public class SigmobLog {
    private static final String b = "sigmob";
    private static final boolean d = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1819a = "com.sigmob";
    private static final Logger c = Logger.getLogger(f1819a);
    private static final SigmobLogHandler e = new SigmobLogHandler();

    private static final class SigmobLogHandler extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final Map<Level, Integer> f1820a;

        static {
            HashMap map = new HashMap(7);
            f1820a = map;
            map.put(Level.FINEST, 2);
            f1820a.put(Level.FINER, 2);
            f1820a.put(Level.FINE, 2);
            f1820a.put(Level.CONFIG, 3);
            f1820a.put(Level.INFO, 3);
            f1820a.put(Level.WARNING, 5);
            f1820a.put(Level.SEVERE, 6);
        }

        private SigmobLogHandler() {
        }

        @Override // java.util.logging.Handler
        public void close() {
        }

        @Override // java.util.logging.Handler
        public void flush() {
        }

        @Override // java.util.logging.Handler
        public void publish(LogRecord logRecord) {
            if (isLoggable(logRecord)) {
                int iIntValue = f1820a.containsKey(logRecord.getLevel()) ? f1820a.get(logRecord.getLevel()).intValue() : 2;
                String str = logRecord.getMessage() + "\n";
                Throwable thrown = logRecord.getThrown();
                if (thrown != null) {
                    str = str + Log.getStackTraceString(thrown);
                }
                Log.println(iIntValue, "sigmob", str);
            }
        }
    }

    static {
        c.setUseParentHandlers(false);
        c.setLevel(Level.ALL);
        e.setLevel(Level.INFO);
        LogManager.getLogManager().addLogger(c);
        a(c, e);
    }

    private SigmobLog() {
    }

    private static void a(String str, Throwable th) {
        c.log(Level.FINEST, str, th);
    }

    private static void a(Logger logger, Handler handler) {
        for (Handler handler2 : logger.getHandlers()) {
            if (handler2.equals(handler)) {
                return;
            }
        }
        logger.addHandler(handler);
    }

    public static void addHandler(Handler handler) {
        a(c, handler);
    }

    private static void b(String str, Throwable th) {
        c.log(Level.INFO, str, th);
    }

    public static void c(String str) {
        a(str, (Throwable) null);
    }

    public static void d(String str) {
    }

    public static void d(String str, Throwable th) {
    }

    public static void dd(String str, String str2) {
        if (str == null || str.length() == 0 || str2 == null || str2.length() == 0) {
            return;
        }
        if (str2.length() > 3072) {
            while (str2.length() > 3072) {
                String strSubstring = str2.substring(0, 3072);
                str2 = str2.replace(strSubstring, "");
                Log.d(str, strSubstring);
            }
        }
        Log.d(str, str2);
    }

    public static void e(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        e(str, null);
    }

    public static void e(String str, Throwable th) {
        c.log(Level.SEVERE, str, th);
    }

    public static void i(String str) {
        b(str, null);
    }

    public static void setSdkHandlerLevel(Level level) {
        e.setLevel(level);
    }

    public static void v(String str) {
        v(str, null);
    }

    public static void v(String str, Throwable th) {
        c.log(Level.FINE, str, th);
    }

    public static void w(String str) {
        w(str, null);
    }

    public static void w(String str, Throwable th) {
        c.log(Level.WARNING, str, th);
    }
}
