package com.huawei.hms.common.internal;

public abstract class HmsClient extends com.huawei.hms.common.internal.BaseHmsClient implements com.huawei.hms.common.internal.AnyClient {
    private static final java.lang.String TAG = "HmsClient";

    private static class BaseAdapterCallBack implements com.huawei.hms.adapter.BaseAdapter.BaseCallBack {
        private final com.huawei.hms.common.internal.AnyClient.CallBack callback;
        private final java.lang.ref.WeakReference<com.huawei.hms.common.internal.HmsClient> hmsClient;

        BaseAdapterCallBack(com.huawei.hms.common.internal.HmsClient r1, com.huawei.hms.common.internal.AnyClient.CallBack r2) {
                r0 = this;
                r0.<init>()
                r0.callback = r2
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                r2.<init>(r1)
                r0.hmsClient = r2
                return
        }

        private void doCallback(java.lang.String r4, java.lang.String r5) {
                r3 = this;
                com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
                r0.<init>()
                boolean r4 = r0.fromJson(r4)
                if (r4 == 0) goto L2e
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r1 = "receive msg "
                r4.append(r1)
                r4.append(r0)
                java.lang.String r4 = r4.toString()
                java.lang.String r1 = "HmsClient"
                com.huawei.hms.support.log.HMSLog.i(r1, r4)
                java.lang.String r4 = r0.getSessionId()
                r3.updateSessionId(r4)
                com.huawei.hms.common.internal.AnyClient$CallBack r4 = r3.callback
                r4.onCallback(r0, r5)
                goto L47
            L2e:
                com.huawei.hms.common.internal.AnyClient$CallBack r4 = r3.callback
                com.huawei.hms.common.internal.ResponseHeader r5 = new com.huawei.hms.common.internal.ResponseHeader
                r0 = 1
                r1 = 907135000(0x3611c818, float:2.1723154E-6)
                java.lang.String r2 = "response header json error"
                r5.<init>(r0, r1, r2)
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r0 = r0.toString()
                r4.onCallback(r5, r0)
            L47:
                return
        }

        private void doCallback(java.lang.String r3, java.lang.String r4, android.os.Parcelable r5) {
                r2 = this;
                com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
                r0.<init>()
                boolean r3 = r0.fromJson(r3)
                if (r3 == 0) goto L31
                r0.setParcelable(r5)
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = "receive msg "
                r3.append(r5)
                r3.append(r0)
                java.lang.String r3 = r3.toString()
                java.lang.String r5 = "HmsClient"
                com.huawei.hms.support.log.HMSLog.i(r5, r3)
                java.lang.String r3 = r0.getSessionId()
                r2.updateSessionId(r3)
                com.huawei.hms.common.internal.AnyClient$CallBack r3 = r2.callback
                r3.onCallback(r0, r4)
                goto L4a
            L31:
                com.huawei.hms.common.internal.AnyClient$CallBack r3 = r2.callback
                com.huawei.hms.common.internal.ResponseHeader r4 = new com.huawei.hms.common.internal.ResponseHeader
                r5 = 1
                r0 = 907135000(0x3611c818, float:2.1723154E-6)
                java.lang.String r1 = "response header json error"
                r4.<init>(r5, r0, r1)
                org.json.JSONObject r5 = new org.json.JSONObject
                r5.<init>()
                java.lang.String r5 = r5.toString()
                r3.onCallback(r4, r5)
            L4a:
                return
        }

        private void updateSessionId(java.lang.String r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.huawei.hms.common.internal.HmsClient> r0 = r1.hmsClient
                java.lang.Object r0 = r0.get()
                com.huawei.hms.common.internal.HmsClient r0 = (com.huawei.hms.common.internal.HmsClient) r0
                if (r0 == 0) goto Ld
                r0.updateSessionId(r2)
            Ld:
                return
        }

        @Override
        public void onComplete(java.lang.String r1, java.lang.String r2, android.os.Parcelable r3) {
                r0 = this;
                if (r3 != 0) goto L6
                r0.doCallback(r1, r2)
                goto L9
            L6:
                r0.doCallback(r1, r2, r3)
            L9:
                return
        }

