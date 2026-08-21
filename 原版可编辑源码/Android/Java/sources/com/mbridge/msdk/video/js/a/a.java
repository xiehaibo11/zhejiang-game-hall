package com.mbridge.msdk.video.js.a;

import android.content.res.Configuration;
import com.mbridge.msdk.foundation.tools.z;

public class a implements com.mbridge.msdk.video.js.a {
    @Override
    public void a() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onPause");
    }

    @Override
    public void b() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onResume");
    }

    @Override
    public void c() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onDestory");
    }

    @Override
    public final void d() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onStop");
    }

    @Override
    public final void e() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onStart");
    }

    @Override
    public final void f() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onRestart");
    }

    @Override
    public void a(Configuration configuration) {
        z.a("DefaultJSActivity", "DefaultJSActivity-onConfigurationChanged:" + configuration.orientation);
    }

    @Override
    public void g() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onBackPressed");
    }

    @Override
    public int h() {
        z.a("DefaultJSActivity", "isSystemResume");
        return 0;
    }

    @Override
    public void a(int i) {
        z.a("DefaultJSActivity", "setSystemResume,isResume:" + i);
    }
}
