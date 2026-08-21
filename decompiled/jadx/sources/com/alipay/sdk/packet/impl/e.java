package com.alipay.sdk.packet.impl;

import com.qihoo360.replugin.RePlugin;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class e extends com.alipay.sdk.packet.e {
    @Override // com.alipay.sdk.packet.e
    protected JSONObject a() throws JSONException {
        return com.alipay.sdk.packet.e.a("cashier", RePlugin.PLUGIN_NAME_MAIN);
    }
}
