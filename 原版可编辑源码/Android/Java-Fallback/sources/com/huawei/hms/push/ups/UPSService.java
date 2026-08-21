package com.huawei.hms.push.ups;

public final class UPSService {



    public UPSService() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void registerToken(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, com.huawei.hms.push.ups.entity.UPSRegisterCallBack r4) {
            java.lang.String r2 = "UPSService"
            java.lang.String r3 = "invoke registerToken"
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r4)
            boolean r2 = com.huawei.hms.push.s.b()
            if (r2 != 0) goto L1f
            com.huawei.hms.push.ups.entity.TokenResult r0 = new com.huawei.hms.push.ups.entity.TokenResult
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            int r1 = r1.getExternalCode()
            r0.<init>(r1)
            r4.onResult(r0)
            return
        L1f:
            com.huawei.hms.aaid.HmsInstanceId r0 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r0)     // Catch: com.huawei.hms.common.ApiException -> L31
            r2 = 0
            java.lang.String r0 = r0.getToken(r1, r2)     // Catch: com.huawei.hms.common.ApiException -> L31
            com.huawei.hms.push.ups.entity.TokenResult r1 = new com.huawei.hms.push.ups.entity.TokenResult     // Catch: com.huawei.hms.common.ApiException -> L31
            r1.<init>(r0)     // Catch: com.huawei.hms.common.ApiException -> L31
            r4.onResult(r1)     // Catch: com.huawei.hms.common.ApiException -> L31
            goto L42
        L31:
            r0 = move-exception
            com.huawei.hms.push.ups.entity.TokenResult r1 = new com.huawei.hms.push.ups.entity.TokenResult
            int r2 = r0.getStatusCode()
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r2, r0)
            r4.onResult(r1)
        L42:
            return
    }

    public static void turnOffPush(android.content.Context r2, com.huawei.hms.push.ups.entity.UPSTurnCallBack r3) {
            java.lang.String r0 = "UPSService"
            java.lang.String r1 = "invoke turnOffPush"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r3)
            boolean r0 = com.huawei.hms.push.s.b()
            if (r0 != 0) goto L1f
            com.huawei.hms.push.ups.entity.TokenResult r2 = new com.huawei.hms.push.ups.entity.TokenResult
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            int r0 = r0.getExternalCode()
            r2.<init>(r0)
            r3.onResult(r2)
            return
        L1f:
            com.huawei.hms.push.HmsMessaging r2 = com.huawei.hms.push.HmsMessaging.getInstance(r2)
            com.huawei.hmf.tasks.Task r2 = r2.turnOffPush()
            com.huawei.hms.push.ups.UPSService$2 r0 = new com.huawei.hms.push.ups.UPSService$2
            r0.<init>(r3)
            r2.addOnCompleteListener(r0)
            return
    }

    public static void turnOnPush(android.content.Context r2, com.huawei.hms.push.ups.entity.UPSTurnCallBack r3) {
            java.lang.String r0 = "UPSService"
            java.lang.String r1 = "invoke turnOnPush"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r3)
            boolean r0 = com.huawei.hms.push.s.b()
            if (r0 != 0) goto L1f
            com.huawei.hms.push.ups.entity.TokenResult r2 = new com.huawei.hms.push.ups.entity.TokenResult
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            int r0 = r0.getExternalCode()
            r2.<init>(r0)
            r3.onResult(r2)
            return
        L1f:
            com.huawei.hms.push.HmsMessaging r2 = com.huawei.hms.push.HmsMessaging.getInstance(r2)
            com.huawei.hmf.tasks.Task r2 = r2.turnOnPush()
            com.huawei.hms.push.ups.UPSService$1 r0 = new com.huawei.hms.push.ups.UPSService$1
            r0.<init>(r3)
            r2.addOnCompleteListener(r0)
            return
    }

    public static void unRegisterToken(android.content.Context r2, com.huawei.hms.push.ups.entity.UPSUnRegisterCallBack r3) {
            java.lang.String r0 = "UPSService"
            java.lang.String r1 = "invoke unRegisterToken"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r3)
            boolean r0 = com.huawei.hms.push.s.b()
            if (r0 != 0) goto L1f
            com.huawei.hms.push.ups.entity.TokenResult r2 = new com.huawei.hms.push.ups.entity.TokenResult
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            int r0 = r0.getExternalCode()
            r2.<init>(r0)
            r3.onResult(r2)
            return
        L1f:
            com.huawei.hms.aaid.HmsInstanceId r2 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r2)     // Catch: com.huawei.hms.common.ApiException -> L30
            r0 = 0
            r2.deleteToken(r0, r0)     // Catch: com.huawei.hms.common.ApiException -> L30
            com.huawei.hms.push.ups.entity.TokenResult r2 = new com.huawei.hms.push.ups.entity.TokenResult     // Catch: com.huawei.hms.common.ApiException -> L30
            r2.<init>()     // Catch: com.huawei.hms.common.ApiException -> L30
            r3.onResult(r2)     // Catch: com.huawei.hms.common.ApiException -> L30
            goto L41
        L30:
            r2 = move-exception
            com.huawei.hms.push.ups.entity.TokenResult r0 = new com.huawei.hms.push.ups.entity.TokenResult
            int r1 = r2.getStatusCode()
            java.lang.String r2 = r2.getMessage()
            r0.<init>(r1, r2)
            r3.onResult(r0)
        L41:
            return
    }
}
