package com.alibaba.sdk.android.oss.model;

public class ResumableUploadResult extends com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult {
    public ResumableUploadResult(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.getRequestId()
            r1.setRequestId(r0)
            java.util.Map r0 = r2.getResponseHeader()
            r1.setResponseHeader(r0)
            int r0 = r2.getStatusCode()
            r1.setStatusCode(r0)
            java.lang.Long r0 = r2.getClientCRC()
            r1.setClientCRC(r0)
            java.lang.Long r0 = r2.getServerCRC()
            r1.setServerCRC(r0)
            java.lang.String r0 = r2.getBucketName()
            r1.setBucketName(r0)
            java.lang.String r0 = r2.getObjectKey()
            r1.setObjectKey(r0)
            java.lang.String r0 = r2.getETag()
            r1.setETag(r0)
            java.lang.String r0 = r2.getLocation()
            r1.setLocation(r0)
            java.lang.String r2 = r2.getServerCallbackReturnBody()
            r1.setServerCallbackReturnBody(r2)
            return
    }
}
