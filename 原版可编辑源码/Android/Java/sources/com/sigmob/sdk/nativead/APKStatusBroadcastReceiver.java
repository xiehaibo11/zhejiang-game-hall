package com.sigmob.sdk.nativead;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.IntentActions;

public class APKStatusBroadcastReceiver extends BaseBroadcastReceiver {
    m.a a;
    IntentFilter b;

    public APKStatusBroadcastReceiver(m.a aVar, String str) {
        super(str);
        this.a = aVar;
    }

    @Override
    public IntentFilter a() {
        if (this.b == null) {
            IntentFilter intentFilter = new IntentFilter();
            this.b = intentFilter;
            intentFilter.addAction(IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_START);
            this.b.addAction(IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_END);
            this.b.addAction(IntentActions.ACTION_INTERSTITIAL_INSTALL_START);
            this.b.addAction(IntentActions.ACTION_INTERSTITIAL_INSTALL_END);
        }
        return this.b;
    }

    @Override
    public void b(BroadcastReceiver broadcastReceiver) {
        super.b(broadcastReceiver);
        this.a = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public void onReceive(Context context, Intent intent) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (this.a != null && a(intent)) {
            String action = intent.getAction();
            boolean zEqualsIgnoreCase = "1".equalsIgnoreCase(intent.getStringExtra("result"));
            long longExtra = intent.getLongExtra("downloadId", -1L);
            byte b = -1;
            switch (action.hashCode()) {
                case -1616853332:
                    if (action.equals(IntentActions.ACTION_INTERSTITIAL_INSTALL_END)) {
                        b = 3;
                    }
                    break;
                case -845837224:
                    if (action.equals(IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_START)) {
                        b = 0;
                    }
                    break;
                case 535418449:
                    if (action.equals(IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_END)) {
                        b = 1;
                    }
                    break;
                case 995217907:
                    if (action.equals(IntentActions.ACTION_INTERSTITIAL_INSTALL_START)) {
                        b = 2;
                    }
                    break;
            }
            if (b == 0) {
                this.a.a(zEqualsIgnoreCase, longExtra);
                return;
            }
            if (b == 1) {
                this.a.b(zEqualsIgnoreCase, longExtra);
            } else if (b == 2) {
                this.a.a(zEqualsIgnoreCase);
            } else {
                if (b != 3) {
                    return;
                }
                this.a.b(zEqualsIgnoreCase);
            }
        }
    }
}
