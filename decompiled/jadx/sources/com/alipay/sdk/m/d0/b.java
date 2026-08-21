package com.alipay.sdk.m.d0;

import com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult;

/* JADX INFO: loaded from: classes.dex */
public class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ DataReportRequest f1175a;
    public final /* synthetic */ c b;

    public b(c cVar, DataReportRequest dataReportRequest) {
        this.b = cVar;
        this.f1175a = dataReportRequest;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            DataReportResult unused = c.e = this.b.c.reportData(this.f1175a);
        } catch (Throwable th) {
            DataReportResult unused2 = c.e = new DataReportResult();
            c.e.success = false;
            c.e.resultCode = "static data rpc upload error, " + com.alipay.sdk.m.z.a.a(th);
            new StringBuilder("rpc failed:").append(com.alipay.sdk.m.z.a.a(th));
        }
    }
}
