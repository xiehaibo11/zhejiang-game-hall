package com.alipay.sdk.m.q;

import com.qihoo360.replugin.RePlugin;
import org.json.JSONException;
import org.json.JSONObject;

public class f extends com.alipay.sdk.m.p.e {
    @Override
    public JSONObject a() throws JSONException {
        return com.alipay.sdk.m.p.e.a("cashier", RePlugin.PLUGIN_NAME_MAIN);
    }

    @Override
    public boolean c() {
        return false;
    }
}
