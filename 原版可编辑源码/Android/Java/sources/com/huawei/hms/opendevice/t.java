package com.huawei.hms.opendevice;

import android.text.TextUtils;

public class t {
    public static boolean a(String... strArr) {
        for (String str : strArr) {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
        }
        return true;
    }
}
