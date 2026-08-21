package com.huawei.hms.aaid;

public class HmsInstanceId {
    public static final java.lang.String TAG = "HmsInstanceId";
    public android.content.Context a;
    public com.huawei.hms.aaid.utils.PushPreferences b;
    public com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api.ApiOptions.NoOptions> c;

    public HmsInstanceId(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            android.content.Context r0 = r5.getApplicationContext()
            r4.a = r0
            com.huawei.hms.aaid.utils.PushPreferences r0 = new com.huawei.hms.aaid.utils.PushPreferences
            java.lang.String r1 = "aaid"
            r0.<init>(r5, r1)
            r4.b = r0
            com.huawei.hms.api.Api r0 = new com.huawei.hms.api.Api
            java.lang.String r1 = "HuaweiPush.API"
            r0.<init>(r1)
            boolean r1 = r5 instanceof android.app.Activity
            r2 = 0
            if (r1 == 0) goto L2d
            com.huawei.hms.common.HuaweiApi r1 = new com.huawei.hms.common.HuaweiApi
            android.app.Activity r5 = (android.app.Activity) r5
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r1.<init>(r5, r0, r2, r3)
            r4.c = r1
            goto L39
        L2d:
            com.huawei.hms.common.HuaweiApi r1 = new com.huawei.hms.common.HuaweiApi
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r1.<init>(r5, r0, r2, r3)
            r4.c = r1
        L39:
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r5 = r4.c
            r0 = 50101303(0x2fc7c37, float:3.7099368E-37)
            r5.setKitSdkVersion(r0)
            return
    }

