package com.igexin.sdk;

import android.app.Activity;
import android.os.Bundle;

/* JADX INFO: loaded from: classes2.dex */
public class GTBaseActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        GTServiceManager.getInstance().onActivityCreate(this);
    }
}
