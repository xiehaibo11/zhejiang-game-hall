package com.bianfeng.ymnsdk.util;

@java.lang.Deprecated
public class DataFunAgent {
    private static java.lang.String sessionId;

    public DataFunAgent() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String arrayToMapItem(java.lang.String[] r3) {
            if (r3 == 0) goto L1c
            int r0 = r3.length
            if (r0 != 0) goto L6
            goto L1c
        L6:
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
        Lc:
            int r2 = r3.length
            if (r1 >= r2) goto L17
            r2 = r3[r1]
            r0.put(r2)
            int r1 = r1 + 1
            goto Lc
        L17:
            java.lang.String r1 = r0.toString()
            return r1
        L1c:
            r0 = 0
            return r0
    }

    private static java.lang.String getDeviceId(android.content.Context r1) {
            java.lang.String r0 = ""
            return r0
    }

    protected static void init(android.content.Context r3) {
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lb
            com.bianfeng.ymnsdk.util.DataFunAgent.sessionId = r0     // Catch: java.lang.Exception -> Lb
            goto L19
        Lb:
            r0 = move-exception
            r0.printStackTrace()
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.bianfeng.ymnsdk.util.DataFunAgent.sessionId = r1
        L19:
            return
    }

    protected static void onEvent(java.lang.String r0, java.lang.String r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            return
    }

    protected static void testCallFunction(java.lang.String r1) {
            r0 = 0
            testCallFunction(r1, r0)
            return
    }

    protected static void testCallFunction(java.lang.String r3, java.lang.String[] r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = com.bianfeng.ymnsdk.util.DataFunAgent.sessionId
            java.lang.String r2 = "sessionId"
            r0.put(r2, r1)
            java.lang.String r1 = "functionName"
            r0.put(r1, r3)
            java.lang.String r1 = arrayToMapItem(r4)
            java.lang.String r2 = "args"
            r0.put(r2, r1)
            int r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "package_id"
            r0.put(r2, r1)
            return
    }
}
