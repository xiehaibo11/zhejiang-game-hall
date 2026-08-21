package android.support.v4.os;

import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;

public final class HandlerCompat {
    public static boolean postDelayed(@NonNull Handler r2, @NonNull Runnable r3, @Nullable Object r4, long r5) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        Message r32 = Message.obtain(r2, r3);
        r32.obj = r4;
        return r2.sendMessageDelayed(r32, r5);
    L5:
        return r2.postDelayed(r3, r4, r5);
    }

    private HandlerCompat() {
    }
}
