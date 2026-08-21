package com.tkay.core.common.f;

import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class ad {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6134a;
    public String b;
    public int c;
    public int d;
    public long e;
    public ConcurrentHashMap<String, a> f;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f6135a;
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
