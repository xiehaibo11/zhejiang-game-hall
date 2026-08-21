package com.kwad.components.ad.reward;

public final class h {

    static class a {
        private static com.kwad.components.ad.reward.h oS;

        static {
                com.kwad.components.ad.reward.h r0 = new com.kwad.components.ad.reward.h
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.reward.h.a.oS = r0
                return
        }

        static com.kwad.components.ad.reward.h fH() {
                com.kwad.components.ad.reward.h r0 = com.kwad.components.ad.reward.h.a.oS
                return r0
        }
    }

    static class b extends com.kwad.sdk.core.network.m<com.kwad.components.ad.reward.i, com.kwad.sdk.core.network.BaseResultData> {
        private com.kwad.sdk.core.response.model.AdTemplate adTemplate;
        private com.kwad.sdk.core.network.p<com.kwad.components.ad.reward.i, com.kwad.sdk.core.network.BaseResultData> oT;


        public b(com.kwad.sdk.core.response.model.AdTemplate r2) {
                r1 = this;
                r1.<init>()
                com.kwad.components.ad.reward.h$b$1 r0 = new com.kwad.components.ad.reward.h$b$1
                r0.<init>(r1)
                r1.oT = r0
                r1.adTemplate = r2
                return
        }

        static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.reward.h.b r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
                return r0
        }

        private com.kwad.components.ad.reward.i fJ() {
                r2 = this;
                com.kwad.components.ad.reward.i r0 = new com.kwad.components.ad.reward.i
                com.kwad.sdk.core.response.model.AdTemplate r1 = r2.adTemplate
                r0.<init>(r1)
                return r0
        }

        @Override
        public final com.kwad.sdk.core.network.g createRequest() {
                r1 = this;
                com.kwad.components.ad.reward.i r0 = r1.fJ()
                return r0
        }

        public final void fI() {
                r1 = this;
                com.kwad.sdk.core.network.p<com.kwad.components.ad.reward.i, com.kwad.sdk.core.network.BaseResultData> r0 = r1.oT
                r1.request(r0)
                return
        }

        @Override
        public final com.kwad.sdk.core.network.BaseResultData parseData(java.lang.String r3) {
                r2 = this;
                com.kwad.components.ad.reward.RewardCallbackVerifyHelper$ServerCallbackNetworking$2 r0 = new com.kwad.components.ad.reward.RewardCallbackVerifyHelper$ServerCallbackNetworking$2
                r0.<init>(r2)
                boolean r1 = android.text.TextUtils.isEmpty(r3)
                if (r1 != 0) goto L18
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L14
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L14
                r0.parseJson(r1)     // Catch: java.lang.Throwable -> L14
                goto L18
            L14:
                r3 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r3)
            L18:
                return r0
        }
    }

    private h() {
            r0 = this;
            r0.<init>()
            return
    }

    h(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.reward.h fG() {
            com.kwad.components.ad.reward.h r0 = com.kwad.components.ad.reward.h.a.fH()
            return r0
    }

    private static void q(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.components.ad.reward.h$b r0 = new com.kwad.components.ad.reward.h$b
            r0.<init>(r1)
            r0.fI()
            return
    }

    public final void p(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            java.lang.String r0 = "RewardCallbackVerifyHelper"
            java.lang.String r1 = "handleRewardVerify"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bD(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L19
            q(r3)
            return
        L19:
            com.kwad.components.ad.reward.q.b(r3, r0)
            return
    }
}
