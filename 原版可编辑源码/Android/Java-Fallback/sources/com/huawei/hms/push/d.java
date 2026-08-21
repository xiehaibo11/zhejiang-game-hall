package com.huawei.hms.push;

public class d {
    public static com.huawei.hms.aaid.constant.ErrorEnum a(android.content.Context r2) {
            r0 = 0
            java.lang.String r0 = com.huawei.hms.aaid.utils.BaseUtils.getLocalToken(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L26
            boolean r0 = com.huawei.hms.aaid.init.AutoInitHelper.isAutoInitEnabled(r2)
            java.lang.String r1 = "TokenUtil"
            if (r0 == 0) goto L1e
            java.lang.String r0 = "Token not exist, try auto init"
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            com.huawei.hms.aaid.init.AutoInitHelper.doAutoInit(r2)
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_AUTO_INITIALIZING
            return r2
        L1e:
            java.lang.String r2 = "Token not exist"
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_NO_TOKEN
            return r2
        L26:
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            return r2
    }
}
