package com.bianfeng.ymnsdk.sysfunc.helpers;

public class VivoDeviceIDHelper {
    private android.os.Handler handler;
    private android.os.HandlerThread handlerThread;
    private boolean isSupportIds;
    private android.content.Context mConetxt;
    java.lang.String oaid;


    public VivoDeviceIDHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isSupportIds = r0
            r0 = 0
            r1.oaid = r0
            r1.mConetxt = r2
            return
    }

    static java.lang.String access$000(com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper r0, int r1, java.lang.String r2) {
            java.lang.String r0 = r0.getContentResolver(r1, r2)
            return r0
    }

    private void f() {
            r2 = this;
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "SqlWorkThread"
            r0.<init>(r1)
            r2.handlerThread = r0
            r0.start()
            com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper$1
            android.os.HandlerThread r1 = r2.handlerThread
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r2, r1)
            r2.handler = r0
            return
    }

    private java.lang.String getContentResolver(int r8, java.lang.String r9) {
            r7 = this;
            r0 = 0
            if (r8 == 0) goto L37
            r1 = 1
            if (r8 == r1) goto L21
            r1 = 2
            if (r8 == r1) goto Lb
            r2 = r0
            goto L3e
        Lb:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/AAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L3d
        L21:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/VAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L3d
        L37:
            java.lang.String r8 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r8 = android.net.Uri.parse(r8)
        L3d:
            r2 = r8
        L3e:
            android.content.Context r8 = r7.mConetxt
            android.content.ContentResolver r1 = r8.getContentResolver()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6)
            if (r8 == 0) goto L63
            boolean r9 = r8.moveToNext()
            if (r9 == 0) goto L5f
            java.lang.String r9 = "value"
            int r9 = r8.getColumnIndex(r9)
            java.lang.String r9 = r8.getString(r9)
            r0 = r9
        L5f:
            r8.close()
            goto L6a
        L63:
            java.lang.String r8 = "Wooo"
            java.lang.String r9 = "VivoDeviceIDHelper getContentResolver is faile."
            android.util.Log.i(r8, r9)
        L6a:
            return r0
    }

    private boolean isSupportIds() {
            r3 = this;
            java.lang.String r0 = "persist.sys.identifierid.supported"
            java.lang.String r1 = "0"
            java.lang.String r0 = r3.sysProperty(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "VIVO_OpenDeviceIDs isSupportIds issup -> "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Wooo"
            android.util.Log.i(r2, r1)
            java.lang.String r1 = "1"
            boolean r0 = r0.equals(r1)
            r3.isSupportIds = r0
            return r0
    }

    private java.lang.String sysProperty(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L28
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L28
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L28
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L28
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L28
            r2[r5] = r8     // Catch: java.lang.Exception -> L28
            java.lang.String r8 = "unknown"
            r2[r6] = r8     // Catch: java.lang.Exception -> L28
            java.lang.Object r8 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L28
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L28
            return r8
        L28:
            r8 = move-exception
            r8.printStackTrace()
            return r9
    }

    private void timeCheck(int r5, java.lang.String r6) {
            r4 = this;
            android.os.Handler r0 = r4.handler
            android.os.Message r0 = r0.obtainMessage()
            r1 = 11
            r0.what = r1
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "type"
            r3 = 0
            r1.putInt(r2, r3)
            r2 = 1
            if (r5 == r2) goto L1b
            r2 = 2
            if (r5 != r2) goto L20
        L1b:
            java.lang.String r5 = "appid"
            r1.putString(r5, r6)
        L20:
            r0.setData(r1)
            android.os.Handler r5 = r4.handler
            r5.sendMessage(r0)
            return
    }

    public java.lang.String getOaid() {
            r7 = this;
            java.lang.String r0 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            android.content.Context r0 = r7.mConetxt
            android.content.ContentResolver r1 = r0.getContentResolver()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6)
            r1 = 0
            if (r0 == 0) goto L2b
            boolean r2 = r0.moveToNext()
            if (r2 == 0) goto L27
            java.lang.String r1 = "value"
            int r1 = r0.getColumnIndex(r1)
            java.lang.String r1 = r0.getString(r1)
        L27:
            r0.close()
            goto L32
        L2b:
            java.lang.String r0 = "Wooo"
            java.lang.String r2 = "VivoDeviceIDHelper getContentResolver is faile."
            android.util.Log.i(r0, r2)
        L32:
            return r1
    }

    public java.lang.String loge() {
            r2 = this;
            r2.f()
            r2.isSupportIds()
            boolean r0 = r2.isSupportIds
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.String r0 = r2.oaid
            if (r0 == 0) goto L11
            return r1
        L11:
            r0 = 0
            r2.timeCheck(r0, r1)
            return r1
    }
}
