package android.support.v4.text;

@android.annotation.SuppressLint({"InlinedApi"})
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

    private HtmlCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.NonNull
    public static android.text.Spanned fromHtml(@android.support.annotation.NonNull java.lang.String r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            android.text.Spanned r2 = android.text.Html.fromHtml(r2, r3)
            return r2
        Lb:
            android.text.Spanned r2 = android.text.Html.fromHtml(r2)
            return r2
    }

    @android.support.annotation.NonNull
    public static android.text.Spanned fromHtml(@android.support.annotation.NonNull java.lang.String r2, int r3, @android.support.annotation.Nullable android.text.Html.ImageGetter r4, @android.support.annotation.Nullable android.text.Html.TagHandler r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            android.text.Spanned r2 = android.text.Html.fromHtml(r2, r3, r4, r5)
            return r2
        Lb:
            android.text.Spanned r2 = android.text.Html.fromHtml(r2, r4, r5)
            return r2
    }

    @android.support.annotation.NonNull
    public static java.lang.String toHtml(@android.support.annotation.NonNull android.text.Spanned r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            java.lang.String r2 = android.text.Html.toHtml(r2, r3)
            return r2
        Lb:
            java.lang.String r2 = android.text.Html.toHtml(r2)
            return r2
    }
}
