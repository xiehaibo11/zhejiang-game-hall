package com.qihoo360.replugin.component.provider;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderHelper {
    private static final java.lang.String SCHEME_AND_SSP = "content://";
    private static final java.lang.String TAG = "PluginProviderHelper";
    private final java.lang.String mAuthority;
    java.util.Map<java.lang.String, android.content.ContentProvider> mProviderAuthorityMap;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class PluginUri {
        java.lang.String plugin;
        android.net.Uri transferredUri;

        PluginUri() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                android.net.Uri r1 = r2.transferredUri
                r0.append(r1)
                java.lang.String r1 = " ["
                r0.append(r1)
                java.lang.String r1 = r2.plugin
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    PluginProviderHelper(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mProviderAuthorityMap = r0
            r1.mAuthority = r2
            return
    }

    private android.content.ContentProvider installProvider(com.qihoo360.replugin.component.provider.PluginProviderHelper.PluginUri r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = r5.plugin
            com.qihoo360.replugin.component.ComponentList r0 = com.qihoo360.i.Factory.queryPluginComponentList(r0)
            java.lang.String r1 = "PluginProviderHelper"
            r2 = 0
            if (r0 != 0) goto L24
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L23
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "installProvider(): Fetch Component List Error! auth="
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.e(r1, r5)
        L23:
            return r2
        L24:
            android.content.pm.ProviderInfo r0 = r0.getProviderByAuthority(r6)
            if (r0 != 0) goto L43
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L42
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "installProvider(): Not register! auth="
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.e(r1, r5)
        L42:
            return r2
        L43:
            java.lang.String r5 = r5.plugin
            android.content.Context r5 = com.qihoo360.i.Factory.queryPluginContext(r5)
            if (r5 != 0) goto L64
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L63
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "installProvider(): Fetch Context Error! auth="
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.e(r1, r5)
        L63:
            return r2
        L64:
            java.lang.ClassLoader r6 = r5.getClassLoader()
            if (r6 != 0) goto L74
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L73
            java.lang.String r5 = "installProvider(): ClassLoader is Null!"
            android.util.Log.e(r1, r5)
        L73:
            return r2
        L74:
            java.lang.String r3 = r0.name     // Catch: java.lang.Throwable -> L8f
            java.lang.Class r6 = r6.loadClass(r3)     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.Throwable -> L8f
            android.content.ContentProvider r6 = (android.content.ContentProvider) r6     // Catch: java.lang.Throwable -> L8f
            r6.attachInfo(r5, r0)     // Catch: java.lang.Throwable -> L84
            return r6
        L84:
            r5 = move-exception
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L8e
            java.lang.String r6 = "installProvider(): Attach info fail!"
            android.util.Log.e(r1, r6, r5)
        L8e:
            return r2
        L8f:
            r5 = move-exception
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L99
            java.lang.String r6 = "installProvider(): New instance fail!"
            android.util.Log.e(r1, r6, r5)
        L99:
            return r2
    }

    private java.lang.String removeHostAuthorityAndInfo(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = r2.mAuthority
            int r0 = r0.length()
            r1 = 10
            int r1 = r1 + r0
            int r1 = r1 + 1
            int r4 = r4.length()
            int r1 = r1 + r4
            int r1 = r1 + 1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "content://"
            r4.append(r0)
            int r0 = r3.length()
            java.lang.String r3 = r3.substring(r1, r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            return r3
    }

    public android.content.ContentProvider getProvider(com.qihoo360.replugin.component.provider.PluginProviderHelper.PluginUri r5) {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "PluginProviderHelper"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getProvider(): Start... pu="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r1, r0)
        L1a:
            android.net.Uri r0 = r5.transferredUri
            java.lang.String r0 = r0.getAuthority()
            java.util.Map<java.lang.String, android.content.ContentProvider> r2 = r4.mProviderAuthorityMap
            java.lang.Object r2 = r2.get(r0)
            android.content.ContentProvider r2 = (android.content.ContentProvider) r2
            if (r2 == 0) goto L43
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L42
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "getProvider(): Exists! Return now. cp="
            r5.append(r0)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            android.util.Log.i(r1, r5)
        L42:
            return r2
        L43:
            android.content.ContentProvider r2 = r4.installProvider(r5, r0)
            if (r2 != 0) goto L54
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L52
            java.lang.String r5 = "getProvider(): Install fail!"
            android.util.Log.e(r1, r5)
        L52:
            r5 = 0
            return r5
        L54:
            java.util.Map<java.lang.String, android.content.ContentProvider> r3 = r4.mProviderAuthorityMap
            r3.put(r0, r2)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L79
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "getProvider(): Okay! pu="
            r0.append(r3)
            r0.append(r5)
            java.lang.String r5 = "; cp="
            r0.append(r5)
            r0.append(r2)
            java.lang.String r5 = r0.toString()
            android.util.Log.i(r1, r5)
        L79:
            return r2
    }

    public com.qihoo360.replugin.component.provider.PluginProviderHelper.PluginUri toPluginUri(android.net.Uri r6) {
            r5 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "PluginProviderHelper"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "toPluginUri(): Start... Uri="
            r0.append(r2)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r1, r0)
        L1a:
            java.lang.String r0 = r6.getAuthority()
            java.lang.String r2 = r5.mAuthority
            boolean r0 = android.text.TextUtils.equals(r0, r2)
            r2 = 0
            if (r0 != 0) goto L44
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L43
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "toPluginUri(): Authority error! auth="
            r0.append(r3)
            java.lang.String r6 = r6.getAuthority()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            android.util.Log.e(r1, r6)
        L43:
            return r2
        L44:
            java.util.List r0 = r6.getPathSegments()
            int r3 = r0.size()
            r4 = 2
            if (r3 >= r4) goto L6c
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L6b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r3 = "toPluginUri(): Less than 2 fragments, size="
            r6.append(r3)
            int r0 = r0.size()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
        L6b:
            return r2
        L6c:
            r3 = 0
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            boolean r3 = com.qihoo360.replugin.RePlugin.isPluginInstalled(r0)
            if (r3 != 0) goto L92
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L91
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r3 = "toPluginUri(): Plugin not exists! pn="
            r6.append(r3)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
        L91:
            return r2
        L92:
            java.lang.String r6 = r6.toString()
            java.lang.String r6 = r5.removeHostAuthorityAndInfo(r6, r0)
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r2 = new com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri
            r2.<init>()
            r2.plugin = r0
            android.net.Uri r6 = android.net.Uri.parse(r6)
            r2.transferredUri = r6
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto Lbf
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "toPluginUri(): End! t-uri="
            r6.append(r0)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            android.util.Log.i(r1, r6)
        Lbf:
            return r2
    }
}
