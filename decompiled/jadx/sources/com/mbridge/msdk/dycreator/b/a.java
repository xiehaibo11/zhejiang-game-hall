package com.mbridge.msdk.dycreator.b;

/* JADX INFO: compiled from: DyError.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3183a;
    private String b;

    public a(b bVar) {
        if (bVar != null) {
            this.f3183a = bVar.a();
            this.b = bVar.b();
        }
    }

    public a(int i, String str) {
        this.f3183a = i;
        this.b = str;
    }

    public final String toString() {
        return "DyError{errorCode=" + this.f3183a + '}';
    }
}
