package com.bianfeng.utilslib.screen;

import android.os.Build;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class RomUtils {
    public static boolean isMimu() {
        UtilsSdk.getLogger().i("手机厂商" + getManufacturer());
        return "Xiaomi".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isHuaWei() {
        UtilsSdk.getLogger().i("手机厂商" + getManufacturer());
        return "huawei".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isMeizu() {
        UtilsSdk.getLogger().i("手机厂商" + getManufacturer());
        return "Meizu".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isVivo() {
        UtilsSdk.getLogger().i("手机厂商" + getManufacturer());
        return "vivo".equalsIgnoreCase(getManufacturer());
    }

    public static boolean isOppo() {
        UtilsSdk.getLogger().i("手机厂商" + getManufacturer());
        return "oppo".equalsIgnoreCase(getManufacturer());
    }

    private static String getManufacturer() {
        return Build.MANUFACTURER;
    }
}
