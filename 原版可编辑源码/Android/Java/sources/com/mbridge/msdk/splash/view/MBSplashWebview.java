package com.mbridge.msdk.splash.view;

import android.content.Context;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;

public class MBSplashWebview extends WindVaneWebView {
    private static final String e = MBSplashWebview.class.getSimpleName();
    private String f;
    private AdSession g;

    public MBSplashWebview(Context context) {
        super(context);
        setBackgroundColor(0);
    }

    public AdSession getAdSession() {
        return this.g;
    }

    public String getRequestId() {
        return this.f;
    }

    public void setRequestId(String str) {
        this.f = str;
    }

    public void setAdSession(AdSession adSession) {
        this.g = adSession;
    }

    public void finishAdSession() {
        try {
            if (this.g != null) {
                this.g.finish();
                this.g = null;
                z.a("OMSDK", "finish adSession");
            }
        } catch (Exception e2) {
            z.a("OMSDK", e2.getMessage());
        }
    }
}
