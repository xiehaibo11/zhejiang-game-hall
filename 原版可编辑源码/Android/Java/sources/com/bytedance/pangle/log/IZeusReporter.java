package com.bytedance.pangle.log;

import org.json.JSONObject;

public interface IZeusReporter {
    void report(String str, JSONObject jSONObject);
}
