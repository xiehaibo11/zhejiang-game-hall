package com.vivo.push.d;

final class g extends z {
    g(com.vivo.push.o oVar) {
        super(oVar);
    }

    @Override
    protected final void a(com.vivo.push.o oVar) {
        com.vivo.push.util.p.d("OnClearCacheTask", "delete push info " + this.a.getPackageName());
        com.vivo.push.util.y.b(this.a).a();
    }
}
