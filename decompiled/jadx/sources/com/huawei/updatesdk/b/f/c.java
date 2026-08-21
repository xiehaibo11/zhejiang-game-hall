package com.huawei.updatesdk.b.f;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f2331a = new c();
    private static com.huawei.updatesdk.b.f.a b = new a();

    static class a implements com.huawei.updatesdk.b.f.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<b> f2332a = new ArrayList();

        a() {
        }

        @Override // com.huawei.updatesdk.b.f.a
        public void a(int i, com.huawei.updatesdk.a.b.b.b bVar) {
            synchronized (this.f2332a) {
                Iterator<b> it = this.f2332a.iterator();
                while (it.hasNext()) {
                    it.next().a(i, bVar);
                }
            }
        }

        @Override // com.huawei.updatesdk.b.f.a
        public void a(b bVar) {
            String str;
            String str2;
            synchronized (this.f2332a) {
                if (bVar == null) {
                    return;
                }
                if (!this.f2332a.contains(bVar)) {
                    try {
                        this.f2332a.add(bVar);
                    } catch (ClassCastException unused) {
                        str = "InstallObserverManager";
                        str2 = "registerObserver ClassCastException";
                        com.huawei.updatesdk.a.a.c.a.a.a.b(str, str2);
                    } catch (IllegalArgumentException unused2) {
                        str = "InstallObserverManager";
                        str2 = "registerObserver IllegalArgumentException";
                        com.huawei.updatesdk.a.a.c.a.a.a.b(str, str2);
                    } catch (UnsupportedOperationException unused3) {
                        str = "InstallObserverManager";
                        str2 = "registerObserver UnsupportedOperationException";
                        com.huawei.updatesdk.a.a.c.a.a.a.b(str, str2);
                    }
                }
            }
        }

        @Override // com.huawei.updatesdk.b.f.a
        public void b(b bVar) {
            synchronized (this.f2332a) {
                try {
                    this.f2332a.remove(bVar);
                } catch (UnsupportedOperationException unused) {
                    com.huawei.updatesdk.a.a.c.a.a.a.b("InstallObserverManager", "unRegisterObserver UnsupportedOperationException");
                }
            }
        }
    }

    private c() {
    }

    public static com.huawei.updatesdk.b.f.a a() {
        return b;
    }

    public static c b() {
        return f2331a;
    }

    public void a(com.huawei.updatesdk.a.b.b.b bVar) {
        b.a(1, bVar);
    }

    public void b(com.huawei.updatesdk.a.b.b.b bVar) {
        b.a(0, bVar);
    }

    public void c(com.huawei.updatesdk.a.b.b.b bVar) {
        b.a(2, bVar);
    }
}
