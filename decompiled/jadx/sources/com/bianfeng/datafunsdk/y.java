package com.bianfeng.datafunsdk;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

/* JADX INFO: compiled from: SharedPreferencesUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f1418a = "datafun_delbd";

    public static void a(int i) {
        try {
            SharedPreferencesUtils.put(f1418a, i);
        } catch (YmnException e) {
        }
    }

    public static int a() {
        return SharedPreferencesUtils.getInt(f1418a);
    }
}
