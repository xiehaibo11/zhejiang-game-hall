package com.cmic.gen.sdk.view;

import android.content.Context;
import org.json.JSONObject;

public interface GenLoginClickListener {
    void onLoginClickComplete(Context context, JSONObject jSONObject);

    void onLoginClickStart(Context context, JSONObject jSONObject);
}
