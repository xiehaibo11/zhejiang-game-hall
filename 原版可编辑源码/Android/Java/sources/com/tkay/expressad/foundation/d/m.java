package com.tkay.expressad.foundation.d;

import java.io.Serializable;

public final class m implements Serializable {
    private String a;
    private String b;
    private int c;

    private m(String str, String str2, int i) {
        this.b = str;
        this.a = str2;
        this.c = i;
    }

    private String a() {
        return this.a;
    }

    private void a(String str) {
        this.a = str;
    }

    private String b() {
        return this.b;
    }

    private void b(String str) {
        this.b = str;
    }
}
