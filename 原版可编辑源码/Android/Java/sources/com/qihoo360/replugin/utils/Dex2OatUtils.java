package com.qihoo360.replugin.utils;

import android.os.Build;
import android.util.Log;
import com.qihoo360.replugin.RePluginInternal;
import java.io.File;
import java.io.IOException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Dex2OatUtils {
    private static final boolean FOR_DEV = RePluginInternal.FOR_DEV;
    public static final String TAG = "Dex2Oat";

    private static boolean injectLoadDex4More() {
        return false;
    }

    public static boolean isArtMode() {
        return System.getProperty("java.vm.version", "").startsWith("2");
    }

    public static void injectLoadDex(String str, String str2, String str3) {
        if (isArtMode()) {
            File file = new File(str2, str3);
            if (!file.exists() || file.length() <= 0) {
                if (FOR_DEV) {
                    Log.d(TAG, str3 + " 文件不存在");
                }
                long jCurrentTimeMillis = System.currentTimeMillis();
                boolean zInnerInjectLoadDex = innerInjectLoadDex(str, str2, str3);
                if (FOR_DEV) {
                    Log.d(TAG, "injectLoadDex use:" + (System.currentTimeMillis() - jCurrentTimeMillis));
                    Log.d(TAG, "injectLoadDex result:" + zInnerInjectLoadDex);
                    return;
                }
                return;
            }
            if (FOR_DEV) {
                Log.d(TAG, str3 + " 文件存在, 不需要inject，size:" + file.length());
            }
        }
    }

    private static boolean innerInjectLoadDex(String str, String str2, String str3) {
        if (Build.VERSION.SDK_INT < 21) {
            if (!FOR_DEV) {
                return false;
            }
            Log.d(TAG, "before Android L, do nothing.");
            return false;
        }
        if (Build.VERSION.SDK_INT >= 21 && Build.VERSION.SDK_INT <= 25) {
            return injectLoadDex4Art(str, str2, str3);
        }
        return injectLoadDex4More();
    }

    private static boolean injectLoadDexBeforeN() {
        if (isArtMode()) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (FOR_DEV) {
                Log.d(TAG, "Art before Android N, try 2 hook.");
            }
            if (!FOR_DEV) {
                return true;
            }
            Log.d(TAG, "hook end, use：" + (System.currentTimeMillis() - jCurrentTimeMillis));
            return true;
        }
        if (!FOR_DEV) {
            return false;
        }
        Log.d(TAG, "not Art, do nothing.");
        return false;
    }

    private static boolean injectLoadDex4Art(String str, String str2, String str3) {
        if (FOR_DEV) {
            Log.d(TAG, "Andorid Art, try 2 interpretDex2Oat, interpret-only.");
        }
        String str4 = str2 + File.separator + str3;
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            InterpretDex2OatHelper.interpretDex2Oat(str, str4);
            if (!FOR_DEV) {
                return true;
            }
            Log.d(TAG, "interpretDex2Oat use:" + (System.currentTimeMillis() - jCurrentTimeMillis));
            Log.d(TAG, "interpretDex2Oat odexSize:" + InterpretDex2OatHelper.getOdexSize(str4));
            return true;
        } catch (IOException e) {
            if (!FOR_DEV) {
                return false;
            }
            e.printStackTrace();
            Log.e(TAG, "interpretDex2Oat Error");
            return false;
        }
    }
}
