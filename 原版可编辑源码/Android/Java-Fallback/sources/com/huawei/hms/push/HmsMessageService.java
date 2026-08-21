package com.huawei.hms.push;

public class HmsMessageService extends android.app.Service {
    public static final java.lang.String PROXY_TYPE = "proxy_type";
    public static final java.lang.String SUBJECT_ID = "subject_id";
    public final android.os.Messenger a;

    private class a extends android.os.Handler {
        public final com.huawei.hms.push.HmsMessageService a;

        public a(com.huawei.hms.push.HmsMessageService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public a(com.huawei.hms.push.HmsMessageService r1, com.huawei.hms.push.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void handleMessage(android.os.Message r5) {
                r4 = this;
                java.lang.String r0 = "HmsMessageService"
                if (r5 != 0) goto La
                java.lang.String r5 = "receive message is null"
                com.huawei.hms.support.log.HMSLog.e(r0, r5)
                return
            La:
                java.lang.String r1 = "handle message start "
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                android.os.Bundle r0 = r5.getData()
                if (r0 == 0) goto L2c
                android.content.Intent r1 = new android.content.Intent
                r1.<init>()
                r1.putExtras(r0)
                r2 = -1
                java.lang.String r3 = "inputType"
                int r0 = r0.getInt(r3, r2)
                r1.putExtra(r3, r0)
                com.huawei.hms.push.HmsMessageService r0 = r4.a
                r0.handleIntentMessage(r1)
            L2c:
                super.handleMessage(r5)
                return
        }
    }

    public HmsMessageService() {
            r3 = this;
            r3.<init>()
            android.os.Messenger r0 = new android.os.Messenger
            com.huawei.hms.push.HmsMessageService$a r1 = new com.huawei.hms.push.HmsMessageService$a
            r2 = 0
            r1.<init>(r3, r2)
            r0.<init>(r1)
            r3.a = r0
            return
    }

    public final android.os.Bundle a(android.content.Intent r4) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "message_id"
            java.lang.String r2 = r4.getStringExtra(r1)
            r0.putString(r1, r2)
            java.lang.String r1 = "message_body"
            byte[] r2 = r4.getByteArrayExtra(r1)
            r0.putByteArray(r1, r2)
            java.lang.String r1 = "device_token"
            java.lang.String r2 = r4.getStringExtra(r1)
            r0.putString(r1, r2)
            java.lang.String r1 = "inputType"
            r2 = -1
            int r4 = r4.getIntExtra(r1, r2)
            r2 = 1
            if (r4 != r2) goto L2d
            r0.putInt(r1, r2)
        L2d:
            return r0
    }

