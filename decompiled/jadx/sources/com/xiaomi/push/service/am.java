package com.xiaomi.push.service;

import com.xiaomi.push.al;

/* JADX INFO: loaded from: classes4.dex */
final class am extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f8309a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ ax f911a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f912a;

    am(String str, ax axVar, int i) {
        this.f912a = str;
        this.f911a = axVar;
        this.f8309a = i;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return this.f912a;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f911a.a(this.f8309a);
    }
}
