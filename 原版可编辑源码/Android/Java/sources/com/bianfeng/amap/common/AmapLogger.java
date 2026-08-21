package com.bianfeng.amap.common;

import com.bianfeng.ymnsdk.util.Logger;

public class AmapLogger {
    public static void i(String str) {
        Logger.i("Amap-->" + str);
    }

    public static void e(String str) {
        Logger.e("Amap-->" + str);
    }
}
