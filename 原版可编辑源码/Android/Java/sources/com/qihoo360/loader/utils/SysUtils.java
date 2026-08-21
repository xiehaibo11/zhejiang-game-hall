package com.qihoo360.loader.utils;

import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.CloseableUtils;
import java.io.FileInputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class SysUtils {
    private static final String TAG = "Plugin.SysUtils";

    public static String getCurrentProcessName() {
        FileInputStream fileInputStream;
        try {
            fileInputStream = new FileInputStream("/proc/self/cmdline");
            try {
                byte[] bArr = new byte[256];
                int i = 0;
                while (true) {
                    int i2 = fileInputStream.read();
                    if (i2 <= 0 || i >= 256) {
                        break;
                    }
                    bArr[i] = (byte) i2;
                    i++;
                }
                if (i > 0) {
                    return new String(bArr, 0, i, "UTF-8");
                }
            } catch (Throwable th) {
                th = th;
                try {
                    LogRelease.e(TAG, th.getMessage(), th);
                } finally {
                    CloseableUtils.closeQuietly(fileInputStream);
                }
            }
        } catch (Throwable th2) {
            th = th2;
            fileInputStream = null;
        }
        return null;
    }
}
