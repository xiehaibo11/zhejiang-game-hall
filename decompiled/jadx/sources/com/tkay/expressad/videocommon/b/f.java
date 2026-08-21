package com.tkay.expressad.videocommon.b;

/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.tkay.expressad.foundation.g.g.c f7461a;

    /* JADX INFO: Access modifiers changed from: private */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static f f7462a = new f(0);

        private a() {
        }
    }

    /* synthetic */ f(byte b) {
        this();
    }

    private f() {
        if (com.tkay.expressad.foundation.b.b.b().d() != null) {
            this.f7461a = new com.tkay.expressad.foundation.g.g.c(com.tkay.expressad.foundation.b.b.b().d());
        }
    }

    private static f a() {
        return a.f7462a;
    }

    private void b() {
        if (com.tkay.expressad.foundation.b.b.b().d() != null) {
            this.f7461a = new com.tkay.expressad.foundation.g.g.c(com.tkay.expressad.foundation.b.b.b().d());
        }
    }

    public final void a(com.tkay.expressad.foundation.g.g.a aVar) {
        com.tkay.expressad.foundation.g.g.c cVar = this.f7461a;
        if (cVar != null) {
            cVar.a(aVar);
        }
    }
}