    public final synchronized void a(android.content.Intent r6, android.os.Bundle r7, java.lang.String r8) {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = "device_token"
            java.lang.String r0 = r6.getStringExtra(r0)     // Catch: java.lang.Throwable -> Lae
            r5.a(r0, r8)     // Catch: java.lang.Throwable -> Lae
            android.content.Context r1 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = r1.getPackageName()     // Catch: java.lang.Throwable -> Lae
            r3 = 0
            java.lang.String r2 = com.huawei.hms.aaid.utils.BaseUtils.getCacheData(r1, r2, r3)     // Catch: java.lang.Throwable -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lae
            r2 = r2 ^ 1
            boolean r4 = r7.isEmpty()     // Catch: java.lang.Throwable -> Lae
            if (r4 == 0) goto L36
            if (r2 == 0) goto L36
            java.lang.String r2 = "HmsMessageService"
            java.lang.String r4 = "onNewToken to host app."
            com.huawei.hms.support.log.HMSLog.i(r2, r4)     // Catch: java.lang.Throwable -> Lae
            r5.onNewToken(r0)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = r1.getPackageName()     // Catch: java.lang.Throwable -> Lae
            com.huawei.hms.aaid.utils.BaseUtils.deleteCacheData(r1, r2)     // Catch: java.lang.Throwable -> Lae
        L36:
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lae
            if (r2 == 0) goto L93
            java.lang.String[] r8 = com.huawei.hms.aaid.utils.BaseUtils.getSubjectIds(r1)     // Catch: java.lang.Throwable -> Lae
            if (r8 == 0) goto L7c
            int r2 = r8.length     // Catch: java.lang.Throwable -> Lae
            if (r2 != 0) goto L46
            goto L7c
        L46:
            int r6 = r8.length     // Catch: java.lang.Throwable -> Lae
            if (r3 >= r6) goto L78
            android.os.Bundle r6 = new android.os.Bundle     // Catch: java.lang.Throwable -> Lae
            r6.<init>()     // Catch: java.lang.Throwable -> Lae
            r7 = r8[r3]     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = "subject_id"
            r6.putString(r2, r7)     // Catch: java.lang.Throwable -> Lae
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r7.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = "onNewToken to sub app, subjectId:"
            r7.append(r2)     // Catch: java.lang.Throwable -> Lae
            r2 = r8[r3]     // Catch: java.lang.Throwable -> Lae
            r7.append(r2)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r2, r7)     // Catch: java.lang.Throwable -> Lae
            r5.onNewToken(r0, r6)     // Catch: java.lang.Throwable -> Lae
            r6 = r8[r3]     // Catch: java.lang.Throwable -> Lae
            r5.a(r0, r6)     // Catch: java.lang.Throwable -> Lae
            int r3 = r3 + 1
            goto L46
        L78:
            com.huawei.hms.aaid.utils.BaseUtils.clearSubjectIds(r1)     // Catch: java.lang.Throwable -> Lae
            goto Lac
        L7c:
            java.lang.String r8 = "HmsMessageService"
            java.lang.String r1 = "onNewToken to host app with bundle."
            com.huawei.hms.support.log.HMSLog.i(r8, r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r8 = "belongId"
            java.lang.String r6 = r6.getStringExtra(r8)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r8 = "belongId"
            r7.putString(r8, r6)     // Catch: java.lang.Throwable -> Lae
            r5.onNewToken(r0, r7)     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r5)
            return
        L93:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r6.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "onNewToken to sub app, subjectId:"
            r6.append(r1)     // Catch: java.lang.Throwable -> Lae
            r6.append(r8)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r8 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r8, r6)     // Catch: java.lang.Throwable -> Lae
            r5.onNewToken(r0, r7)     // Catch: java.lang.Throwable -> Lae
        Lac:
            monitor-exit(r5)
            return
        Lae:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final void a(android.content.Intent r6, java.lang.String r7) {
            r5 = this;
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            int r0 = r0.getInternalCode()
            java.lang.String r1 = "error"
            int r0 = r6.getIntExtra(r1, r0)
            java.lang.String r1 = "push.onNewToken"
            r5.a(r1, r7, r0)
            java.lang.String r1 = "subjectId"
            java.lang.String r1 = r6.getStringExtra(r1)
            java.lang.String r2 = "message_proxy_type"
            java.lang.String r2 = r6.getStringExtra(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "doOnNewToken:transactionId = "
            r3.append(r4)
            r3.append(r7)
            java.lang.String r7 = " , internalCode = "
            r3.append(r7)
            r3.append(r0)
            java.lang.String r7 = ",subjectId:"
            r3.append(r7)
            r3.append(r1)
            java.lang.String r7 = ",proxyType:"
            r3.append(r7)
            r3.append(r2)
            java.lang.String r7 = r3.toString()
            java.lang.String r3 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r3, r7)
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L5b
            java.lang.String r4 = "subject_id"
            r7.putString(r4, r1)
        L5b:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L66
            java.lang.String r4 = "proxy_type"
            r7.putString(r4, r2)
        L66:
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            int r2 = r2.getInternalCode()
            if (r0 != r2) goto L86
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Apply token OnNewToken, subId: "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r3, r0)
            r5.a(r6, r7, r1)
            goto L9d
        L86:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r2 = "Apply token failed, subId: "
            r6.append(r2)
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.i(r3, r6)
            r5.a(r7, r1, r0)
        L9d:
            return
    }

