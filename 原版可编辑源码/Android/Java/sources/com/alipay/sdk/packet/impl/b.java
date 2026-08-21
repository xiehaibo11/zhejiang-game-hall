package com.alipay.sdk.packet.impl;

import org.json.JSONException;
import org.json.JSONObject;

public class b extends com.alipay.sdk.packet.e {
    @Override
    protected String b() {
        return "5.0.0";
    }

    @Override
    protected JSONObject a() throws JSONException {
        return com.alipay.sdk.packet.e.a("sdkConfig", "obtain");
    }
}
