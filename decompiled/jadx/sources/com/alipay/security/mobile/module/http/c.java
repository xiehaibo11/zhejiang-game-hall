package com.alipay.security.mobile.module.http;

import com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult;

/* JADX INFO: loaded from: classes.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ DataReportRequest f1360a;
    final /* synthetic */ b b;

    c(b bVar, DataReportRequest dataReportRequest) {
        this.b = bVar;
        this.f1360a = dataReportRequest;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            com.alipay.tscenter.biz.rpc.report.general.a aVar = this.b.c;
            DataReportRequest dataReportRequest = this.f1360a;
            DataReportResult unused = b.e = aVar.a();
        } catch (Throwable th) {
            DataReportResult unused2 = b.e = new DataReportResult();
            b.e.success = false;
            b.e.resultCode = "static data rpc upload error, " + com.alipay.security.mobile.module.a.a.a(th);
            com.alipay.security.mobile.module.a.a.a(th);
        }
    }
}
