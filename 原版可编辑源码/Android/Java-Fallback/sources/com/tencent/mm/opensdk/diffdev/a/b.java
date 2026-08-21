package com.tencent.mm.opensdk.diffdev.a;

public class b extends android.os.AsyncTask<java.lang.Void, java.lang.Void, com.tencent.mm.opensdk.diffdev.a.b.a> {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private com.tencent.mm.opensdk.diffdev.OAuthListener f;
    private com.tencent.mm.opensdk.diffdev.a.c g;

    static class a {
        public com.tencent.mm.opensdk.diffdev.OAuthErrCode a;
        public java.lang.String b;
        public java.lang.String c;
        public java.lang.String d;
        public byte[] e;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.tencent.mm.opensdk.diffdev.a.b.a a(byte[] r7) {
                com.tencent.mm.opensdk.diffdev.a.b$a r0 = new com.tencent.mm.opensdk.diffdev.a.b$a
                r0.<init>()
                java.lang.String r1 = "MicroMsg.SDK.GetQRCodeResult"
                if (r7 == 0) goto Lcc
                int r2 = r7.length
                if (r2 != 0) goto Le
                goto Lcc
            Le:
                r2 = 1
                r3 = 0
                java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> Lbc
                java.lang.String r5 = "utf-8"
                r4.<init>(r7, r5)     // Catch: java.lang.Exception -> Lbc
                org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> La5
                r7.<init>(r4)     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = "errcode"
                int r4 = r7.getInt(r4)     // Catch: java.lang.Exception -> La5
                if (r4 == 0) goto L3f
                java.lang.String r5 = "resp errcode = %d"
                java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> La5
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> La5
                r6[r3] = r4     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = java.lang.String.format(r5, r6)     // Catch: java.lang.Exception -> La5
                com.tencent.mm.opensdk.utils.Log.e(r1, r4)     // Catch: java.lang.Exception -> La5
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r4 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NormalErr     // Catch: java.lang.Exception -> La5
                r0.a = r4     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = "errmsg"
                r7.optString(r4)     // Catch: java.lang.Exception -> La5
                return r0
            L3f:
                java.lang.String r4 = "qrcode"
                org.json.JSONObject r4 = r7.getJSONObject(r4)     // Catch: java.lang.Exception -> La5
                java.lang.String r5 = "qrcodebase64"
                java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Exception -> La5
                if (r4 == 0) goto L9b
                int r5 = r4.length()     // Catch: java.lang.Exception -> La5
                if (r5 != 0) goto L54
                goto L9b
            L54:
                byte[] r4 = android.util.Base64.decode(r4, r3)     // Catch: java.lang.Exception -> La5
                if (r4 == 0) goto L91
                int r5 = r4.length     // Catch: java.lang.Exception -> La5
                if (r5 != 0) goto L5e
                goto L91
            L5e:
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r5 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_OK     // Catch: java.lang.Exception -> La5
                r0.a = r5     // Catch: java.lang.Exception -> La5
                r0.e = r4     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = "uuid"
                java.lang.String r4 = r7.getString(r4)     // Catch: java.lang.Exception -> La5
                r0.b = r4     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = "appname"
                java.lang.String r7 = r7.getString(r4)     // Catch: java.lang.Exception -> La5
                r0.c = r7     // Catch: java.lang.Exception -> La5
                java.lang.String r4 = "parse succ, save in memory, uuid = %s, appname = %s, imgBufLength = %d"
                r5 = 3
                java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> La5
                java.lang.String r6 = r0.b     // Catch: java.lang.Exception -> La5
                r5[r3] = r6     // Catch: java.lang.Exception -> La5
                r5[r2] = r7     // Catch: java.lang.Exception -> La5
                r7 = 2
                byte[] r6 = r0.e     // Catch: java.lang.Exception -> La5
                int r6 = r6.length     // Catch: java.lang.Exception -> La5
                java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> La5
                r5[r7] = r6     // Catch: java.lang.Exception -> La5
                java.lang.String r7 = java.lang.String.format(r4, r5)     // Catch: java.lang.Exception -> La5
                com.tencent.mm.opensdk.utils.Log.d(r1, r7)     // Catch: java.lang.Exception -> La5
                return r0
            L91:
                java.lang.String r7 = "parse fail, qrcodeBuf is null"
                com.tencent.mm.opensdk.utils.Log.e(r1, r7)     // Catch: java.lang.Exception -> La5
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r7 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_JsonDecodeErr     // Catch: java.lang.Exception -> La5
                r0.a = r7     // Catch: java.lang.Exception -> La5
                return r0
            L9b:
                java.lang.String r7 = "parse fail, qrcodeBase64 is null"
                com.tencent.mm.opensdk.utils.Log.e(r1, r7)     // Catch: java.lang.Exception -> La5
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r7 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_JsonDecodeErr     // Catch: java.lang.Exception -> La5
                r0.a = r7     // Catch: java.lang.Exception -> La5
                return r0
            La5:
                r7 = move-exception
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.String r7 = r7.getMessage()
                r2[r3] = r7
                java.lang.String r7 = "parse json fail, ex = %s"
                java.lang.String r7 = java.lang.String.format(r7, r2)
            Lb4:
                com.tencent.mm.opensdk.utils.Log.e(r1, r7)
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r7 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NormalErr
            Lb9:
                r0.a = r7
                return r0
            Lbc:
                r7 = move-exception
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.String r7 = r7.getMessage()
                r2[r3] = r7
                java.lang.String r7 = "parse fail, build String fail, ex = %s"
                java.lang.String r7 = java.lang.String.format(r7, r2)
                goto Lb4
            Lcc:
                java.lang.String r7 = "parse fail, buf is null"
                com.tencent.mm.opensdk.utils.Log.e(r1, r7)
                com.tencent.mm.opensdk.diffdev.OAuthErrCode r7 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NetworkErr
                goto Lb9
        }
    }

