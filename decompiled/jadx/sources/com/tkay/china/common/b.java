package com.tkay.china.common;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: classes3.dex */
public class b extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f5929a = b.class.getSimpleName();

    @Override // android.content.BroadcastReceiver
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
