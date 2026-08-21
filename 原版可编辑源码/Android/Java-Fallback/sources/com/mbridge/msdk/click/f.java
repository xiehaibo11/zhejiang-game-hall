package com.mbridge.msdk.click;

public final class f extends com.mbridge.msdk.scheme.applet.AppletSchemeCallBack {
    private final com.mbridge.msdk.out.NativeListener.NativeTrackingListener a;
    private final com.mbridge.msdk.foundation.entity.CampaignEx b;
    private final com.mbridge.msdk.scheme.applet.AppletsModel c;
    private final com.mbridge.msdk.click.b d;

    public f(com.mbridge.msdk.out.NativeListener.NativeTrackingListener r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, com.mbridge.msdk.scheme.applet.AppletsModel r3, com.mbridge.msdk.click.b r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    @Override
    protected final void onRequestFailed(int r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.String r3 = "DefaultAppletSchemeCallBack"
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.b
            if (r4 == 0) goto L5a
            com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.c
            if (r0 != 0) goto Lb
            goto L5a
        Lb:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r2.a     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L25
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r2.a     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = r4.getClickURL()     // Catch: java.lang.Exception -> L19
            r0.onFinishRedirection(r4, r1)     // Catch: java.lang.Exception -> L19
            goto L25
        L19:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L25
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)     // Catch: java.lang.Exception -> L4e
        L25:
            com.mbridge.msdk.scheme.applet.AppletsModel r4 = r2.c     // Catch: java.lang.Exception -> L4e
            r0 = 0
            r4.setUserClick(r0)     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.scheme.applet.AppletsModel r4 = r2.c     // Catch: java.lang.Exception -> L4e
            r4.setRequestingFinish()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r2.b     // Catch: java.lang.Exception -> L4e
            r4.setClickURL(r5)     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.click.b r4 = r2.d     // Catch: java.lang.Exception -> L4e
            if (r4 == 0) goto L5a
            com.mbridge.msdk.click.b r4 = r2.d     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r2.b     // Catch: java.lang.Exception -> L41
            r4.c(r5)     // Catch: java.lang.Exception -> L41
            goto L5a
        L41:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L4e
            if (r5 == 0) goto L5a
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)     // Catch: java.lang.Exception -> L4e
            goto L5a
        L4e:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L5a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)
        L5a:
            return
    }

    @Override
    protected final void onRequestStart() {
            r0 = this;
            return
    }

    @Override
    protected final void onRequestSuccess(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "DefaultAppletSchemeCallBack"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            if (r1 == 0) goto L5a
            com.mbridge.msdk.scheme.applet.AppletsModel r2 = r4.c
            if (r2 != 0) goto Lb
            goto L5a
        Lb:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.a     // Catch: java.lang.Exception -> L4e
            if (r2 == 0) goto L25
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r4.a     // Catch: java.lang.Exception -> L19
            java.lang.String r3 = r1.getClickURL()     // Catch: java.lang.Exception -> L19
            r2.onFinishRedirection(r1, r3)     // Catch: java.lang.Exception -> L19
            goto L25
        L19:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L4e
            if (r2 == 0) goto L25
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L4e
        L25:
            com.mbridge.msdk.scheme.applet.AppletsModel r1 = r4.c     // Catch: java.lang.Exception -> L4e
            r2 = 0
            r1.setUserClick(r2)     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.scheme.applet.AppletsModel r1 = r4.c     // Catch: java.lang.Exception -> L4e
            r1.setRequestingFinish()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b     // Catch: java.lang.Exception -> L4e
            r1.setDeepLinkUrl(r5)     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.click.b r5 = r4.d     // Catch: java.lang.Exception -> L4e
            if (r5 == 0) goto L5a
            com.mbridge.msdk.click.b r5 = r4.d     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b     // Catch: java.lang.Exception -> L41
            r5.c(r1)     // Catch: java.lang.Exception -> L41
            goto L5a
        L41:
            r5 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L5a
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Exception -> L4e
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Exception -> L4e
            goto L5a
        L4e:
            r5 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L5a
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L5a:
            return
    }
}
