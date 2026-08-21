package com.kwad.library.solder.lib.ext;

import com.kwad.library.solder.lib.a.a;
import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.h;

/* JADX INFO: loaded from: classes2.dex */
public interface b<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> {

    public static class a extends C0195b<com.kwad.library.b.a, com.kwad.library.solder.lib.b.a> {
    }

    /* JADX INFO: renamed from: com.kwad.library.solder.lib.ext.b$b, reason: collision with other inner class name */
    public static class C0195b<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> implements b<P, R> {
        @Override // com.kwad.library.solder.lib.ext.b
        public void a(R r) {
        }

        @Override // com.kwad.library.solder.lib.ext.b
        public void a(R r, P p) {
        }

        @Override // com.kwad.library.solder.lib.ext.b
        public void a(R r, PluginError pluginError) {
        }

        @Override // com.kwad.library.solder.lib.ext.b
        public void b(R r) {
        }

        @Override // com.kwad.library.solder.lib.ext.b
        public void c(R r) {
        }
    }

    public static class c extends C0195b<h, com.kwad.library.solder.lib.b.c> {
    }

    void a(R r);

    void a(R r, P p);

    void a(R r, PluginError pluginError);

    void b(R r);

    void c(R r);
}
