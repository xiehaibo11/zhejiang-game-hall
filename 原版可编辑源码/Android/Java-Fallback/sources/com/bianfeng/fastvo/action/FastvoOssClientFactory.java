package com.bianfeng.fastvo.action;

class FastvoOssClientFactory {


    FastvoOssClientFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alibaba.sdk.android.oss.OSS create(android.content.Context r3) {
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.getEndpoint()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "endpoint--->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            com.bianfeng.fastvo.action.FastvoOssClientFactory$1 r1 = new com.bianfeng.fastvo.action.FastvoOssClientFactory$1
            r1.<init>(r3)
            com.alibaba.sdk.android.oss.OSSClient r2 = new com.alibaba.sdk.android.oss.OSSClient
            r2.<init>(r3, r0, r1)
            return r2
    }
}
