package com.tencent.open.web.security;

public class a extends android.view.inputmethod.InputConnectionWrapper {
    public static java.lang.String a;
    public static boolean b;
    public static boolean c;

    static {
            return
    }

    public a(android.view.inputmethod.InputConnection r1, boolean r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public boolean commitText(java.lang.CharSequence r3, int r4) {
            r2 = this;
            r0 = 1
            com.tencent.open.web.security.a.c = r0
            java.lang.String r0 = r3.toString()
            com.tencent.open.web.security.a.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->commitText: "
            r0.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.CaptureInputConnection"
            com.tencent.open.log.SLog.v(r1, r0)
            boolean r3 = super.commitText(r3, r4)
            return r3
    }

    @Override
    public boolean sendKeyEvent(android.view.KeyEvent r4) {
            r3 = this;
            int r0 = r4.getAction()
            java.lang.String r1 = "openSDK_LOG.CaptureInputConnection"
            if (r0 != 0) goto L31
            java.lang.String r0 = "sendKeyEvent"
            com.tencent.open.log.SLog.i(r1, r0)
            int r0 = r4.getUnicodeChar()
            char r0 = (char) r0
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.tencent.open.web.security.a.a = r0
            r0 = 1
            com.tencent.open.web.security.a.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "s: "
            r0.append(r2)
            java.lang.String r2 = com.tencent.open.web.security.a.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.d(r1, r0)
        L31:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->sendKeyEvent: "
            r0.append(r2)
            java.lang.String r2 = com.tencent.open.web.security.a.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.d(r1, r0)
            boolean r4 = super.sendKeyEvent(r4)
            return r4
    }

    @Override
    public boolean setComposingText(java.lang.CharSequence r3, int r4) {
            r2 = this;
            r0 = 1
            com.tencent.open.web.security.a.c = r0
            java.lang.String r0 = r3.toString()
            com.tencent.open.web.security.a.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->setComposingText: "
            r0.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.CaptureInputConnection"
            com.tencent.open.log.SLog.v(r1, r0)
            boolean r3 = super.setComposingText(r3, r4)
            return r3
    }
}
