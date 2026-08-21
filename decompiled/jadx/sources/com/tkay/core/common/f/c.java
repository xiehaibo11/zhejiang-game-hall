package com.tkay.core.common.f;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f6151a;
    private String b;
    private int c;

    public c(String str, String str2, int i) {
        this.f6151a = str;
        this.b = str2;
        this.c = i;
    }

    private String b() {
        return this.f6151a;
    }

    public final String a() {
        return this.b;
    }

    private int c() {
        return this.c;
    }

    public final boolean a(aj ajVar) {
        if (ajVar != null) {
            int i = ajVar.f6142a;
            if (i != 2) {
                return i == 3 && ajVar.c() == this.c;
            }
            return ajVar.t().equals(this.f6151a);
        }
        return false;
    }
}
