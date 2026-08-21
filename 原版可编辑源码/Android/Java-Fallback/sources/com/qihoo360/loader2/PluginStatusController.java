package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginStatusController {
    private static final java.lang.String KEY_STATUS_NAME_PREFIX = "ps-";
    private static final java.lang.String PREF_FILE = "plugins";
    public static final int STATUS_DISABLE_BY_CLOUD = -2;
    public static final int STATUS_DISABLE_BY_CRASH = -1;
    public static final int STATUS_OK = 0;
    private static android.app.Application sAppContext;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class PluginStatus {
        org.json.JSONObject mJo;

        PluginStatus(java.lang.String r2) throws org.json.JSONException {
                r1 = this;
                r1.<init>()
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>(r2)
                r1.mJo = r0
                return
        }

        PluginStatus(java.lang.String r3, int r4, int r5) {
                r2 = this;
                r2.<init>()
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29
                r0.<init>()     // Catch: org.json.JSONException -> L29
                r2.mJo = r0     // Catch: org.json.JSONException -> L29
                java.lang.String r1 = "pn"
                r0.put(r1, r3)     // Catch: org.json.JSONException -> L29
                org.json.JSONObject r3 = r2.mJo     // Catch: org.json.JSONException -> L29
                java.lang.String r0 = "ver"
                r3.put(r0, r4)     // Catch: org.json.JSONException -> L29
                org.json.JSONObject r3 = r2.mJo     // Catch: org.json.JSONException -> L29
                java.lang.String r4 = "ctime"
                long r0 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L29
                r3.put(r4, r0)     // Catch: org.json.JSONException -> L29
                org.json.JSONObject r3 = r2.mJo     // Catch: org.json.JSONException -> L29
                java.lang.String r4 = "st"
                r3.put(r4, r5)     // Catch: org.json.JSONException -> L29
                goto L2d
            L29:
                r3 = move-exception
                r3.printStackTrace()
            L2d:
                return
        }

        public long getChangeTime() {
                r2 = this;
                org.json.JSONObject r0 = r2.mJo
                java.lang.String r1 = "ctime"
                long r0 = r0.optLong(r1)
                return r0
        }

        public int getStatus() {
                r2 = this;
                org.json.JSONObject r0 = r2.mJo
                java.lang.String r1 = "st"
                int r0 = r0.optInt(r1)
                return r0
        }

        public int getVersion() {
                r2 = this;
                org.json.JSONObject r0 = r2.mJo
                java.lang.String r1 = "ver"
                int r0 = r0.optInt(r1)
                return r0
        }

        java.lang.String toJsonString() {
                r1 = this;
                org.json.JSONObject r0 = r1.mJo
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public PluginStatusController() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void addStatusToPref(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "plugins"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ps-"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.SharedPreferences$Editor r2 = r2.putString(r3, r4)
            r2.commit()
            return
    }

    public static void clearStatus() {
            android.app.Application r0 = com.qihoo360.loader2.PluginStatusController.sAppContext
            java.lang.String r1 = "plugins"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            java.util.Map r0 = r0.getAll()
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L31
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "ps-"
            boolean r3 = r2.contains(r3)
            if (r3 == 0) goto L19
            r1.remove(r2)
            goto L19
        L31:
            r1.commit()
            return
    }

    public static int getStatus(java.lang.String r1) {
            r0 = -1
            int r1 = getStatus(r1, r0)
            return r1
    }

    public static int getStatus(java.lang.String r6, int r7) {
            com.qihoo360.loader2.PluginStatusController$PluginStatus r0 = getStatusImpl(r6)
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 != 0) goto L22
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L21
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "PStatusC.getStatus(): ps is null. pn="
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L21:
            return r1
        L22:
            r3 = -1
            java.lang.String r4 = "; pn="
            if (r7 == r3) goto L58
            int r3 = r0.getVersion()
            if (r3 == r7) goto L58
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L57
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "PStatusC.getStatus(): ver not match. ver="
            r3.append(r5)
            r3.append(r7)
            java.lang.String r7 = "; expect="
            r3.append(r7)
            int r7 = r0.getVersion()
            r3.append(r7)
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L57:
            return r1
        L58:
            int r0 = r0.getStatus()
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L82
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "PStatusC.getStatus(): ver match. ver="
            r1.append(r3)
            r1.append(r7)
            r1.append(r4)
            r1.append(r6)
            java.lang.String r6 = "; st="
            r1.append(r6)
            r1.append(r0)
            java.lang.String r6 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L82:
            return r0
    }

    private static java.lang.String getStatusFromPref(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "plugins"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ps-"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.String r2 = r2.getString(r3, r0)
            return r2
    }

    private static com.qihoo360.loader2.PluginStatusController.PluginStatus getStatusImpl(java.lang.String r4) {
            android.app.Application r0 = com.qihoo360.loader2.PluginStatusController.sAppContext
            java.lang.String r0 = getStatusFromPref(r0, r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto Le
            return r2
        Le:
            com.qihoo360.loader2.PluginStatusController$PluginStatus r1 = new com.qihoo360.loader2.PluginStatusController$PluginStatus     // Catch: org.json.JSONException -> L14
            r1.<init>(r0)     // Catch: org.json.JSONException -> L14
            return r1
        L14:
            r0 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L20
            java.lang.String r1 = "ws001"
            java.lang.String r3 = "PStatusC.getStatus(): json err."
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3, r0)
        L20:
            android.app.Application r0 = com.qihoo360.loader2.PluginStatusController.sAppContext
            removeStatusToPref(r0, r4)
            return r2
    }

    private static void removeStatusToPref(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "plugins"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ps-"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.content.SharedPreferences$Editor r2 = r2.remove(r3)
            r2.commit()
            return
    }

    public static void setAppContext(android.app.Application r0) {
            com.qihoo360.loader2.PluginStatusController.sAppContext = r0
            return
    }

    public static void setStatus(java.lang.String r4, int r5, int r6) {
            java.lang.String r0 = "; ver="
            java.lang.String r1 = "ws001"
            if (r6 != 0) goto L2a
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L24
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r2 = "PStatusC.setStatus(): Status is OK, Clear. pn="
            r6.append(r2)
            r6.append(r4)
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r5)
        L24:
            android.app.Application r5 = com.qihoo360.loader2.PluginStatusController.sAppContext
            removeStatusToPref(r5, r4)
            return
        L2a:
            com.qihoo360.loader2.PluginStatusController$PluginStatus r2 = new com.qihoo360.loader2.PluginStatusController$PluginStatus
            r2.<init>(r4, r5, r6)
            android.app.Application r3 = com.qihoo360.loader2.PluginStatusController.sAppContext
            java.lang.String r2 = r2.toJsonString()
            addStatusToPref(r3, r4, r2)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PStatusC.setStatus(): Set Status, pn="
            r2.append(r3)
            r2.append(r4)
            r2.append(r0)
            r2.append(r5)
            java.lang.String r4 = "; st="
            r2.append(r4)
            r2.append(r6)
            java.lang.String r4 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L5e:
            return
    }
}
