package android.support.v4.text;

import android.annotation.SuppressLint;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.Html;
import android.text.Spanned;

@SuppressLint({"InlinedApi"})
public final class HtmlCompat {
    public static final int FROM_HTML_MODE_COMPACT = 63;
    public static final int FROM_HTML_MODE_LEGACY = 0;
    public static final int FROM_HTML_OPTION_USE_CSS_COLORS = 256;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE = 32;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_DIV = 16;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_HEADING = 2;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_LIST = 8;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM = 4;
    public static final int FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH = 1;
    public static final int TO_HTML_PARAGRAPH_LINES_CONSECUTIVE = 0;
    public static final int TO_HTML_PARAGRAPH_LINES_INDIVIDUAL = 1;

    @NonNull
    public static Spanned fromHtml(@NonNull String r2, int r3) {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return Html.fromHtml(r2, r3);
    L7:
        return Html.fromHtml(r2);
    }

    @NonNull
    public static Spanned fromHtml(@NonNull String r2, int r3, @Nullable Html.ImageGetter r4, @Nullable Html.TagHandler r5) {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return Html.fromHtml(r2, r3, r4, r5);
    L7:
        return Html.fromHtml(r2, r4, r5);
    }

    @NonNull
    public static String toHtml(@NonNull Spanned r2, int r3) {
        if (Build.VERSION.SDK_INT < 24) goto L7;
        return Html.toHtml(r2, r3);
    L7:
        return Html.toHtml(r2);
    }

    private HtmlCompat() {
    }
}
