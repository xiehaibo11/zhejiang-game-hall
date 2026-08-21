package com.qihoo360.loader2;

import android.os.Build;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class BuildCompat {
    public static final String ARM = "arm";
    public static final String ARM64 = "arm64";
    public static final String[] SUPPORTED_32_BIT_ABIS;
    public static final String[] SUPPORTED_64_BIT_ABIS;
    public static final String[] SUPPORTED_ABIS;

    static {
        if (Build.VERSION.SDK_INT < 21 || Build.SUPPORTED_ABIS == null) {
            SUPPORTED_ABIS = new String[]{Build.CPU_ABI, Build.CPU_ABI2};
        } else {
            SUPPORTED_ABIS = new String[Build.SUPPORTED_ABIS.length];
            String[] strArr = Build.SUPPORTED_ABIS;
            String[] strArr2 = SUPPORTED_ABIS;
            System.arraycopy(strArr, 0, strArr2, 0, strArr2.length);
        }
        if (Build.VERSION.SDK_INT < 21 || Build.SUPPORTED_32_BIT_ABIS == null) {
            SUPPORTED_32_BIT_ABIS = new String[]{Build.CPU_ABI, Build.CPU_ABI2};
        } else {
            SUPPORTED_32_BIT_ABIS = new String[Build.SUPPORTED_32_BIT_ABIS.length];
            String[] strArr3 = Build.SUPPORTED_32_BIT_ABIS;
            String[] strArr4 = SUPPORTED_32_BIT_ABIS;
            System.arraycopy(strArr3, 0, strArr4, 0, strArr4.length);
        }
        if (Build.VERSION.SDK_INT < 21) {
            SUPPORTED_64_BIT_ABIS = new String[]{Build.CPU_ABI, Build.CPU_ABI2};
            return;
        }
        if (Build.SUPPORTED_64_BIT_ABIS == null) {
            SUPPORTED_64_BIT_ABIS = new String[]{Build.CPU_ABI, Build.CPU_ABI2};
            return;
        }
        SUPPORTED_64_BIT_ABIS = new String[Build.SUPPORTED_64_BIT_ABIS.length];
        String[] strArr5 = Build.SUPPORTED_64_BIT_ABIS;
        String[] strArr6 = SUPPORTED_64_BIT_ABIS;
        System.arraycopy(strArr5, 0, strArr6, 0, strArr6.length);
    }
}
