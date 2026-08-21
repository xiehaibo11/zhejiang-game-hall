package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;

/* JADX INFO: compiled from: StringUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ai {
    public static boolean a(String str) {
        return str == null || TextUtils.isEmpty(str.trim()) || "null".equals(str);
    }

    public static boolean b(String str) {
        return (str == null || TextUtils.isEmpty(str.trim()) || "null".equals(str)) ? false : true;
    }
}
