package library;

import org.json.JSONException;
import org.json.JSONObject;

public class c {
    public static <T> void a(JSONObject r0, String r1, T r2) {
        r0.put(r1, r2);     // Catch: JSONException -> L4
        return;
    }
}
