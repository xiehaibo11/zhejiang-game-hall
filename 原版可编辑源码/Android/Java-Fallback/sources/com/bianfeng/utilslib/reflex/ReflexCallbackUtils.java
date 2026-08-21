package com.bianfeng.utilslib.reflex;

public class ReflexCallbackUtils {
    private static com.bianfeng.utilslib.reflex.ReflexCallbackUtils utils;

    private ReflexCallbackUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.reflex.ReflexCallbackUtils getInstance() {
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r0 = com.bianfeng.utilslib.reflex.ReflexCallbackUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r0 = new com.bianfeng.utilslib.reflex.ReflexCallbackUtils
            r0.<init>()
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r0 = com.bianfeng.utilslib.reflex.ReflexCallbackUtils.utils
            return r0
    }

    private java.lang.Object invokeMethod(java.lang.String r7, java.lang.String r8, java.lang.Object r9) {
            r6 = this;
            java.lang.Class r0 = java.lang.Class.forName(r7)     // Catch: java.lang.Exception -> L36
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L36
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L36
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L36
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L36
            if (r9 != 0) goto L20
            java.lang.Class[] r9 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L36
            java.lang.reflect.Method r9 = r0.getMethod(r8, r9)     // Catch: java.lang.Exception -> L36
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L36
            java.lang.Object r7 = r9.invoke(r2, r0)     // Catch: java.lang.Exception -> L36
            return r7
        L20:
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L36
            java.lang.Class r5 = r9.getClass()     // Catch: java.lang.Exception -> L36
            r4[r1] = r5     // Catch: java.lang.Exception -> L36
            java.lang.reflect.Method r0 = r0.getMethod(r8, r4)     // Catch: java.lang.Exception -> L36
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L36
            r3[r1] = r9     // Catch: java.lang.Exception -> L36
            java.lang.Object r7 = r0.invoke(r2, r3)     // Catch: java.lang.Exception -> L36
            return r7
        L36:
            r9 = move-exception
            r9.printStackTrace()
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ReflexCallbackUtils invokeMethod clzssName:"
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = "==methodName="
            r1.append(r2)
            r1.append(r8)
            java.lang.String r2 = "==Exception :"
            r1.append(r2)
            java.lang.String r9 = r9.getMessage()
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.i(r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "not find class="
            r9.append(r0)
            r9.append(r7)
            java.lang.String r7 = ",method="
            r9.append(r7)
            r9.append(r8)
            java.lang.String r7 = r9.toString()
            return r7
    }

    public java.lang.Object callMethod(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "callMethod"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = "data"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            r0 = 0
            java.lang.Object r4 = r3.invokeMethod(r4, r5, r0)
            return r4
    }

    public java.lang.Object callMethod(java.lang.String r4, java.lang.String r5, java.lang.Object r6) {
            r3 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "callMethod 3"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = "data"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.Object r4 = r3.invokeMethod(r4, r5, r6)
            return r4
    }

    public java.lang.Object getField(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.Class r0 = java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L1e
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1e
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L1e
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1e
            java.lang.Object r1 = r2.newInstance(r1)     // Catch: java.lang.Exception -> L1e
            java.lang.reflect.Field r0 = r0.getDeclaredField(r5)     // Catch: java.lang.Exception -> L1e
            r2 = 1
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L1e
            java.lang.Object r4 = r0.get(r1)     // Catch: java.lang.Exception -> L1e
            return r4
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not find class="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = ",Field="
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public java.lang.Object onCallWithHashmap(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "type"
            r0.put(r1, r5)
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ReflexCallbackUtils onCallWithObject："
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r5.i(r1)
            java.lang.String r5 = "onCall"
            java.lang.Object r4 = r3.invokeMethod(r4, r5, r0)
            return r4
    }

    public java.lang.Object onCallWithObject(java.lang.String r4, java.lang.Object r5) {
            r3 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ReflexCallbackUtils onCallWithObject："
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = "onCall"
            java.lang.Object r4 = r3.invokeMethod(r4, r0, r5)
            return r4
    }
}
