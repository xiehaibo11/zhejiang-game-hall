package com.kwad.sdk.core.config.item;

public final class o extends com.kwad.sdk.core.config.item.b<com.kwad.sdk.core.config.item.o.a> {
    private java.lang.String amJ;

    public static final class a implements com.kwad.sdk.core.b {
        public java.util.Map<java.lang.Integer, java.lang.String> amK;
        public java.util.List<java.lang.String> amL;
        public java.util.List<java.lang.String> amM;
        public java.util.List<java.lang.String> amN;
        public int amO;
        private org.json.JSONObject amP;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.amK = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.amL = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.amM = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.amN = r0
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r6) {
                r5 = this;
                if (r6 != 0) goto L3
                return
            L3:
                r5.amP = r6
                java.lang.String r0 = "platformInfo"
                org.json.JSONObject r0 = r6.optJSONObject(r0)
                if (r0 == 0) goto L2b
                java.util.Iterator r1 = r0.keys()
            L11:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2b
                java.lang.Object r2 = r1.next()
                java.lang.String r2 = (java.lang.String) r2
                java.util.Map<java.lang.Integer, java.lang.String> r3 = r5.amK
                java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
                java.lang.String r2 = r0.optString(r2)
                r3.put(r4, r2)
                goto L11
            L2b:
                java.lang.String r0 = "keyStacks"
                org.json.JSONArray r0 = r6.optJSONArray(r0)
                r1 = 0
                if (r0 == 0) goto L47
                r2 = r1
            L35:
                int r3 = r0.length()
                if (r2 >= r3) goto L47
                java.util.List<java.lang.String> r3 = r5.amL
                java.lang.String r4 = r0.optString(r2)
                r3.add(r4)
                int r2 = r2 + 1
                goto L35
            L47:
                java.lang.String r0 = "extendClassNames"
                org.json.JSONArray r0 = r6.optJSONArray(r0)
                if (r0 == 0) goto L62
                r2 = r1
            L50:
                int r3 = r0.length()
                if (r2 >= r3) goto L62
                java.util.List<java.lang.String> r3 = r5.amM
                java.lang.String r4 = r0.optString(r2)
                r3.add(r4)
                int r2 = r2 + 1
                goto L50
            L62:
                java.lang.String r0 = "keyNames"
                org.json.JSONArray r0 = r6.optJSONArray(r0)
                if (r0 == 0) goto L7c
            L6a:
                int r2 = r0.length()
                if (r1 >= r2) goto L7c
                java.util.List<java.lang.String> r2 = r5.amN
                java.lang.String r3 = r0.optString(r1)
                r2.add(r3)
                int r1 = r1 + 1
                goto L6a
            L7c:
                java.lang.String r0 = "handleType"
                int r6 = r6.optInt(r0)
                r5.amO = r6
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r1 = this;
                org.json.JSONObject r0 = r1.amP
                return r0
        }
    }

    public o() {
            r2 = this;
            java.lang.String r0 = "sdkPackInfo"
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = "sdkPackInfo"
            r1 = 0
            java.lang.String r3 = r3.getString(r0, r1)
            java.lang.String r3 = cx(r3)
            r2.amJ = r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L27
            if (r3 == 0) goto L14
            return
        L14:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L27
            java.lang.String r0 = r2.amJ     // Catch: org.json.JSONException -> L27
            r3.<init>(r0)     // Catch: org.json.JSONException -> L27
            com.kwad.sdk.core.config.item.o$a r0 = new com.kwad.sdk.core.config.item.o$a     // Catch: org.json.JSONException -> L27
            r0.<init>()     // Catch: org.json.JSONException -> L27
            r0.parseJson(r3)     // Catch: org.json.JSONException -> L27
            r2.setValue(r0)     // Catch: org.json.JSONException -> L27
            return
        L27:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.amJ
            java.lang.String r0 = cw(r0)
            java.lang.String r1 = "sdkPackInfo"
            r3.putString(r1, r0)
            return
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            java.lang.String r0 = "sdkPackInfo"
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 != 0) goto L9
            return
        L9:
            java.lang.String r0 = r2.toString()
            r1.amJ = r0
            com.kwad.sdk.core.config.item.o$a r0 = new com.kwad.sdk.core.config.item.o$a
            r0.<init>()
            r0.parseJson(r2)
            r1.setValue(r0)
            return
    }
}
