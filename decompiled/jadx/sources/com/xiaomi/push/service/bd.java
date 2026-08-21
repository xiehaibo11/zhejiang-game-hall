package com.xiaomi.push.service;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public class bd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8327a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static String f936a = "";

    public static String a() {
        if (TextUtils.isEmpty(f936a)) {
            f936a = com.xiaomi.push.bp.a(4);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(f936a);
        long j = f8327a;
        f8327a = 1 + j;
        sb.append(j);
        return sb.toString();
    }
}
