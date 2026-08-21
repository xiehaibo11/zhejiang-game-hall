package com.huawei.updatesdk.b.e;

import android.text.TextUtils;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<String, a> f2330a = new ConcurrentHashMap();

    public static a a(String str) {
        Map<String, a> map;
        a cVar;
        if (TextUtils.isEmpty(str)) {
            return new c();
        }
        if (f2330a.containsKey(str)) {
            return f2330a.get(str);
        }
        if ("apptouch".equals(str)) {
            map = f2330a;
            cVar = new b();
        } else {
            map = f2330a;
            cVar = new c();
        }
        map.put(str, cVar);
        return f2330a.get(str);
    }
}
