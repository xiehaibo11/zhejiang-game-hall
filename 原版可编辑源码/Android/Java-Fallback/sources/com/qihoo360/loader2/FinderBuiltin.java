package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FinderBuiltin {
    public FinderBuiltin() {
            r0 = this;
            r0.<init>()
            return
    }

    static final void loadPlugins(android.content.Context r3, com.qihoo360.loader2.Builder.PxAll r4) {
            java.lang.String r0 = "ws001"
            r1 = 0
            android.content.res.AssetManager r3 = r3.getAssets()     // Catch: java.lang.Throwable -> L11 java.io.FileNotFoundException -> L1e
            java.lang.String r2 = "plugins-builtin.json"
            java.io.InputStream r1 = r3.open(r2)     // Catch: java.lang.Throwable -> L11 java.io.FileNotFoundException -> L1e
            readConfig(r1, r4)     // Catch: java.lang.Throwable -> L11 java.io.FileNotFoundException -> L1e
            goto L27
        L11:
            r3 = move-exception
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L27
            java.lang.String r4 = r3.getMessage()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4, r3)
            goto L27
        L1e:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L27
            java.lang.String r3 = "plugins-builtin.json not found"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
        L27:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            return
    }

    private static final void readConfig(java.io.InputStream r5, com.qihoo360.loader2.Builder.PxAll r6) throws java.io.IOException, org.json.JSONException {
            java.nio.charset.Charset r0 = com.qihoo360.replugin.utils.Charsets.UTF_8
            java.lang.String r5 = com.qihoo360.replugin.utils.IOUtils.toString(r5, r0)
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>(r5)
            r5 = 0
        Lc:
            int r1 = r0.length()
            if (r5 >= r1) goto L81
            org.json.JSONObject r1 = r0.getJSONObject(r5)
            if (r1 != 0) goto L19
            goto L7e
        L19:
            java.lang.String r2 = "name"
            java.lang.String r2 = r1.getString(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r3 = "ws001"
            if (r2 == 0) goto L40
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L7e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "built-in plugins config: invalid item: name is empty, json="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)
            goto L7e
        L40:
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.replugin.model.PluginInfo.buildFromBuiltInJson(r1)
            boolean r2 = r1.match()
            if (r2 != 0) goto L63
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L7e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "built-in plugins config: mismatch item: "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r1)
            goto L7e
        L63:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L7b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "built-in plugins config: item: "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L7b:
            r6.addBuiltin(r1)
        L7e:
            int r5 = r5 + 1
            goto Lc
        L81:
            return
    }
}
