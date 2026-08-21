package com.tkay.expressad.videocommon.b;

public final class f {
    private com.tkay.expressad.foundation.g.g.c a;

    private static class a {
        public static f a = new f(0);

        private a() {
        }
    }

    f(byte b) {
        this();
    }

    private f() {
        if (com.tkay.expressad.foundation.b.b.b().d() != null) {
            this.a = new com.tkay.expressad.foundation.g.g.c(com.tkay.expressad.foundation.b.b.b().d());
        }
    }

    private static f a() {
        return a.a;
    }

    private void b() {
        if (com.tkay.expressad.foundation.b.b.b().d() != null) {
            this.a = new com.tkay.expressad.foundation.g.g.c(com.tkay.expressad.foundation.b.b.b().d());
        }
    }

    public final void a(com.tkay.expressad.foundation.g.g.a aVar) {
        com.tkay.expressad.foundation.g.g.c cVar = this.a;
        if (cVar != null) {
            cVar.a(aVar);
        }
    }
}
