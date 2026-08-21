package android.support.v4.content;

import android.content.Intent;
import android.os.Build;
import android.support.annotation.NonNull;

public final class IntentCompat {
    public static final String CATEGORY_LEANBACK_LAUNCHER = "android.intent.category.LEANBACK_LAUNCHER";
    public static final String EXTRA_HTML_TEXT = "android.intent.extra.HTML_TEXT";
    public static final String EXTRA_START_PLAYBACK = "android.intent.extra.START_PLAYBACK";

    private IntentCompat() {
    }

    @NonNull
    public static Intent makeMainSelectorActivity(@NonNull String r2, @NonNull String r3) {
        if (Build.VERSION.SDK_INT >= 15) goto L5;
        Intent r0 = new Intent(r2);
        r0.addCategory(r3);
        return r0;
    L5:
        return Intent.makeMainSelectorActivity(r2, r3);
    }
}
