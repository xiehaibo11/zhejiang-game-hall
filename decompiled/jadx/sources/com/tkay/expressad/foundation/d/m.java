package com.tkay.expressad.foundation.d;

import java.io.Serializable;

/* JADX INFO: loaded from: classes3.dex */
public final class m implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f6847a;
    private String b;
    private int c;

    private m(String str, String str2, int i) {
        this.b = str;
        this.f6847a = str2;
        this.c = i;
    }

    private String a() {
        return this.f6847a;
    }

    private void a(String str) {
        this.f6847a = str;
    }

    private String b() {
        return this.b;
    }

    private void b(String str) {
        this.b = str;
    }
}
