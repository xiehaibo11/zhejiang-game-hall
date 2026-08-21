package com.kwad.library.solder.lib.ext;

import com.kwad.library.solder.lib.a.a;
import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.h;

public interface b<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> {

    public static class a extends b<com.kwad.library.b.a, com.kwad.library.solder.lib.b.a> {
    }

    public static class b<P extends com.kwad.library.solder.lib.a.a, R extends f<P>> implements b<P, R> {
        @Override
        public void a(R r) {
        }

        @Override
        public void a(R r, P p) {
        }

        @Override
        public void a(R r, PluginError pluginError) {
        }

        @Override
        public void b(R r) {
        }

        @Override
        public void c(R r) {
        }
    }

    public static class c extends b<h, com.kwad.library.solder.lib.b.c> {
    }

    void a(R r);

    void a(R r, P p);

    void a(R r, PluginError pluginError);

    void b(R r);

    void c(R r);
}
