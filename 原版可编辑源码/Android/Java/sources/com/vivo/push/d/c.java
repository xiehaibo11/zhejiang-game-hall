package com.vivo.push.d;

import com.vivo.push.cache.ClientConfigManagerImpl;

final class c extends com.vivo.push.l {
    c(com.vivo.push.o oVar) {
        super(oVar);
    }

    @Override
    protected final void a(com.vivo.push.o oVar) {
        com.vivo.push.util.p.a(ClientConfigManagerImpl.getInstance(this.a).isDebug());
    }
}
