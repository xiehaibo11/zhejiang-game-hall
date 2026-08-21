package com.qihoo360.replugin.helper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class LogRelease {
    public static final boolean LOGR = true;

    public static int v(String str, String str2) {
        return RepluginLog.v(str, str2);
    }

    public static int v(String str, String str2, Throwable th) {
        return RepluginLog.v(str, str2, th);
    }

    public static int d(String str, String str2) {
        return RepluginLog.d(str, str2);
    }

    public static int d(String str, String str2, Throwable th) {
        return RepluginLog.d(str, str2, th);
    }

    public static int i(String str, String str2) {
        return RepluginLog.i(str, str2);
    }

    public static int i(String str, String str2, Throwable th) {
        return RepluginLog.i(str, str2, th);
    }

    public static int w(String str, String str2) {
        return RepluginLog.w(str, str2);
    }

    public static int w(String str, String str2, Throwable th) {
        return RepluginLog.w(str, str2, th);
    }

    public static int w(String str, Throwable th) {
        return RepluginLog.w(str, th);
    }

    public static int e(String str, String str2) {
        return RepluginLog.e(str, str2);
    }

    public static int e(String str, String str2, Throwable th) {
        return RepluginLog.e(str, str2, th);
    }
}
