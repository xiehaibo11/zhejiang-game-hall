package library;

import org.json.JSONException;
import org.json.JSONObject;

public class c {
    public static <T> void a(JSONObject jSONObject, String str, T t) {
        try {
            jSONObject.put(str, t);
        } catch (JSONException unused) {
        }
    }
}
