package com.tkay.core.common.f;

import java.util.concurrent.ConcurrentHashMap;

public final class ad {
    public int a;
    public String b;
    public int c;
    public int d;
    public long e;
    public ConcurrentHashMap<String, a> f;

    public static class a {
        public String a;
        public String b;
        public String c;
        public int d;
        public int e;
        public long f;
    }

    public final a a(String str) {
        ConcurrentHashMap<String, a> concurrentHashMap = this.f;
        if (concurrentHashMap != null) {
            return concurrentHashMap.get(str);
        }
        return null;
    }
}
