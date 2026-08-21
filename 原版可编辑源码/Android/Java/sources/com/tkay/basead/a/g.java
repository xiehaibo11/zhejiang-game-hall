package com.tkay.basead.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public final class g extends BroadcastReceiver {
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public final void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        if (action != null) {
            String stringExtra = intent.getStringExtra(com.tkay.china.common.a.f);
            String stringExtra2 = intent.getStringExtra(com.tkay.china.common.a.g);
            byte b = -1;
            switch (action.hashCode()) {
                case -1301069232:
                    if (action.equals(com.tkay.china.common.a.c)) {
                        b = 1;
                    }
                    break;
                case -478940009:
                    if (action.equals(com.tkay.china.common.a.b)) {
                        b = 0;
                    }
                    break;
                case 468136042:
                    if (action.equals(com.tkay.china.common.a.e)) {
                        b = 2;
                    }
                    break;
                case 1256250514:
                    if (action.equals(com.tkay.china.common.a.d)) {
                        b = 3;
                    }
                    break;
            }
            if (b == 0) {
                h.a(context.getApplicationContext()).a(stringExtra, stringExtra2);
                return;
            }
            if (b == 1) {
                h.a(context.getApplicationContext()).b(stringExtra, stringExtra2);
            } else if (b == 2) {
                h.a(context.getApplicationContext()).d(stringExtra, stringExtra2);
            } else {
                if (b != 3) {
                    return;
                }
                h.a(context.getApplicationContext()).c(stringExtra, stringExtra2);
            }
        }
    }
}
