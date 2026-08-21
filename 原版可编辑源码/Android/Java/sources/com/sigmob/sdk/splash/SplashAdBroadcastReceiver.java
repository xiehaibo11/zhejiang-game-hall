package com.sigmob.sdk.splash;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.splash.f;

public class SplashAdBroadcastReceiver extends BaseBroadcastReceiver {
    private static IntentFilter a;
    private f.a b;

    public SplashAdBroadcastReceiver(f.a aVar, String str) {
        super(str);
        this.b = aVar;
        a();
    }

    @Override
    public IntentFilter a() {
        if (a == null) {
            IntentFilter intentFilter = new IntentFilter();
            a = intentFilter;
            intentFilter.addAction(IntentActions.ACTION_SPLAH_STOP_TIME);
            a.addAction(IntentActions.ACTION_SPLAH_PLAYFAIL);
            a.addAction(IntentActions.ACTION_SPLAH_SKIP);
            a.addAction(IntentActions.ACTION_LANDPAGE_SHOW);
            a.addAction(IntentActions.ACTION_LANDPAGE_DISMISS);
        }
        return a;
    }

    @Override
    public void b(BroadcastReceiver broadcastReceiver) {
        super.b(broadcastReceiver);
        this.b = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public void onReceive(Context context, Intent intent) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (this.b != null && a(intent)) {
            String action = intent.getAction();
            byte b = -1;
            switch (action.hashCode()) {
                case -2121846192:
                    if (action.equals(IntentActions.ACTION_SPLAH_STOP_TIME)) {
                        b = 3;
                    }
                    break;
                case -1959279373:
                    if (action.equals(IntentActions.ACTION_SPLAH_PLAYFAIL)) {
                        b = 1;
                    }
                    break;
                case -1655972816:
                    if (action.equals(IntentActions.ACTION_LANDPAGE_SHOW)) {
                        b = 4;
                    }
                    break;
                case -1487323017:
                    if (action.equals(IntentActions.ACTION_LANDPAGE_DISMISS)) {
                        b = 5;
                    }
                    break;
                case -967205835:
                    if (action.equals(IntentActions.ACTION_SPLAH_PLAY)) {
                        b = 0;
                    }
                    break;
                case -967117184:
                    if (action.equals(IntentActions.ACTION_SPLAH_SKIP)) {
                        b = 2;
                    }
                    break;
            }
            if (b == 0) {
                this.b.e();
                return;
            }
            if (b == 1) {
                this.b.c();
                return;
            }
            if (b == 2) {
                this.b.d();
                return;
            }
            if (b == 3) {
                this.b.f();
            } else if (b == 4) {
                this.b.a();
            } else {
                if (b != 5) {
                    return;
                }
                this.b.b();
            }
        }
    }
}
