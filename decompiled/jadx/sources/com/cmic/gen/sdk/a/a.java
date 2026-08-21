package com.cmic.gen.sdk.a;

/* JADX INFO: compiled from: UmcConfigBean.java */
/* JADX INFO: loaded from: classes.dex */
public class a implements Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1610a;
    private String b;
    private String c;
    private String d;
    private boolean e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private int k;
    private int l;

    private a() {
        this.f1610a = "rcs.cmpassport.com";
        this.b = "rcs.cmpassport.com";
        this.c = "config2.cmpassport.com";
        this.d = "log2.cmpassport.com:9443";
        this.e = false;
        this.f = false;
        this.g = false;
        this.h = false;
        this.i = false;
        this.j = false;
        this.k = 3;
        this.l = 1;
    }

    public String a() {
        return this.f1610a;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }

    public String d() {
        return this.d;
    }

    public boolean e() {
        return this.e;
    }

    public boolean f() {
        return this.f;
    }

    public boolean g() {
        return this.g;
    }

    public boolean h() {
        return this.h;
    }

    public boolean i() {
        return this.i;
    }

    public boolean j() {
        return this.j;
    }

    public int k() {
        return this.k;
    }

    public int l() {
        return this.l;
    }

    /* JADX INFO: renamed from: com.cmic.gen.sdk.a.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: UmcConfigBean.java */
    public static class C0061a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final a f1611a = new a();

        C0061a a(String str) {
            this.f1611a.f1610a = str;
            return this;
        }

        C0061a b(String str) {
            this.f1611a.b = str;
            return this;
        }

        C0061a c(String str) {
            this.f1611a.c = str;
            return this;
        }

        C0061a d(String str) {
            this.f1611a.d = str;
            return this;
        }

        C0061a a(boolean z) {
            this.f1611a.e = z;
            return this;
        }

        C0061a b(boolean z) {
            this.f1611a.f = z;
            return this;
        }

        C0061a c(boolean z) {
            this.f1611a.g = z;
            return this;
        }

        C0061a d(boolean z) {
            this.f1611a.h = z;
            return this;
        }

        C0061a e(boolean z) {
            this.f1611a.i = z;
            return this;
        }

        C0061a f(boolean z) {
            this.f1611a.j = z;
            return this;
        }

        C0061a a(int i) {
            this.f1611a.k = i;
            return this;
        }

        C0061a b(int i) {
            this.f1611a.l = i;
            return this;
        }

        public a a() {
            return this.f1611a;
        }
    }

    /* JADX INFO: renamed from: m, reason: merged with bridge method [inline-methods] */
    public a clone() throws CloneNotSupportedException {
        return (a) super.clone();
    }
}
