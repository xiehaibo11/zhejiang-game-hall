package com.kwad.library.solder.lib.b;

import com.kwad.library.solder.lib.a.f;
import com.kwad.library.solder.lib.g;

public class b<P extends g> extends f<P> {
    public b(com.kwad.library.solder.lib.c.b bVar) {
        super(bVar);
    }

    @Override
    public P bL(String str) {
        return (P) new g(str);
    }
}
