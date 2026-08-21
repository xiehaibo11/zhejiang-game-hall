package com.bianfeng.ymnsdk.feature;

public class a {
    private static void a() {
            java.util.Set r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserWrappers()
            r1 = 1
            if (r0 == 0) goto L32
            int r2 = r0.size()
            if (r2 <= r1) goto L32
            java.util.Iterator r2 = r0.iterator()
        L11:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L32
            java.lang.Object r3 = r2.next()
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r3 = (com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper) r3
            boolean r4 = a(r3)
            if (r4 != 0) goto L2f
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4 = r3.a()
            boolean r4 = a(r4)
            if (r4 == 0) goto L2e
            goto L2f
        L2e:
            goto L11
        L2f:
            r0.remove(r3)
        L32:
            java.util.Set r2 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getPaymentWrappers()
            if (r2 == 0) goto L63
            int r3 = r2.size()
            if (r3 <= r1) goto L63
            java.util.Iterator r1 = r2.iterator()
        L42:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L63
            java.lang.Object r3 = r1.next()
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r3 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r3
            boolean r4 = a(r3)
            if (r4 != 0) goto L60
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4 = r3.a()
            boolean r4 = a(r4)
            if (r4 == 0) goto L5f
            goto L60
        L5f:
            goto L42
        L60:
            r2.remove(r3)
        L63:
            return
    }

    private static void a(android.app.Activity r3, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4) {
            boolean r0 = r4 instanceof com.bianfeng.ymnsdk.feature.protocol.IUserFeature
            r1 = 1
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "registUserFeatureWrapper "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper
            r2 = r4
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r2 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature) r2
            r0.<init>(r2)
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.registUserFeatureWrapper(r0)
            r4.setInjected(r1)
        L27:
            boolean r0 = r4 instanceof com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
            if (r0 == 0) goto L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "registPaymentFeatureWrapper "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r0)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r0 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper
            r2 = r4
            com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r2 = (com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature) r2
            r0.<init>(r2)
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.registPaymentFeatureWrapper(r0)
            r4.setInjected(r1)
        L4d:
            boolean r0 = r4 instanceof com.bianfeng.ymnsdk.feature.protocol.IUserFeature
            if (r0 != 0) goto L5b
            boolean r0 = r4 instanceof com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
            if (r0 != 0) goto L5b
            com.bianfeng.ymnsdk.YmnSdkWrapper.registPluginFeatureWrapper(r4)
            r4.setInjected(r1)
        L5b:
            return
    }

    public static void a(android.content.Context r3, java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r4) {
            java.util.Collection r0 = r4.values()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r1
            boolean r2 = r1.isInjected()
            if (r2 == 0) goto L1b
            goto L25
        L1b:
            boolean r2 = r3 instanceof android.app.Activity
            if (r2 == 0) goto L25
            r2 = r3
            android.app.Activity r2 = (android.app.Activity) r2
            a(r2, r1)
        L25:
            boolean r2 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isInitAlone()
            if (r2 == 0) goto L33
            boolean r2 = r3 instanceof android.app.Activity
            if (r2 != 0) goto L36
            r1.updateContext(r3)
            goto L36
        L33:
            r1.updateContext(r3)
        L36:
            goto L8
        L37:
            a()
            return
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1) {
            boolean r0 = r1 instanceof com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface
            if (r0 == 0) goto Le
            r0 = r1
            com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r0 = (com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface) r0
            boolean r0 = r0.available()
            r0 = r0 ^ 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r2) {
            java.lang.String r0 = "template"
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r2.a()     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r1.getPluginName()     // Catch: java.lang.Exception -> Lf
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> Lf
            return r0
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r2) {
            java.lang.String r0 = "template"
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r2.a()     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r1.getPluginName()     // Catch: java.lang.Exception -> Lf
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> Lf
            return r0
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }
}
