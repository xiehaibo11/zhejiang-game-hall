package com.sigmob.sdk;

import android.util.Log;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class c {
    public static void a(String str, String str2) {
        Log.i(str, str2);
    }

    public static void b(String str, String str2) {
        String property = System.getProperty("line.separator");
        try {
            if (str2.startsWith("{")) {
                str2 = new JSONObject(str2).toString(4);
            } else if (str2.startsWith("[")) {
                str2 = new JSONArray(str2).toString(4);
            }
        } catch (JSONException unused) {
        }
        String[] strArrSplit = str2.split(property);
        String str3 = "╔═══════════════════════════════════════════════════════════════════════════════════════";
        for (String str4 : strArrSplit) {
            str3 = str3 + "\n║ " + str4;
        }
        Log.i(str, " \n".concat(String.valueOf(str3 + "\n╚═══════════════════════════════════════════════════════════════════════════════════════")));
    }
}
