package com.kwad.library.solder.lib;

public final class b implements com.kwad.library.solder.lib.a.b {
    private com.kwad.library.solder.lib.a.b.a afv;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void e(com.kwad.library.solder.lib.a.f r2) {
            r1 = this;
            com.kwad.library.solder.lib.a.b$a r0 = r1.afv
            if (r0 == 0) goto Lc
            com.kwad.library.solder.lib.c.b r0 = r0.wo()
            r2.b(r0)
            return
        Lc:
            java.lang.String r2 = "Sodler.PluginConfigUpdater"
            java.lang.String r0 = "config reqester not set"
            com.kwad.library.solder.lib.a.w(r2, r0)
            return
    }
}