    public static com.huawei.hms.aaid.HmsInstanceId getInstance(android.content.Context r1) {
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r1)
            com.huawei.hms.opendevice.c.d(r1)
            com.huawei.hms.aaid.HmsInstanceId r0 = new com.huawei.hms.aaid.HmsInstanceId
            r0.<init>(r1)
            return r0
    }

    public final java.lang.String a(com.huawei.hms.aaid.entity.TokenReq r6, int r7) throws com.huawei.hms.common.ApiException {
            r5 = this;
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            if (r0 == 0) goto L1c
            java.lang.String r7 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r0 = "use proxy get token, please check HmsMessageService.onNewToken receive result."
            com.huawei.hms.support.log.HMSLog.i(r7, r0)
            com.huawei.hms.aaid.plugin.PushProxy r7 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r0 = r5.a
            java.lang.String r6 = r6.getSubjectId()
            r1 = 0
            r7.getToken(r0, r6, r1)
            return r1
        L1c:
            java.lang.String r0 = r6.getSubjectId()
            r5.a(r0)
            android.content.Context r0 = r5.a
            java.lang.String r1 = "push.gettoken"
            java.lang.String r0 = com.huawei.hms.opendevice.q.a(r0, r1)
            java.lang.String r2 = com.huawei.hms.aaid.HmsInstanceId.TAG     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            r3.<init>()     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = "getToken req :"
            r3.append(r4)     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> L60
            r3.append(r4)     // Catch: java.lang.Exception -> L60
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L60
            com.huawei.hms.support.log.HMSLog.d(r2, r3)     // Catch: java.lang.Exception -> L60
            com.huawei.hms.opendevice.l r2 = new com.huawei.hms.opendevice.l     // Catch: java.lang.Exception -> L60
            android.content.Context r3 = r5.a     // Catch: java.lang.Exception -> L60
            r2.<init>(r1, r6, r3, r0)     // Catch: java.lang.Exception -> L60
            r2.setApiLevel(r7)     // Catch: java.lang.Exception -> L60
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r6 = r5.c     // Catch: java.lang.Exception -> L60
            com.huawei.hmf.tasks.Task r6 = r6.doWrite(r2)     // Catch: java.lang.Exception -> L60
            java.lang.Object r6 = com.huawei.hmf.tasks.Tasks.await(r6)     // Catch: java.lang.Exception -> L60
            com.huawei.hms.aaid.entity.TokenResult r6 = (com.huawei.hms.aaid.entity.TokenResult) r6     // Catch: java.lang.Exception -> L60
            java.lang.String r6 = r6.getToken()     // Catch: java.lang.Exception -> L60
            return r6
        L60:
            r6 = move-exception
            java.lang.Throwable r7 = r6.getCause()
            boolean r7 = r7 instanceof com.huawei.hms.common.ApiException
            if (r7 == 0) goto L79
            java.lang.Throwable r6 = r6.getCause()
            com.huawei.hms.common.ApiException r6 = (com.huawei.hms.common.ApiException) r6
            android.content.Context r7 = r5.a
            int r2 = r6.getStatusCode()
            com.huawei.hms.opendevice.q.a(r7, r1, r0, r2)
            throw r6
        L79:
            android.content.Context r6 = r5.a
            com.huawei.hms.aaid.constant.ErrorEnum r7 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.opendevice.q.a(r6, r1, r0, r7)
            com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r6 = r6.toApiException()
            throw r6
    }

    public final void a() throws com.huawei.hms.common.ApiException {
            r2 = this;
            android.content.Context r0 = r2.a
            boolean r0 = com.huawei.hms.aaid.utils.BaseUtils.getProxyInit(r0)
            if (r0 == 0) goto L25
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            if (r0 != 0) goto L25
            android.content.Context r0 = r2.a
            boolean r0 = com.huawei.hms.aaid.utils.BaseUtils.isMainProc(r0)
            if (r0 == 0) goto L17
            goto L25
        L17:
            java.lang.String r0 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r1 = "Operations in child processes are not supported."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPER_IN_CHILD_PROCESS
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            throw r0
        L25:
            return
    }

    public final void a(com.huawei.hms.aaid.entity.DeleteTokenReq r7, int r8) throws com.huawei.hms.common.ApiException {
            r6 = this;
            java.lang.String r0 = r7.getSubjectId()
            com.huawei.hms.aaid.plugin.PushProxy r1 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            r2 = 0
            if (r1 == 0) goto L1c
            java.lang.String r7 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r8 = "use proxy delete token"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.aaid.plugin.PushProxy r7 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r8 = r6.a
            r7.deleteToken(r8, r0, r2)
            return
        L1c:
            android.content.Context r1 = r6.a
            java.lang.String r3 = "push.deletetoken"
            java.lang.String r1 = com.huawei.hms.opendevice.q.a(r1, r3)
            android.content.Context r4 = r6.a     // Catch: java.lang.Exception -> L79
            com.huawei.hms.opendevice.i r4 = com.huawei.hms.opendevice.i.a(r4)     // Catch: java.lang.Exception -> L79
            java.lang.String r4 = r4.b(r0)     // Catch: java.lang.Exception -> L79
            boolean r5 = r7.isMultiSender()     // Catch: java.lang.Exception -> L79
            if (r5 == 0) goto L5b
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L79
            if (r5 != 0) goto L4a
            android.content.Context r5 = r6.a     // Catch: java.lang.Exception -> L79
            com.huawei.hms.opendevice.i r5 = com.huawei.hms.opendevice.i.a(r5)     // Catch: java.lang.Exception -> L79
            java.lang.String r2 = r5.b(r2)     // Catch: java.lang.Exception -> L79
            boolean r2 = r4.equals(r2)     // Catch: java.lang.Exception -> L79
            if (r2 == 0) goto L5b
        L4a:
            android.content.Context r7 = r6.a     // Catch: java.lang.Exception -> L79
            com.huawei.hms.opendevice.i r7 = com.huawei.hms.opendevice.i.a(r7)     // Catch: java.lang.Exception -> L79
            r7.removeKey(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r7 = com.huawei.hms.aaid.HmsInstanceId.TAG     // Catch: java.lang.Exception -> L79
            java.lang.String r8 = "The local subject token is null"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)     // Catch: java.lang.Exception -> L79
            return
        L5b:
            r7.setToken(r4)     // Catch: java.lang.Exception -> L79
            com.huawei.hms.opendevice.k r2 = new com.huawei.hms.opendevice.k     // Catch: java.lang.Exception -> L79
            r2.<init>(r3, r7, r1)     // Catch: java.lang.Exception -> L79
            r2.setApiLevel(r8)     // Catch: java.lang.Exception -> L79
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r7 = r6.c     // Catch: java.lang.Exception -> L79
            com.huawei.hmf.tasks.Task r7 = r7.doWrite(r2)     // Catch: java.lang.Exception -> L79
            com.huawei.hmf.tasks.Tasks.await(r7)     // Catch: java.lang.Exception -> L79
            android.content.Context r7 = r6.a     // Catch: java.lang.Exception -> L79
            com.huawei.hms.opendevice.i r7 = com.huawei.hms.opendevice.i.a(r7)     // Catch: java.lang.Exception -> L79
            r7.c(r0)     // Catch: java.lang.Exception -> L79
            return
        L79:
            r7 = move-exception
            java.lang.Throwable r8 = r7.getCause()
            boolean r8 = r8 instanceof com.huawei.hms.common.ApiException
            if (r8 == 0) goto L92
            java.lang.Throwable r7 = r7.getCause()
            com.huawei.hms.common.ApiException r7 = (com.huawei.hms.common.ApiException) r7
            android.content.Context r8 = r6.a
            int r0 = r7.getStatusCode()
            com.huawei.hms.opendevice.q.a(r8, r3, r1, r0)
            throw r7
        L92:
            android.content.Context r7 = r6.a
            com.huawei.hms.aaid.constant.ErrorEnum r8 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.opendevice.q.a(r7, r3, r1, r8)
            com.huawei.hms.aaid.constant.ErrorEnum r7 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r7 = r7.toApiException()
            throw r7
    }

    public final void a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            android.content.Context r0 = r4.a
            boolean r0 = com.huawei.hms.opendevice.p.c(r0)
            java.lang.String r1 = "subjectId"
            if (r0 == 0) goto L4f
            android.content.Context r0 = r4.a
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            java.lang.String r0 = r0.getString(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L2b
            android.content.Context r0 = r4.a
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.saveString(r1, r5)
            goto L58
        L2b:
            boolean r2 = r0.contains(r5)
            if (r2 != 0) goto L58
            android.content.Context r2 = r4.a
            com.huawei.hms.opendevice.i r2 = com.huawei.hms.opendevice.i.a(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = ","
            r3.append(r0)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            r2.saveString(r1, r5)
            goto L58
        L4f:
            android.content.Context r5 = r4.a
            com.huawei.hms.opendevice.i r5 = com.huawei.hms.opendevice.i.a(r5)
            r5.removeKey(r1)
        L58:
            return
    }

    public final void b() throws com.huawei.hms.common.ApiException {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 == r1) goto Lb
            return
        Lb:
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_MAIN_THREAD
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            throw r0
    }

    public void deleteAAID() throws com.huawei.hms.common.ApiException {
            r3 = this;
            java.lang.String r0 = "aaid"
            r3.b()
            com.huawei.hms.aaid.utils.PushPreferences r1 = r3.b     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            if (r1 != 0) goto Le
            return
        Le:
            com.huawei.hms.aaid.utils.PushPreferences r1 = r3.b     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            r1.removeKey(r0)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            com.huawei.hms.aaid.utils.PushPreferences r0 = r3.b     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            java.lang.String r1 = "creationTime"
            r0.removeKey(r1)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            boolean r0 = com.huawei.hms.opendevice.o.e(r0)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            if (r0 != 0) goto L23
            return
        L23:
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            if (r0 == 0) goto L3a
            java.lang.String r0 = com.huawei.hms.aaid.HmsInstanceId.TAG     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            java.lang.String r1 = "use proxy delete all token after delete AaId."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            r0.deleteAllToken(r1)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            return
        L3a:
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            com.huawei.hms.aaid.entity.DeleteTokenReq r0 = com.huawei.hms.opendevice.o.b(r0)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            r1 = 1
            r0.setDeleteType(r1)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            r2 = 0
            r0.setMultiSender(r2)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            r3.a(r0, r1)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            com.huawei.hms.aaid.utils.BaseUtils.deleteAllTokenCache(r0)     // Catch: java.lang.Exception -> L51 com.huawei.hms.common.ApiException -> L58
            return
        L51:
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r0 = r0.toApiException()
            throw r0
        L58:
            r0 = move-exception
            throw r0
    }

    public void deleteToken(java.lang.String r3) throws com.huawei.hms.common.ApiException {
            r2 = this;
            r2.b()
            r2.a()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L39
            android.content.Context r0 = r2.a
            java.lang.String r0 = com.huawei.hms.opendevice.o.d(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L32
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L23
            r3 = 0
            r2.deleteToken(r3, r3)
            return
        L23:
            android.content.Context r0 = r2.a
            com.huawei.hms.aaid.entity.DeleteTokenReq r3 = com.huawei.hms.opendevice.o.a(r0, r3)
            r0 = 1
            r3.setMultiSender(r0)
            r0 = 2
            r2.a(r3, r0)
            return
        L32:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_MISSING_PROJECT_ID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
        L39:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
    }

    public void deleteToken(java.lang.String r2, java.lang.String r3) throws com.huawei.hms.common.ApiException {
            r1 = this;
            r1.b()
            r1.a()
            android.content.Context r0 = r1.a
            com.huawei.hms.aaid.entity.DeleteTokenReq r2 = com.huawei.hms.opendevice.o.a(r0, r2, r3)
            r3 = 0
            r2.setMultiSender(r3)
            r3 = 1
            r1.a(r2, r3)
            return
    }

    public com.huawei.hmf.tasks.Task<com.huawei.hms.aaid.entity.AAIDResult> getAAID() {
            r2 = this;
            com.huawei.hms.opendevice.j r0 = new com.huawei.hms.opendevice.j     // Catch: java.lang.Exception -> L10
            android.content.Context r1 = r2.a     // Catch: java.lang.Exception -> L10
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L10
            r0.<init>(r1)     // Catch: java.lang.Exception -> L10
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.Tasks.callInBackground(r0)     // Catch: java.lang.Exception -> L10
            return r0
        L10:
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r1 = r1.toApiException()
            r0.setException(r1)
            com.huawei.hmf.tasks.Task r0 = r0.getTask()
            return r0
    }

    public long getCreationTime() {
            r2 = this;
            java.lang.String r0 = "creationTime"
            com.huawei.hms.aaid.utils.PushPreferences r1 = r2.b     // Catch: java.lang.Exception -> L14
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Exception -> L14
            if (r1 != 0) goto Ld
            r2.getAAID()     // Catch: java.lang.Exception -> L14
        Ld:
            com.huawei.hms.aaid.utils.PushPreferences r1 = r2.b     // Catch: java.lang.Exception -> L14
            long r0 = r1.getLong(r0)     // Catch: java.lang.Exception -> L14
            return r0
        L14:
            r0 = 0
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            android.content.Context r0 = r1.a
            java.lang.String r0 = com.huawei.hms.opendevice.o.c(r0)
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getToken() {
            r1 = this;
            r0 = 0
            java.lang.String r0 = r1.getToken(r0, r0)     // Catch: java.lang.Exception -> L5
        L5:
            return r0
    }

    public java.lang.String getToken(java.lang.String r3) throws com.huawei.hms.common.ApiException {
            r2 = this;
            r2.b()
            r2.a()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L42
            android.content.Context r0 = r2.a
            java.lang.String r0 = com.huawei.hms.opendevice.o.d(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3b
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L24
            r3 = 0
            java.lang.String r3 = r2.getToken(r3, r3)
            return r3
        L24:
            android.content.Context r0 = r2.a
            com.huawei.hms.aaid.entity.TokenReq r3 = com.huawei.hms.opendevice.o.b(r0, r3)
            java.lang.String r0 = r2.getId()
            r3.setAaid(r0)
            r0 = 1
            r3.setMultiSender(r0)
            r0 = 2
            java.lang.String r3 = r2.a(r3, r0)
            return r3
        L3b:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_MISSING_PROJECT_ID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
        L42:
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.common.ApiException r3 = r3.toApiException()
            throw r3
    }

    public java.lang.String getToken(java.lang.String r3, java.lang.String r4) throws com.huawei.hms.common.ApiException {
            r2 = this;
            r2.b()
            r2.a()
            android.content.Context r0 = r2.a
            com.huawei.hms.aaid.entity.TokenReq r3 = com.huawei.hms.opendevice.o.b(r0, r3, r4)
            java.lang.String r4 = r2.getId()
            r3.setAaid(r4)
            r4 = 0
            r3.setMultiSender(r4)
            android.content.Context r4 = r2.a
            com.huawei.hms.opendevice.i r4 = com.huawei.hms.opendevice.i.a(r4)
            android.content.Context r0 = r2.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "1"
            r4.saveString(r0, r1)
            r4 = 1
            java.lang.String r3 = r2.a(r3, r4)
            return r3
    }
}
