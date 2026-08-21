package com.kwad.library.solder.lib;

import com.kwad.library.solder.lib.a.b;

public final class b implements com.kwad.library.solder.lib.a.b {
    private b.a afv;

    @Override
    public final void e(com.kwad.library.solder.lib.a.f fVar) {
        b.a aVar = this.afv;
        if (aVar != null) {
            fVar.b(aVar.wo());
        } else {
            a.w("Sodler.PluginConfigUpdater", "config reqester not set");
        }
    }
}
