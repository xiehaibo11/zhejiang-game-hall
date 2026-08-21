package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class URLManager {
    private static java.lang.String REQUSET_URL = "https://plugin-res.imeete.com/res";
    private static java.util.List<java.lang.String> hostList;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.ymnsdk.replugin.action.URLManager.hostList = r0
            return
    }

    public URLManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String getHost() {
            java.lang.Class<com.ymnsdk.replugin.action.URLManager> r0 = com.ymnsdk.replugin.action.URLManager.class
            monitor-enter(r0)
            initHost()     // Catch: java.lang.Throwable -> L6f
            java.util.List<java.lang.String> r1 = com.ymnsdk.replugin.action.URLManager.hostList     // Catch: java.lang.Throwable -> L6f
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L6f
            if (r1 <= 0) goto L2b
            java.util.List<java.lang.String> r1 = com.ymnsdk.replugin.action.URLManager.hostList     // Catch: java.lang.Throwable -> L6f
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L6f
            double r2 = java.lang.Math.random()     // Catch: java.lang.Throwable -> L6f
            int r1 = r1 + 0
            int r1 = r1 + 1
            double r4 = (double) r1     // Catch: java.lang.Throwable -> L6f
            double r2 = r2 * r4
            int r1 = (int) r2     // Catch: java.lang.Throwable -> L6f
            int r1 = r1 + 0
            java.util.List<java.lang.String> r2 = com.ymnsdk.replugin.action.URLManager.hostList     // Catch: java.lang.Throwable -> L6f
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L6f
            monitor-exit(r0)
            return r1
        L2b:
            java.lang.String r1 = com.ymnsdk.replugin.util.ResourceUtil.urlOnSdCard4Public()     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            if (r1 == 0) goto L53
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            if (r2 != 0) goto L53
            java.lang.String r2 = "ymn"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            r3.<init>()     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            java.lang.String r4 = "host is "
            r3.append(r4)     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            r3.append(r1)     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            android.util.Log.d(r2, r3)     // Catch: java.lang.Exception -> L4f java.lang.Throwable -> L6f
            monitor-exit(r0)
            return r1
        L4f:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L6f
        L53:
            java.lang.String r1 = "ymn"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r2.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = "host is "
            r2.append(r3)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = com.ymnsdk.replugin.action.URLManager.REQUSET_URL     // Catch: java.lang.Throwable -> L6f
            r2.append(r3)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L6f
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = com.ymnsdk.replugin.action.URLManager.REQUSET_URL     // Catch: java.lang.Throwable -> L6f
            monitor-exit(r0)
            return r1
        L6f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void initHost() {
            java.util.List<java.lang.String> r0 = com.ymnsdk.replugin.action.URLManager.hostList
            r0.clear()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUpdateServerAddress()
            if (r0 == 0) goto L23
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L23
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L1f
            java.util.List r0 = r1.getListFrom(r0)     // Catch: java.lang.Exception -> L1f
            com.ymnsdk.replugin.action.URLManager.hostList = r0     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r0 = move-exception
            r0.printStackTrace()
        L23:
            return
    }
}
