package com.tkay.china.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class b extends BroadcastReceiver {
    private static final String a = b.class.getSimpleName();

    @Override
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        if (("android.intent.action.PACKAGE_ADDED".equals(action) || "android.intent.action.PACKAGE_REPLACED".equals(action)) && intent.getData() != null) {
            String schemeSpecificPart = intent.getData().getSchemeSpecificPart();
            StringBuilder sb = new StringBuilder("onReceive: apk install success( ");
            sb.append(schemeSpecificPart);
            sb.append(")");
            a.a(context).b(schemeSpecificPart);
        }
    }
}
