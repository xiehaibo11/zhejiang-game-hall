package com.bykv.vk.openvk.live.core;

public class df implements com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth {
    private com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth rg;


    public df(com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            return
    }

    @Override
    public com.bytedance.android.livehostapi.platform.TokenInfo getTokenInfo() {
            r13 = this;
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r0 = r13.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.bykv.vk.openvk.live.TTLiveToken r0 = r0.getTokenInfo()
            if (r0 != 0) goto L1b
            com.bytedance.android.livehostapi.platform.TokenInfo r0 = new com.bytedance.android.livehostapi.platform.TokenInfo
            r5 = 0
            java.lang.String r2 = ""
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            r1 = r0
            r1.<init>(r2, r3, r4, r5)
            return r0
        L1b:
            com.bytedance.android.livehostapi.platform.TokenInfo r1 = new com.bytedance.android.livehostapi.platform.TokenInfo
            java.lang.String r8 = r0.name
            java.lang.String r9 = r0.openId
            java.lang.String r10 = r0.accessToken
            long r11 = r0.expireAt
            r7 = r1
            r7.<init>(r8, r9, r10, r11)
            return r1
    }

    @Override
    public boolean isLogin() {
            r1 = this;
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r0 = r1.rg
            if (r0 == 0) goto Lc
            boolean r0 = r0.isLogin()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void onTokenInvalid(com.bytedance.android.livehostapi.platform.TokenInfo r9, com.bytedance.android.livehostapi.platform.TokenRefreshCallback r10, android.app.Activity r11, java.util.Map<java.lang.String, java.lang.String> r12) {
            r8 = this;
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r0 = r8.rg
            if (r0 != 0) goto L5
            return
        L5:
            if (r9 != 0) goto L9
            r9 = 0
            goto L22
        L9:
            com.bykv.vk.openvk.live.TTLiveToken r7 = new com.bykv.vk.openvk.live.TTLiveToken
            java.lang.String r2 = r9.getAccessToken()
            java.lang.String r3 = r9.getOpenId()
            long r4 = r9.getExpireAt()
            java.lang.String r6 = r9.getName()
            java.lang.String r1 = "Venv Test"
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r6)
            r9 = r7
        L22:
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r0 = r8.rg
            com.bykv.vk.openvk.live.core.df$1 r1 = new com.bykv.vk.openvk.live.core.df$1
            r1.<init>(r8, r10)
            r0.onTokenInvalid(r9, r1, r11, r12)
            return
    }
}
