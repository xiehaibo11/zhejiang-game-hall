package com.tramini.plugin.a.g;

import org.json.JSONObject;

public final class d {
    public static JSONObject a;

    private static void a(String str) {
        try {
            a = new JSONObject(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
