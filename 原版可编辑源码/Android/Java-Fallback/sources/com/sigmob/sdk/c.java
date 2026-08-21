package com.sigmob.sdk;

public class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1) {
            android.util.Log.i(r0, r1)
            return
    }

    public static void b(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.String r1 = "{"
            boolean r1 = r4.startsWith(r1)     // Catch: org.json.JSONException -> L2a
            r2 = 4
            if (r1 == 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2a
            r1.<init>(r4)     // Catch: org.json.JSONException -> L2a
            java.lang.String r4 = r1.toString(r2)     // Catch: org.json.JSONException -> L2a
            goto L2a
        L19:
            java.lang.String r1 = "["
            boolean r1 = r4.startsWith(r1)     // Catch: org.json.JSONException -> L2a
            if (r1 == 0) goto L2a
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L2a
            r1.<init>(r4)     // Catch: org.json.JSONException -> L2a
            java.lang.String r4 = r1.toString(r2)     // Catch: org.json.JSONException -> L2a
        L2a:
            java.lang.String[] r4 = r4.split(r0)
            r0 = 0
            java.lang.String r1 = "╔═══════════════════════════════════════════════════════════════════════════════════════"
        L31:
            int r2 = r4.length
            if (r0 >= r2) goto L52
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "\n"
            r2.append(r1)
            java.lang.String r1 = "║ "
            r2.append(r1)
            r1 = r4[r0]
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            int r0 = r0 + 1
            goto L31
        L52:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            java.lang.String r0 = "\n╚═══════════════════════════════════════════════════════════════════════════════════════"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r0 = " \n"
            java.lang.String r4 = r0.concat(r4)
            android.util.Log.i(r3, r4)
            return
    }
}
