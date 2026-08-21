package com.kwai.adclient.kscommerciallogger.model;

public final class c {
    private final com.kwai.adclient.kscommerciallogger.model.d arm;
    private final com.kwai.adclient.kscommerciallogger.model.BusinessType biz;
    private final java.lang.String category;
    private final java.lang.String eventId;
    private final org.json.JSONObject extraParam;
    private final org.json.JSONObject msg;
    private final com.kwai.adclient.kscommerciallogger.model.SubBusinessType subBiz;
    private final java.lang.String tag;

    public static class a {
        private com.kwai.adclient.kscommerciallogger.model.BusinessType aNC;
        private com.kwai.adclient.kscommerciallogger.model.SubBusinessType aND;
        private com.kwai.adclient.kscommerciallogger.model.d aNE;
        private org.json.JSONObject aNF;
        private final java.lang.String mCategory;
        private java.lang.String mEventId;
        private java.lang.String mTag;
        private org.json.JSONObject msg;

        private a(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.mCategory = r1
                return
        }

        public static com.kwai.adclient.kscommerciallogger.model.c.a Lg() {
                com.kwai.adclient.kscommerciallogger.model.c$a r0 = new com.kwai.adclient.kscommerciallogger.model.c$a
                java.lang.String r1 = "ad_client_error_log"
                r0.<init>(r1)
                return r0
        }

        public static com.kwai.adclient.kscommerciallogger.model.c.a Lh() {
                com.kwai.adclient.kscommerciallogger.model.c$a r0 = new com.kwai.adclient.kscommerciallogger.model.c$a
                java.lang.String r1 = "ad_client_apm_log"
                r0.<init>(r1)
                return r0
        }

        static java.lang.String a(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                java.lang.String r0 = r0.mCategory
                return r0
        }

        static com.kwai.adclient.kscommerciallogger.model.BusinessType b(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = r0.aNC
                return r0
        }

        static com.kwai.adclient.kscommerciallogger.model.SubBusinessType c(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = r0.aND
                return r0
        }

        static java.lang.String d(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                java.lang.String r0 = r0.mTag
                return r0
        }

        static com.kwai.adclient.kscommerciallogger.model.d e(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                com.kwai.adclient.kscommerciallogger.model.d r0 = r0.aNE
                return r0
        }

        static org.json.JSONObject f(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                org.json.JSONObject r0 = r0.aNF
                return r0
        }

        static java.lang.String g(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                java.lang.String r0 = r0.mEventId
                return r0
        }

