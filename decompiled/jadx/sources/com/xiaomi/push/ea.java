package com.xiaomi.push;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
final class ea implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f8128a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Context f313a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f314a;
    final /* synthetic */ String b;

    ea(Context context, String str, int i, String str2) {
        this.f313a = context;
        this.f314a = str;
        this.f8128a = i;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public void run() {
        dz.c(this.f313a, this.f314a, this.f8128a, this.b);
    }
}
