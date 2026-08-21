package com.heytap.mcssdk.e;

public class a implements com.heytap.mcssdk.e.c {


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.heytap.mcssdk.c.b r3, com.heytap.mcssdk.PushService r4) {
            r2 = this;
            if (r3 != 0) goto L8
            java.lang.String r3 = "message is null , please check param of parseCommandMessage(2)"
        L4:
            com.heytap.mcssdk.utils.d.e(r3)
            return
        L8:
            if (r4 != 0) goto Ld
            java.lang.String r3 = "pushService is null , please check param of parseCommandMessage(2)"
            goto L4
        Ld:
            com.heytap.msp.push.callback.ICallBackResultService r0 = r4.getPushCallback()
            if (r0 != 0) goto L16
            java.lang.String r3 = "pushService.getPushCallback() is null , please check param of parseCommandMessage(2)"
            goto L4
        L16:
            int r0 = r3.e()
            r1 = 12287(0x2fff, float:1.7218E-41)
            if (r0 == r1) goto Lbf
            r1 = 12298(0x300a, float:1.7233E-41)
            if (r0 == r1) goto Laf
            r1 = 12306(0x3012, float:1.7244E-41)
            if (r0 == r1) goto L9b
            r1 = 12309(0x3015, float:1.7249E-41)
            if (r0 == r1) goto L87
            r1 = 12289(0x3001, float:1.722E-41)
            if (r0 == r1) goto L6a
            r1 = 12290(0x3002, float:1.7222E-41)
            if (r0 == r1) goto L5e
            switch(r0) {
                case 12316: goto L4f;
                case 12317: goto L4f;
                case 12318: goto L37;
                default: goto L35;
            }
        L35:
            goto Ld0
        L37:
            r0 = 0
            java.lang.String r1 = r3.f()     // Catch: java.lang.Exception -> L40
            int r0 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L40
        L40:
            com.heytap.msp.push.callback.IGetAppNotificationCallBackService r4 = r4.getPushGetAppNotificationCallBack()
            if (r4 == 0) goto Ld0
            int r3 = r3.g()
            r4.onGetAppNotificationSwitch(r3, r0)
            goto Ld0
        L4f:
            com.heytap.msp.push.callback.ISetAppNotificationCallBackService r4 = r4.getPushSetAppNotificationCallBack()
            if (r4 == 0) goto Ld0
            int r3 = r3.g()
            r4.onSetAppNotificationSwitch(r3)
            goto Ld0
        L5e:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            int r3 = r3.g()
            r4.onUnRegister(r3)
            goto Ld0
        L6a:
            int r0 = r3.g()
            if (r0 != 0) goto L77
            java.lang.String r0 = r3.f()
            r4.setRegisterID(r0)
        L77:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            int r0 = r3.g()
            java.lang.String r3 = r3.f()
            r4.onRegister(r0, r3)
            goto Ld0
        L87:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            int r0 = r3.g()
            java.lang.String r3 = r3.f()
            int r3 = com.heytap.mcssdk.utils.Utils.parseInt(r3)
            r4.onGetNotificationStatus(r0, r3)
            goto Ld0
        L9b:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            int r0 = r3.g()
            java.lang.String r3 = r3.f()
            int r3 = com.heytap.mcssdk.utils.Utils.parseInt(r3)
            r4.onGetPushStatus(r0, r3)
            goto Ld0
        Laf:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            int r0 = r3.g()
            java.lang.String r3 = r3.f()
            r4.onSetPushTime(r0, r3)
            goto Ld0
        Lbf:
            com.heytap.msp.push.callback.ICallBackResultService r4 = r4.getPushCallback()
            if (r4 == 0) goto Ld0
            int r0 = r3.g()
            java.lang.String r3 = r3.f()
            r4.onError(r0, r3)
        Ld0:
            return
    }

    static void a(com.heytap.mcssdk.e.a r0, com.heytap.mcssdk.c.b r1, com.heytap.mcssdk.PushService r2) {
            r0.a(r1, r2)
            return
    }

    @Override
    public void a(android.content.Context r1, com.heytap.msp.push.mode.BaseMode r2, com.heytap.msp.push.callback.IDataMessageCallBackService r3) {
            r0 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r1 = r2.getType()
            r3 = 4105(0x1009, float:5.752E-42)
            if (r1 != r3) goto L2d
            com.heytap.mcssdk.c.b r2 = (com.heytap.mcssdk.c.b) r2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "mcssdk-CallBackResultProcessor:"
            r1.append(r3)
            java.lang.String r3 = r2.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.heytap.mcssdk.utils.d.b(r1)
            com.heytap.mcssdk.e.a$1 r1 = new com.heytap.mcssdk.e.a$1
            r1.<init>(r0, r2)
            com.heytap.mcssdk.utils.f.b(r1)
        L2d:
            return
    }
}
