package com.xiaomi.clientreport.manager;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class f extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f7967a;

    f(a aVar) {
        this.f7967a = aVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "100889";
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f7967a.b() > 0) {
            this.f7967a.f39a.execute(new g(this));
        }
    }
}
