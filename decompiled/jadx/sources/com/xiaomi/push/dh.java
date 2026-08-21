package com.xiaomi.push;

import com.xiaomi.push.ao;
import com.xiaomi.push.df;

/* JADX INFO: loaded from: classes4.dex */
class dh extends ao.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ao.b f8105a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ df f233a;

    dh(df dfVar) {
        this.f233a = dfVar;
    }

    @Override // com.xiaomi.push.ao.b
    public void b() {
        df.b bVar = (df.b) this.f233a.f221a.peek();
        if (bVar == null || !bVar.a()) {
            return;
        }
        if (this.f233a.f221a.remove(bVar)) {
            this.f8105a = bVar;
        }
        ao.b bVar2 = this.f8105a;
        if (bVar2 != null) {
            bVar2.b();
        }
    }

    @Override // com.xiaomi.push.ao.b
    /* JADX INFO: renamed from: c */
    public void mo221c() {
        ao.b bVar = this.f8105a;
        if (bVar != null) {
            bVar.mo221c();
        }
    }
}
