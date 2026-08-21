package com.huawei.hms.push;

public class HmsProfile {
    public static final int CUSTOM_PROFILE = 2;
    public static final int HUAWEI_PROFILE = 1;
    public static final java.lang.String a = "HmsProfile";
    public android.content.Context b;
    public com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api.ApiOptions.NoOptions> c;

    public HmsProfile(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.b = r0
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r5)
            r4.b = r5
            com.huawei.hms.api.Api r1 = new com.huawei.hms.api.Api
            java.lang.String r2 = "HuaweiPush.API"
            r1.<init>(r2)
            boolean r2 = r5 instanceof android.app.Activity
            if (r2 == 0) goto L25
            com.huawei.hms.common.HuaweiApi r2 = new com.huawei.hms.common.HuaweiApi
            android.app.Activity r5 = (android.app.Activity) r5
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r2.<init>(r5, r1, r0, r3)
            r4.c = r2
            goto L31
        L25:
            com.huawei.hms.common.HuaweiApi r2 = new com.huawei.hms.common.HuaweiApi
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r2.<init>(r5, r1, r0, r3)
            r4.c = r2
        L31:
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r5 = r4.c
            r0 = 50300100(0x2ff84c4, float:3.7545086E-37)
            r5.setKitSdkVersion(r0)
            return
    }

    public static java.lang.String a(android.content.Context r1) {
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r1)
            java.lang.String r0 = "client/project_id"
            java.lang.String r1 = r1.getString(r0)
            return r1
    }

    public static com.huawei.hms.push.HmsProfile getInstance(android.content.Context r1) {
            com.huawei.hms.push.HmsProfile r0 = new com.huawei.hms.push.HmsProfile
            r0.<init>(r1)
            return r0
    }

    public final com.huawei.hmf.tasks.Task<java.lang.Void> a(int r3, java.lang.String r4, int r5, java.lang.String r6) {
            r2 = this;
            boolean r0 = r2.isSupportProfile()
            if (r0 != 0) goto L19
            com.huawei.hmf.tasks.TaskCompletionSource r3 = new com.huawei.hmf.tasks.TaskCompletionSource
            r3.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            com.huawei.hms.common.ApiException r4 = r4.toApiException()
            r3.setException(r4)
            com.huawei.hmf.tasks.Task r3 = r3.getTask()
            return r3
        L19:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L4d
            android.content.Context r0 = r2.b
            java.lang.String r0 = a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L45
            java.lang.String r3 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r4 = "agc connect services config missing project id."
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            com.huawei.hmf.tasks.TaskCompletionSource r3 = new com.huawei.hmf.tasks.TaskCompletionSource
            r3.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_MISSING_PROJECT_ID
            com.huawei.hms.common.ApiException r4 = r4.toApiException()
            r3.setException(r4)
            com.huawei.hmf.tasks.Task r3 = r3.getTask()
            return r3
        L45:
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L4d
            java.lang.String r4 = ""
        L4d:
            com.huawei.hms.support.api.entity.push.ProfileReq r0 = new com.huawei.hms.support.api.entity.push.ProfileReq
            r0.<init>()
            if (r3 != 0) goto L5c
            r3 = 0
            r0.setOperation(r3)
            r0.setType(r5)
            goto L60
        L5c:
            r3 = 1
            r0.setOperation(r3)
        L60:
            android.content.Context r3 = r2.b
            java.lang.String r5 = "push.profile"
            java.lang.String r3 = com.huawei.hms.push.utils.PushBiUtil.reportEntry(r3, r5)
            r0.setSubjectId(r4)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.hash.SHA.sha256Encrypt(r6)     // Catch: java.lang.Exception -> L8b
            r0.setProfileId(r4)     // Catch: java.lang.Exception -> L8b
            android.content.Context r4 = r2.b     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L8b
            r0.setPkgName(r4)     // Catch: java.lang.Exception -> L8b
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r4 = r2.c     // Catch: java.lang.Exception -> L8b
            com.huawei.hms.push.task.ProfileTask r6 = new com.huawei.hms.push.task.ProfileTask     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = com.huawei.hms.utils.JsonUtil.createJsonString(r0)     // Catch: java.lang.Exception -> L8b
            r6.<init>(r5, r0, r3)     // Catch: java.lang.Exception -> L8b
            com.huawei.hmf.tasks.Task r3 = r4.doWrite(r6)     // Catch: java.lang.Exception -> L8b
            return r3
        L8b:
            r4 = move-exception
            java.lang.Throwable r6 = r4.getCause()
            boolean r6 = r6 instanceof com.huawei.hms.common.ApiException
            if (r6 == 0) goto Lb0
            com.huawei.hmf.tasks.TaskCompletionSource r6 = new com.huawei.hmf.tasks.TaskCompletionSource
            r6.<init>()
            java.lang.Throwable r4 = r4.getCause()
            com.huawei.hms.common.ApiException r4 = (com.huawei.hms.common.ApiException) r4
            r6.setException(r4)
            android.content.Context r0 = r2.b
            int r4 = r4.getStatusCode()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r0, r5, r3, r4)
            com.huawei.hmf.tasks.Task r3 = r6.getTask()
            return r3
        Lb0:
            com.huawei.hmf.tasks.TaskCompletionSource r4 = new com.huawei.hmf.tasks.TaskCompletionSource
            r4.<init>()
            android.content.Context r6 = r2.b
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r6, r5, r3, r0)
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            r4.setException(r3)
            com.huawei.hmf.tasks.Task r3 = r4.getTask()
            return r3
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> addProfile(int r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = ""
            com.huawei.hmf.tasks.Task r2 = r1.addProfile(r0, r2, r3)
            return r2
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> addProfile(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            r0 = 1
            if (r3 == r0) goto L20
            r0 = 2
            if (r3 == r0) goto L20
            java.lang.String r2 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r3 = "add profile type undefined."
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            com.huawei.hmf.tasks.TaskCompletionSource r2 = new com.huawei.hmf.tasks.TaskCompletionSource
            r2.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_PUSH_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            r2.setException(r3)
            com.huawei.hmf.tasks.Task r2 = r2.getTask()
            return r2
        L20:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L40
            java.lang.String r2 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r3 = "add profile params is empty."
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            com.huawei.hmf.tasks.TaskCompletionSource r2 = new com.huawei.hmf.tasks.TaskCompletionSource
            r2.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_PUSH_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            r2.setException(r3)
            com.huawei.hmf.tasks.Task r2 = r2.getTask()
            return r2
        L40:
            r0 = 0
            com.huawei.hmf.tasks.Task r2 = r1.a(r0, r2, r3, r4)
            return r2
    }

    public final boolean b(android.content.Context r5) {
            r4 = this;
            long r0 = com.huawei.hms.push.s.b(r5)
            r2 = 110001400(0x68e7cf8, double:5.43479127E-316)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto Ld
            r5 = 1
            goto Le
        Ld:
            r5 = 0
        Le:
            return r5
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> deleteProfile(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            com.huawei.hmf.tasks.Task r2 = r1.deleteProfile(r0, r2)
            return r2
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> deleteProfile(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L20
            java.lang.String r3 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r4 = "del profile params is empty."
            com.huawei.hms.support.log.HMSLog.e(r3, r4)
            com.huawei.hmf.tasks.TaskCompletionSource r3 = new com.huawei.hmf.tasks.TaskCompletionSource
            r3.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_PUSH_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r4 = r4.toApiException()
            r3.setException(r4)
            com.huawei.hmf.tasks.Task r3 = r3.getTask()
            return r3
        L20:
            r0 = 1
            r1 = -1
            com.huawei.hmf.tasks.Task r3 = r2.a(r0, r3, r1, r4)
            return r3
    }

    public boolean isSupportProfile() {
            r3 = this;
            android.content.Context r0 = r3.b
            boolean r0 = com.huawei.hms.push.s.d(r0)
            if (r0 == 0) goto L27
            boolean r0 = com.huawei.hms.push.s.c()
            r1 = 0
            if (r0 == 0) goto L17
            java.lang.String r0 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r2 = "current EMUI version below 9.1, not support profile operation."
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            return r1
        L17:
            android.content.Context r0 = r3.b
            boolean r0 = r3.b(r0)
            if (r0 != 0) goto L27
            java.lang.String r0 = com.huawei.hms.push.HmsProfile.a
            java.lang.String r2 = "current HwPushService.apk version below 11.0.1.400,please upgrade your HwPushService.apk version."
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            return r1
        L27:
            r0 = 1
            return r0
    }
}
