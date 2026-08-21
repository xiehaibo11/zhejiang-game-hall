package library;

public class c {
    public static <T> void a(org.json.JSONObject r0, java.lang.String r1, T r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3
        L3:
            return
    }
}
