package net.grandcentrix.tray.core;

import android.util.Log;

public class TrayLog {
    private static String TAG = "Tray";
    public static boolean DEBUG = Log.isLoggable(TAG, 2);

    public static void d(String s) {
        if (s == null) {
            s = "";
        }
        Log.d(TAG, s);
    }

    public static void e(String s) {
        if (s == null) {
            s = "";
        }
        Log.e(TAG, s);
    }

    public static void e(Throwable tr, String s) {
        Log.e(TAG, s, tr);
    }

    public static void setTag(String tag) {
        d("Changing log tag to " + tag);
        TAG = tag;
        DEBUG = Log.isLoggable(TAG, 2);
    }

    public static void v(String s) {
        if (DEBUG) {
            if (s == null) {
                s = "";
            }
            Log.v(TAG, s);
        }
    }

    public static void w(String s) {
        if (s == null) {
            s = "";
        }
        Log.w(TAG, s);
    }

    public static void wtf(Throwable tr, String s) {
        Log.wtf(TAG, s, tr);
    }

    public static void wtf(String s) {
        if (s == null) {
            s = "";
        }
        Log.wtf(TAG, s);
    }

    TrayLog() {
        throw new IllegalStateException("no instances");
    }
}
