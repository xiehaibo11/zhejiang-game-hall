package com.bianfeng.loginlib.utils;

public class YmnLoginUtils {
    private static com.bianfeng.loginlib.utils.YmnLoginUtils ymnLoginUtils;
    private com.bianfeng.splitscreenwindow.ShowType direction;

    private YmnLoginUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.loginlib.utils.YmnLoginUtils getInstance() {
            com.bianfeng.loginlib.utils.YmnLoginUtils r0 = com.bianfeng.loginlib.utils.YmnLoginUtils.ymnLoginUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.loginlib.utils.YmnLoginUtils> r0 = com.bianfeng.loginlib.utils.YmnLoginUtils.class
            monitor-enter(r0)
            com.bianfeng.loginlib.utils.YmnLoginUtils r1 = com.bianfeng.loginlib.utils.YmnLoginUtils.ymnLoginUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.loginlib.utils.YmnLoginUtils r1 = new com.bianfeng.loginlib.utils.YmnLoginUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.loginlib.utils.YmnLoginUtils.ymnLoginUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.loginlib.utils.YmnLoginUtils r0 = com.bianfeng.loginlib.utils.YmnLoginUtils.ymnLoginUtils
            return r0
    }

    public java.lang.String getCpFromExt(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L11
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L11
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r2 = r0.fromJson(r2)
            goto L16
        L11:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
        L16:
            java.lang.String r0 = "cp"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public com.bianfeng.splitscreenwindow.ShowType getDirection() {
            r1 = this;
            com.bianfeng.splitscreenwindow.ShowType r0 = r1.direction
            return r0
    }

    public java.lang.String getExt(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L11
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L11
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r2 = r0.fromJson(r2)
            goto L16
        L11:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
        L16:
            java.lang.String r0 = "cp"
            r2.put(r0, r3)
            com.bianfeng.thridlibrary.GsonUtils r3 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r2 = r3.toJson(r2)
            return r2
    }

    public void setDirection(int r3, int r4) {
            r2 = this;
            if (r4 != 0) goto L9
            if (r3 != 0) goto L9
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT
            r2.direction = r3
            goto L3c
        L9:
            r0 = 1
            if (r4 != 0) goto L13
            if (r3 != r0) goto L13
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_LAND
            r2.direction = r3
            goto L3c
        L13:
            if (r4 != r0) goto L1c
            if (r3 != 0) goto L1c
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_PORTRAIT
            r2.direction = r3
            goto L3c
        L1c:
            if (r4 != r0) goto L25
            if (r3 != r0) goto L25
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_LAND
            r2.direction = r3
            goto L3c
        L25:
            r1 = 2
            if (r4 != r1) goto L2f
            if (r3 != 0) goto L2f
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.FENPING_PORTRAIT
            r2.direction = r3
            goto L3c
        L2f:
            if (r4 != r1) goto L38
            if (r3 != r0) goto L38
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.FENPING_LAND
            r2.direction = r3
            goto L3c
        L38:
            com.bianfeng.splitscreenwindow.ShowType r3 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT
            r2.direction = r3
        L3c:
            return
    }

    public void setDirection(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L15
            r0.<init>(r4)     // Catch: java.lang.Exception -> L15
            java.lang.String r4 = "direction"
            int r4 = r0.optInt(r4)     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = "showtype"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Exception -> L15
            r3.setDirection(r4, r0)     // Catch: java.lang.Exception -> L15
            goto L36
        L15:
            r4 = move-exception
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getDirection:"
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.i(r4)
            com.bianfeng.splitscreenwindow.ShowType r4 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT
            r3.direction = r4
        L36:
            return
    }
}
