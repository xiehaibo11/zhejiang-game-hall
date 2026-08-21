package com.cmic.gen.sdk.c.a;

import android.text.TextUtils;

public class c implements b {
    private b a;
    private com.cmic.gen.sdk.c.d.c b;
    private final com.cmic.gen.sdk.c.b c = new com.cmic.gen.sdk.c.b();

    @Override
    public void a(com.cmic.gen.sdk.c.c.c cVar, com.cmic.gen.sdk.c.d.c cVar2, com.cmic.gen.sdk.a aVar) {
        b(cVar, cVar2, aVar);
    }

    public void a(b bVar) {
        this.a = bVar;
    }

    public void b(final com.cmic.gen.sdk.c.c.c cVar, final com.cmic.gen.sdk.c.d.c cVar2, final com.cmic.gen.sdk.a aVar) {
        if (this.a != null) {
            this.b = new com.cmic.gen.sdk.c.d.c() {
                @Override
                public void a(com.cmic.gen.sdk.c.d.b bVar) {
                    if (bVar.d()) {
                        c.this.b(c.this.c.a(cVar, bVar, aVar), cVar2, aVar);
                    } else if (!TextUtils.isEmpty(c.this.c.a())) {
                        c.this.b(c.this.c.b(cVar, bVar, aVar), cVar2, aVar);
                    } else {
                        cVar2.a(bVar);
                    }
                }

                @Override
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
                this.a.a(cVar, this.b, aVar);
            } else {
                cVar2.a(com.cmic.gen.sdk.c.d.a.a(200025));
            }
        }
    }
}
