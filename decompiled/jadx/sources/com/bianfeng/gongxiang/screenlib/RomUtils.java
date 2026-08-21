package com.bianfeng.gongxiang.screenlib;

import android.os.Build;

/* JADX INFO: loaded from: classes.dex */
class RomUtils {
    RomUtils() {
    }

    public static boolean isMimu() {
        return "Xiaomi".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isHuaWei() {
        return "huawei".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isMeizu() {
        return "Meizu".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isVivo() {
        return "vivo".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isOppo() {
        return "oppo".equalsIgnoreCase(getManufacturer());
    }

    private static String getManufacturer() {
        return Build.MANUFACTURER;
    }
}
