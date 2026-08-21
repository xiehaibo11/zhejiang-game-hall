package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
class gg implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ gd f8179a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f441a;

    gg(gd gdVar, String str) {
        this.f8179a = gdVar;
        this.f441a = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        cv.a().a(this.f441a, true);
    }
}
