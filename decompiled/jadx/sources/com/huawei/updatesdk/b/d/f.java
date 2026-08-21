package com.huawei.updatesdk.b.d;

/* JADX INFO: loaded from: classes2.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static com.huawei.updatesdk.service.otaupdate.b f2325a;

    private static class a implements com.huawei.updatesdk.a.b.c.c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private boolean f2326a;

        public a(boolean z) {
            this.f2326a = false;
            this.f2326a = z;
        }

        @Override // com.huawei.updatesdk.a.b.c.c.a
        public void a(com.huawei.updatesdk.a.b.c.c.c cVar, com.huawei.updatesdk.a.b.c.c.d dVar) {
        }

        @Override // com.huawei.updatesdk.a.b.c.c.a
        public void b(com.huawei.updatesdk.a.b.c.c.c cVar, com.huawei.updatesdk.a.b.c.c.d dVar) {
            if (f.f2325a == null) {
                return;
            }
            if (!(dVar instanceof com.huawei.updatesdk.service.appmgr.bean.b)) {
                f.f2325a.a(dVar.d());
                return;
            }
            com.huawei.updatesdk.service.appmgr.bean.b bVar = (com.huawei.updatesdk.service.appmgr.bean.b) dVar;
            if (!bVar.f()) {
                f.f2325a.b(dVar.d());
                return;
            }
            com.huawei.updatesdk.service.appmgr.bean.c cVarG = bVar.g();
            if (cVarG == null) {
                f.f2325a.a(dVar.d());
                return;
            }
            if (!this.f2326a) {
                com.huawei.updatesdk.b.e.e.a("default").a(cVarG.d());
            }
            f.f2325a.a(cVarG);
        }
    }

    public static void a(com.huawei.updatesdk.service.otaupdate.b bVar) {
        f2325a = bVar;
    }

    public static void a(boolean z) {
        com.huawei.updatesdk.b.g.b.a(new com.huawei.updatesdk.service.appmgr.bean.a(z ? com.huawei.updatesdk.service.otaupdate.f.e().c() : null), new a(z));
    }
}
