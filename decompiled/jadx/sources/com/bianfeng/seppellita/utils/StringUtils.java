package com.bianfeng.seppellita.utils;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class StringUtils {
    public static String trim(String str) {
        return !TextUtils.isEmpty(str) ? str.trim() : str;
    }
}
