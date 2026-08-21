package com.tkay.expressad.exoplayer.k;

/* JADX INFO: loaded from: classes3.dex */
public final class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String[] f6765a;
    private boolean b;
    private boolean c;

    private l(String... strArr) {
        this.f6765a = strArr;
    }

    private void a(String... strArr) {
        a.b(!this.b, "Cannot set libraries after loading");
        this.f6765a = strArr;
    }

    private boolean a() {
        if (this.b) {
            return this.c;
        }
        this.b = true;
        try {
            for (String str : this.f6765a) {
                System.loadLibrary(str);
            }
            this.c = true;
        } catch (UnsatisfiedLinkError unused) {
        }
        return this.c;
    }
}
