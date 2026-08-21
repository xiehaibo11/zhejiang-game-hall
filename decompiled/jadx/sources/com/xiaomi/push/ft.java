package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
class ft extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ fs f8167a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ft(fs fsVar, String str) {
        super(str);
        this.f8167a = fsVar;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            this.f8167a.f8166a.m353a();
        } catch (Exception e) {
            this.f8167a.c(9, e);
        }
    }
}
