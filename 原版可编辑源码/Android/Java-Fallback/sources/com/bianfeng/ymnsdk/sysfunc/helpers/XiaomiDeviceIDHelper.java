package com.bianfeng.ymnsdk.sysfunc.helpers;

public class XiaomiDeviceIDHelper {
    private java.lang.reflect.Method aaid;
    private java.lang.Object idImpl;
    private java.lang.Class idProvider;
    private android.content.Context mContext;
    private java.lang.reflect.Method oaid;
    private java.lang.reflect.Method udid;
    private java.lang.reflect.Method vaid;

    public XiaomiDeviceIDHelper(android.content.Context r6) {
            r5 = this;
            r5.<init>()
            r5.mContext = r6
            java.lang.String r6 = "com.android.id.impl.IdProviderImpl"
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Exception -> L14
            r5.idProvider = r6     // Catch: java.lang.Exception -> L14
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.Exception -> L14
            r5.idImpl = r6     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r6 = move-exception
            r6.printStackTrace()
        L18:
            r6 = 0
            r0 = 1
            java.lang.Class r1 = r5.idProvider     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = "getDefaultUDID"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L2b
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r6] = r4     // Catch: java.lang.Exception -> L2b
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Exception -> L2b
            r5.udid = r1     // Catch: java.lang.Exception -> L2b
            goto L2f
        L2b:
            r1 = move-exception
            r1.printStackTrace()
        L2f:
            java.lang.Class r1 = r5.idProvider     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = "getOAID"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L40
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r6] = r4     // Catch: java.lang.Exception -> L40
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Exception -> L40
            r5.oaid = r1     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r1 = move-exception
            r1.printStackTrace()
        L44:
            java.lang.Class r1 = r5.idProvider     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "getVAID"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L55
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r6] = r4     // Catch: java.lang.Exception -> L55
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Exception -> L55
            r5.vaid = r1     // Catch: java.lang.Exception -> L55
            goto L59
        L55:
            r1 = move-exception
            r1.printStackTrace()
        L59:
            java.lang.Class r1 = r5.idProvider     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = "getAAID"
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L6a
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r0[r6] = r3     // Catch: java.lang.Exception -> L6a
            java.lang.reflect.Method r6 = r1.getMethod(r2, r0)     // Catch: java.lang.Exception -> L6a
            r5.aaid = r6     // Catch: java.lang.Exception -> L6a
            goto L6e
        L6a:
            r6 = move-exception
            r6.printStackTrace()
        L6e:
            return
    }

    private java.lang.String invokeMethod(android.content.Context r4, java.lang.reflect.Method r5) {
            r3 = this;
            java.lang.Object r0 = r3.idImpl
            if (r0 == 0) goto L17
            if (r5 == 0) goto L17
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L13
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L13
            java.lang.Object r4 = r5.invoke(r0, r1)     // Catch: java.lang.Exception -> L13
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L13
            goto L18
        L13:
            r4 = move-exception
            r4.printStackTrace()
        L17:
            r4 = 0
        L18:
            return r4
    }

    public java.lang.String getAAID() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.reflect.Method r1 = r2.aaid
            java.lang.String r0 = r2.invokeMethod(r0, r1)
            return r0
    }

    public java.lang.String getOAID() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.reflect.Method r1 = r2.oaid
            java.lang.String r0 = r2.invokeMethod(r0, r1)
            return r0
    }

    public java.lang.String getUDID() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.reflect.Method r1 = r2.udid
            java.lang.String r0 = r2.invokeMethod(r0, r1)
            return r0
    }

    public java.lang.String getVAID() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.reflect.Method r1 = r2.vaid
            java.lang.String r0 = r2.invokeMethod(r0, r1)
            return r0
    }
}
