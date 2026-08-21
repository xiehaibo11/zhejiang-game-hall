package com.bianfeng.utilslib.screen;

public class RomUtils {
    public RomUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getManufacturer() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public static boolean isHuaWei() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "手机厂商"
            r1.append(r2)
            java.lang.String r2 = getManufacturer()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "huawei"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }

    public static boolean isMeizu() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "手机厂商"
            r1.append(r2)
            java.lang.String r2 = getManufacturer()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "Meizu"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }

    public static boolean isMimu() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "手机厂商"
            r1.append(r2)
            java.lang.String r2 = getManufacturer()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "Xiaomi"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }

    public static boolean isOppo() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "手机厂商"
            r1.append(r2)
            java.lang.String r2 = getManufacturer()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "oppo"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }

    public static boolean isVivo() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "手机厂商"
            r1.append(r2)
            java.lang.String r2 = getManufacturer()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = getManufacturer()
            java.lang.String r1 = "vivo"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }
}
