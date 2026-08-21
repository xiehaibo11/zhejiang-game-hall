package com.xiaomi.clientreport.manager;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class d extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f7965a;

    d(a aVar) {
        this.f7965a = aVar;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return "100888";
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f7965a.a() > 0) {
            this.f7965a.f39a.execute(new e(this));
        }
    }
}
