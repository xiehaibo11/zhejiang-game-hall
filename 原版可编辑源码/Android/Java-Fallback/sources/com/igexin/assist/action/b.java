package com.igexin.assist.action;

class b extends java.lang.Thread {
    com.igexin.assist.MessageBean a;
    final com.igexin.assist.action.MessageManger b;

    b(com.igexin.assist.action.MessageManger r1, com.igexin.assist.MessageBean r2) {
            r0 = this;
            r0.b = r1
            r0.<init>()
            r0.a = r2
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            if (r0 == 0) goto Lb7
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getMessageType()     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r1 = "token"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> Lb3
            if (r0 == 0) goto L2f
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getStringMessage()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r1 = r4.a     // Catch: java.lang.Throwable -> Lb3
            android.os.Bundle r1 = r1.extra     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "isForce"
            boolean r1 = r1.getBoolean(r2)     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.action.MessageManger r2 = r4.b     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r3 = r4.a     // Catch: java.lang.Throwable -> Lb3
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.action.MessageManger.a(r2, r3, r0, r1)     // Catch: java.lang.Throwable -> Lb3
            goto Lb7
        L2f:
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getMessageType()     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r1 = "payload"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r1 = "PT"
            if (r0 == 0) goto L72
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getStringMessage()     // Catch: java.lang.Throwable -> Lb3
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb3
            if (r0 != 0) goto Lb7
            com.igexin.assist.action.d r0 = new com.igexin.assist.action.d     // Catch: java.lang.Throwable -> Lb3
            r0.<init>()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r2 = r4.a     // Catch: java.lang.Throwable -> Lb3
            r0.a(r2)     // Catch: java.lang.Throwable -> Lb3
            r2 = 0
            boolean r2 = r0.a(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r2 == 0) goto Lb7
            java.lang.String r2 = r0.e()     // Catch: java.lang.Throwable -> Lb3
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> Lb3
            if (r1 == 0) goto Lb7
            com.igexin.assist.action.MessageManger r1 = r4.b     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r2 = r4.a     // Catch: java.lang.Throwable -> Lb3
            android.content.Context r2 = r2.getContext()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.action.MessageManger.a(r1, r0, r2)     // Catch: java.lang.Throwable -> Lb3
            goto Lb7
        L72:
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getMessageType()     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r2 = "actions"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r0 == 0) goto Lb7
            com.igexin.assist.MessageBean r0 = r4.a     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r0 = r0.getStringMessage()     // Catch: java.lang.Throwable -> Lb3
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb3
            if (r0 != 0) goto Lb7
            com.igexin.assist.action.d r0 = new com.igexin.assist.action.d     // Catch: java.lang.Throwable -> Lb3
            r0.<init>()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r2 = r4.a     // Catch: java.lang.Throwable -> Lb3
            r0.a(r2)     // Catch: java.lang.Throwable -> Lb3
            r2 = 1
            boolean r2 = r0.a(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r2 == 0) goto Lb7
            java.lang.String r2 = r0.e()     // Catch: java.lang.Throwable -> Lb3
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> Lb3
            if (r1 == 0) goto Lb7
            com.igexin.assist.action.MessageManger r1 = r4.b     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.MessageBean r2 = r4.a     // Catch: java.lang.Throwable -> Lb3
            android.content.Context r2 = r2.getContext()     // Catch: java.lang.Throwable -> Lb3
            com.igexin.assist.action.MessageManger.a(r1, r2, r0)     // Catch: java.lang.Throwable -> Lb3
            goto Lb7
        Lb3:
            r0 = move-exception
            r0.printStackTrace()
        Lb7:
            return
    }
}
