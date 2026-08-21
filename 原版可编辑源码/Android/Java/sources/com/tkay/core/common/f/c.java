package com.tkay.core.common.f;

public final class c {
    private String a;
    private String b;
    private int c;

    public c(String str, String str2, int i) {
        this.a = str;
        this.b = str2;
        this.c = i;
    }

    private String b() {
        return this.a;
    }

    public final String a() {
        return this.b;
    }

    private int c() {
        return this.c;
    }

    public final boolean a(aj ajVar) {
        if (ajVar != null) {
            int i = ajVar.a;
            if (i != 2) {
                return i == 3 && ajVar.c() == this.c;
            }
            return ajVar.t().equals(this.a);
        }
        return false;
    }
}
