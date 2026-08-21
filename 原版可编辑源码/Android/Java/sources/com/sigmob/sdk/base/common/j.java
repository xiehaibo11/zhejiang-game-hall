package com.sigmob.sdk.base.common;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;

public interface j {
    void a();

    void a(int i);

    void a(Class<? extends Activity> cls, int i, Bundle bundle);

    void onBackPressed();

    void onSetContentView(View view);
}
