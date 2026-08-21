package com.tkay.basead.a;

import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5591a = d.class.getSimpleName();
    private static volatile d c;
    ConcurrentHashMap<String, com.tkay.basead.c.d> b = new ConcurrentHashMap<>();

    private d() {
    }

    public static d a() {
        if (c == null) {
            synchronized (d.class) {
                if (c == null) {
                    c = new d();
                }
            }
        }
        return c;
    }

    public final void a(int i, String str, com.tkay.basead.c.d dVar) {
        this.b.put(i + str, dVar);
    }

    public final com.tkay.basead.c.d a(int i, String str) {
        return this.b.get(i + str);
    }
}
