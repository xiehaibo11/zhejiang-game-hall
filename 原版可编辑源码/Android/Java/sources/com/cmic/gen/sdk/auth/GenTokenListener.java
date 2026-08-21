package com.cmic.gen.sdk.auth;

import org.json.JSONObject;

public interface GenTokenListener {
    void onGetTokenComplete(int i, JSONObject jSONObject);
}
