package com.tkay.expressad.foundation.h;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public final class w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6961a = "StringUtils";

    public static boolean a(String str) {
        return str == null || TextUtils.isEmpty(str.trim()) || "null".equals(str);
    }

    public static boolean b(String str) {
        return (str == null || TextUtils.isEmpty(str.trim()) || "null".equals(str)) ? false : true;
    }
}
