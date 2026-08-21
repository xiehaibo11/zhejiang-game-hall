package com.bianfeng.privategetui;

class YmnGetuiHandler extends android.os.Handler {
    private static com.bianfeng.privategetui.PrivateGetuiInterface anInterface;
    private static com.bianfeng.privategetui.YmnGetuiHandler handler;
    private static volatile boolean isFirst;

    public YmnGetuiHandler(android.os.Looper r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static void init(com.bianfeng.privategetui.PrivateGetuiInterface r1) {
            boolean r0 = com.bianfeng.privategetui.YmnGetuiHandler.isFirst
            if (r0 != 0) goto L14
            r0 = 1
            com.bianfeng.privategetui.YmnGetuiHandler.isFirst = r0
            com.bianfeng.privategetui.YmnGetuiHandler.anInterface = r1
            com.bianfeng.privategetui.YmnGetuiHandler r1 = new com.bianfeng.privategetui.YmnGetuiHandler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r1.<init>(r0)
            com.bianfeng.privategetui.YmnGetuiHandler.handler = r1
        L14:
            return
    }

    public static void setMsg(android.os.Message r1) {
            com.bianfeng.privategetui.YmnGetuiHandler r0 = com.bianfeng.privategetui.YmnGetuiHandler.handler
            if (r0 == 0) goto L7
            r0.sendMessage(r1)
        L7:
            return
    }

    @Override
    public void handleMessage(android.os.Message r5) {
            r4 = this;
            super.handleMessage(r5)
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            java.lang.String r1 = "ymnsdk"
            if (r0 != 0) goto Lf
            java.lang.String r5 = "getui handler not init "
            android.util.Log.i(r1, r5)
            return
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getui handler msg "
            r0.append(r2)
            java.lang.Object r2 = r5.obj
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r1, r0)
            int r0 = r5.what
            java.lang.String r1 = ""
            switch(r0) {
                case 1502: goto Lfd;
                case 1503: goto Le4;
                case 1504: goto Lcb;
                case 1505: goto Lb2;
                default: goto L2c;
            }
        L2c:
            switch(r0) {
                case 1511: goto L99;
                case 1512: goto L7f;
                case 1513: goto L65;
                case 1514: goto L4b;
                case 1515: goto L31;
                default: goto L2f;
            }
        L2f:
            goto L115
        L31:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1515(0x5eb, float:2.123E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        L4b:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1514(0x5ea, float:2.122E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        L65:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1513(0x5e9, float:2.12E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        L7f:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1512(0x5e8, float:2.119E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        L99:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1511(0x5e7, float:2.117E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        Lb2:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1505(0x5e1, float:2.109E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        Lcb:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1504(0x5e0, float:2.108E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        Le4:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1503(0x5df, float:2.106E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
            goto L115
        Lfd:
            com.bianfeng.privategetui.PrivateGetuiInterface r0 = com.bianfeng.privategetui.YmnGetuiHandler.anInterface
            r2 = 1502(0x5de, float:2.105E-42)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r5 = r5.obj
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = r3.toString()
            r0.sendResult(r2, r5)
        L115:
            return
    }
}
