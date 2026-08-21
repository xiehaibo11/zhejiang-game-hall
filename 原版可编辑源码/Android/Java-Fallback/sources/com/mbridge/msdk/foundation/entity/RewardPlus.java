package com.mbridge.msdk.foundation.entity;

public class RewardPlus implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    public static final java.lang.String AMOUNT = "amount";
    public static final java.lang.String AMOUNT_MAX = "amount_max";
    public static final java.lang.String CALLBACK_RULE = "callback_rule";
    public static final java.lang.String CURRENCY_ID = "currency_id";
    public static final java.lang.String ICON = "icon";
    public static final java.lang.String NAME = "name";
    public static final java.lang.String VIRTUAL_CURRENCY = "virtual_currency";
    private int amount;
    private int amountMax;
    private int callbackRule;
    private int currencyId;
    private java.lang.String icon;
    private java.lang.String name;
    private java.lang.String virtualCurrency;

    public RewardPlus() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.amountMax = r0
            r0 = 1
            r2.callbackRule = r0
            java.lang.String r1 = ""
            r2.virtualCurrency = r1
            r2.amount = r0
            r2.icon = r1
            r2.currencyId = r0
            java.lang.String r0 = "Virtual Item"
            r2.name = r0
            return
    }

    public static com.mbridge.msdk.foundation.entity.RewardPlus parse(org.json.JSONObject r4) {
            if (r4 == 0) goto L59
            com.mbridge.msdk.foundation.entity.RewardPlus r0 = new com.mbridge.msdk.foundation.entity.RewardPlus
            r0.<init>()
            r1 = 0
            java.lang.String r2 = "amount_max"
            int r1 = r4.optInt(r2, r1)
            r0.setAmountMax(r1)
            r1 = 1
            java.lang.String r2 = "callback_rule"
            int r2 = r4.optInt(r2, r1)
            r0.setCallbackRule(r2)
            java.lang.String r2 = ""
            java.lang.String r3 = "virtual_currency"
            java.lang.String r3 = r4.optString(r3, r2)
            r0.setVirtualCurrency(r3)
            java.lang.String r3 = "icon"
            java.lang.String r2 = r4.optString(r3, r2)
            r0.setIcon(r2)
            java.lang.String r2 = "currency_id"
            int r2 = r4.optInt(r2, r1)
            r0.setCurrencyId(r2)
            java.lang.String r2 = "amount"
            boolean r3 = r4.has(r2)
            if (r3 == 0) goto L47
            int r1 = r4.optInt(r2, r1)
            r0.setAmount(r1)
        L47:
            java.lang.String r1 = "name"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L5a
            java.lang.String r2 = "Virtual Item"
            java.lang.String r4 = r4.optString(r1, r2)
            r0.setName(r4)
            goto L5a
        L59:
            r0 = 0
        L5a:
            return r0
    }

    public static com.mbridge.msdk.foundation.entity.RewardPlus parseByString(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L10
            if (r0 != 0) goto L14
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>(r1)     // Catch: org.json.JSONException -> L10
            com.mbridge.msdk.foundation.entity.RewardPlus r1 = parse(r0)     // Catch: org.json.JSONException -> L10
            return r1
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            r1 = 0
            return r1
    }

    public int getAmount() {
            r1 = this;
            int r0 = r1.amount
            return r0
    }

    public int getAmountMax() {
            r1 = this;
            int r0 = r1.amountMax
            return r0
    }

    public int getCallbackRule() {
            r1 = this;
            int r0 = r1.callbackRule
            return r0
    }

    public int getCurrencyId() {
            r1 = this;
            int r0 = r1.currencyId
            return r0
    }

    public java.lang.String getIcon() {
            r1 = this;
            java.lang.String r0 = r1.icon
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getVirtualCurrency() {
            r1 = this;
            java.lang.String r0 = r1.virtualCurrency
            return r0
    }

    public void setAmount(int r1) {
            r0 = this;
            r0.amount = r1
            return
    }

    public void setAmountMax(int r1) {
            r0 = this;
            r0.amountMax = r1
            return
    }

    public void setCallbackRule(int r1) {
            r0 = this;
            r0.callbackRule = r1
            return
    }

    public void setCurrencyId(int r1) {
            r0 = this;
            r0.currencyId = r1
            return
    }

    public void setIcon(java.lang.String r1) {
            r0 = this;
            r0.icon = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return
    }

    public void setVirtualCurrency(java.lang.String r1) {
            r0 = this;
            r0.virtualCurrency = r1
            return
    }

    public org.json.JSONObject toJsonObject() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "amount_max"
            int r2 = r3.amountMax     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "callback_rule"
            int r2 = r3.callbackRule     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "virtual_currency"
            java.lang.String r2 = r3.virtualCurrency     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "amount"
            int r2 = r3.amount     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "icon"
            java.lang.String r2 = r3.icon     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "currency_id"
            int r2 = r3.currencyId     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "name"
            java.lang.String r2 = r3.name     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            goto L3b
        L37:
            r1 = move-exception
            r1.printStackTrace()
        L3b:
            return r0
    }
}
