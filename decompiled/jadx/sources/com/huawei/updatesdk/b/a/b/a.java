package com.huawei.updatesdk.b.a.b;

import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private C0084a f2313a;
    private String b;
    private long c;

    /* JADX INFO: renamed from: com.huawei.updatesdk.b.a.b.a$a, reason: collision with other inner class name */
    public static class C0084a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<String> f2314a;

        public List<String> a() {
            return this.f2314a;
        }

        public void a(List<String> list) {
            this.f2314a = list;
        }
    }

    public C0084a a() {
        return this.f2313a;
    }

    public void a(long j) {
        this.c = j;
    }

    public void a(C0084a c0084a) {
        this.f2313a = c0084a;
    }

    public void a(String str) {
        this.b = str;
    }

    public long b() {
        return this.c;
    }

    public String c() {
        return this.b;
    }
}
