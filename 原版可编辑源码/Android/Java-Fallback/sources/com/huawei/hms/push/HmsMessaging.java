package com.huawei.hms.push;

public class HmsMessaging {
    public static final java.lang.String DEFAULT_TOKEN_SCOPE = "HCM";
    public static final java.util.regex.Pattern a = null;
    public android.content.Context b;
    public com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api.ApiOptions.NoOptions> c;

    static {
            java.lang.String r0 = "[\\u4e00-\\u9fa5\\w-_.~%]{1,900}"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.huawei.hms.push.HmsMessaging.a = r0
            return
    }

    public HmsMessaging(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r5)
            r4.b = r5
            com.huawei.hms.api.Api r0 = new com.huawei.hms.api.Api
            java.lang.String r1 = "HuaweiPush.API"
            r0.<init>(r1)
            boolean r1 = r5 instanceof android.app.Activity
            r2 = 0
            if (r1 == 0) goto L23
            com.huawei.hms.common.HuaweiApi r1 = new com.huawei.hms.common.HuaweiApi
            android.app.Activity r5 = (android.app.Activity) r5
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r1.<init>(r5, r0, r2, r3)
            r4.c = r1
            goto L2f
        L23:
            com.huawei.hms.common.HuaweiApi r1 = new com.huawei.hms.common.HuaweiApi
            com.huawei.hms.aaid.task.PushClientBuilder r3 = new com.huawei.hms.aaid.task.PushClientBuilder
            r3.<init>()
            r1.<init>(r5, r0, r2, r3)
            r4.c = r1
        L2f:
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r5 = r4.c
            r0 = 50300100(0x2ff84c4, float:3.7545086E-37)
            r5.setKitSdkVersion(r0)
            return
    }

    public static synchronized com.huawei.hms.push.HmsMessaging getInstance(android.content.Context r2) {
            java.lang.Class<com.huawei.hms.push.HmsMessaging> r0 = com.huawei.hms.push.HmsMessaging.class
            monitor-enter(r0)
            com.huawei.hms.push.HmsMessaging r1 = new com.huawei.hms.push.HmsMessaging     // Catch: java.lang.Throwable -> La
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)
            return r1
        La:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public final com.huawei.hmf.tasks.Task<java.lang.Void> a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            android.content.Context r0 = r5.b
            java.lang.String r1 = "push.subscribe"
            java.lang.String r0 = com.huawei.hms.push.utils.PushBiUtil.reportEntry(r0, r1)
            java.lang.String r2 = "HmsMessaging"
            if (r6 == 0) goto Lcc
            java.util.regex.Pattern r3 = com.huawei.hms.push.HmsMessaging.a
            java.util.regex.Matcher r3 = r3.matcher(r6)
            boolean r3 = r3.matches()
            if (r3 == 0) goto Lcc
            com.huawei.hms.aaid.plugin.PushProxy r3 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            if (r3 == 0) goto L41
            java.lang.String r1 = "use proxy subscribe."
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            java.lang.String r1 = "Sub"
            boolean r7 = android.text.TextUtils.equals(r7, r1)
            if (r7 == 0) goto L36
            com.huawei.hms.aaid.plugin.PushProxy r7 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r1 = r5.b
            com.huawei.hmf.tasks.Task r6 = r7.subscribe(r1, r6, r0)
            goto L40
        L36:
            com.huawei.hms.aaid.plugin.PushProxy r7 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r1 = r5.b
            com.huawei.hmf.tasks.Task r6 = r7.unsubscribe(r1, r6, r0)
        L40:
            return r6
        L41:
            android.content.Context r3 = r5.b     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.push.d.a(r3)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            if (r3 != r4) goto L96
            android.content.Context r3 = r5.b     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            int r3 = com.huawei.hms.utils.NetWorkUtil.getNetworkType(r3)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            if (r3 == 0) goto L8a
            com.huawei.hms.support.api.entity.push.SubscribeReq r2 = new com.huawei.hms.support.api.entity.push.SubscribeReq     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            android.content.Context r3 = r5.b     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            r2.<init>(r3, r7, r6)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            android.content.Context r6 = r5.b     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            r7 = 0
            java.lang.String r6 = com.huawei.hms.aaid.utils.BaseUtils.getLocalToken(r6, r7)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            r2.setToken(r6)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            boolean r6 = com.huawei.hms.push.s.b()     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            if (r6 == 0) goto L7a
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r6 = r5.c     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.push.task.BaseVoidTask r7 = new com.huawei.hms.push.task.BaseVoidTask     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            java.lang.String r2 = com.huawei.hms.utils.JsonUtil.createJsonString(r2)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            r7.<init>(r1, r2, r0)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hmf.tasks.Task r6 = r6.doWrite(r7)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            return r6
        L7a:
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r6 = r5.c     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.push.task.SubscribeTask r7 = new com.huawei.hms.push.task.SubscribeTask     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            java.lang.String r2 = com.huawei.hms.utils.JsonUtil.createJsonString(r2)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            r7.<init>(r1, r2, r0)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hmf.tasks.Task r6 = r6.doWrite(r7)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            return r6
        L8a:
            java.lang.String r6 = "no network"
            com.huawei.hms.support.log.HMSLog.e(r2, r6)     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_NO_NETWORK     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            com.huawei.hms.common.ApiException r6 = r6.toApiException()     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            throw r6     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
        L96:
            com.huawei.hms.common.ApiException r6 = r3.toApiException()     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
            throw r6     // Catch: java.lang.Exception -> L9b com.huawei.hms.common.ApiException -> Lb5
        L9b:
            com.huawei.hmf.tasks.TaskCompletionSource r6 = new com.huawei.hmf.tasks.TaskCompletionSource
            r6.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r7 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.common.ApiException r7 = r7.toApiException()
            r6.setException(r7)
            android.content.Context r7 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r7, r1, r0, r2)
            com.huawei.hmf.tasks.Task r6 = r6.getTask()
            return r6
        Lb5:
            r6 = move-exception
            com.huawei.hmf.tasks.TaskCompletionSource r7 = new com.huawei.hmf.tasks.TaskCompletionSource
            r7.<init>()
            r7.setException(r6)
            android.content.Context r2 = r5.b
            int r6 = r6.getStatusCode()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r2, r1, r0, r6)
            com.huawei.hmf.tasks.Task r6 = r7.getTask()
            return r6
        Lcc:
            android.content.Context r6 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r7 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r6, r1, r0, r7)
            java.lang.String r6 = "Invalid topic: topic should match the format:[\\u4e00-\\u9fa5\\w-_.~%]{1,900}"
            com.huawei.hms.support.log.HMSLog.e(r2, r6)
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            r7.<init>(r6)
            throw r7
    }

    public final com.huawei.hmf.tasks.Task<java.lang.Void> a(boolean r7) {
            r6 = this;
            android.content.Context r0 = r6.b
            java.lang.String r1 = "push.setNotifyFlag"
            java.lang.String r0 = com.huawei.hms.push.utils.PushBiUtil.reportEntry(r0, r1)
            android.content.Context r2 = r6.b
            boolean r2 = com.huawei.hms.push.s.d(r2)
            java.lang.String r3 = "HmsMessaging"
            if (r2 == 0) goto Lf7
            boolean r2 = com.huawei.hms.push.s.b()
            if (r2 == 0) goto L1a
            goto Lf7
        L1a:
            int r2 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r4 = 12
            if (r2 >= r4) goto L3f
            java.lang.String r7 = "operation not available on Huawei device with EMUI lower than 5.1"
            com.huawei.hms.support.log.HMSLog.e(r3, r7)
            com.huawei.hmf.tasks.TaskCompletionSource r7 = new com.huawei.hmf.tasks.TaskCompletionSource
            r7.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            com.huawei.hms.common.ApiException r2 = r2.toApiException()
            r7.setException(r2)
            android.content.Context r2 = r6.b
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_OPERATION_NOT_SUPPORTED
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r2, r1, r0, r3)
            com.huawei.hmf.tasks.Task r7 = r7.getTask()
            return r7
        L3f:
            android.content.Context r1 = r6.b
            long r1 = com.huawei.hms.push.s.b(r1)
            r4 = 90101310(0x55ed63e, double:4.4515962E-316)
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            java.lang.String r2 = "android"
            java.lang.String r4 = "enalbeFlag"
            if (r1 >= 0) goto L8f
            java.lang.String r1 = "turn on/off with broadcast v1"
            com.huawei.hms.support.log.HMSLog.i(r3, r1)
            android.content.Context r1 = r6.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r5 = r6.b
            java.lang.String r5 = r5.getPackageName()
            r3.append(r5)
            java.lang.String r5 = "#"
            r3.append(r5)
            r3.append(r7)
            java.lang.String r7 = r3.toString()
            java.lang.String r7 = com.huawei.hms.aaid.encrypt.PushEncrypter.encrypterOld(r1, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.huawei.intent.action.SELF_SHOW_FLAG"
            r1.<init>(r3)
            android.content.Intent r7 = r1.putExtra(r4, r7)
            r7.setPackage(r2)
            com.huawei.hms.push.task.IntentCallable r1 = new com.huawei.hms.push.task.IntentCallable
            android.content.Context r2 = r6.b
            r1.<init>(r2, r7, r0)
            com.huawei.hmf.tasks.Task r7 = com.huawei.hmf.tasks.Tasks.callInBackground(r1)
            return r7
        L8f:
            java.lang.String r1 = "turn on/off with broadcast v2"
            com.huawei.hms.support.log.HMSLog.i(r3, r1)
            com.huawei.hms.aaid.utils.PushPreferences r1 = new com.huawei.hms.aaid.utils.PushPreferences
            android.content.Context r3 = r6.b
            java.lang.String r5 = "push_notify_flag"
            r1.<init>(r3, r5)
            r7 = r7 ^ 1
            java.lang.String r3 = "notify_msg_enable"
            r1.saveBoolean(r3, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "content://"
            r7.append(r1)
            android.content.Context r1 = r6.b
            java.lang.String r1 = r1.getPackageName()
            r7.append(r1)
            java.lang.String r1 = ".huawei.push.provider/"
            r7.append(r1)
            r7.append(r5)
            java.lang.String r1 = ".xml"
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            android.net.Uri r7 = android.net.Uri.parse(r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.huawei.android.push.intent.SDK_COMMAND"
            r1.<init>(r3)
            java.lang.String r3 = "type"
            r1.putExtra(r3, r4)
            android.content.Context r3 = r6.b
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = "pkgName"
            r1.putExtra(r4, r3)
            java.lang.String r3 = "url"
            r1.putExtra(r3, r7)
            r1.setPackage(r2)
            com.huawei.hms.push.task.IntentCallable r7 = new com.huawei.hms.push.task.IntentCallable
            android.content.Context r2 = r6.b
            r7.<init>(r2, r1, r0)
            com.huawei.hmf.tasks.Task r7 = com.huawei.hmf.tasks.Tasks.callInBackground(r7)
            return r7
        Lf7:
            java.lang.String r2 = "turn on/off with AIDL"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            com.huawei.hms.support.api.entity.push.EnableNotifyReq r2 = new com.huawei.hms.support.api.entity.push.EnableNotifyReq
            r2.<init>()
            android.content.Context r3 = r6.b
            java.lang.String r3 = r3.getPackageName()
            r2.setPackageName(r3)
            r2.setEnable(r7)
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r7 = r6.c
            com.huawei.hms.push.task.BaseVoidTask r3 = new com.huawei.hms.push.task.BaseVoidTask
            java.lang.String r2 = com.huawei.hms.utils.JsonUtil.createJsonString(r2)
            r3.<init>(r1, r2, r0)
            com.huawei.hmf.tasks.Task r7 = r7.doWrite(r3)
            return r7
    }

    public final void a(com.huawei.hms.push.RemoteMessage r6) {
            r5 = this;
            android.content.Context r0 = r5.b
            java.lang.String r1 = "push.sendMessage"
            java.lang.String r0 = com.huawei.hms.push.utils.PushBiUtil.reportEntry(r0, r1)
            android.content.Context r2 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.push.d.a(r2)
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            java.lang.String r4 = "HmsMessaging"
            if (r2 != r3) goto Lc7
            java.lang.String r2 = r6.getTo()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lb5
            java.lang.String r2 = r6.getMessageId()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto La3
            java.lang.String r2 = r6.getData()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L91
            com.huawei.hms.support.api.entity.push.UpSendMsgReq r2 = new com.huawei.hms.support.api.entity.push.UpSendMsgReq
            r2.<init>()
            android.content.Context r3 = r5.b
            java.lang.String r3 = r3.getPackageName()
            r2.setPackageName(r3)
            java.lang.String r3 = r6.getMessageId()
            r2.setMessageId(r3)
            java.lang.String r3 = r6.getTo()
            r2.setTo(r3)
            java.lang.String r3 = r6.getData()
            r2.setData(r3)
            java.lang.String r3 = r6.getMessageType()
            r2.setMessageType(r3)
            int r3 = r6.getTtl()
            r2.setTtl(r3)
            java.lang.String r3 = r6.getCollapseKey()
            r2.setCollapseKey(r3)
            int r3 = r6.getSendMode()
            r2.setSendMode(r3)
            int r6 = r6.getReceiptMode()
            r2.setReceiptMode(r6)
            boolean r6 = com.huawei.hms.push.s.b()
            if (r6 == 0) goto L8d
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r6 = r5.c
            com.huawei.hms.push.task.BaseVoidTask r3 = new com.huawei.hms.push.task.BaseVoidTask
            java.lang.String r2 = com.huawei.hms.utils.JsonUtil.createJsonString(r2)
            r3.<init>(r1, r2, r0)
            r6.doWrite(r3)
            goto L90
        L8d:
            r5.a(r2, r0)
        L90:
            return
        L91:
            java.lang.String r6 = "Mandatory parameter 'data' missing"
            com.huawei.hms.support.log.HMSLog.e(r4, r6)
            android.content.Context r2 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r2, r1, r0, r3)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
        La3:
            java.lang.String r6 = "Mandatory parameter 'message_id' missing"
            com.huawei.hms.support.log.HMSLog.e(r4, r6)
            android.content.Context r2 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r2, r1, r0, r3)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
        Lb5:
            java.lang.String r6 = "Mandatory parameter 'to' missing"
            com.huawei.hms.support.log.HMSLog.e(r4, r6)
            android.content.Context r2 = r5.b
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_ARGUMENTS_INVALID
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r2, r1, r0, r3)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r6)
            throw r0
        Lc7:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r3 = "Message sent failed:"
            r6.append(r3)
            int r3 = r2.getExternalCode()
            r6.append(r3)
            r3 = 58
            r6.append(r3)
            java.lang.String r3 = r2.getMessage()
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.e(r4, r6)
            android.content.Context r6 = r5.b
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r6, r1, r0, r2)
            java.lang.UnsupportedOperationException r6 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = r2.getMessage()
            r6.<init>(r0)
            throw r6
    }

    public final void a(com.huawei.hms.support.api.entity.push.UpSendMsgReq r9, java.lang.String r10) {
            r8 = this;
            android.content.Context r0 = r8.b
            r1 = 0
            java.lang.String r0 = com.huawei.hms.aaid.utils.BaseUtils.getLocalToken(r0, r1)
            r9.setToken(r0)
            com.huawei.hms.common.HuaweiApi<com.huawei.hms.api.Api$ApiOptions$NoOptions> r0 = r8.c     // Catch: java.lang.Exception -> L25
            com.huawei.hms.push.task.SendUpStreamTask r7 = new com.huawei.hms.push.task.SendUpStreamTask     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "push.sendMessage"
            java.lang.String r3 = com.huawei.hms.utils.JsonUtil.createJsonString(r9)     // Catch: java.lang.Exception -> L25
            java.lang.String r5 = r9.getPackageName()     // Catch: java.lang.Exception -> L25
            java.lang.String r6 = r9.getMessageId()     // Catch: java.lang.Exception -> L25
            r1 = r7
            r4 = r10
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L25
            r0.doWrite(r7)     // Catch: java.lang.Exception -> L25
            goto L47
        L25:
            r9 = move-exception
            java.lang.Throwable r0 = r9.getCause()
            boolean r0 = r0 instanceof com.huawei.hms.common.ApiException
            java.lang.String r1 = "push.sendMessage"
            if (r0 == 0) goto L40
            java.lang.Throwable r9 = r9.getCause()
            com.huawei.hms.common.ApiException r9 = (com.huawei.hms.common.ApiException) r9
            android.content.Context r0 = r8.b
            int r9 = r9.getStatusCode()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r0, r1, r10, r9)
            goto L47
        L40:
            android.content.Context r9 = r8.b
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_INTERNAL_ERROR
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r9, r1, r10, r0)
        L47:
            return
    }

    public boolean isAutoInitEnabled() {
            r1 = this;
            android.content.Context r0 = r1.b
            boolean r0 = com.huawei.hms.aaid.init.AutoInitHelper.isAutoInitEnabled(r0)
            return r0
    }

    public void send(com.huawei.hms.push.RemoteMessage r3) {
            r2 = this;
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            java.lang.String r1 = "HmsMessaging"
            if (r0 != 0) goto L11
            java.lang.String r0 = "send upstream message"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r2.a(r3)
            return
        L11:
            java.lang.String r3 = "Operation(send) unsupported"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>(r3)
            throw r0
    }

    public void setAutoInitEnabled(boolean r2) {
            r1 = this;
            android.content.Context r0 = r1.b
            com.huawei.hms.aaid.init.AutoInitHelper.setAutoInitEnabled(r0, r2)
            return
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> subscribe(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "HmsMessaging"
            java.lang.String r1 = "invoke subscribe"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.String r0 = "Sub"
            com.huawei.hmf.tasks.Task r3 = r2.a(r3, r0)
            return r3
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> turnOffPush() {
            r3 = this;
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            java.lang.String r1 = "HmsMessaging"
            if (r0 == 0) goto L19
            java.lang.String r0 = "turn off for proxy"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r1 = r3.b
            r2 = 0
            com.huawei.hmf.tasks.Task r0 = r0.turnOff(r1, r2)
            return r0
        L19:
            java.lang.String r0 = "invoke turnOffPush"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 0
            com.huawei.hmf.tasks.Task r0 = r3.a(r0)
            return r0
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> turnOnPush() {
            r3 = this;
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            java.lang.String r1 = "HmsMessaging"
            if (r0 == 0) goto L19
            java.lang.String r0 = "turn on for proxy"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.aaid.plugin.PushProxy r0 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            android.content.Context r1 = r3.b
            r2 = 0
            com.huawei.hmf.tasks.Task r0 = r0.turnOn(r1, r2)
            return r0
        L19:
            java.lang.String r0 = "invoke turnOnPush"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r0 = 1
            com.huawei.hmf.tasks.Task r0 = r3.a(r0)
            return r0
    }

    public com.huawei.hmf.tasks.Task<java.lang.Void> unsubscribe(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "HmsMessaging"
            java.lang.String r1 = "invoke unsubscribe"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.String r0 = "UnSub"
            com.huawei.hmf.tasks.Task r3 = r2.a(r3, r0)
            return r3
    }
}
