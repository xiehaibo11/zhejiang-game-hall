package com.alipay.security.mobile.module.http;

import com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult;

class c implements Runnable {
    final DataReportRequest a;
    final b b;

    c(b bVar, DataReportRequest dataReportRequest) {
        this.b = bVar;
        this.a = dataReportRequest;
    }

    @Override
    public void run() {
        try {
            com.alipay.tscenter.biz.rpc.report.general.a aVar = this.b.c;
            DataReportRequest dataReportRequest = this.a;
            DataReportResult unused = b.e = aVar.a();
        } catch (Throwable th) {
            DataReportResult unused2 = b.e = new DataReportResult();
            b.e.success = false;
            b.e.resultCode = "static data rpc upload error, " + com.alipay.security.mobile.module.a.a.a(th);
            com.alipay.security.mobile.module.a.a.a(th);
        }
    }
}
