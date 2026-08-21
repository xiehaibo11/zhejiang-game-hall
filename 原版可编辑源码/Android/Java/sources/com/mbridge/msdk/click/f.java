package com.mbridge.msdk.click;

import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.scheme.applet.AppletSchemeCallBack;
import com.mbridge.msdk.scheme.applet.AppletsModel;

public final class f extends AppletSchemeCallBack {
    private final NativeListener.NativeTrackingListener a;
    private final CampaignEx b;
    private final AppletsModel c;
    private final b d;

    @Override
    protected final void onRequestStart() {
    }

    public f(NativeListener.NativeTrackingListener nativeTrackingListener, CampaignEx campaignEx, AppletsModel appletsModel, b bVar) {
        this.a = nativeTrackingListener;
        this.b = campaignEx;
        this.c = appletsModel;
        this.d = bVar;
    }

    @Override
    protected final void onRequestSuccess(String str) {
        CampaignEx campaignEx = this.b;
        if (campaignEx == null || this.c == null) {
            return;
        }
        try {
            if (this.a != null) {
                try {
                    this.a.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultAppletSchemeCallBack", e.getMessage());
                    }
                }
            }
            this.c.setUserClick(false);
            this.c.setRequestingFinish();
            this.b.setDeepLinkUrl(str);
            if (this.d != null) {
                try {
                    this.d.c(this.b);
                } catch (Exception e2) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultAppletSchemeCallBack", e2.getMessage());
                    }
                }
            }
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                z.d("DefaultAppletSchemeCallBack", e3.getMessage());
            }
        }
    }

    @Override
    protected final void onRequestFailed(int i, String str, String str2) {
        CampaignEx campaignEx = this.b;
        if (campaignEx == null || this.c == null) {
            return;
        }
        try {
            if (this.a != null) {
                try {
                    this.a.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultAppletSchemeCallBack", e.getMessage());
                    }
                }
            }
            this.c.setUserClick(false);
            this.c.setRequestingFinish();
            this.b.setClickURL(str2);
            if (this.d != null) {
                try {
                    this.d.c(this.b);
                } catch (Exception e2) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultAppletSchemeCallBack", e2.getMessage());
                    }
                }
            }
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                z.d("DefaultAppletSchemeCallBack", e3.getMessage());
            }
        }
    }
}
