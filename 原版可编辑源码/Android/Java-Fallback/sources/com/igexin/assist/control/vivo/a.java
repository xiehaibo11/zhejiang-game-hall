package com.igexin.assist.control.vivo;

class a implements com.vivo.push.IPushActionListener {
    final android.content.Context a;
    final com.igexin.assist.control.vivo.VivoPushManager b;

    a(com.igexin.assist.control.vivo.VivoPushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void onStateChanged(int r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "turnOnPush finish, state = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Assist_VV"
            android.util.Log.d(r1, r0)
            if (r5 != 0) goto L67
            android.content.Context r5 = r4.a
            com.vivo.push.PushClient r5 = com.vivo.push.PushClient.getInstance(r5)
            java.lang.String r5 = r5.getRegId()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "turnOnPush token = "
            r0.append(r2)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r1, r0)
            android.content.Context r0 = r4.a
            if (r0 == 0) goto L70
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L70
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean
            android.content.Context r1 = r4.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "VV_"
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.String r2 = "token"
            r0.<init>(r1, r2, r5)
            com.igexin.assist.control.vivo.VivoPushManager r5 = r4.b
            com.igexin.assist.control.vivo.VivoPushManager.a(r5, r0)
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()
            r5.addMessage(r0)
            goto L70
        L67:
            r0 = 101(0x65, float:1.42E-43)
            if (r5 != r0) goto L70
            java.lang.String r5 = "the vivo rom not support system push"
            android.util.Log.d(r1, r5)
        L70:
            return
    }
}
