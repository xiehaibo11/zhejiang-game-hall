package com.sigmob.sdk.rewardVideoAd;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.rewardVideoAd.e;

/* JADX INFO: loaded from: classes3.dex */
public class RewardVideoAdBroadcastReceiver extends BaseBroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static IntentFilter f5139a;
    private e.a b;
    private BaseAdUnit c;

    public RewardVideoAdBroadcastReceiver(BaseAdUnit baseAdUnit, e.a aVar, String str) {
        super(str);
        this.c = baseAdUnit;
        this.b = aVar;
        a();
    }

    @Override // com.sigmob.sdk.base.common.BaseBroadcastReceiver
    public IntentFilter a() {
        if (f5139a == null) {
            IntentFilter intentFilter = new IntentFilter();
            f5139a = intentFilter;
            intentFilter.addAction(IntentActions.ACTION_REWARDED_VIDEO_PLAY);
            f5139a.addAction(IntentActions.ACTION_REWARDED_VIDEO_SKIP);
            f5139a.addAction(IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
            f5139a.addAction(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
            f5139a.addAction(IntentActions.ACTION_REWARDED_VIDEO_CLOSE);
        }
        return f5139a;
    }

    @Override // com.sigmob.sdk.base.common.BaseBroadcastReceiver
    public void b(BroadcastReceiver broadcastReceiver) {
        super.b(broadcastReceiver);
        this.b = null;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (this.b == null || this.c == null || !a(intent)) {
            return;
        }
        String action = intent.getAction();
        byte b = -1;
        switch (action.hashCode()) {
            case -2102409807:
                if (action.equals(IntentActions.ACTION_REWARDED_VIDEO_CLOSE)) {
                    b = 4;
                }
                break;
            case -1729047493:
                if (action.equals(IntentActions.ACTION_REWARDED_VIDEO_PLAY)) {
                    b = 0;
                }
                break;
            case -1728958842:
                if (action.equals(IntentActions.ACTION_REWARDED_VIDEO_SKIP)) {
                    b = 1;
                }
                break;
            case -1139302720:
                if (action.equals(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE)) {
                    b = 3;
                }
                break;
            case 1338477049:
                if (action.equals(IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL)) {
                    b = 2;
                }
                break;
        }
        if (b == 0) {
            this.b.g(this.c);
            return;
        }
        if (b == 1) {
            this.b.h(this.c);
            return;
        }
        if (b == 2) {
            this.b.c(this.c, intent.getStringExtra("error"));
        } else if (b == 3) {
            this.b.f(this.c);
            return;
        } else if (b != 4) {
            return;
        } else {
            this.b.i(this.c);
        }
        b(this);
        this.c = null;
    }
}
