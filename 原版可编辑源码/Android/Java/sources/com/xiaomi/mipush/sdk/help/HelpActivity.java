package com.xiaomi.mipush.sdk.help;

import android.app.Activity;
import android.os.Bundle;
import com.xiaomi.mipush.sdk.o;

public class HelpActivity extends Activity {
    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        o.a(this, getIntent(), null);
        finish();
    }
}
