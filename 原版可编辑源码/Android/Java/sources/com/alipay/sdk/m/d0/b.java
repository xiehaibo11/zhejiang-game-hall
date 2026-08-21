package com.alipay.sdk.m.d0;

import com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult;

public class b implements Runnable {
    public final DataReportRequest a;
    public final c b;

    public b(c cVar, DataReportRequest dataReportRequest) {
        this.b = cVar;
        this.a = dataReportRequest;
    }

    @Override
    public void run() {
        try {
            DataReportResult unused = c.e = this.b.c.reportData(this.a);
        } catch (Throwable th) {
            DataReportResult unused2 = c.e = new DataReportResult();
            c.e.success = false;
            c.e.resultCode = "static data rpc upload error, " + com.alipay.sdk.m.z.a.a(th);
            new StringBuilder("rpc failed:").append(com.alipay.sdk.m.z.a.a(th));
        }
    }
}
