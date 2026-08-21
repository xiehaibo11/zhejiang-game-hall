package com.huawei.hms.support.api.core;

public final class ConnectService {

    static class a extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp>, com.huawei.hms.support.api.entity.core.ConnectResp> {
        a(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        public com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp> a(com.huawei.hms.support.api.entity.core.ConnectResp r3) {
                r2 = this;
                com.huawei.hms.support.api.ResolveResult r0 = new com.huawei.hms.support.api.ResolveResult
                r0.<init>(r3)
                com.huawei.hms.support.api.client.Status r3 = com.huawei.hms.support.api.client.Status.SUCCESS
                r0.setStatus(r3)
                java.lang.String r3 = "connectservice"
                java.lang.String r1 = "connect - onComplete: success"
                com.huawei.hms.support.log.HMSLog.d(r3, r1)
                return r0
        }

        @Override
        protected boolean checkApiClient(com.huawei.hms.support.api.client.ApiClient r1) {
                r0 = this;
                if (r1 == 0) goto L4
                r1 = 1
                goto L5
            L4:
                r1 = 0
            L5:
                return r1
        }

        @Override
        public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.core.ConnectResp r1 = (com.huawei.hms.support.api.entity.core.ConnectResp) r1
                com.huawei.hms.support.api.ResolveResult r1 = r0.a(r1)
                return r1
        }
    }

    static class b extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp>, com.huawei.hms.support.api.entity.core.ConnectResp> {
        b(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        public com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp> a(com.huawei.hms.support.api.entity.core.ConnectResp r3) {
                r2 = this;
                com.huawei.hms.support.api.ResolveResult r0 = new com.huawei.hms.support.api.ResolveResult
                r0.<init>(r3)
                com.huawei.hms.support.api.client.Status r3 = com.huawei.hms.support.api.client.Status.SUCCESS
                r0.setStatus(r3)
                java.lang.String r3 = "connectservice"
                java.lang.String r1 = "forceConnect - onComplete: success"
                com.huawei.hms.support.log.HMSLog.d(r3, r1)
                return r0
        }

        @Override
        protected boolean checkApiClient(com.huawei.hms.support.api.client.ApiClient r1) {
                r0 = this;
                if (r1 == 0) goto L4
                r1 = 1
                goto L5
            L4:
                r1 = 0
            L5:
                return r1
        }

        @Override
        public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.core.ConnectResp r1 = (com.huawei.hms.support.api.entity.core.ConnectResp) r1
                com.huawei.hms.support.api.ResolveResult r1 = r0.a(r1)
                return r1
        }
    }

    static class c extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp>, com.huawei.hms.support.api.entity.core.JosGetNoticeResp> {
        c(com.huawei.hms.support.api.client.ApiClient r1, java.lang.String r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        public com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp> a(com.huawei.hms.support.api.entity.core.JosGetNoticeResp r4) {
                r3 = this;
                java.lang.String r0 = "connectservice"
                if (r4 != 0) goto Lb
                java.lang.String r4 = "JosNoticeResp is null"
                com.huawei.hms.support.log.HMSLog.e(r0, r4)
                r4 = 0
                return r4
            Lb:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "josNoticeResp status code :"
                r1.append(r2)
                int r2 = r4.getStatusCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.huawei.hms.support.log.HMSLog.i(r0, r1)
                com.huawei.hms.support.api.ResolveResult r0 = new com.huawei.hms.support.api.ResolveResult
                r0.<init>(r4)
                com.huawei.hms.support.api.client.Status r4 = com.huawei.hms.support.api.client.Status.SUCCESS
                r0.setStatus(r4)
                return r0
        }

        @Override
        public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.core.JosGetNoticeResp r1 = (com.huawei.hms.support.api.entity.core.JosGetNoticeResp) r1
                com.huawei.hms.support.api.ResolveResult r1 = r0.a(r1)
                return r1
        }
    }

    private ConnectService() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.support.api.client.InnerPendingResult<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.CheckConnectResp>> checkconnect(com.huawei.hms.support.api.client.ApiClient r2, com.huawei.hms.support.api.entity.core.CheckConnectInfo r3) {
            java.lang.Class<com.huawei.hms.support.api.entity.core.CheckConnectResp> r0 = com.huawei.hms.support.api.entity.core.CheckConnectResp.class
            java.lang.String r1 = "core.checkconnect"
            com.huawei.hms.support.api.ResolvePendingResult r2 = com.huawei.hms.support.api.ResolvePendingResult.build(r2, r1, r3, r0)
            return r2
    }

    public static com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp>> connect(com.huawei.hms.support.api.client.ApiClient r2, com.huawei.hms.support.api.entity.core.ConnectInfo r3) {
            com.huawei.hms.support.api.core.ConnectService$a r0 = new com.huawei.hms.support.api.core.ConnectService$a
            java.lang.String r1 = "core.connect"
            r0.<init>(r2, r1, r3)
            return r0
    }

    public static com.huawei.hms.support.api.ResolvePendingResult<com.huawei.hms.support.api.entity.core.DisconnectResp> disconnect(com.huawei.hms.support.api.client.ApiClient r2, com.huawei.hms.support.api.entity.core.DisconnectInfo r3) {
            java.lang.Class<com.huawei.hms.support.api.entity.core.DisconnectResp> r0 = com.huawei.hms.support.api.entity.core.DisconnectResp.class
            java.lang.String r1 = "core.disconnect"
            com.huawei.hms.support.api.ResolvePendingResult r2 = com.huawei.hms.support.api.ResolvePendingResult.build(r2, r1, r3, r0)
            return r2
    }

    public static com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.ConnectResp>> forceConnect(com.huawei.hms.support.api.client.ApiClient r2, com.huawei.hms.support.api.entity.core.ConnectInfo r3) {
            com.huawei.hms.support.api.core.ConnectService$b r0 = new com.huawei.hms.support.api.core.ConnectService$b
            java.lang.String r1 = "core.foreconnect"
            r0.<init>(r2, r1, r3)
            return r0
    }

    public static com.huawei.hms.support.api.client.PendingResult<com.huawei.hms.support.api.ResolveResult<com.huawei.hms.support.api.entity.core.JosGetNoticeResp>> getNotice(com.huawei.hms.support.api.client.ApiClient r1, int r2, java.lang.String r3) {
            com.huawei.hms.support.api.entity.core.JosGetNoticeReq r0 = new com.huawei.hms.support.api.entity.core.JosGetNoticeReq
            r0.<init>()
            r0.setNoticeType(r2)
            r0.setHmsSdkVersionName(r3)
            java.lang.String r2 = r1.getCpID()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1c
            java.lang.String r2 = r1.getCpID()
            r0.setCpID(r2)
        L1c:
            com.huawei.hms.support.api.core.ConnectService$c r2 = new com.huawei.hms.support.api.core.ConnectService$c
            java.lang.String r3 = "core.getNoticeIntent"
            r2.<init>(r1, r3, r0)
            return r2
    }
}
