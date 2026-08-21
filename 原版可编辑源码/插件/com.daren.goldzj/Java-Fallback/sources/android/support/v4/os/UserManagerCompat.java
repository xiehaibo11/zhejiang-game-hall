package android.support.v4.os;

import android.content.Context;
import android.os.Build;
import android.os.UserManager;

public class UserManagerCompat {
    private UserManagerCompat() {
    }

    public static boolean isUserUnlocked(Context r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return true;
    L5:
        return ((UserManager) r2.getSystemService(UserManager.class)).isUserUnlocked();
    }
}
