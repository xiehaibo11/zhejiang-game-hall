package com.alipay.sdk.packet.impl;

import com.qihoo360.replugin.RePlugin;
import org.json.JSONException;
import org.json.JSONObject;

public class a extends com.alipay.sdk.packet.e {
    @Override
    protected JSONObject a() throws JSONException {
        return com.alipay.sdk.packet.e.a("cashier", RePlugin.PLUGIN_NAME_MAIN);
    }
}
