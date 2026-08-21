package com.mbridge.msdk.mbjscommon.authority.jscommon;

public class PrivateAuthorityJSBridge extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    private static final java.lang.String TAG = "PrivateAuthorityJSBridge";

    public PrivateAuthorityJSBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    private void finishActivity(java.lang.Object r2) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "close activity"
            r2.append(r0)
            android.content.Context r0 = r1.mContext
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "PrivateAuthorityJSBridge"
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)
            return
    }

    public void getPrivateAuthorityStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r4 = r4.c()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "GET authorityStatusString:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PrivateAuthorityJSBridge"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L2b
            java.lang.String r4 = ""
            goto L34
        L2b:
            byte[] r4 = r4.getBytes()
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)
        L34:
            r0.a(r3, r4)
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void setPrivateAuthorityStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SET authorityStatusString:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PrivateAuthorityJSBridge"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L20
            r2.finishActivity(r3)
            return
        L20:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L2b
            r0.b(r4)     // Catch: java.lang.Throwable -> L2b
        L27:
            r2.finishActivity(r3)
            goto L30
        L2b:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L31
            goto L27
        L30:
            return
        L31:
            r4 = move-exception
            r2.finishActivity(r3)
            throw r4
    }
}
