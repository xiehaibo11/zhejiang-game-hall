package com.alipay.sdk.m.a0;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Map<String, a> f1157a = new ConcurrentHashMap();

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f1158a;
        public long b;
        public long c;
    }

    public static String a(String str) {
        a aVar;
        String str2;
        Map<String, a> map = f1157a;
        if (map == null || (aVar = map.get(str)) == null) {
            return null;
        }
        if ((System.currentTimeMillis() - aVar.b < aVar.c) && (str2 = aVar.f1158a) != null) {
            return str2;
        }
        f1157a.remove(str);
        return null;
    }

    public static void a(String str, String str2) {
        if (str2 == null) {
            str2 = "";
        }
        a aVar = f1157a.get(str);
        if (aVar == null) {
            aVar = new a();
        }
        aVar.f1158a = str2;
        aVar.c = 86400000L;
        aVar.b = System.currentTimeMillis();
        f1157a.put(str, aVar);
    }
}
