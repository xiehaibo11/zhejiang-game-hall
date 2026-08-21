package com.iab.omid.library.mmadbridge.internal;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class c {
    private static c c = new c();
    private final ArrayList<com.iab.omid.library.mmadbridge.adsession.a> a = new ArrayList<>();
    private final ArrayList<com.iab.omid.library.mmadbridge.adsession.a> b = new ArrayList<>();

    private c() {
    }

    public static c c() {
        return c;
    }

    public Collection<com.iab.omid.library.mmadbridge.adsession.a> a() {
        return Collections.unmodifiableCollection(this.b);
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.a aVar) {
        this.a.add(aVar);
    }

    public Collection<com.iab.omid.library.mmadbridge.adsession.a> b() {
        return Collections.unmodifiableCollection(this.a);
    }

    public void b(com.iab.omid.library.mmadbridge.adsession.a aVar) {
        boolean zD = d();
        this.a.remove(aVar);
        this.b.remove(aVar);
        if (!zD || d()) {
            return;
        }
        h.c().e();
    }

    public void c(com.iab.omid.library.mmadbridge.adsession.a aVar) {
        boolean zD = d();
        this.b.add(aVar);
        if (zD) {
            return;
        }
        h.c().d();
    }

    public boolean d() {
        return this.b.size() > 0;
    }
}
