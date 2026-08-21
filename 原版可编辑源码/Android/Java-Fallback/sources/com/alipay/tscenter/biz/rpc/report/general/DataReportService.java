package com.alipay.tscenter.biz.rpc.report.general;

public interface DataReportService {
    @com.alipay.mobile.framework.service.annotation.OperationType("alipay.security.device.data.report")
    com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult reportData(com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest r1);
}
