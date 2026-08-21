package com.xiaomi.push;

import com.xiaomi.push.ao;

/* JADX INFO: loaded from: classes4.dex */
class aq implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ao.b f8040a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ ao f120a;

    aq(ao aoVar, ao.b bVar) {
        this.f120a = aoVar;
        this.f8040a = bVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f120a.a(this.f8040a);
    }
}
