package com.igexin.sdk;

import android.app.Activity;
import android.os.Bundle;

public class GTBaseActivity extends Activity {
    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        GTServiceManager.getInstance().onActivityCreate(this);
    }
}
