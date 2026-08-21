package com.mbridge.msdk.video.js.a;

import android.content.res.Configuration;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: DefaultJSActivity.java */
/* JADX INFO: loaded from: classes3.dex */
public class a implements com.mbridge.msdk.video.js.a {
    @Override // com.mbridge.msdk.video.js.a
    public void a() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onPause");
    }

    @Override // com.mbridge.msdk.video.js.a
    public void b() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onResume");
    }

    @Override // com.mbridge.msdk.video.js.a
    public void c() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onDestory");
    }

    @Override // com.mbridge.msdk.video.js.a
    public final void d() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onStop");
    }

    @Override // com.mbridge.msdk.video.js.a
    public final void e() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onStart");
    }

    @Override // com.mbridge.msdk.video.js.a
    public final void f() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onRestart");
    }

    @Override // com.mbridge.msdk.video.js.a
    public void a(Configuration configuration) {
        z.a("DefaultJSActivity", "DefaultJSActivity-onConfigurationChanged:" + configuration.orientation);
    }

    @Override // com.mbridge.msdk.video.js.a
    public void g() {
        z.a("DefaultJSActivity", "DefaultJSActivity-onBackPressed");
    }

    @Override // com.mbridge.msdk.video.js.a
    public int h() {
        z.a("DefaultJSActivity", "isSystemResume");
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.a
    public void a(int i) {
        z.a("DefaultJSActivity", "setSystemResume,isResume:" + i);
    }
}
