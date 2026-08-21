package com.tencent.open.c;

public class d extends com.tencent.open.c.b {
    public static boolean a;
    private android.view.KeyEvent b;
    private com.tencent.open.web.security.a c;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->dispatchKeyEvent, is device support: "
            r0.append(r1)
            boolean r1 = com.tencent.open.c.d.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureWebView"
            com.tencent.open.log.SLog.d(r1, r0)
            boolean r0 = com.tencent.open.c.d.a
            if (r0 != 0) goto L21
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L21:
            int r0 = r3.getAction()
            if (r0 != 0) goto L7f
            int r0 = r3.getKeyCode()
            r1 = 4
            if (r0 == r1) goto L7a
            r1 = 66
            if (r0 == r1) goto L75
            r1 = 67
            if (r0 == r1) goto L6d
            int r0 = r3.getUnicodeChar()
            if (r0 != 0) goto L41
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L41:
            boolean r0 = com.tencent.open.web.security.SecureJsInterface.isPWDEdit
            if (r0 == 0) goto L68
            int r0 = r3.getUnicodeChar()
            r1 = 33
            if (r0 < r1) goto L51
            r1 = 95
            if (r0 <= r1) goto L59
        L51:
            r1 = 97
            if (r0 < r1) goto L68
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 > r1) goto L68
        L59:
            android.view.KeyEvent r3 = new android.view.KeyEvent
            r0 = 0
            r1 = 17
            r3.<init>(r0, r1)
            r2.b = r3
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L68:
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L6d:
            r0 = 1
            com.tencent.open.web.security.a.b = r0
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L75:
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L7a:
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
        L7f:
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
    }

    @Override
    public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->create input connection, is edit: "
            r0.append(r1)
            boolean r1 = com.tencent.open.web.security.SecureJsInterface.isPWDEdit
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureWebView"
            com.tencent.open.log.SLog.i(r1, r0)
            android.view.inputmethod.InputConnection r0 = super.onCreateInputConnection(r5)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->onCreateInputConnection, inputConn is "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.v(r1, r2)
            r1 = 0
            if (r0 == 0) goto L42
            r0 = 1
            com.tencent.open.c.d.a = r0
            com.tencent.open.web.security.a r0 = new com.tencent.open.web.security.a
            android.view.inputmethod.InputConnection r5 = super.onCreateInputConnection(r5)
            r0.<init>(r5, r1)
            r4.c = r0
            return r0
        L42:
            com.tencent.open.c.d.a = r1
            return r0
    }

    @Override
    public boolean onKeyDown(int r3, android.view.KeyEvent r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->onKeyDown, is device support: "
            r0.append(r1)
            boolean r1 = com.tencent.open.c.d.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureWebView"
            com.tencent.open.log.SLog.d(r1, r0)
            boolean r0 = com.tencent.open.c.d.a
            if (r0 != 0) goto L21
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L21:
            int r0 = r4.getAction()
            if (r0 != 0) goto L85
            int r0 = r4.getKeyCode()
            r1 = 4
            if (r0 == r1) goto L80
            r1 = 66
            if (r0 == r1) goto L7b
            r1 = 67
            if (r0 == r1) goto L73
            int r0 = r4.getUnicodeChar()
            if (r0 != 0) goto L41
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L41:
            boolean r0 = com.tencent.open.web.security.SecureJsInterface.isPWDEdit
            if (r0 == 0) goto L6e
            int r0 = r4.getUnicodeChar()
            r1 = 33
            if (r0 < r1) goto L51
            r1 = 95
            if (r0 <= r1) goto L59
        L51:
            r1 = 97
            if (r0 < r1) goto L6e
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 > r1) goto L6e
        L59:
            android.view.KeyEvent r3 = new android.view.KeyEvent
            r4 = 0
            r0 = 17
            r3.<init>(r4, r0)
            r2.b = r3
            int r3 = r3.getKeyCode()
            android.view.KeyEvent r4 = r2.b
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L6e:
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L73:
            r0 = 1
            com.tencent.open.web.security.a.b = r0
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L7b:
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L80:
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
        L85:
            boolean r3 = super.onKeyDown(r3, r4)
            return r3
    }
}
