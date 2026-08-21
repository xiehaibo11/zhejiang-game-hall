package com.mbridge.msdk.foundation.entity;

import android.text.TextUtils;
import com.mbridge.msdk.system.NoProGuard;
import java.io.Serializable;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class RewardPlus implements NoProGuard, Serializable {
    public static final String AMOUNT = "amount";
    public static final String AMOUNT_MAX = "amount_max";
    public static final String CALLBACK_RULE = "callback_rule";
    public static final String CURRENCY_ID = "currency_id";
    public static final String ICON = "icon";
    public static final String NAME = "name";
    public static final String VIRTUAL_CURRENCY = "virtual_currency";
    private int amountMax = 0;
    private int callbackRule = 1;
    private String virtualCurrency = "";
    private int amount = 1;
    private String icon = "";
    private int currencyId = 1;
    private String name = "Virtual Item";

    public int getAmountMax() {
        return this.amountMax;
    }

    public int getCallbackRule() {
        return this.callbackRule;
    }

    public String getVirtualCurrency() {
        return this.virtualCurrency;
    }

    public int getAmount() {
        return this.amount;
    }

    public String getIcon() {
        return this.icon;
    }

    public int getCurrencyId() {
        return this.currencyId;
    }

    public String getName() {
        return this.name;
    }

    public void setAmountMax(int i) {
        this.amountMax = i;
    }

    public void setCallbackRule(int i) {
        this.callbackRule = i;
    }

    public void setVirtualCurrency(String str) {
        this.virtualCurrency = str;
    }

    public void setAmount(int i) {
        this.amount = i;
    }

    public void setIcon(String str) {
        this.icon = str;
    }

    public void setCurrencyId(int i) {
        this.currencyId = i;
    }

    public void setName(String str) {
        this.name = str;
    }

    public JSONObject toJsonObject() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("amount_max", this.amountMax);
            jSONObject.put("callback_rule", this.callbackRule);
            jSONObject.put("virtual_currency", this.virtualCurrency);
            jSONObject.put("amount", this.amount);
            jSONObject.put("icon", this.icon);
            jSONObject.put("currency_id", this.currencyId);
            jSONObject.put("name", this.name);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public static RewardPlus parseByString(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return parse(new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static RewardPlus parse(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        RewardPlus rewardPlus = new RewardPlus();
        rewardPlus.setAmountMax(jSONObject.optInt("amount_max", 0));
        rewardPlus.setCallbackRule(jSONObject.optInt("callback_rule", 1));
        rewardPlus.setVirtualCurrency(jSONObject.optString("virtual_currency", ""));
        rewardPlus.setIcon(jSONObject.optString("icon", ""));
        rewardPlus.setCurrencyId(jSONObject.optInt("currency_id", 1));
        if (jSONObject.has("amount")) {
            rewardPlus.setAmount(jSONObject.optInt("amount", 1));
        }
        if (!jSONObject.has("name")) {
            return rewardPlus;
        }
        rewardPlus.setName(jSONObject.optString("name", "Virtual Item"));
        return rewardPlus;
    }
}
