package com.czhj.volley;

import android.os.SystemClock;
import android.util.Log;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class VolleyLog {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1837a = VolleyLog.class.getName();
    public static String TAG = "Sigmob-Volley";
    public static boolean DEBUG = false;

    static class MarkerLog {
        public static final boolean ENABLED = VolleyLog.DEBUG;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final long f1838a = 0;
        private final List<Marker> b = new ArrayList();
        private boolean c = false;

        private static class Marker {
            public final String name;
            public final long thread;
            public final long time;

            public Marker(String str, long j, long j2) {
                this.name = str;
                this.thread = j;
                this.time = j2;
            }
        }

        MarkerLog() {
        }

        private long a() {
            if (this.b.size() == 0) {
                return 0L;
            }
            return this.b.get(r2.size() - 1).time - this.b.get(0).time;
        }

        public synchronized void add(String str, long j) {
            if (this.c) {
                throw new IllegalStateException("Marker added to finished log");
            }
            this.b.add(new Marker(str, j, SystemClock.elapsedRealtime()));
        }

        protected void finalize() {
            if (this.c) {
                return;
            }
            finish("Request on the loose");
            VolleyLog.e("Marker log finalized without finish() - uncaught exit point for request", new Object[0]);
        }

        public synchronized void finish(String str) {
            this.c = true;
            long jA = a();
            if (jA <= 0) {
                return;
            }
            long j = this.b.get(0).time;
            VolleyLog.d("(%-4d ms) %s", Long.valueOf(jA), str);
            for (Marker marker : this.b) {
                long j2 = marker.time;
                VolleyLog.d("(+%-4d) [%2d] %s", Long.valueOf(j2 - j), Long.valueOf(marker.thread), marker.name);
                j = j2;
            }
        }
    }

    private static String a(String str, Object... objArr) {
        String str2;
        if (objArr != null && objArr.length != 0) {
            str = String.format(Locale.US, str, objArr);
        }
        StackTraceElement[] stackTrace = new Throwable().fillInStackTrace().getStackTrace();
        int i = 2;
        while (true) {
            if (i >= stackTrace.length) {
                str2 = "<unknown>";
                break;
            }
            if (!stackTrace[i].getClassName().equals(f1837a)) {
                String className = stackTrace[i].getClassName();
                String strSubstring = className.substring(className.lastIndexOf(46) + 1);
                str2 = strSubstring.substring(strSubstring.lastIndexOf(36) + 1) + "." + stackTrace[i].getMethodName();
                break;
            }
            i++;
        }
        return String.format(Locale.US, "[%d] %s: %s", Long.valueOf(Thread.currentThread().getId()), str2, str);
    }

    public static void d(String str, Object... objArr) {
        if (DEBUG) {
            Log.d(TAG, a(str, objArr));
        }
    }

    public static void e(String str, Object... objArr) {
        Log.e(TAG, a(str, objArr));
    }

    public static void e(Throwable th, String str, Object... objArr) {
        Log.e(TAG, a(str, objArr), th);
    }

    public static void setTag(String str) {
        d("Changing log tag to %s", str);
        TAG = str;
    }

    public static void v(String str, Object... objArr) {
        if (DEBUG) {
            Log.v(TAG, a(str, objArr));
        }
    }

    public static void wtf(String str, Object... objArr) {
        Log.wtf(TAG, a(str, objArr));
    }

    public static void wtf(Throwable th, String str, Object... objArr) {
        Log.wtf(TAG, a(str, objArr), th);
    }
}
