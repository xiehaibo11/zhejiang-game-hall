package com.huawei.hms.hatool;

import android.content.Context;
import android.os.Build;
import android.os.UserManager;

/* JADX INFO: loaded from: classes.dex */
public class u0 {
    public static u0 c = new u0();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f2122a = false;
    public Context b = b.f();

    public static u0 b() {
        return c;
    }

    public boolean a() {
        boolean zIsUserUnlocked;
        if (!this.f2122a) {
            Context context = this.b;
            if (context == null) {
                return false;
            }
            if (Build.VERSION.SDK_INT >= 24) {
                UserManager userManager = (UserManager) context.getSystemService("user");
                if (userManager != null) {
                    zIsUserUnlocked = userManager.isUserUnlocked();
                } else {
                    this.f2122a = false;
                }
            } else {
                zIsUserUnlocked = true;
            }
            this.f2122a = zIsUserUnlocked;
        }
        return this.f2122a;
    }
}
