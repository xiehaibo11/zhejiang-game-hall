package com.alipay.sdk.m.q;

import com.qihoo360.replugin.RePlugin;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class f extends com.alipay.sdk.m.p.e {
    @Override // com.alipay.sdk.m.p.e
    public JSONObject a() throws JSONException {
        return com.alipay.sdk.m.p.e.a("cashier", RePlugin.PLUGIN_NAME_MAIN);
    }

    @Override // com.alipay.sdk.m.p.e
    public boolean c() {
        return false;
    }
}
