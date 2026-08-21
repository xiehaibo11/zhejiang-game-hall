package com.xiaomi.clientreport.manager;

import com.xiaomi.clientreport.data.EventClientReport;

/* JADX INFO: loaded from: classes4.dex */
class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ EventClientReport f7963a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ a f40a;

    b(a aVar, EventClientReport eventClientReport) {
        this.f40a = aVar;
        this.f7963a = eventClientReport;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f40a.b(this.f7963a);
    }
}
