package com.bianfeng.ymnsdk.feature;

public class a {
    private static void a() {
            java.util.Set r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserWrappers()
            r1 = 1
            if (r0 == 0) goto L30
            int r2 = r0.size()
            if (r2 <= r1) goto L30
            java.util.Iterator r2 = r0.iterator()
        L11:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L30
            java.lang.Object r3 = r2.next()
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r3 = (com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper) r3
            boolean r4 = a(r3)
            if (r4 != 0) goto L2d
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4 = r3.a()
            boolean r4 = a(r4)
            if (r4 == 0) goto L11
        L2d:
            r0.remove(r3)
        L30:
            java.util.Set r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getPaymentWrappers()
            if (r0 == 0) goto L5f
            int r2 = r0.size()
            if (r2 <= r1) goto L5f
            java.util.Iterator r1 = r0.iterator()
        L40:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L5f
            java.lang.Object r2 = r1.next()
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r2 = (com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper) r2
            boolean r3 = a(r2)
            if (r3 != 0) goto L5c
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = r2.a()
            boolean r3 = a(r3)
            if (r3 == 0) goto L40
        L5c:
            r0.remove(r2)
        L5f:
            return
    }

    private static void a(android.app.Activity r2, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3) {
            boolean r2 = r3 instanceof com.bianfeng.ymnsdk.feature.protocol.IUserFeature
            r0 = 1
            if (r2 == 0) goto L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = "registUserFeatureWrapper "
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r2)
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r2 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper
            r1 = r3
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r1 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature) r1
            r2.<init>(r1)
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.registUserFeatureWrapper(r2)
            r3.setInjected(r0)
        L27:
            boolean r2 = r3 instanceof com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
            if (r2 == 0) goto L4d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = "registPaymentFeatureWrapper "
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r2)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r2 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper
            r1 = r3
            com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r1 = (com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature) r1
            r2.<init>(r1)
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.registPaymentFeatureWrapper(r2)
            r3.setInjected(r0)
        L4d:
            return
    }

    public static void a(android.content.Context r2, java.util.HashMap<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r3) {
            java.util.Collection r3 = r3.values()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L29
            java.lang.Object r0 = r3.next()
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r0
            boolean r1 = r0.isInjected()
            if (r1 == 0) goto L1b
            goto L25
        L1b:
            boolean r1 = r2 instanceof android.app.Activity
            if (r1 == 0) goto L25
            r1 = r2
            android.app.Activity r1 = (android.app.Activity) r1
            a(r1, r0)
        L25:
            r0.updateContext(r2)
            goto L8
        L29:
            a()
            return
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1) {
            boolean r0 = r1 instanceof com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r1 = (com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface) r1
            boolean r1 = r1.available()
            r1 = r1 ^ 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1) {
            java.lang.String r0 = "template"
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.a()     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r1.getPluginName()     // Catch: java.lang.Exception -> Lf
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    private static boolean a(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
            java.lang.String r0 = "template"
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.a()     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r1.getPluginName()     // Catch: java.lang.Exception -> Lf
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }
}
