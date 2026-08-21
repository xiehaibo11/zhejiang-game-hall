package com.meizu.cloud.pushsdk.c.e;

import com.meizu.cloud.pushsdk.c.c.g;
import com.meizu.cloud.pushsdk.c.c.j;
import com.meizu.cloud.pushsdk.c.g.f;
import com.meizu.cloud.pushsdk.c.g.l;

/* JADX INFO: loaded from: classes3.dex */
public class b extends j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final j f4545a;
    private com.meizu.cloud.pushsdk.c.g.c b;
    private d c;

    public b(j jVar, com.meizu.cloud.pushsdk.c.d.a aVar) {
        this.f4545a = jVar;
        if (aVar != null) {
            this.c = new d(aVar);
        }
    }

    private l a(l lVar) {
        return new f(lVar) { // from class: com.meizu.cloud.pushsdk.c.e.b.1

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            long f4546a = 0;
            long b = 0;

            @Override // com.meizu.cloud.pushsdk.c.g.f, com.meizu.cloud.pushsdk.c.g.l
            public void a(com.meizu.cloud.pushsdk.c.g.b bVar, long j) {
                super.a(bVar, j);
                if (this.b == 0) {
                    this.b = b.this.b();
                }
                this.f4546a += j;
                if (b.this.c != null) {
                    b.this.c.obtainMessage(1, new com.meizu.cloud.pushsdk.c.f.a(this.f4546a, this.b)).sendToTarget();
                }
            }
        };
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public g a() {
        return this.f4545a.a();
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public void a(com.meizu.cloud.pushsdk.c.g.c cVar) {
        if (this.b == null) {
            this.b = com.meizu.cloud.pushsdk.c.g.g.a(a((l) cVar));
        }
        this.f4545a.a(this.b);
        this.b.flush();
    }

    @Override // com.meizu.cloud.pushsdk.c.c.j
    public long b() {
        return this.f4545a.b();
    }
}
