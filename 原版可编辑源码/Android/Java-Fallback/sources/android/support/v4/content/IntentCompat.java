package android.support.v4.content;

public final class IntentCompat {
    public static final java.lang.String CATEGORY_LEANBACK_LAUNCHER = "android.intent.category.LEANBACK_LAUNCHER";
    public static final java.lang.String EXTRA_HTML_TEXT = "android.intent.extra.HTML_TEXT";
    public static final java.lang.String EXTRA_START_PLAYBACK = "android.intent.extra.START_PLAYBACK";

    private IntentCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent makeMainSelectorActivity(java.lang.String r2, java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto Lb
            android.content.Intent r2 = android.content.Intent.makeMainSelectorActivity(r2, r3)
            return r2
        Lb:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2)
            r0.addCategory(r3)
            return r0
    }
}
