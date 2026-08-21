package com.qihoo360.loader.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class SysUtils {
    private static final java.lang.String TAG = "Plugin.SysUtils";

    public SysUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getCurrentProcessName() {
            r0 = 0
            java.lang.String r1 = "/proc/self/cmdline"
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L2c
            r1 = 256(0x100, float:3.59E-43)
            byte[] r3 = new byte[r1]     // Catch: java.lang.Throwable -> L2a
            r4 = 0
            r5 = r4
        Le:
            int r6 = r2.read()     // Catch: java.lang.Throwable -> L2a
            if (r6 <= 0) goto L1d
            if (r5 >= r1) goto L1d
            int r7 = r5 + 1
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L2a
            r3[r5] = r6     // Catch: java.lang.Throwable -> L2a
            r5 = r7
            goto Le
        L1d:
            if (r5 <= 0) goto L37
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L2a
            java.lang.String r6 = "UTF-8"
            r1.<init>(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L2a
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r1
        L2a:
            r1 = move-exception
            goto L2e
        L2c:
            r1 = move-exception
            r2 = r0
        L2e:
            java.lang.String r3 = "Plugin.SysUtils"
            java.lang.String r4 = r1.getMessage()     // Catch: java.lang.Throwable -> L3b
            com.qihoo360.replugin.helper.LogRelease.e(r3, r4, r1)     // Catch: java.lang.Throwable -> L3b
        L37:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r0
        L3b:
            r0 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r0
    }
}
