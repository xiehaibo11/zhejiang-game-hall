package com.sigmob.sdk.videoAd;

public class h implements java.io.Serializable {
    private static final long serialVersionUID = 0;
    private final int a;
    private final int b;
    private final com.sigmob.sdk.base.views.k c;
    private final int d;
    private java.lang.String e;
    private com.sigmob.sdk.videoAd.h.a f;
    private java.lang.String g;
    private java.lang.String h;
    private int i;
    private boolean j;
    private com.sigmob.sdk.videoAd.a k;

    public interface a {
        void a();

        void b();
    }

    h(int r2, int r3, int r4, java.lang.String r5, java.lang.String r6, com.sigmob.sdk.base.views.k r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.j = r0
            r1.a = r2
            r1.b = r3
            r1.d = r4
            r1.h = r6
            r1.g = r5
            r1.c = r7
            return
    }

    private void a(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.a r4) {
            r0 = this;
            return
    }

    public com.sigmob.sdk.base.views.k a() {
            r1 = this;
            com.sigmob.sdk.base.views.k r0 = r1.c
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void a(com.sigmob.sdk.videoAd.a r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void a(com.sigmob.sdk.videoAd.h.a r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public int c() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int d() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
