package com.xiaomi.push;

public class dn {
    private static volatile dn a;
    private dm a;

    public static dn a() {
        if (a == null) {
            synchronized (dn.class) {
                if (a == null) {
                    a = new dn();
                }
            }
        }
        return a;
    }

    public dm a() {
        return this.a;
    }

    public void a(dm dmVar) {
        this.a = dmVar;
    }
}
