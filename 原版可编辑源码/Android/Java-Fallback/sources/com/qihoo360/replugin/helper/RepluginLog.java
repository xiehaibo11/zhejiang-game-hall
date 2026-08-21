package com.qihoo360.replugin.helper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginLog {
    public RepluginLog() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int d(java.lang.String r3, java.lang.String r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.d(r3, r4)
            return r3
    }

    public static int d(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.d(r3, r4, r5)
            return r3
    }

    public static int e(java.lang.String r3, java.lang.String r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.e(r3, r4)
            return r3
    }

    public static int e(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.e(r3, r4, r5)
            return r3
    }

    public static int i(java.lang.String r3, java.lang.String r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.i(r3, r4)
            return r3
    }

    public static int i(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.i(r3, r4, r5)
            return r3
    }

    public static int v(java.lang.String r3, java.lang.String r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.v(r3, r4)
            return r3
    }

    public static int v(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.v(r3, r4, r5)
            return r3
    }

    public static int w(java.lang.String r3, java.lang.String r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.w(r3, r4)
            return r3
    }

    public static int w(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.w(r3, r4, r5)
            return r3
    }

    public static int w(java.lang.String r3, java.lang.Throwable r4) {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.addLog(r1)
            int r3 = android.util.Log.w(r3, r4)
            return r3
    }
}
