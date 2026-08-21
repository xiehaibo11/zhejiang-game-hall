package com.vivo.push.d;

final class c extends com.vivo.push.l {
    c(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r1) {
            r0 = this;
            android.content.Context r1 = r0.a
            com.vivo.push.cache.ClientConfigManagerImpl r1 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r1)
            boolean r1 = r1.isDebug()
            com.vivo.push.util.p.a(r1)
            return
    }
}