        static org.json.JSONObject h(com.kwai.adclient.kscommerciallogger.model.c.a r0) {
                org.json.JSONObject r0 = r0.msg
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c Li() {
                r2 = this;
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
                boolean r0 = r0.isDebug()
                if (r0 == 0) goto L45
                java.lang.String r0 = r2.mCategory
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L3d
                java.lang.String r0 = r2.mTag
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L3d
                java.lang.String r0 = r2.mEventId
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L3d
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
                boolean r0 = r0.KY()
                if (r0 == 0) goto L72
                java.lang.String r0 = r2.mEventId
                boolean r0 = com.kwai.adclient.kscommerciallogger.b.fY(r0)
                if (r0 == 0) goto L35
                goto L72
            L35:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "event_id format error, please check it"
                r0.<init>(r1)
                throw r0
            L3d:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "param is error, please check it"
                r0.<init>(r1)
                throw r0
            L45:
                java.lang.String r0 = r2.mCategory
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 0
                if (r0 != 0) goto L8d
                java.lang.String r0 = r2.mTag
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L8d
                java.lang.String r0 = r2.mEventId
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L5f
                goto L8d
            L5f:
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
                boolean r0 = r0.KY()
                if (r0 == 0) goto L72
                java.lang.String r0 = r2.mEventId
                boolean r0 = com.kwai.adclient.kscommerciallogger.b.fY(r0)
                if (r0 != 0) goto L72
                return r1
            L72:
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
                org.json.JSONObject r0 = r0.KX()
                if (r0 == 0) goto L86
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.KW()
                org.json.JSONObject r0 = r0.KX()
                r2.aNF = r0
            L86:
                com.kwai.adclient.kscommerciallogger.model.c r0 = new com.kwai.adclient.kscommerciallogger.model.c
                r1 = 0
                r0.<init>(r2, r1)
                return r0
            L8d:
                return r1
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a P(org.json.JSONObject r1) {
                r0 = this;
                r0.msg = r1
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a b(com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1) {
                r0 = this;
                r0.aND = r1
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a b(com.kwai.adclient.kscommerciallogger.model.d r1) {
                r0 = this;
                r0.aNE = r1
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a c(com.kwai.adclient.kscommerciallogger.model.BusinessType r1) {
                r0 = this;
                r0.aNC = r1
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a fZ(java.lang.String r1) {
                r0 = this;
                r0.mTag = r1
                return r0
        }

        public final com.kwai.adclient.kscommerciallogger.model.c.a ga(java.lang.String r1) {
                r0 = this;
                r0.mEventId = r1
                return r0
        }
    }

    private c(com.kwai.adclient.kscommerciallogger.model.c.a r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.kwai.adclient.kscommerciallogger.model.c.a.a(r2)
            r1.category = r0
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.c.a.b(r2)
            r1.biz = r0
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.c.a.c(r2)
            r1.subBiz = r0
            java.lang.String r0 = com.kwai.adclient.kscommerciallogger.model.c.a.d(r2)
            r1.tag = r0
            com.kwai.adclient.kscommerciallogger.model.d r0 = com.kwai.adclient.kscommerciallogger.model.c.a.e(r2)
            r1.arm = r0
            org.json.JSONObject r0 = com.kwai.adclient.kscommerciallogger.model.c.a.f(r2)
            r1.extraParam = r0
            java.lang.String r0 = com.kwai.adclient.kscommerciallogger.model.c.a.g(r2)
            r1.eventId = r0
            org.json.JSONObject r0 = com.kwai.adclient.kscommerciallogger.model.c.a.h(r2)
            if (r0 != 0) goto L39
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            goto L3d
        L39:
            org.json.JSONObject r2 = com.kwai.adclient.kscommerciallogger.model.c.a.h(r2)
        L3d:
            r1.msg = r2
            return
    }

    c(com.kwai.adclient.kscommerciallogger.model.c.a r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final java.lang.String KZ() {
            r1 = this;
            java.lang.String r0 = r1.category
            return r0
    }

    public final com.kwai.adclient.kscommerciallogger.model.BusinessType La() {
            r1 = this;
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = r1.biz
            return r0
    }

    public final com.kwai.adclient.kscommerciallogger.model.SubBusinessType Lb() {
            r1 = this;
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = r1.subBiz
            return r0
    }

    public final com.kwai.adclient.kscommerciallogger.model.d Lc() {
            r1 = this;
            com.kwai.adclient.kscommerciallogger.model.d r0 = r1.arm
            return r0
    }

    public final org.json.JSONObject Ld() {
            r1 = this;
            org.json.JSONObject r0 = r1.msg
            return r0
    }

    public final org.json.JSONObject Le() {
            r1 = this;
            org.json.JSONObject r0 = r1.extraParam
            return r0
    }

    public final java.lang.String Lf() {
            r1 = this;
            java.lang.String r0 = r1.eventId
            return r0
    }

    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = r1.tag
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = r3.biz     // Catch: org.json.JSONException -> L53
            if (r1 == 0) goto L12
            java.lang.String r1 = "biz"
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = r3.biz     // Catch: org.json.JSONException -> L53
            java.lang.String r2 = r2.value     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
        L12:
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = r3.subBiz     // Catch: org.json.JSONException -> L53
            if (r1 == 0) goto L1f
            java.lang.String r1 = "sub_biz"
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = r3.subBiz     // Catch: org.json.JSONException -> L53
            java.lang.String r2 = r2.value     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
        L1f:
            java.lang.String r1 = "tag"
            java.lang.String r2 = r3.tag     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
            com.kwai.adclient.kscommerciallogger.model.d r1 = r3.arm     // Catch: org.json.JSONException -> L53
            if (r1 == 0) goto L35
            java.lang.String r1 = "type"
            com.kwai.adclient.kscommerciallogger.model.d r2 = r3.arm     // Catch: org.json.JSONException -> L53
            java.lang.String r2 = r2.getValue()     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
        L35:
            org.json.JSONObject r1 = r3.msg     // Catch: org.json.JSONException -> L53
            if (r1 == 0) goto L40
            java.lang.String r1 = "msg"
            org.json.JSONObject r2 = r3.msg     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
        L40:
            org.json.JSONObject r1 = r3.extraParam     // Catch: org.json.JSONException -> L53
            if (r1 == 0) goto L4b
            java.lang.String r1 = "extra_param"
            org.json.JSONObject r2 = r3.extraParam     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
        L4b:
            java.lang.String r1 = "event_id"
            java.lang.String r2 = r3.eventId     // Catch: org.json.JSONException -> L53
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L53
            goto L57
        L53:
            r1 = move-exception
            r1.printStackTrace()
        L57:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
