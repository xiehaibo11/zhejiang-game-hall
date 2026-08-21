package com.xiaomi.push;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
class am extends al.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ al f8035a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f113a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ boolean f114a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    am(al alVar, al.a aVar, boolean z, String str) {
        super(aVar);
        this.f8035a = alVar;
        this.f114a = z;
        this.f113a = str;
    }

    @Override // com.xiaomi.push.al.b
    void a() {
        super.a();
    }

    @Override // com.xiaomi.push.al.b
    void b() {
        if (this.f114a) {
            return;
        }
        this.f8035a.f109a.edit().putLong(this.f113a, System.currentTimeMillis()).commit();
    }
}
