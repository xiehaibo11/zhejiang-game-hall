package com.bianfeng.datafunsdk;

/* JADX INFO: compiled from: SelectLastMonthByteDataTask.java */
/* JADX INFO: loaded from: classes.dex */
public class j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public e f1399a;

    public j(e eVar) {
        this.f1399a = eVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        d.e().a(this.f1399a, z.b(), z.a());
    }
}
