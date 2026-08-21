package com.qihoo360.replugin.helper;

import android.util.Log;
import com.qihoo360.replugin.utils.RepluginLogUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginLog {
    public static int v(String str, String str2) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2);
        return Log.v(str, str2);
    }

    public static int v(String str, String str2, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2 + "|" + th.getMessage());
        return Log.v(str, str2, th);
    }

    public static int d(String str, String str2) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2);
        return Log.d(str, str2);
    }

    public static int d(String str, String str2, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2 + "|" + th.getMessage());
        return Log.d(str, str2, th);
    }

    public static int i(String str, String str2) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2);
        return Log.i(str, str2);
    }

    public static int i(String str, String str2, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2 + "|" + th.getMessage());
        return Log.i(str, str2, th);
    }

    public static int w(String str, String str2) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2);
        return Log.w(str, str2);
    }

    public static int w(String str, String str2, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2 + "|" + th.getMessage());
        return Log.w(str, str2, th);
    }

    public static int w(String str, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + th.getMessage());
        return Log.w(str, th);
    }

    public static int e(String str, String str2) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2);
        return Log.e(str, str2);
    }

    public static int e(String str, String str2, Throwable th) {
        RepluginLogUtils.getInstance().addLog(str + "|" + str2 + "|" + th.getMessage());
        return Log.e(str, str2, th);
    }
}