        @Override
        public void onError(java.lang.String r5) {
                r4 = this;
                com.huawei.hms.common.internal.ResponseWrap r0 = new com.huawei.hms.common.internal.ResponseWrap
                com.huawei.hms.common.internal.ResponseHeader r1 = new com.huawei.hms.common.internal.ResponseHeader
                r1.<init>()
                r0.<init>(r1)
                boolean r5 = r0.fromJson(r5)
                if (r5 == 0) goto L3b
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r1 = "receive msg "
                r5.append(r1)
                r5.append(r0)
                java.lang.String r5 = r5.toString()
                java.lang.String r1 = "HmsClient"
                com.huawei.hms.support.log.HMSLog.i(r1, r5)
                com.huawei.hms.common.internal.ResponseHeader r5 = r0.getResponseHeader()
                java.lang.String r1 = r5.getSessionId()
                r4.updateSessionId(r1)
                com.huawei.hms.common.internal.AnyClient$CallBack r1 = r4.callback
                java.lang.String r0 = r0.getBody()
                r1.onCallback(r5, r0)
                goto L54
            L3b:
                com.huawei.hms.common.internal.AnyClient$CallBack r5 = r4.callback
                com.huawei.hms.common.internal.ResponseHeader r0 = new com.huawei.hms.common.internal.ResponseHeader
                r1 = 1
                r2 = 907135000(0x3611c818, float:2.1723154E-6)
                java.lang.String r3 = "response header json error"
                r0.<init>(r1, r2, r3)
                org.json.JSONObject r1 = new org.json.JSONObject
                r1.<init>()
                java.lang.String r1 = r1.toString()
                r5.onCallback(r0, r1)
            L54:
                return
        }
    }

    public HmsClient(android.content.Context r1, com.huawei.hms.common.internal.ClientSettings r2, com.huawei.hms.common.internal.BaseHmsClient.OnConnectionFailedListener r3, com.huawei.hms.common.internal.BaseHmsClient.ConnectionCallbacks r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    public void post(com.huawei.hms.core.aidl.IMessageEntity r4, java.lang.String r5, com.huawei.hms.common.internal.AnyClient.CallBack r6) {
            r3 = this;
            java.lang.String r0 = "HmsClient"
            if (r6 != 0) goto La
            java.lang.String r4 = "callback is invalid, discard."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return
        La:
            boolean r1 = r4 instanceof com.huawei.hms.common.internal.RequestHeader
            r2 = 1
            if (r1 == 0) goto L71
            if (r5 != 0) goto L12
            goto L71
        L12:
            boolean r1 = r3.isConnected()
            if (r1 != 0) goto L34
            java.lang.String r4 = "post failed for no connected."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            com.huawei.hms.common.internal.ResponseHeader r4 = new com.huawei.hms.common.internal.ResponseHeader
            r5 = 907135001(0x3611c819, float:2.1723156E-6)
            java.lang.String r0 = "Not Connected"
            r4.<init>(r2, r5, r0)
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r5 = r5.toString()
            r6.onCallback(r4, r5)
            return
        L34:
            com.huawei.hms.common.internal.RequestHeader r4 = (com.huawei.hms.common.internal.RequestHeader) r4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "post msg "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.common.internal.ClientSettings r0 = r3.getClientSettings()
            android.app.Activity r0 = r0.getCpActivity()
            if (r0 != 0) goto L5a
            com.huawei.hms.adapter.BaseAdapter r0 = new com.huawei.hms.adapter.BaseAdapter
            r0.<init>(r3)
            goto L60
        L5a:
            com.huawei.hms.adapter.BaseAdapter r1 = new com.huawei.hms.adapter.BaseAdapter
            r1.<init>(r3, r0)
            r0 = r1
        L60:
            java.lang.String r1 = r4.toJson()
            android.os.Parcelable r4 = r4.getParcelable()
            com.huawei.hms.common.internal.HmsClient$BaseAdapterCallBack r2 = new com.huawei.hms.common.internal.HmsClient$BaseAdapterCallBack
            r2.<init>(r3, r6)
            r0.baseRequest(r1, r5, r4, r2)
            return
        L71:
            java.lang.String r4 = "arguments is invalid."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            com.huawei.hms.common.internal.ResponseHeader r4 = new com.huawei.hms.common.internal.ResponseHeader
            r5 = 907135000(0x3611c818, float:2.1723154E-6)
            java.lang.String r0 = "Args is invalid"
            r4.<init>(r2, r5, r0)
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r5 = r5.toString()
            r6.onCallback(r4, r5)
            return
    }

    public void updateSessionId(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto La
            r1.sessionId = r2
        La:
            return
    }
}
