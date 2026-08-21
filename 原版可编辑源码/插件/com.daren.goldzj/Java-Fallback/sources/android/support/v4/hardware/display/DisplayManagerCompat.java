package android.support.v4.hardware.display;

import android.content.Context;
import android.hardware.display.DisplayManager;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.Display;
import android.view.WindowManager;
import java.util.WeakHashMap;

public final class DisplayManagerCompat {
    public static final String DISPLAY_CATEGORY_PRESENTATION = "android.hardware.display.category.PRESENTATION";
    private static final WeakHashMap<Context, DisplayManagerCompat> sInstances = null;
    private final Context mContext;

    static {
        sInstances = new WeakHashMap();
    }

    private DisplayManagerCompat(Context r1) {
        this.mContext = r1;
    }

    @NonNull
    public static DisplayManagerCompat getInstance(@NonNull Context r3) {
        WeakHashMap<Context, DisplayManagerCompat> r0 = sInstances;
        monitor-enter(r0);
        DisplayManagerCompat r1 = sInstances.get(r3);     // Catch: Throwable -> L9
        if (r1 != null) goto L7;
        r1 = new DisplayManagerCompat(r3);     // Catch: Throwable -> L9
        sInstances.put(r3, r1);     // Catch: Throwable -> L9
    L7:
        monitor-exit(r0);     // Catch: Throwable -> L9
        return r1;
    L9:
        th = move-exception;
        throw th;
    }

    @Nullable
    public Display getDisplay(int r3) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        Display r0 = ((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay();
        if (r0.getDisplayId() != r3) goto L9;
        return r0;
    L9:
        return null;
    L5:
        return ((DisplayManager) this.mContext.getSystemService("display")).getDisplay(r3);
    }

    @NonNull
    public Display[] getDisplays() {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return ((DisplayManager) this.mContext.getSystemService("display")).getDisplays();
    L7:
        return new Display[]{((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay()};
    }

    @NonNull
    public Display[] getDisplays(@Nullable String r3) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return ((DisplayManager) this.mContext.getSystemService("display")).getDisplays(r3);
    L7:
        if (r3 != null) goto L11;
        return new Display[0];
    L11:
        return new Display[]{((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay()};
    }
}
