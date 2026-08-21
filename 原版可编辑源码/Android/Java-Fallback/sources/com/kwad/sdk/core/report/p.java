package com.kwad.sdk.core.report;

public final class p {
    public com.kwai.adclient.kscommerciallogger.model.SubBusinessType arl;
    public com.kwai.adclient.kscommerciallogger.model.d arm;
    public com.kwai.adclient.kscommerciallogger.model.BusinessType biz;
    public java.lang.String category;
    public java.lang.String eventId;
    public org.json.JSONObject msg;
    public java.lang.String suffixRatio;
    public java.lang.String tag;

    public static class a {
        private com.kwai.adclient.kscommerciallogger.model.d arm;
        private com.kwai.adclient.kscommerciallogger.model.BusinessType biz;
        private java.lang.String category;
        private java.lang.String eventId;
        private org.json.JSONObject msg;
        private com.kwai.adclient.kscommerciallogger.model.SubBusinessType subBiz;
        private java.lang.String suffixRatio;
        private java.lang.String tag;

        public a() {
                r1 = this;
                r1.<init>()
                com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
                r1.biz = r0
                com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
                r1.subBiz = r0
                com.kwai.adclient.kscommerciallogger.model.d r0 = com.kwai.adclient.kscommerciallogger.model.d.aNG
                r1.arm = r0
                java.lang.String r0 = ""
                r1.suffixRatio = r0
                return
        }

        public final com.kwad.sdk.core.report.p.a A(org.json.JSONObject r1) {
                r0 = this;
                r0.msg = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p Cd() {
                r11 = this;
                com.kwad.sdk.core.report.p r10 = new com.kwad.sdk.core.report.p
                java.lang.String r1 = r11.category
                com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = r11.biz
                com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = r11.subBiz
                com.kwai.adclient.kscommerciallogger.model.d r4 = r11.arm
                java.lang.String r5 = r11.eventId
                java.lang.String r6 = r11.tag
                java.lang.String r7 = r11.suffixRatio
                org.json.JSONObject r8 = r11.msg
                r9 = 0
                r0 = r10
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
                return r10
        }

        public final com.kwad.sdk.core.report.p.a a(com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1) {
                r0 = this;
                r0.subBiz = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p.a a(com.kwai.adclient.kscommerciallogger.model.d r1) {
                r0 = this;
                r0.arm = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p.a b(com.kwai.adclient.kscommerciallogger.model.BusinessType r1) {
                r0 = this;
                r0.biz = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p.a dA(java.lang.String r1) {
                r0 = this;
                r0.eventId = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p.a dB(java.lang.String r1) {
                r0 = this;
                r0.tag = r1
                return r0
        }

        public final com.kwad.sdk.core.report.p.a dz(java.lang.String r1) {
                r0 = this;
                r0.category = r1
                return r0
        }
    }

    private p(java.lang.String r2, com.kwai.adclient.kscommerciallogger.model.BusinessType r3, com.kwai.adclient.kscommerciallogger.model.SubBusinessType r4, com.kwai.adclient.kscommerciallogger.model.d r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, org.json.JSONObject r9) {
            r1 = this;
            r1.<init>()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            r1.biz = r0
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            r1.arl = r0
            com.kwai.adclient.kscommerciallogger.model.d r0 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            r1.arm = r0
            r1.category = r2
            r1.biz = r3
            r1.arl = r4
            r1.arm = r5
            r1.eventId = r6
            r1.tag = r7
            r1.suffixRatio = r8
            r1.msg = r9
            return
    }

    p(java.lang.String r1, com.kwai.adclient.kscommerciallogger.model.BusinessType r2, com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3, com.kwai.adclient.kscommerciallogger.model.d r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, org.json.JSONObject r8, byte r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }
}
