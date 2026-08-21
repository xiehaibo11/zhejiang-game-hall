package com.kwad.components.offline.tk;

import android.content.Context;

public final class a implements com.kwad.components.core.offline.api.b.b {
    @Override
    public final void a(com.kwad.components.core.offline.api.b.a aVar) {
        b.sL().a(aVar);
    }

    @Override
    public final void b(com.kwad.components.core.offline.api.b.a aVar) {
        b.sL().b(aVar);
    }

    @Override
    public final Class<?> getComponentsType() {
        return com.kwad.components.core.offline.api.b.b.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final int priority() {
        return 100;
    }
}
