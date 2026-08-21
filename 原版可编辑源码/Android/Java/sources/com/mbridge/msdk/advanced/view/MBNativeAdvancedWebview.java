package com.mbridge.msdk.advanced.view;

import android.content.Context;
import android.content.IntentFilter;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.mbridge.msdk.advanced.common.NetWorkStateReceiver;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;

public class MBNativeAdvancedWebview extends WindVaneWebView {
    private static final String e = MBNativeAdvancedWebview.class.getSimpleName();
    private AdSession f;
    private NetWorkStateReceiver g;

    public MBNativeAdvancedWebview(Context context) {
        super(context);
        setBackgroundColor(0);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        registerNetWorkReceiver();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        unregisterNetWorkReceiver();
    }

    public void registerNetWorkReceiver() {
        try {
            if (this.g == null) {
                this.g = new NetWorkStateReceiver(this);
            }
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            getContext().registerReceiver(this.g, intentFilter);
        } catch (Throwable th) {
            z.a(e, th.getMessage());
        }
    }

    public void unregisterNetWorkReceiver() {
        try {
            if (this.g != null) {
                this.g.a();
                getContext().unregisterReceiver(this.g);
            }
        } catch (Throwable th) {
            z.a(e, th.getMessage());
        }
    }

    public AdSession getAdSession() {
        return this.f;
    }

    public void setAdSession(AdSession adSession) {
        this.f = adSession;
    }

    public void finishAdSession() {
        try {
            if (this.f != null) {
                this.f.finish();
                this.f = null;
                z.a("OMSDK", "finish adSession");
            }
        } catch (Exception e2) {
            z.a("OMSDK", e2.getMessage());
        }
    }
}
