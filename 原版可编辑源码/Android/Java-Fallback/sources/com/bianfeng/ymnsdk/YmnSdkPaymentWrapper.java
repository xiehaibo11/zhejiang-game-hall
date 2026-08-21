package com.bianfeng.ymnsdk;

public class YmnSdkPaymentWrapper extends com.bianfeng.ymnsdk.YmnSdkWrapper {
    private static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> autoFunctions;
    private static java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> wrappers;

    public YmnSdkPaymentWrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean availableDefault() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            if (r0 == 0) goto Ld
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 1
            return r0
        Ld:
            java.lang.String r0 = "not exist available PaymentFeature plugin"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 0
            return r0
    }

    public static void callFunction(java.lang.String r2) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            if (r0 == 0) goto L35
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L35
            java.lang.String r0 = "init"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L35
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r2)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r0.a()
            android.app.Activity r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            r0.onContextChanged(r1)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r2)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r0.a()
            android.app.Activity r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            r0.onInit(r1)
            goto L38
        L35:
            com.bianfeng.ymnsdk.YmnSdkWrapper.callFunction(r2)
        L38:
            return
    }

    public static void callFunction(java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            if (r0 == 0) goto L16
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            r0.pay(r2)
            goto L19
        L16:
            com.bianfeng.ymnsdk.YmnSdkWrapper.callFunction(r1, r2)
        L19:
            return
    }

    public static void callFunction(java.lang.String r2, java.lang.String... r3) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            if (r0 == 0) goto L20
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L20
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.isJsonParamers(r3)
            if (r0 == 0) goto L20
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r2)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            java.util.LinkedHashMap r1 = com.bianfeng.ymnsdk.YmnStrategy.arrayParamersAsMap(r3)
            r0.pay(r1)
            goto L23
        L20:
            com.bianfeng.ymnsdk.YmnSdkWrapper.callFunction(r2, r3)
        L23:
            return
    }

    public static void checkOrder(java.lang.String r1, int r2) {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = getPaymentDefault()
            r0.a(r1, r2)
        Ld:
            return
    }

    public static java.lang.String getOrderId() {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = getPaymentDefault()
            java.lang.String r0 = r0.getOrderId()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static java.lang.String getOrderId(java.lang.String r1) {
            boolean r0 = availableDefault()
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.Object r0 = r0.get(r1)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            java.lang.String r0 = r0.getOrderId()
            return r0
        L13:
            r0 = 0
            return r0
    }

    public static com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper getPaymentDefault() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            if (r0 == 0) goto L18
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            goto L18
        Lb:
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r0
            return r0
        L18:
            r0 = 0
            return r0
    }

    public static java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> getPaymentWrappers() {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            return r0
    }

    public static boolean isSupportFunction(java.lang.String r1) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            if (r0 == 0) goto Lc
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.isSupportFunction(r1)
            return r0
    }

    public static void pay(java.util.Map<java.lang.String, java.lang.String> r5) {
            boolean r0 = availableDefault()
            if (r0 == 0) goto Lae
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto La6
            java.lang.String r0 = "compose_pay_mode"
            boolean r2 = isSupportFunction(r0)
            if (r2 == 0) goto La6
            r2 = 12
            java.lang.String[] r2 = new java.lang.String[r2]
            r3 = 0
            java.lang.String r4 = "order_id"
            java.lang.Object r4 = r5.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            r2[r3] = r4
            java.lang.String r3 = "product_id"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 2
            java.lang.String r3 = "product_name"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 3
            java.lang.String r3 = "product_price"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 4
            java.lang.String r3 = "product_count"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 5
            java.lang.String r3 = "role_id"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 6
            java.lang.String r3 = "role_name"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 7
            java.lang.String r3 = "role_grade"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 8
            java.lang.String r3 = "role_balance"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 9
            java.lang.String r3 = "server_id"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 10
            java.lang.String r3 = "notify_url"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            r1 = 11
            java.lang.String r3 = "ext"
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            r2[r1] = r3
            com.bianfeng.ymnsdk.YmnSdkWrapper.callFunction(r0, r2)
            goto Lb3
        La6:
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = getPaymentDefault()
            r0.pay(r5)
            goto Lb3
        Lae:
            java.lang.String r0 = "支付渠道没有初始化"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
        Lb3:
            return
    }

    private static void registPaymentFeatureAutoFunctions(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r5) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions = r0
        Lb:
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r5.a()
            java.lang.String r1 = r0.getPluginName()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r2 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r4 = "_pay"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.put(r3, r5)
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r2 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.autoFunctions
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r4 = "_plugin_init"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.put(r3, r5)
            return
    }

    public static void registPaymentFeatureWrapper(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1) {
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            if (r0 != 0) goto Lb
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers = r0
        Lb:
            java.util.Set<com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.wrappers
            r0.add(r1)
            registPaymentFeatureAutoFunctions(r1)
            return
    }
}
