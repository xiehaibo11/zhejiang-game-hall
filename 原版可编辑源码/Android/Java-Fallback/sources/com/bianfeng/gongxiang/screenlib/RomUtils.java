package com.bianfeng.gongxiang.screenlib;

class RomUtils {
    RomUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getManufacturer() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public static boolean isHuaWei() {
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "huawei"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean isMeizu() {
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "Meizu"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean isMimu() {
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "Xiaomi"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean isOppo() {
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "oppo"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean isVivo() {
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "vivo"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }
}
