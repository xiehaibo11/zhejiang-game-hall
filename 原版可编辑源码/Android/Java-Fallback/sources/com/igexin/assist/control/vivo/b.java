package com.igexin.assist.control.vivo;

class b implements com.vivo.push.IPushActionListener {
    final android.content.Context a;
    final com.igexin.assist.control.vivo.VivoPushManager b;

    b(com.igexin.assist.control.vivo.VivoPushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void onStateChanged(int r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "turnOffPush finish, state = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Assist_VV"
            android.util.Log.d(r1, r0)
            if (r4 != 0) goto L33
            android.content.Context r4 = r3.a
            if (r4 == 0) goto L33
            java.lang.String r4 = "turnOnPush token = \"false\""
            android.util.Log.d(r1, r4)
            com.igexin.assist.MessageBean r4 = new com.igexin.assist.MessageBean
            android.content.Context r0 = r3.a
            java.lang.String r1 = "token"
            java.lang.String r2 = "false"
            r4.<init>(r0, r1, r2)
            com.igexin.assist.action.MessageManger r0 = com.igexin.assist.action.MessageManger.getInstance()
            r0.addMessage(r4)
        L33:
            return
    }
}
