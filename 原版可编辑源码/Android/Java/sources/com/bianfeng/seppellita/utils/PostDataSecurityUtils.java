package com.bianfeng.seppellita.utils;

public class PostDataSecurityUtils {
    public static String rncode(String str, String str2) throws Throwable {
        try {
            SeppellitaLogger.i("压缩之前数据--->" + str.getBytes().length);
            String strCompress = GZIPUtils.compress(str);
            SeppellitaLogger.i("压缩之前数据--后->" + strCompress.length());
            return strCompress;
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }
}
