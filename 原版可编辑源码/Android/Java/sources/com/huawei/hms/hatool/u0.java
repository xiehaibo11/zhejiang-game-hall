package com.huawei.hms.hatool;

import android.content.Context;
import android.os.Build;
import android.os.UserManager;

public class u0 {
    public static u0 c = new u0();
    public boolean a = false;
    public Context b = b.f();

    public static u0 b() {
        return c;
    }

    public boolean a() {
        boolean zIsUserUnlocked;
        if (!this.a) {
            Context context = this.b;
            if (context == null) {
                return false;
            }
            if (Build.VERSION.SDK_INT >= 24) {
                UserManager userManager = (UserManager) context.getSystemService("user");
                if (userManager != null) {
                    zIsUserUnlocked = userManager.isUserUnlocked();
                } else {
                    this.a = false;
                }
            } else {
                zIsUserUnlocked = true;
            }
            this.a = zIsUserUnlocked;
        }
        return this.a;
    }
}
