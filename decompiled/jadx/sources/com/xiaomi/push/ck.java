package com.xiaomi.push;

import com.xiaomi.push.al;
import com.xiaomi.push.cj;

/* JADX INFO: loaded from: classes4.dex */
class ck extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ cj f8085a;

    ck(cj cjVar) {
        this.f8085a = cjVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "100957";
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (this.f8085a.f178a) {
            if (this.f8085a.f178a.size() > 0) {
                if (this.f8085a.f178a.size() > 1) {
                    this.f8085a.a(this.f8085a.f178a);
                } else {
                    this.f8085a.b((cj.a) this.f8085a.f178a.get(0));
                }
                this.f8085a.f178a.clear();
                System.gc();
            }
        }
    }
}
