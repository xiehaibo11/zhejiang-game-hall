package com.xiaomi.push;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class an extends al.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ al f8036a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    an(al alVar, al.a aVar) {
        super(aVar);
        this.f8036a = alVar;
    }

    @Override // com.xiaomi.push.al.b
    void b() {
        synchronized (this.f8036a.f110a) {
            this.f8036a.f111a.remove(this.f8034a.mo162a());
        }
    }
}
