package com.tkay.china.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class NotificationBroadcaseReceiver extends BroadcastReceiver {
    private static final String a = NotificationBroadcaseReceiver.class.getSimpleName();

    @Override
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        intent.getStringExtra(com.tkay.china.common.b.a.d);
        String stringExtra = intent.getStringExtra(com.tkay.china.common.b.a.e);
        String stringExtra2 = intent.getStringExtra(com.tkay.china.common.b.a.f);
        byte b = -1;
        int intExtra = intent.getIntExtra(com.tkay.china.common.b.a.g, -1);
        int iHashCode = action.hashCode();
        if (iHashCode != -815819936) {
            if (iHashCode == -441636211 && action.equals(com.tkay.china.common.b.a.b)) {
                b = 0;
            }
        } else if (action.equals(com.tkay.china.common.b.a.c)) {
            b = 1;
        }
        if (b == 0) {
            a.a(context).a(stringExtra, stringExtra2, intExtra);
        } else {
            if (b != 1) {
                return;
            }
            a.a(context).a(stringExtra, stringExtra2);
        }
    }
}
