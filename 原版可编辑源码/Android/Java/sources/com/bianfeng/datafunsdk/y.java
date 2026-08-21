package com.bianfeng.datafunsdk;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

public class y {
    public static String a = "datafun_delbd";

    public static void a(int i) {
        try {
            SharedPreferencesUtils.put(a, i);
        } catch (YmnException e) {
        }
    }

    public static int a() {
        return SharedPreferencesUtils.getInt(a);
    }
}
