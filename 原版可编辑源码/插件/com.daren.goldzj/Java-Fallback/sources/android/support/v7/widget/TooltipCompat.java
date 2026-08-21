package android.support.v7.widget;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.View;

public class TooltipCompat {
    public static void setTooltipText(@NonNull View r2, @Nullable CharSequence r3) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        r2.setTooltipText(r3);
        return;
    L5:
        TooltipCompatHandler.setTooltipText(r2, r3);
    }

    private TooltipCompat() {
    }
}
