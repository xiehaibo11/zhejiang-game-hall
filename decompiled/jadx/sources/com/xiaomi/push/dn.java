package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class dn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile dn f8110a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private dm f242a;

    public static dn a() {
        if (f8110a == null) {
            synchronized (dn.class) {
                if (f8110a == null) {
                    f8110a = new dn();
                }
            }
        }
        return f8110a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public dm m225a() {
        return this.f242a;
    }

    public void a(dm dmVar) {
        this.f242a = dmVar;
    }
}
