package com.bianfeng.ymnsdk.feature;

public interface YmnCallback extends com.bianfeng.platform.PlatformSdkListener {

    public static class a {
        private java.lang.Object a;
        private java.lang.Object b;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        public a(java.lang.Object r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public static com.bianfeng.ymnsdk.feature.YmnCallback.a a(java.lang.String r2) {
                r0 = 12
                java.lang.String r2 = r2.substring(r0)
                java.lang.String r0 = "_YMN_RCM_SE_"
                java.lang.String[] r2 = r2.split(r0)
                com.bianfeng.ymnsdk.feature.YmnCallback$a r0 = new com.bianfeng.ymnsdk.feature.YmnCallback$a
                r0.<init>()
                r1 = 0
                r1 = r2[r1]
                java.lang.Object r1 = c(r1)
                r0.a = r1
                r1 = 1
                r2 = r2[r1]
                java.lang.Object r2 = c(r2)
                r0.b = r2
                return r0
        }

        private static java.lang.String a(java.lang.Object r1) {
                if (r1 != 0) goto L5
                java.lang.String r1 = "_YMN_RCM_NU_"
                return r1
            L5:
                java.lang.String r0 = r1.toString()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L12
                java.lang.String r1 = "_YMN_RCM_EM_"
                return r1
            L12:
                java.lang.String r1 = r1.toString()
                return r1
        }

        public static boolean b(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)
                if (r0 != 0) goto L10
                java.lang.String r0 = "_YMN_RCM_ST_"
                boolean r1 = r1.startsWith(r0)
                if (r1 == 0) goto L10
                r1 = 1
                goto L11
            L10:
                r1 = 0
            L11:
                return r1
        }

        private static java.lang.Object c(java.lang.String r1) {
                java.lang.String r0 = "_YMN_RCM_NU_"
                boolean r0 = r0.equals(r1)     // Catch: org.json.JSONException -> L1b
                if (r0 == 0) goto La
                r1 = 0
                return r1
            La:
                java.lang.String r0 = "_YMN_RCM_EM_"
                boolean r0 = r0.equals(r1)     // Catch: org.json.JSONException -> L1b
                if (r0 == 0) goto L15
                java.lang.String r1 = ""
                return r1
            L15:
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
                r0.<init>(r1)     // Catch: org.json.JSONException -> L1b
                return r0
            L1b:
                return r1
        }

        public java.lang.Object a() {
                r1 = this;
                java.lang.Object r0 = r1.a
                return r0
        }

        public java.lang.Object b() {
                r1 = this;
                java.lang.Object r0 = r1.b
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "_YMN_RCM_ST_"
                r0.<init>(r1)
                java.lang.Object r1 = r2.a
                java.lang.String r1 = a(r1)
                r0.append(r1)
                java.lang.String r1 = "_YMN_RCM_SE_"
                r0.append(r1)
                java.lang.Object r1 = r2.b
                java.lang.String r1 = a(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }
}
