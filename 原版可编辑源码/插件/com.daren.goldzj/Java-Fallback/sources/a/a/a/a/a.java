package a.a.a.a;

import android.content.Context;
import android.os.Build;
import android.view.View;
import android.view.Window;
import com.bianqi.wpll.BuildConfig;

public class a {
    public static int a(Context r4) {
        int r0 = r4.getResources().getIdentifier("fringe_height", "dimen", BuildConfig.APPLICATION_ID);
        if (r0 > 0) goto L7;
        return 0;
    L7:
        return r4.getResources().getDimensionPixelSize(r0);
    }

    public static boolean b(Context r2) {
        return ((Boolean) Class.forName("flyme.config.FlymeFeature").getDeclaredField("IS_FRINGE_DEVICE").get(null)).booleanValue();
    L5:
        e = move-exception;
        e.printStackTrace();     // Catch: Throwable -> L8
    L7:
        return false;
    }

    public static void a(Window r2) {
        if (Build.VERSION.SDK_INT >= 28) goto L6;
        View r22 = r2.getDecorView();
        r22.setSystemUiVisibility((r22.getSystemUiVisibility() | 128) | 64);
        return;
    }
}
