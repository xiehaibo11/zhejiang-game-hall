package com.qihoo360.replugin.helper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class JSONHelper {
    private static final boolean LOG = false;

    static {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            com.qihoo360.replugin.helper.JSONHelper.LOG = r0
            return
    }

    public JSONHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject cloneNoThrows(org.json.JSONObject r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> La
            java.lang.String r1 = r1.toString()     // Catch: org.json.JSONException -> La
            r0.<init>(r1)     // Catch: org.json.JSONException -> La
            return r0
        La:
            r1 = move-exception
            boolean r0 = com.qihoo360.replugin.helper.JSONHelper.LOG
            if (r0 == 0) goto L12
            r1.printStackTrace()
        L12:
            r1 = 0
            return r1
    }

    public static <T> void putNoThrows(org.json.JSONObject r0, java.lang.String r1, T r2) {
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4
            goto Lc
        L4:
            r0 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.JSONHelper.LOG
            if (r1 == 0) goto Lc
            r0.printStackTrace()
        Lc:
            return
    }

    public static void remove(org.json.JSONArray r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r2.remove(r3)
            goto Ld
        La:
            removeBelowAPI19(r2, r3)
        Ld:
            return
    }

    private static void removeBelowAPI19(org.json.JSONArray r2, int r3) {
            if (r3 >= 0) goto L3
            return
        L3:
            java.lang.Class<org.json.JSONArray> r0 = org.json.JSONArray.class
            java.lang.String r1 = "values"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> L20
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L20
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L20
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Exception -> L20
            int r0 = r2.size()     // Catch: java.lang.Exception -> L20
            if (r3 < r0) goto L1c
            return
        L1c:
            r2.remove(r3)     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r2 = move-exception
            r2.printStackTrace()
        L24:
            return
    }
}
