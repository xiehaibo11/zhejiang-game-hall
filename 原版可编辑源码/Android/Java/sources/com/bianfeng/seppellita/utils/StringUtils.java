package com.bianfeng.seppellita.utils;

import android.text.TextUtils;

public class StringUtils {
    public static String trim(String str) {
        return !TextUtils.isEmpty(str) ? str.trim() : str;
    }
}
