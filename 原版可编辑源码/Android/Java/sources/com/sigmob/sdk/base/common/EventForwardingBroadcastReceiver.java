package com.sigmob.sdk.base.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;

public class EventForwardingBroadcastReceiver extends BaseBroadcastReceiver {
    private static IntentFilter b;
    public BaseAdUnit a;
    private m.b c;

    public EventForwardingBroadcastReceiver(BaseAdUnit baseAdUnit, m.b bVar, String str) {
        super(str);
        this.a = baseAdUnit;
        this.c = bVar;
        a();
    }

    @Override
    public IntentFilter a() {
        if (b == null) {
            IntentFilter intentFilter = new IntentFilter();
            b = intentFilter;
            intentFilter.addAction(IntentActions.ACTION_INTERSTITIAL_FAIL);
            b.addAction(IntentActions.ACTION_INTERSTITIAL_SHOW);
            b.addAction(IntentActions.ACTION_INTERSTITIAL_DISMISS);
            b.addAction(IntentActions.ACTION_INTERSTITIAL_CLICK);
            b.addAction(IntentActions.ACTION_INTERSTITIAL_VOPEN);
        }
        return b;
    }

    @Override
    public void b(BroadcastReceiver broadcastReceiver) {
        super.b(broadcastReceiver);
        this.c = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public void onReceive(Context context, Intent intent) {
        if (this.c == null || this.a == null || !a(intent)) {
            return;
        }
        String action = intent.getAction();
        byte b2 = -1;
        switch (action.hashCode()) {
            case -2078178004:
                if (action.equals(IntentActions.ACTION_INTERSTITIAL_CLICK)) {
                    b2 = 4;
                }
                break;
            case -2060534940:
                if (action.equals(IntentActions.ACTION_INTERSTITIAL_VOPEN)) {
                    b2 = 1;
                }
                break;
            case -1590979846:
                if (action.equals(IntentActions.ACTION_INTERSTITIAL_FAIL)) {
                    b2 = 0;
                }
                break;
            case -1590585639:
                if (action.equals(IntentActions.ACTION_INTERSTITIAL_SHOW)) {
                    b2 = 2;
                }
                break;
            case 841881902:
                if (action.equals(IntentActions.ACTION_INTERSTITIAL_DISMISS)) {
                    b2 = 3;
                }
                break;
        }
        if (b2 == 0) {
            this.c.b(this.a, intent.getStringExtra("error"));
            return;
        }
        if (b2 == 1) {
            this.c.e(this.a);
            return;
        }
        if (b2 == 2) {
            this.c.b(this.a);
            return;
        }
        if (b2 != 3) {
            if (b2 != 4) {
                return;
            }
            this.c.c(this.a);
        } else {
            this.c.d(this.a);
            b(this);
            this.a = null;
        }
    }
}
