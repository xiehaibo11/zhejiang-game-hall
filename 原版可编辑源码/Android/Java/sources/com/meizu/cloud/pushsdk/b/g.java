package com.meizu.cloud.pushsdk.b;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;

public class g extends h<f> implements f {
    private static g a;
    private boolean b;

    private g(f fVar) {
        super(fVar);
        this.b = false;
    }

    public static g b() {
        if (a == null) {
            synchronized (g.class) {
                if (a == null) {
                    a = new g(new b());
                }
            }
        }
        return a;
    }

    public void a(Context context) {
        a(context, (String) null);
    }

    public void a(Context context, String str) {
        if (this.b) {
            return;
        }
        this.b = true;
        b((context.getApplicationInfo().flags & 2) != 0);
        if (str == null) {
            if (Build.VERSION.SDK_INT >= 29) {
                str = MzSystemUtils.getDocumentsPath(context) + "/pushSdk/" + context.getPackageName();
            } else {
                str = Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/data/pushSdk/" + context.getPackageName();
            }
        }
        a(str);
    }

    @Override
    public void a(String str) {
        c().a(str);
    }

    @Override
    public void a(String str, String str2) {
        c().a(str, str2);
    }

    @Override
    public void a(String str, String str2, Throwable th) {
        c().a(str, str2, th);
    }

    @Override
    public void a(boolean z) {
        c().a(z);
    }

    @Override
    public boolean a() {
        return c().a();
    }

    @Override
    public void b(String str, String str2) {
        c().b(str, str2);
    }

    @Override
    public void b(boolean z) {
        c().b(z);
    }

    @Override
    public void c(String str, String str2) {
        c().c(str, str2);
    }

    @Override
    public void d(String str, String str2) {
        c().d(str, str2);
    }
}
