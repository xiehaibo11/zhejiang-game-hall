package com.huawei.hms.aaid;

@java.lang.Deprecated
public class HmsInstanceIdEx {
    public static final java.lang.String TAG = "HmsInstanceIdEx";
    public android.content.Context a;
    public com.huawei.hms.aaid.utils.PushPreferences b;
    public com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api.ApiOptions.NoOptions> c;

    public HmsInstanceIdEx(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            r4.a = r5
            com.huawei.hms.aaid.utils.PushPreferences r1 = new com.huawei.hms.aaid.utils.PushPreferences
            java.lang.String r2 = "aaid"
            r1.<init>(r5, r2)
            r4.b = r1
            com.huawei.hms.api.Api r1 = new com.huawei.hms.api.Api
            java.lang.String r2 = "HuaweiPush.API"
            r1.<init>(r2)
            boolean r2 = r5 instanceof android.app.Activity
            if (r2 == 0) goto L2d
            com.huawei.hms.common.HuaweiApi r2 = new com.huawei.hms.common.HuaweiApi
            android.app.Activity r5 = (android.app.Activity) r5
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r2.<init>(r5, r1, r0, r3)
            r4.c = r2
            goto L39
        L2d:
            com.huawei.hms.common.HuaweiApi r2 = new com.huawei.hms.common.HuaweiApi
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r2.<init>(r5, r1, r0, r3)
            r4.c = r2
        L39:
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r5 = r4.c
            r0 = 50101303(0x2fc7c37, float:3.7099368E-37)
            r5.setKitSdkVersion(r0)
            return
    }

    public static com.huawei.hms.aaid.HmsInstanceIdEx getInstance(android.content.Context r1) {
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r1)
            com.huawei.hms.aaid.HmsInstanceIdEx r0 = new com.huawei.hms.aaid.HmsInstanceIdEx
            r0.<init>(r1)
            return r0
    }

    public final com.huawei.hmf.tasks.Task<com.huawei.hms.aaid.entity.TokenResult> a(java.lang.Exception r2) {
            r1 = this;
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            r0.setException(r2)
            com.huawei.hmf.tasks.Task r2 = r0.getTask()
            return r2
    }

    public final java.lang.String a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "creationTime"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public void deleteAAID(java.lang.String r2) throws com.huawei.hms.common.ApiException {
            r1 = this;
            if (r2 == 0) goto L27
            com.huawei.hms.aaid.utils.PushPreferences r0 = r1.b     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            boolean r0 = r0.containsKey(r2)     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            if (r0 == 0) goto L18
            com.huawei.hms.aaid.utils.PushPreferences r0 = r1.b     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            r0.removeKey(r2)     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            com.huawei.hms.aaid.utils.PushPreferences r0 = r1.b     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            java.lang.String r2 = r1.a(r2)     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
            r0.removeKey(r2)     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20
        L18:
            return
        L19:
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r2 = r2.toApiException()
            throw r2
        L20:
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r2 = r2.toApiException()
            throw r2
        L27:
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r2 = r2.toApiException()
            throw r2
    }

    public java.lang.String getAAId(java.lang.String r5) throws com.huawei.hms.common.ApiException {
            r4 = this;
            if (r5 == 0) goto L3f
            com.huawei.hms.aaid.utils.PushPreferences r0 = r4.b     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            if (r0 == 0) goto L11
            com.huawei.hms.aaid.utils.PushPreferences r0 = r4.b     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            java.lang.String r5 = r0.getString(r5)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            goto L30
        L11:
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            com.huawei.hms.aaid.utils.PushPreferences r1 = r4.b     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            r1.saveString(r5, r0)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            com.huawei.hms.aaid.utils.PushPreferences r1 = r4.b     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            java.lang.String r5 = r4.a(r5)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            r1.saveLong(r5, r2)     // Catch: java.lang.Exception -> L31 java.lang.RuntimeException -> L38
            r5 = r0
        L30:
            return r5
        L31:
            com.huawei.hms.aaid.constant.ErrorEnum r5 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r5 = r5.toApiException()
            throw r5
        L38:
            com.huawei.hms.aaid.constant.ErrorEnum r5 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r5 = r5.toApiException()
            throw r5
        L3f:
            com.huawei.hms.aaid.constant.ErrorEnum r5 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r5 = r5.toApiException()
            throw r5
    }

    public long getCreationTime(java.lang.String r3) throws com.huawei.hms.common.ApiException {
            r2 = this;
            if (r3 == 0) goto L2a
            com.huawei.hms.aaid.utils.PushPreferences r0 = r2.b     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            java.lang.String r1 = r2.a(r3)     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            if (r0 != 0) goto L11
            r2.getAAId(r3)     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
        L11:
            com.huawei.hms.aaid.utils.PushPreferences r0 = r2.b     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            long r0 = r0.getLong(r3)     // Catch: java.lang.Exception -> L1c java.lang.RuntimeException -> L23
            return r0
        L1c:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
        L23:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
        L2a:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
    }

    public com.huawei.hmf.tasks.Task<com.huawei.hms.aaid.entity.TokenResult> getToken() {
            r6 = this;
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            r1 = 0
            if (r0 == 0) goto L3a
            java.lang.String r0 = com.huawei.hms.aaid.HmsInstanceIdEx.TAG     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            java.lang.String r2 = "use proxy get token, please check HmsMessageService.onNewToken receive result."
            com.huawei.hms.support.log.HMSLog.i(r0, r2)     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            android.content.Context r2 = r6.a     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            r0.getToken(r2, r1, r1)     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            r0.<init>()     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            com.huawei.hms.aaid.entity.TokenResult r1 = new com.huawei.hms.aaid.entity.TokenResult     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            r1.<init>()     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            r0.setResult(r1)     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            com.huawei.hmf.tasks.Task r0 = r0.getTask()     // Catch: java.lang.Exception -> L29 com.huawei.hms.common.ApiException -> L34
            return r0
        L29:
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            com.huawei.hmf.tasks.Task r0 = r6.a(r0)
            return r0
        L34:
            r0 = move-exception
            com.huawei.hmf.tasks.Task r0 = r6.a(r0)
            return r0
        L3a:
            android.content.Context r0 = r6.a
            java.lang.String r2 = "push.gettoken"
            java.lang.String r0 = com.huawei.hms.opendevice.q.a(r0, r2)
            android.content.Context r3 = r6.a     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            com.huawei.hms.aaid.entity.TokenReq r1 = com.huawei.hms.opendevice.o.b(r3, r1, r1)     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            android.content.Context r3 = r6.a     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            com.huawei.hms.aaid.HmsInstanceId r3 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r3)     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            r1.setAaid(r3)     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r3 = r6.c     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            com.huawei.hms.opendevice.l r4 = new com.huawei.hms.opendevice.l     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            android.content.Context r5 = r6.a     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            r4.<init>(r2, r1, r5, r0)     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            com.huawei.hmf.tasks.Task r0 = r3.doWrite(r4)     // Catch: java.lang.Exception -> L63 java.lang.RuntimeException -> L75
            return r0
        L63:
            android.content.Context r1 = r6.a
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.opendevice.q.a(r1, r2, r0, r3)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            com.huawei.hmf.tasks.Task r0 = r6.a(r0)
            return r0
        L75:
            android.content.Context r1 = r6.a
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.opendevice.q.a(r1, r2, r0, r3)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            com.huawei.hmf.tasks.Task r0 = r6.a(r0)
            return r0
    }
}
