package com.sigmob.sdk.nativead;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.nativead.c;

/* JADX INFO: loaded from: classes3.dex */
public class NativeAdBroadcastReceiver extends BaseBroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static IntentFilter f5089a;
    private c.a b;

    public NativeAdBroadcastReceiver(c.a aVar, String str) {
        super(str);
        this.b = aVar;
        a();
    }

    @Override // com.sigmob.sdk.base.common.BaseBroadcastReceiver
    public IntentFilter a() {
        if (f5089a == null) {
            IntentFilter intentFilter = new IntentFilter();
            f5089a = intentFilter;
            intentFilter.addAction(IntentActions.ACTION_NATIVE_TEMPLIE_SHOW);
            f5089a.addAction(IntentActions.ACTION_NATIVE_TEMPLE_CLICK);
            f5089a.addAction(IntentActions.ACTION_NATIVE_TEMPLE_DISMISS);
            f5089a.addAction(IntentActions.ACTION_LANDPAGE_SHOW);
            f5089a.addAction(IntentActions.ACTION_LANDPAGE_DISMISS);
        }
        return f5089a;
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
        if (this.b != null && a(intent)) {
            String action = intent.getAction();
            byte b = -1;
            switch (action.hashCode()) {
                case -2086188808:
                    if (action.equals(IntentActions.ACTION_NATIVE_TEMPLE_CLICK)) {
                        b = 1;
                    }
                    break;
                case -1655972816:
                    if (action.equals(IntentActions.ACTION_LANDPAGE_SHOW)) {
                        b = 3;
                    }
                    break;
                case -1487323017:
                    if (action.equals(IntentActions.ACTION_LANDPAGE_DISMISS)) {
                        b = 4;
                    }
                    break;
                case -482465395:
                    if (action.equals(IntentActions.ACTION_NATIVE_TEMPLIE_SHOW)) {
                        b = 0;
                    }
                    break;
                case 1733433850:
                    if (action.equals(IntentActions.ACTION_NATIVE_TEMPLE_DISMISS)) {
                        b = 2;
                    }
                    break;
            }
            if (b == 0) {
                this.b.c();
                return;
            }
            if (b == 1) {
                this.b.d();
                return;
            }
            if (b == 2) {
                this.b.e();
            } else if (b == 3) {
                this.b.a();
            } else {
                if (b != 4) {
                    return;
                }
                this.b.b();
            }
        }
    }
}