    public final synchronized void a(android.os.Bundle r5, java.lang.String r6, int r7) {
            r4 = this;
            monitor-enter(r4)
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> La9
            java.lang.String r1 = r0.getPackageName()     // Catch: java.lang.Throwable -> La9
            r2 = 0
            java.lang.String r1 = com.huawei.hms.aaid.utils.BaseUtils.getCacheData(r0, r1, r2)     // Catch: java.lang.Throwable -> La9
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La9
            r1 = r1 ^ 1
            boolean r3 = r5.isEmpty()     // Catch: java.lang.Throwable -> La9
            if (r3 == 0) goto L32
            if (r1 == 0) goto L32
            java.lang.String r1 = "HmsMessageService"
            java.lang.String r3 = "onTokenError to host app."
            com.huawei.hms.support.log.HMSLog.i(r1, r3)     // Catch: java.lang.Throwable -> La9
            com.huawei.hms.push.BaseException r1 = new com.huawei.hms.push.BaseException     // Catch: java.lang.Throwable -> La9
            r1.<init>(r7)     // Catch: java.lang.Throwable -> La9
            r4.onTokenError(r1)     // Catch: java.lang.Throwable -> La9
            java.lang.String r1 = r0.getPackageName()     // Catch: java.lang.Throwable -> La9
            com.huawei.hms.aaid.utils.BaseUtils.deleteCacheData(r0, r1)     // Catch: java.lang.Throwable -> La9
        L32:
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto L89
            java.lang.String[] r6 = com.huawei.hms.aaid.utils.BaseUtils.getSubjectIds(r0)     // Catch: java.lang.Throwable -> La9
            if (r6 == 0) goto L78
            int r1 = r6.length     // Catch: java.lang.Throwable -> La9
            if (r1 != 0) goto L42
            goto L78
        L42:
            int r5 = r6.length     // Catch: java.lang.Throwable -> La9
            if (r2 >= r5) goto L74
            android.os.Bundle r5 = new android.os.Bundle     // Catch: java.lang.Throwable -> La9
            r5.<init>()     // Catch: java.lang.Throwable -> La9
            r1 = r6[r2]     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = "subject_id"
            r5.putString(r3, r1)     // Catch: java.lang.Throwable -> La9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r1.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = "onTokenError to sub app, subjectId:"
            r1.append(r3)     // Catch: java.lang.Throwable -> La9
            r3 = r6[r2]     // Catch: java.lang.Throwable -> La9
            r1.append(r3)     // Catch: java.lang.Throwable -> La9
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r3, r1)     // Catch: java.lang.Throwable -> La9
            com.huawei.hms.push.BaseException r1 = new com.huawei.hms.push.BaseException     // Catch: java.lang.Throwable -> La9
            r1.<init>(r7)     // Catch: java.lang.Throwable -> La9
            r4.onTokenError(r1, r5)     // Catch: java.lang.Throwable -> La9
            int r2 = r2 + 1
            goto L42
        L74:
            com.huawei.hms.aaid.utils.BaseUtils.clearSubjectIds(r0)     // Catch: java.lang.Throwable -> La9
            goto La7
        L78:
            java.lang.String r6 = "HmsMessageService"
            java.lang.String r0 = "onTokenError to host app with bundle."
            com.huawei.hms.support.log.HMSLog.i(r6, r0)     // Catch: java.lang.Throwable -> La9
            com.huawei.hms.push.BaseException r6 = new com.huawei.hms.push.BaseException     // Catch: java.lang.Throwable -> La9
            r6.<init>(r7)     // Catch: java.lang.Throwable -> La9
            r4.onTokenError(r6, r5)     // Catch: java.lang.Throwable -> La9
            monitor-exit(r4)
            return
        L89:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r0.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r1 = "onTokenError to sub app, subjectId:"
            r0.append(r1)     // Catch: java.lang.Throwable -> La9
            r0.append(r6)     // Catch: java.lang.Throwable -> La9
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> La9
            java.lang.String r0 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r0, r6)     // Catch: java.lang.Throwable -> La9
            com.huawei.hms.push.BaseException r6 = new com.huawei.hms.push.BaseException     // Catch: java.lang.Throwable -> La9
            r6.<init>(r7)     // Catch: java.lang.Throwable -> La9
            r4.onTokenError(r6, r5)     // Catch: java.lang.Throwable -> La9
        La7:
            monitor-exit(r4)
            return
        La9:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            android.content.Context r0 = r3.getApplicationContext()
            java.lang.String r1 = com.huawei.hms.aaid.utils.BaseUtils.getLocalToken(r0, r5)
            boolean r1 = r4.equals(r1)
            if (r1 != 0) goto L20
            java.lang.String r1 = "HmsMessageService"
            java.lang.String r2 = "receive a token, refresh the local token"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            com.huawei.hms.aaid.utils.BaseUtils.saveToken(r0, r5, r4)
            return
        L20:
            com.huawei.hms.aaid.utils.BaseUtils.reportAaidToken(r0, r4)
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            java.lang.String r3 = "null"
        L8:
            android.content.Context r0 = r1.getApplicationContext()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r0, r2, r3, r4)
            return
    }

    public final void b(android.content.Intent r8) {
            r7 = this;
            java.lang.String r0 = "HmsMessageService"
            java.lang.String r1 = "parse batch response."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.String r1 = "batchMsgbody"
            java.lang.String r8 = r8.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto L14
            return
        L14:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L4e
            r1.<init>(r8)     // Catch: org.json.JSONException -> L4e
            r8 = 0
        L1a:
            int r2 = r1.length()     // Catch: org.json.JSONException -> L4e
            if (r8 >= r2) goto L53
            org.json.JSONObject r2 = r1.getJSONObject(r8)     // Catch: org.json.JSONException -> L4e
            java.lang.String r3 = "transactionId"
            java.lang.String r3 = r2.optString(r3)     // Catch: org.json.JSONException -> L4e
            java.lang.String r4 = "msgId"
            java.lang.String r4 = r2.optString(r4)     // Catch: org.json.JSONException -> L4e
            java.lang.String r5 = "ret"
            com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_UNKNOWN     // Catch: org.json.JSONException -> L4e
            int r6 = r6.getInternalCode()     // Catch: org.json.JSONException -> L4e
            int r2 = r2.optInt(r5, r6)     // Catch: org.json.JSONException -> L4e
            com.huawei.hms.aaid.constant.ErrorEnum r5 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS     // Catch: org.json.JSONException -> L4e
            int r5 = r5.getInternalCode()     // Catch: org.json.JSONException -> L4e
            if (r5 != r2) goto L48
            r7.b(r3, r4)     // Catch: org.json.JSONException -> L4e
            goto L4b
        L48:
            r7.b(r3, r4, r2)     // Catch: org.json.JSONException -> L4e
        L4b:
            int r8 = r8 + 1
            goto L1a
        L4e:
            java.lang.String r8 = "parse batch response failed."
            com.huawei.hms.support.log.HMSLog.w(r0, r8)
        L53:
            return
    }

    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onMessageSent, message id:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ", transactionId: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            int r0 = r0.getInternalCode()
            java.lang.String r1 = "push.sendMessageRet"
            r2.a(r1, r3, r0)
            r2.onMessageSent(r4)
            return
    }

    public final void b(java.lang.String r3, java.lang.String r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSendError, message id:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " error:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = ", transactionId: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.String r0 = "push.sendMessageRet"
            r2.a(r0, r3, r5)
            com.huawei.hms.push.SendException r3 = new com.huawei.hms.push.SendException
            r3.<init>(r5)
            r2.onSendError(r4, r3)
            return
    }

    public void doMsgReceived(android.content.Intent r2) {
            r1 = this;
            android.os.Bundle r2 = r1.a(r2)
            com.huawei.hms.push.RemoteMessage r0 = new com.huawei.hms.push.RemoteMessage
            r0.<init>(r2)
            r1.onMessageReceived(r0)
            return
    }

    public void handleIntentMessage(android.content.Intent r7) {
            r6 = this;
            java.lang.String r0 = "HmsMessageService"
            if (r7 != 0) goto La
            java.lang.String r7 = "receive message is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            return
        La:
            java.lang.String r1 = "message_id"
            java.lang.String r1 = r7.getStringExtra(r1)
            java.lang.String r2 = "message_type"
            java.lang.String r2 = r7.getStringExtra(r2)
            java.lang.String r3 = "transaction_id"
            java.lang.String r3 = r7.getStringExtra(r3)
            java.lang.String r4 = "new_token"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L2e
            java.lang.String r1 = "onNewToken"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r6.a(r7, r3)
            goto L104
        L2e:
            java.lang.String r4 = "received_message"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L5a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onMessageReceived, message id:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            int r0 = r0.getInternalCode()
            java.lang.String r2 = "push.receiveMessage"
            r6.a(r2, r1, r0)
            r6.doMsgReceived(r7)
            goto L104
        L5a:
            java.lang.String r4 = "sent_message"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L67
            r6.b(r3, r1)
            goto L104
        L67:
            java.lang.String r4 = "send_error"
            boolean r4 = r4.equals(r2)
            java.lang.String r5 = "error"
            if (r4 == 0) goto L80
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_UNKNOWN
            int r0 = r0.getInternalCode()
            int r7 = r7.getIntExtra(r5, r0)
            r6.b(r3, r1, r7)
            goto L104
        L80:
            java.lang.String r4 = "delivery"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto Lc4
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_APP_SERVER_NOT_ONLINE
            int r2 = r2.getInternalCode()
            int r7 = r7.getIntExtra(r5, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "onMessageDelivery, message id:"
            r2.append(r4)
            r2.append(r1)
            java.lang.String r4 = ", status:"
            r2.append(r4)
            r2.append(r7)
            java.lang.String r4 = ", transactionId: "
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r2)
            java.lang.String r0 = "push.deliveryMessage"
            r6.a(r0, r3, r7)
            com.huawei.hms.push.SendException r0 = new com.huawei.hms.push.SendException
            r0.<init>(r7)
            r6.onMessageDelivered(r1, r0)
            goto L104
        Lc4:
            java.lang.String r3 = "server_deleted_message"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto Le4
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "delete message, message id:"
            r7.append(r2)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r7)
            r6.onDeletedMessages()
            goto L104
        Le4:
            java.lang.String r1 = "batchSent"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lf0
            r6.b(r7)
            goto L104
        Lf0:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "Receive unknown message: "
            r7.append(r1)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
        L104:
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            java.lang.String r2 = "HmsMessageService"
            java.lang.String r0 = "start to bind"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            android.os.Messenger r2 = r1.a
            android.os.IBinder r2 = r2.getBinder()
            return r2
    }

    public void onDeletedMessages() {
            r0 = this;
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            java.lang.String r0 = "HmsMessageService"
            java.lang.String r1 = "start to destroy"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            super.onDestroy()
            return
    }

    public void onMessageDelivered(java.lang.String r1, java.lang.Exception r2) {
            r0 = this;
            return
    }

    public void onMessageReceived(com.huawei.hms.push.RemoteMessage r1) {
            r0 = this;
            return
    }

    public void onMessageSent(java.lang.String r1) {
            r0 = this;
            return
    }

    public void onNewToken(java.lang.String r1) {
            r0 = this;
            return
    }

    public void onNewToken(java.lang.String r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    public void onSendError(java.lang.String r1, java.lang.Exception r2) {
            r0 = this;
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "start to command , startId = "
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "HmsMessageService"
            com.huawei.hms.support.log.HMSLog.i(r4, r3)
            r1.handleIntentMessage(r2)
            r2 = 2
            return r2
    }

    public void onTokenError(java.lang.Exception r1) {
            r0 = this;
            return
    }

    public void onTokenError(java.lang.Exception r1, android.os.Bundle r2) {
            r0 = this;
            return
    }
}
