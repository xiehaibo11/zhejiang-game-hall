package com.kwad.components.core.offline.init.a;

import android.content.Context;
import android.os.Vibrator;
import com.kwad.components.offline.api.core.api.IVibratorUtil;
import com.kwad.sdk.utils.bj;

public final class k implements IVibratorUtil {
    @Override
    public final void cancelVibrate(Context context, Vibrator vibrator) {
        bj.b(context, vibrator);
    }

    @Override
    public final void vibrate(Context context, Vibrator vibrator, long j) {
        bj.vibrate(context, vibrator, j);
    }
}
