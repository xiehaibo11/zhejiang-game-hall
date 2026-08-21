package com.bianfeng.ymnsdk.util;

@java.lang.Deprecated
public class AnalyticsData {
    public static final int DATA_CANCEL = -2;
    public static final int DATA_FAIL = -1;
    public static final int DATA_SUCCESS = 1;
    public static final java.lang.String KEY_TRANSACTIONID = "transactionId";
    private static java.util.Set<java.lang.String> blackFunctions;
    private static java.lang.String transactionId;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bianfeng.ymnsdk.util.AnalyticsData.blackFunctions = r0
            return
    }

    public AnalyticsData() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addBlackFunction(java.lang.String r1) {
            java.util.Set<java.lang.String> r0 = com.bianfeng.ymnsdk.util.AnalyticsData.blackFunctions
            r0.add(r1)
            return
    }

    public static void callFunctionEvent(java.lang.String r1) {
            java.util.Set<java.lang.String> r0 = com.bianfeng.ymnsdk.util.AnalyticsData.blackFunctions
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lb
            com.bianfeng.ymnsdk.util.DataFunAgent.testCallFunction(r1)
        Lb:
            return
    }

    public static void callFunctionEvent(java.lang.String r1, java.lang.String[] r2) {
            java.util.Set<java.lang.String> r0 = com.bianfeng.ymnsdk.util.AnalyticsData.blackFunctions
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Lb
            com.bianfeng.ymnsdk.util.DataFunAgent.testCallFunction(r1, r2)
        Lb:
            return
    }

    public static void datafunOnEvent(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = 0
            datafunOnEvent(r1, r2, r3, r0)
            return
    }

    public static void datafunOnEvent(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r4)
            java.util.Map r1 = jsonStringToMap(r5)
            r0.putAll(r1)
            com.bianfeng.ymnsdk.util.DataFunAgent.onEvent(r2, r3, r0)
            return
    }

    public static java.lang.String getTransactionId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.AnalyticsData.transactionId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            com.bianfeng.ymnsdk.util.AnalyticsData.transactionId = r0
        Lc:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.AnalyticsData.transactionId
            return r0
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.util.DataFunAgent.init(r0)
            return
    }

    public static java.util.Map<java.lang.String, java.lang.Object> jsonStringToMap(java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L13
            java.lang.String r1 = "AnalyticsData"
            java.lang.String r2 = "onCallback msg is null"
            com.bianfeng.ymnsdk.util.Logger.i(r1, r2)
            return r0
        L13:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L32
            r1.<init>(r5)     // Catch: java.lang.Exception -> L32
            java.util.Iterator r2 = r1.keys()     // Catch: java.lang.Exception -> L32
        L1c:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L32
            if (r3 == 0) goto L31
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L32
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Exception -> L32
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L32
            goto L1c
        L31:
            return r0
        L32:
            r1 = move-exception
            java.lang.String r2 = "msg"
            r0.put(r2, r5)
            return r0
    }

    public static void loginServerResEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, int r4, java.lang.String r5, java.lang.String r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.getPluginId()
            java.lang.String r2 = "platformId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSdkVersion()
            java.lang.String r2 = "sdkVersion"
            r0.put(r2, r1)
            java.lang.String r1 = "transactionId"
            r0.put(r1, r6)
            r1 = -1
            java.lang.String r2 = "1010103"
            if (r4 == r1) goto L2b
            r1 = 1
            if (r4 == r1) goto L25
            goto L30
        L25:
            java.lang.String r1 = "1"
            datafunOnEvent(r2, r1, r0, r5)
            goto L30
        L2b:
            java.lang.String r1 = "2"
            datafunOnEvent(r2, r1, r0, r5)
        L30:
            return
    }

    public static void loginThirdEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0) {
            return
    }

    public static void loginThirdResEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, int r4, java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.getPluginId()
            java.lang.String r2 = "platformId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSdkVersion()
            java.lang.String r2 = "sdkVersion"
            r0.put(r2, r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.util.AnalyticsData.transactionId
            java.lang.String r2 = "transactionId"
            r0.put(r2, r1)
            r1 = 102(0x66, float:1.43E-43)
            java.lang.String r2 = "1010101"
            if (r4 == r1) goto L39
            r1 = 105(0x69, float:1.47E-43)
            if (r4 == r1) goto L33
            r1 = 106(0x6a, float:1.49E-43)
            if (r4 == r1) goto L2d
            goto L3f
        L2d:
            java.lang.String r1 = "4"
            datafunOnEvent(r2, r1, r0, r5)
            goto L3f
        L33:
            java.lang.String r1 = "3"
            datafunOnEvent(r2, r1, r0, r5)
            goto L3f
        L39:
            java.lang.String r1 = "2"
            datafunOnEvent(r2, r1, r0, r5)
        L3f:
            return
    }

    public static void payServerEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0) {
            return
    }

    public static void payServerResEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, int r4, java.lang.String r5, java.lang.String r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.getPluginId()
            java.lang.String r2 = "platformId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSdkVersion()
            java.lang.String r2 = "sdkVersion"
            r0.put(r2, r1)
            com.bianfeng.ymnsdk.util.AnalyticsData.transactionId = r6
            java.lang.String r1 = "transactionId"
            r0.put(r1, r6)
            r1 = -1
            java.lang.String r2 = "1010203"
            if (r4 == r1) goto L2d
            r1 = 1
            if (r4 == r1) goto L27
            goto L32
        L27:
            java.lang.String r1 = "1"
            datafunOnEvent(r2, r1, r0, r5)
            goto L32
        L2d:
            java.lang.String r1 = "2"
            datafunOnEvent(r2, r1, r0, r5)
        L32:
            return
    }

    public static void payThirdResEvent(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, int r4, java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.getPluginId()
            java.lang.String r2 = "platformId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSdkVersion()
            java.lang.String r2 = "sdkVersion"
            r0.put(r2, r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.util.AnalyticsData.transactionId
            java.lang.String r2 = "transactionId"
            r0.put(r2, r1)
            java.lang.String r1 = "1010204"
            switch(r4) {
                case 200: goto L30;
                case 201: goto L2a;
                case 202: goto L24;
                default: goto L23;
            }
        L23:
            goto L36
        L24:
            java.lang.String r2 = "4"
            datafunOnEvent(r1, r2, r0, r5)
            goto L36
        L2a:
            java.lang.String r2 = "3"
            datafunOnEvent(r1, r2, r0, r5)
            goto L36
        L30:
            java.lang.String r2 = "2"
            datafunOnEvent(r1, r2, r0, r5)
        L36:
            return
    }
}
