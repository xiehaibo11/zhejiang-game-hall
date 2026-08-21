package com.mbridge.msdk.scheme.applet;

public class AppletModelManager {
    private static final java.lang.String TAG = null;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> appletsModels;

    static class 1 {
    }

    private static class SingletonHolder {
        private static final com.mbridge.msdk.scheme.applet.AppletModelManager INSTANCE = null;

        static {
                com.mbridge.msdk.scheme.applet.AppletModelManager r0 = new com.mbridge.msdk.scheme.applet.AppletModelManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.scheme.applet.AppletModelManager.SingletonHolder.INSTANCE = r0
                return
        }

        private SingletonHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.mbridge.msdk.scheme.applet.AppletModelManager access$000() {
                com.mbridge.msdk.scheme.applet.AppletModelManager r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.SingletonHolder.INSTANCE
                return r0
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.scheme.applet.AppletModelManager> r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.scheme.applet.AppletModelManager.TAG = r0
            return
    }

    private AppletModelManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.appletsModels = r0
            return
    }

    AppletModelManager(com.mbridge.msdk.scheme.applet.AppletModelManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.scheme.applet.AppletModelManager getInstance() {
            com.mbridge.msdk.scheme.applet.AppletModelManager r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.SingletonHolder.access$000()
            return r0
    }

    public com.mbridge.msdk.scheme.applet.AppletsModel get(com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            r5 = this;
            java.lang.String r0 = "_"
            r1 = 0
            if (r6 != 0) goto L6
            return r1
        L6:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
            r2.<init>()     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r6.getRequestId()     // Catch: java.lang.Exception -> L4e
            r2.append(r3)     // Catch: java.lang.Exception -> L4e
            r2.append(r0)     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r6.getId()     // Catch: java.lang.Exception -> L4e
            r2.append(r3)     // Catch: java.lang.Exception -> L4e
            r2.append(r0)     // Catch: java.lang.Exception -> L4e
            java.lang.String r0 = r6.getCampaignUnitId()     // Catch: java.lang.Exception -> L4e
            r2.append(r0)     // Catch: java.lang.Exception -> L4e
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r2 = r5.appletsModels     // Catch: java.lang.Exception -> L4e
            boolean r2 = r2.containsKey(r0)     // Catch: java.lang.Exception -> L4e
            if (r2 == 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r6 = r5.appletsModels     // Catch: java.lang.Exception -> L4e
            java.lang.Object r6 = r6.get(r0)     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.scheme.applet.AppletsModel r6 = (com.mbridge.msdk.scheme.applet.AppletsModel) r6     // Catch: java.lang.Exception -> L4e
            return r6
        L3b:
            com.mbridge.msdk.scheme.applet.AppletsModel r2 = new com.mbridge.msdk.scheme.applet.AppletsModel     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r6.getCampaignUnitId()     // Catch: java.lang.Exception -> L4e
            java.lang.String r4 = r6.getRequestId()     // Catch: java.lang.Exception -> L4e
            r2.<init>(r6, r3, r4)     // Catch: java.lang.Exception -> L4e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r6 = r5.appletsModels     // Catch: java.lang.Exception -> L4e
            r6.put(r0, r2)     // Catch: java.lang.Exception -> L4e
            return r2
        L4e:
            r6 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L5c
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.TAG
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L5c:
            return r1
    }

    public void remove(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            java.lang.String r0 = "_"
            if (r4 != 0) goto L5
            return
        L5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L37
            r1.<init>()     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = r4.getRequestId()     // Catch: java.lang.Exception -> L37
            r1.append(r2)     // Catch: java.lang.Exception -> L37
            r1.append(r0)     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = r4.getId()     // Catch: java.lang.Exception -> L37
            r1.append(r2)     // Catch: java.lang.Exception -> L37
            r1.append(r0)     // Catch: java.lang.Exception -> L37
            java.lang.String r4 = r4.getCampaignUnitId()     // Catch: java.lang.Exception -> L37
            r1.append(r4)     // Catch: java.lang.Exception -> L37
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L37
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r0 = r3.appletsModels     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L45
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r0 = r3.appletsModels     // Catch: java.lang.Exception -> L37
            r0.remove(r4)     // Catch: java.lang.Exception -> L37
            goto L45
        L37:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L45
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.TAG
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L45:
            return
    }

    public void replace(com.mbridge.msdk.scheme.applet.AppletsModel r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r3 = this;
            java.lang.String r0 = "_"
            if (r5 == 0) goto L4c
            if (r4 != 0) goto L7
            goto L4c
        L7:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = r5.getRequestId()     // Catch: java.lang.Exception -> L3e
            r1.append(r2)     // Catch: java.lang.Exception -> L3e
            r1.append(r0)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = r5.getId()     // Catch: java.lang.Exception -> L3e
            r1.append(r2)     // Catch: java.lang.Exception -> L3e
            r1.append(r0)     // Catch: java.lang.Exception -> L3e
            java.lang.String r5 = r5.getCampaignUnitId()     // Catch: java.lang.Exception -> L3e
            r1.append(r5)     // Catch: java.lang.Exception -> L3e
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r0 = r3.appletsModels     // Catch: java.lang.Exception -> L3e
            boolean r0 = r0.containsKey(r5)     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L38
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r0 = r3.appletsModels     // Catch: java.lang.Exception -> L3e
            r0.remove(r5)     // Catch: java.lang.Exception -> L3e
        L38:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.scheme.applet.AppletsModel> r0 = r3.appletsModels     // Catch: java.lang.Exception -> L3e
            r0.put(r5, r4)     // Catch: java.lang.Exception -> L3e
            goto L4c
        L3e:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L4c
            java.lang.String r5 = com.mbridge.msdk.scheme.applet.AppletModelManager.TAG
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L4c:
            return
    }
}
