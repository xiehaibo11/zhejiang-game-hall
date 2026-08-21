package com.kwad.sdk.core.config.item;

public final class TipsConfigItem extends com.kwad.sdk.core.config.item.b<com.kwad.sdk.core.config.item.TipsConfigItem.TipConfigData> {

    public static class TipConfigData implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 268961350883157950L;
        private java.lang.String tipInfo;
        private transient java.util.Map<java.lang.String, java.lang.String> tipMap;
        private int tipShowSwitch;

        public TipConfigData() {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.tipMap = r0
                return
        }

        private void genTipMap(org.json.JSONObject r5) {
                r4 = this;
                java.util.Iterator r0 = r5.keys()
            L4:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                java.lang.String r1 = (java.lang.String) r1
                java.util.Map<java.lang.String, java.lang.String> r2 = r4.tipMap
                java.lang.String r3 = ""
                java.lang.String r3 = r5.optString(r1, r3)
                r2.put(r1, r3)
                goto L4
            L1c:
                return
        }

        public java.lang.String getTipInfoData() {
                r1 = this;
                java.lang.String r0 = r1.tipInfo
                return r0
        }

        public int getTipShowSwitch() {
                r1 = this;
                int r0 = r1.tipShowSwitch
                return r0
        }

        public java.lang.String getTips(java.lang.String r2) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.tipMap
                java.lang.Object r2 = r0.get(r2)
                java.lang.String r2 = (java.lang.String) r2
                return r2
        }

        public boolean isShowTips() {
                r1 = this;
                int r0 = r1.tipShowSwitch
                if (r0 != 0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }

        @Override
        public void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "tipInfo"
                java.lang.String r0 = r3.optString(r0)
                r2.setTipInfoData(r0)
                r0 = 0
                java.lang.String r1 = "tipShowSwitch"
                int r3 = r3.optInt(r1, r0)
                r2.tipShowSwitch = r3
                return
        }

        public void setTipInfoData(java.lang.String r2) {
                r1 = this;
                r1.tipInfo = r2
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 == 0) goto L9
                return
            L9:
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L24
                java.lang.String r0 = "null"
                boolean r0 = r0.equalsIgnoreCase(r2)
                if (r0 != 0) goto L24
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L20
                r0.<init>(r2)     // Catch: java.lang.Exception -> L20
                r1.genTipMap(r0)     // Catch: java.lang.Exception -> L20
                return
            L20:
                r2 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            L24:
                return
        }

        public void setTipShowSwitch(int r1) {
                r0 = this;
                r0.tipShowSwitch = r1
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.tipShowSwitch
                java.lang.String r2 = "tipShowSwitch"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.tipInfo
                java.lang.String r2 = "tipInfo"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public TipsConfigItem() {
            r2 = this;
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = new com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData
            r0.<init>()
            java.lang.String r1 = "tipConfig"
            r2.<init>(r1, r0)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r4) {
            r3 = this;
            java.lang.Object r0 = r3.getValue()
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = (com.kwad.sdk.core.config.item.TipsConfigItem.TipConfigData) r0
            if (r0 != 0) goto Ld
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = new com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData
            r0.<init>()
        Ld:
            r1 = 0
            java.lang.String r2 = "tipsSwitch"
            int r1 = r4.getInt(r2, r1)
            r0.setTipShowSwitch(r1)
            java.lang.String r1 = "tipsInfo"
            java.lang.String r2 = ""
            java.lang.String r4 = r4.getString(r1, r2)
            r0.setTipInfoData(r4)
            r3.setValue(r0)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = (com.kwad.sdk.core.config.item.TipsConfigItem.TipConfigData) r0
            int r0 = r0.getTipShowSwitch()
            java.lang.String r1 = "tipsSwitch"
            r3.putInt(r1, r0)
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = (com.kwad.sdk.core.config.item.TipsConfigItem.TipConfigData) r0
            java.lang.String r0 = r0.getTipInfoData()
            java.lang.String r1 = "tipsInfo"
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = (com.kwad.sdk.core.config.item.TipsConfigItem.TipConfigData) r0
            java.lang.String r0 = r0.getTipInfoData()
        L27:
            r3.putString(r1, r0)
            return
        L2b:
            java.lang.String r0 = ""
            goto L27
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            if (r2 == 0) goto L18
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 == 0) goto L18
            com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData r0 = new com.kwad.sdk.core.config.item.TipsConfigItem$TipConfigData
            r0.<init>()
            r0.parseJson(r2)
            r1.setValue(r0)
            return
        L18:
            java.lang.Object r2 = r1.zZ()
            r1.setValue(r2)
            return
    }
}
