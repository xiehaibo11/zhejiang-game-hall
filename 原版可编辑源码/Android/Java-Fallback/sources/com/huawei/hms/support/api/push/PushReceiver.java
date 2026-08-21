package com.huawei.hms.support.api.push;

public final class PushReceiver extends android.content.BroadcastReceiver {

    private static class a implements java.lang.Runnable {
        public android.content.Context a;
        public android.content.Intent b;

        public a(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public a(android.content.Context r1, android.content.Intent r2, com.huawei.hms.push.f r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public void run() {
                r10 = this;
                android.content.Intent r0 = new android.content.Intent
                java.lang.String r1 = "com.huawei.push.action.MESSAGING_EVENT"
                r0.<init>(r1)
                android.content.Intent r1 = r10.b
                java.lang.String r1 = r1.getPackage()
                r0.setPackage(r1)
                android.content.Intent r1 = r10.b
                org.json.JSONObject r1 = com.huawei.hms.support.api.push.PushReceiver.a(r1)
                java.lang.String r2 = ""
                java.lang.String r3 = "moduleName"
                java.lang.String r3 = com.huawei.hms.push.utils.JsonUtil.getString(r1, r3, r2)
                r4 = 0
                java.lang.String r5 = "msgType"
                int r5 = com.huawei.hms.push.utils.JsonUtil.getInt(r1, r5, r4)
                java.lang.String r6 = "status"
                int r4 = com.huawei.hms.push.utils.JsonUtil.getInt(r1, r6, r4)
                com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
                int r6 = r6.getInternalCode()
                if (r6 == r4) goto L39
                com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_APP_SERVER_NOT_ONLINE
                int r4 = r4.getInternalCode()
            L39:
                android.os.Bundle r6 = new android.os.Bundle
                r6.<init>()
                java.lang.String r7 = "Push"
                boolean r3 = r7.equals(r3)
                java.lang.String r7 = "message_id"
                java.lang.String r8 = "message_type"
                r9 = 1
                if (r3 == 0) goto L6c
                if (r5 != r9) goto L6c
                java.lang.String r3 = "delivery"
                r6.putString(r8, r3)
                java.lang.String r3 = "msgId"
                java.lang.String r3 = com.huawei.hms.push.utils.JsonUtil.getString(r1, r3, r2)
                r6.putString(r7, r3)
                java.lang.String r3 = "error"
                r6.putInt(r3, r4)
                java.lang.String r3 = "transactionId"
                java.lang.String r1 = com.huawei.hms.push.utils.JsonUtil.getString(r1, r3, r2)
                java.lang.String r2 = "transaction_id"
                r6.putString(r2, r1)
                goto Lb9
            L6c:
                android.content.Intent r1 = r10.b
                android.os.Bundle r1 = r1.getExtras()
                if (r1 == 0) goto L7d
                android.content.Intent r1 = r10.b
                android.os.Bundle r1 = r1.getExtras()
                r6.putAll(r1)
            L7d:
                java.lang.String r1 = "received_message"
                r6.putString(r8, r1)
                android.content.Intent r1 = r10.b
                java.lang.String r2 = "msgIdStr"
                java.lang.String r1 = r1.getStringExtra(r2)
                r6.putString(r7, r1)
                android.content.Intent r1 = r10.b
                java.lang.String r2 = "msg_data"
                byte[] r1 = r1.getByteArrayExtra(r2)
                java.lang.String r2 = "message_body"
                r6.putByteArray(r2, r1)
                android.content.Intent r1 = r10.b
                java.lang.String r2 = "device_token"
                byte[] r1 = r1.getByteArrayExtra(r2)
                java.lang.String r1 = com.huawei.hms.push.v.a(r1)
                r6.putString(r2, r1)
                java.lang.String r1 = "inputType"
                r6.putInt(r1, r9)
                android.content.Intent r1 = r10.b
                java.lang.String r2 = "message_proxy_type"
                java.lang.String r1 = r1.getStringExtra(r2)
                r6.putString(r2, r1)
            Lb9:
                com.huawei.hms.push.h r1 = new com.huawei.hms.push.h
                r1.<init>()
                android.content.Context r2 = r10.a
                boolean r0 = r1.a(r2, r6, r0)
                java.lang.String r1 = "PushReceiver"
                java.lang.String r2 = "receive "
                if (r0 == 0) goto Le8
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                android.content.Intent r2 = r10.b
                java.lang.String r2 = r2.getAction()
                r0.append(r2)
                java.lang.String r2 = " and start service success"
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                com.huawei.hms.support.log.HMSLog.i(r1, r0)
                goto L105
            Le8:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                android.content.Intent r2 = r10.b
                java.lang.String r2 = r2.getAction()
                r0.append(r2)
                java.lang.String r2 = " and start service failed"
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                com.huawei.hms.support.log.HMSLog.e(r1, r0)
            L105:
                return
        }
    }

    private static class b implements java.lang.Runnable {
        public android.content.Context a;
        public android.content.Intent b;

        public b(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public b(android.content.Context r1, android.content.Intent r2, com.huawei.hms.push.f r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public void run() {
                r11 = this;
                java.lang.String r0 = "belongId"
                java.lang.String r1 = "error"
                java.lang.String r2 = "subjectId"
                java.lang.String r3 = "transaction_id"
                java.lang.String r4 = "device_token"
                java.lang.String r5 = "PushReceiver"
                android.content.Intent r6 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                byte[] r6 = r6.getByteArrayExtra(r4)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                if (r6 == 0) goto Lad
                int r7 = r6.length     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                if (r7 != 0) goto L19
                goto Lad
            L19:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r7.<init>()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r8 = "receive a push token: "
                r7.append(r8)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Context r8 = r11.a     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r7.append(r8)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                com.huawei.hms.support.log.HMSLog.i(r5, r7)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r7 = new android.content.Intent     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r8 = "com.huawei.push.action.MESSAGING_EVENT"
                r7.<init>(r8)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r8 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r8 = r8.getPackage()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r7.setPackage(r8)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.os.Bundle r8 = new android.os.Bundle     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.<init>()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r9 = "message_type"
                java.lang.String r10 = "new_token"
                r8.putString(r9, r10)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r6 = com.huawei.hms.push.v.a(r6)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.putString(r4, r6)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r4 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r4 = r4.getStringExtra(r3)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.putString(r3, r4)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r3 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r3 = r3.getStringExtra(r2)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.putString(r2, r3)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r2 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                int r3 = r3.getInternalCode()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                int r2 = r2.getIntExtra(r1, r3)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.putInt(r1, r2)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r1 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r1 = r1.getStringExtra(r0)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r8.putString(r0, r1)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                com.huawei.hms.push.h r0 = new com.huawei.hms.push.h     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r0.<init>()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Context r1 = r11.a     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                boolean r0 = r0.a(r1, r8, r7)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                if (r0 != 0) goto Lbe
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r0.<init>()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r1 = "receive "
                r0.append(r1)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                android.content.Intent r1 = r11.b     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r1 = r1.getAction()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                r0.append(r1)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r1 = " and start service failed"
                r0.append(r1)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                com.huawei.hms.support.log.HMSLog.e(r5, r0)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                goto Lbe
            Lad:
                java.lang.String r0 = "get a deviceToken, but it is null or empty"
                com.huawei.hms.support.log.HMSLog.i(r5, r0)     // Catch: java.lang.Exception -> Lb3 java.util.concurrent.RejectedExecutionException -> Lb9
                return
            Lb3:
                java.lang.String r0 = "handle push token error"
                com.huawei.hms.support.log.HMSLog.e(r5, r0)
                goto Lbe
            Lb9:
                java.lang.String r0 = "execute task error"
                com.huawei.hms.support.log.HMSLog.e(r5, r0)
            Lbe:
                return
        }
    }

    public PushReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a(android.content.Intent r0) {
            org.json.JSONObject r0 = b(r0)
            return r0
    }

    public static org.json.JSONObject a(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "msgContent"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static org.json.JSONObject a(byte[] r1) {
            java.lang.String r1 = com.huawei.hms.push.v.a(r1)     // Catch: org.json.JSONException -> La
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> La
            r0.<init>(r1)     // Catch: org.json.JSONException -> La
            return r0
        La:
            java.lang.String r1 = "PushReceiver"
            java.lang.String r0 = "JSONException:parse message body failed."
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
            r1 = 0
            return r1
    }

    public static org.json.JSONObject b(android.content.Intent r4) {
            java.lang.String r0 = "msg_data"
            byte[] r4 = r4.getByteArrayExtra(r0)
            org.json.JSONObject r4 = a(r4)
            org.json.JSONObject r0 = a(r4)
            r1 = 0
            java.lang.String r2 = "data"
            java.lang.String r2 = com.huawei.hms.push.utils.JsonUtil.getString(r0, r2, r1)
            org.json.JSONObject r3 = b(r0)
            boolean r0 = com.huawei.hms.push.s.a(r0, r3, r2)
            if (r0 == 0) goto L20
            return r4
        L20:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L27
            return r1
        L27:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2d
            r4.<init>(r2)     // Catch: org.json.JSONException -> L2d
            return r4
        L2d:
            return r1
    }

    public static org.json.JSONObject b(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "psContent"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public final void a(android.content.Context r5, android.content.Intent r6) {
            r4 = this;
            java.lang.String r0 = "PushReceiver"
            java.lang.String r1 = "msg_data"
            boolean r1 = r6.hasExtra(r1)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            if (r1 == 0) goto L18
            java.util.concurrent.ThreadPoolExecutor r1 = com.huawei.hms.push.u.a()     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            com.huawei.hms.support.api.push.PushReceiver$a r2 = new com.huawei.hms.support.api.push.PushReceiver$a     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            r3 = 0
            r2.<init>(r5, r6, r3)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            r1.execute(r2)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            goto L29
        L18:
            java.lang.String r5 = "This push message dose not sent by hwpush."
            com.huawei.hms.support.log.HMSLog.i(r0, r5)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            goto L29
        L1e:
            java.lang.String r5 = "handlePushMessageEvent execute task error"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            goto L29
        L24:
            java.lang.String r5 = "handlePushMessageEvent execute task runtime exception."
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
        L29:
            return
    }

    public final void b(android.content.Context r5, android.content.Intent r6) {
            r4 = this;
            java.lang.String r0 = "PushReceiver"
            java.lang.String r1 = "device_token"
            boolean r1 = r6.hasExtra(r1)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            if (r1 == 0) goto L18
            java.util.concurrent.ThreadPoolExecutor r1 = com.huawei.hms.push.u.a()     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            com.huawei.hms.support.api.push.PushReceiver$b r2 = new com.huawei.hms.support.api.push.PushReceiver$b     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            r3 = 0
            r2.<init>(r5, r6, r3)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            r1.execute(r2)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            goto L29
        L18:
            java.lang.String r5 = "This message dose not sent by hwpush."
            com.huawei.hms.support.log.HMSLog.i(r0, r5)     // Catch: java.lang.Exception -> L1e java.lang.RuntimeException -> L24
            goto L29
        L1e:
            java.lang.String r5 = "handlePushTokenEvent execute task error"
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            goto L29
        L24:
            java.lang.String r5 = "handlePushMessageEvent execute task runtime exception."
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
        L29:
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r5 == 0) goto L78
            if (r4 != 0) goto L5
            goto L78
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "push receive broadcast message, Intent:"
            r0.append(r1)
            java.lang.String r1 = r5.getAction()
            r0.append(r1)
            java.lang.String r1 = " pkgName:"
            r0.append(r1)
            java.lang.String r1 = r4.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushReceiver"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.String r0 = "TestIntent"
            r5.getStringExtra(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = r5.getAction()
            android.content.Context r2 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r2 != 0) goto L41
            android.content.Context r2 = r4.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
        L41:
            java.lang.String r2 = "com.huawei.android.push.intent.REGISTRATION"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L4d
            r3.b(r4, r5)
            goto L72
        L4d:
            java.lang.String r2 = "com.huawei.android.push.intent.RECEIVE"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L59
            r3.a(r4, r5)
            goto L72
        L59:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "message can't be recognised:"
            r4.append(r0)
            r0 = 0
            java.lang.String r5 = r5.toUri(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
        L72:
            return
        L73:
            java.lang.String r4 = "intent has some error"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L78:
            return
    }
}
