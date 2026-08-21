package com.xiaomi.clientreport.manager;

import com.xiaomi.clientreport.data.PerfClientReport;

/* JADX INFO: loaded from: classes4.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PerfClientReport f7964a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ a f41a;

    c(a aVar, PerfClientReport perfClientReport) {
        this.f41a = aVar;
        this.f7964a = perfClientReport;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f41a.b(this.f7964a);
    }
}
