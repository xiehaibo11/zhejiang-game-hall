package com.qihoo360.replugin.model;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginInfoList implements java.lang.Iterable<com.qihoo360.replugin.model.PluginInfo> {
    private static final java.lang.String TAG = "PluginInfoList";
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> mMap;

    public PluginInfoList() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mMap = r0
            return
    }

    private void addToMap(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r3.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L16
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = r2.mMap
            java.lang.String r1 = r3.getName()
            r0.put(r1, r3)
        L16:
            java.lang.String r0 = r3.getAlias()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = r2.mMap
            java.lang.String r1 = r3.getAlias()
            r0.put(r1, r3)
        L29:
            return
    }

    private java.util.Collection<com.qihoo360.replugin.model.PluginInfo> getCopyValues() {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r1 = r2.mMap
            java.util.Collection r1 = r1.values()
            r0.<init>(r1)
            return r0
    }

    private java.io.File getFile(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "p_a"
            r1 = 0
            java.io.File r3 = r3.getDir(r0, r1)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "p.l"
            r0.<init>(r3, r1)
            return r0
    }

    public void add(com.qihoo360.replugin.model.PluginInfo r1) {
            r0 = this;
            r0.addToMap(r1)
            return
    }

    public java.util.List<com.qihoo360.replugin.model.PluginInfo> cloneList() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Collection r1 = r2.getCopyValues()
            r0.<init>(r1)
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo get(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = r1.mMap
            java.lang.Object r2 = r0.get(r2)
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    @Override
    public java.util.Iterator<com.qihoo360.replugin.model.PluginInfo> iterator() {
            r1 = this;
            java.util.Collection r0 = r1.getCopyValues()
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    public boolean load(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = "PluginInfoList"
            r1 = 0
            java.io.File r7 = r6.getFile(r7)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            java.nio.charset.Charset r2 = com.qihoo360.replugin.utils.Charsets.UTF_8     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            java.lang.String r7 = com.qihoo360.replugin.utils.FileUtils.readFileToString(r7, r2)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            if (r2 == 0) goto L1d
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            if (r7 == 0) goto L1c
            java.lang.String r7 = "load: Read Json error!"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r7)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
        L1c:
            return r1
        L1d:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            r2.<init>(r7)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            r7 = r1
        L23:
            int r3 = r2.length()     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            if (r7 >= r3) goto L52
            org.json.JSONObject r3 = r2.optJSONObject(r7)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.replugin.model.PluginInfo.createByJO(r3)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            if (r4 != 0) goto L4c
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            if (r4 == 0) goto L4f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            r4.<init>()     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            java.lang.String r5 = "load: PluginInfo Invalid. Ignore! jo="
            r4.append(r5)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            r4.append(r3)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            java.lang.String r3 = r4.toString()     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            com.qihoo360.replugin.helper.LogDebug.e(r0, r3)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
            goto L4f
        L4c:
            r6.addToMap(r4)     // Catch: org.json.JSONException -> L54 java.io.IOException -> L5f
        L4f:
            int r7 = r7 + 1
            goto L23
        L52:
            r7 = 1
            return r7
        L54:
            r7 = move-exception
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L69
            java.lang.String r2 = "load: Parse Json Error!"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r2, r7)
            goto L69
        L5f:
            r7 = move-exception
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L69
            java.lang.String r2 = "load: Load error!"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r2, r7)
        L69:
            return r1
    }

    public void remove(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = r1.mMap
            r0.remove(r2)
            return
    }

    public boolean save(android.content.Context r4) {
            r3 = this;
            java.io.File r4 = r3.getFile(r4)     // Catch: java.io.IOException -> L30
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.io.IOException -> L30
            r0.<init>()     // Catch: java.io.IOException -> L30
            java.util.Collection r1 = r3.getCopyValues()     // Catch: java.io.IOException -> L30
            java.util.Iterator r1 = r1.iterator()     // Catch: java.io.IOException -> L30
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.io.IOException -> L30
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()     // Catch: java.io.IOException -> L30
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2     // Catch: java.io.IOException -> L30
            org.json.JSONObject r2 = r2.getJSON()     // Catch: java.io.IOException -> L30
            r0.put(r2)     // Catch: java.io.IOException -> L30
            goto L11
        L25:
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L30
            java.nio.charset.Charset r1 = com.qihoo360.replugin.utils.Charsets.UTF_8     // Catch: java.io.IOException -> L30
            com.qihoo360.replugin.utils.FileUtils.writeStringToFile(r4, r0, r1)     // Catch: java.io.IOException -> L30
            r4 = 1
            return r4
        L30:
            r4 = move-exception
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L38
            r4.printStackTrace()
        L38:
            r4 = 0
            return r4
    }
}
