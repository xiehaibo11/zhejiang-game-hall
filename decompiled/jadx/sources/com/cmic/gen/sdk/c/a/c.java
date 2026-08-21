package com.cmic.gen.sdk.c.a;

import android.text.TextUtils;

/* JADX INFO: compiled from: RetryAndRedirectInterceptor.java */
/* JADX INFO: loaded from: classes.dex */
public class c implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f1638a;
    private com.cmic.gen.sdk.c.d.c b;
    private final com.cmic.gen.sdk.c.b c = new com.cmic.gen.sdk.c.b();

    @Override // com.cmic.gen.sdk.c.a.b
    public void a(com.cmic.gen.sdk.c.c.c cVar, com.cmic.gen.sdk.c.d.c cVar2, com.cmic.gen.sdk.a aVar) {
        b(cVar, cVar2, aVar);
    }

    public void a(b bVar) {
        this.f1638a = bVar;
    }

    public void b(final com.cmic.gen.sdk.c.c.c cVar, final com.cmic.gen.sdk.c.d.c cVar2, final com.cmic.gen.sdk.a aVar) {
        if (this.f1638a != null) {
            this.b = new com.cmic.gen.sdk.c.d.c() { // from class: com.cmic.gen.sdk.c.a.c.1
                @Override // com.cmic.gen.sdk.c.d.c
                public void a(com.cmic.gen.sdk.c.d.b bVar) {
                    if (bVar.d()) {
                        c.this.b(c.this.c.a(cVar, bVar, aVar), cVar2, aVar);
                    } else if (!TextUtils.isEmpty(c.this.c.a())) {
                        c.this.b(c.this.c.b(cVar, bVar, aVar), cVar2, aVar);
                    } else {
                        cVar2.a(bVar);
                    }
                }

                @Override // com.cmic.gen.sdk.c.d.c
                public void a(com.cmic.gen.sdk.c.d.a aVar2) {
                    if (cVar.j()) {
                        com.cmic.gen.sdk.e.c.a("RetryAndRedirectInterceptor", "retry: " + cVar.a());
                        c.this.b(cVar, cVar2, aVar);
                        return;
                    }
                    cVar2.a(aVar2);
                }
            };
            if (cVar.g()) {
                this.f1638a.a(cVar, this.b, aVar);
            } else {
                cVar2.a(com.cmic.gen.sdk.c.d.a.a(200025));
            }
        }
    }
}