    public b(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tencent.mm.opensdk.diffdev.OAuthListener r6) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            return
    }

    public boolean a() {
            r2 = this;
            java.lang.String r0 = "MicroMsg.SDK.GetQRCodeTask"
            java.lang.String r1 = "cancelTask"
            com.tencent.mm.opensdk.utils.Log.i(r0, r1)
            com.tencent.mm.opensdk.diffdev.a.c r0 = r2.g
            r1 = 1
            if (r0 != 0) goto L11
            boolean r0 = r2.cancel(r1)
            return r0
        L11:
            boolean r0 = r0.cancel(r1)
            return r0
    }

    @Override
    protected com.tencent.mm.opensdk.diffdev.a.b.a doInBackground(java.lang.Void[] r10) {
            r9 = this;
            java.lang.Void[] r10 = (java.lang.Void[]) r10
            java.lang.Thread r10 = java.lang.Thread.currentThread()
            java.lang.String r0 = "OpenSdkGetQRCodeTask"
            r10.setName(r0)
            java.lang.String r10 = "MicroMsg.SDK.GetQRCodeTask"
            java.lang.String r0 = "doInBackground"
            com.tencent.mm.opensdk.utils.Log.i(r10, r0)
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r9.a
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r9.c
            r3 = 1
            r0[r3] = r1
            java.lang.String r1 = r9.d
            r4 = 2
            r0[r4] = r1
            java.lang.String r1 = r9.b
            r5 = 3
            r0[r5] = r1
            java.lang.String r1 = r9.e
            r5 = 4
            r0[r5] = r1
            java.lang.String r1 = "https://open.weixin.qq.com/connect/sdk/qrconnect?appid=%s&noncestr=%s&timestamp=%s&scope=%s&signature=%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            long r5 = java.lang.System.currentTimeMillis()
            r1 = 60000(0xea60, float:8.4078E-41)
            byte[] r1 = com.tencent.mm.opensdk.channel.a.a.a(r0, r1)
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r2] = r0
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 - r5
            java.lang.Long r0 = java.lang.Long.valueOf(r7)
            r4[r3] = r0
            java.lang.String r0 = "doInBackground, url = %s, time consumed = %d(ms)"
            java.lang.String r0 = java.lang.String.format(r0, r4)
            com.tencent.mm.opensdk.utils.Log.d(r10, r0)
            com.tencent.mm.opensdk.diffdev.a.b$a r10 = com.tencent.mm.opensdk.diffdev.a.b.a.a(r1)
            return r10
    }

    @Override
    protected void onPostExecute(com.tencent.mm.opensdk.diffdev.a.b.a r5) {
            r4 = this;
            com.tencent.mm.opensdk.diffdev.a.b$a r5 = (com.tencent.mm.opensdk.diffdev.a.b.a) r5
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = r5.a
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_OK
            java.lang.String r2 = "MicroMsg.SDK.GetQRCodeTask"
            r3 = 0
            if (r0 != r1) goto L4a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPostExecute, get qrcode success imgBufSize = "
            r0.append(r1)
            byte[] r1 = r5.e
            int r1 = r1.length
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tencent.mm.opensdk.utils.Log.d(r2, r0)
            com.tencent.mm.opensdk.diffdev.OAuthListener r0 = r4.f
            java.lang.String r1 = r5.d
            byte[] r2 = r5.e
            r0.onAuthGotQrcode(r1, r2)
            com.tencent.mm.opensdk.diffdev.a.c r0 = new com.tencent.mm.opensdk.diffdev.a.c
            java.lang.String r5 = r5.b
            com.tencent.mm.opensdk.diffdev.OAuthListener r1 = r4.f
            r0.<init>(r5, r1)
            r4.g = r0
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r5 < r1) goto L44
            java.util.concurrent.Executor r5 = android.os.AsyncTask.THREAD_POOL_EXECUTOR
            java.lang.Void[] r1 = new java.lang.Void[r3]
            r0.executeOnExecutor(r5, r1)
            goto L60
        L44:
            java.lang.Void[] r5 = new java.lang.Void[r3]
            r0.execute(r5)
            goto L60
        L4a:
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r3] = r0
            java.lang.String r0 = "onPostExecute, get qrcode fail, OAuthErrCode = %s"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            com.tencent.mm.opensdk.diffdev.OAuthListener r0 = r4.f
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r5 = r5.a
            r1 = 0
            r0.onAuthFinish(r5, r1)
        L60:
            return
    }
}
