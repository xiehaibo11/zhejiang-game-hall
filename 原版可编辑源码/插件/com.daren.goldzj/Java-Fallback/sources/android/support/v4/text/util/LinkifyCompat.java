package android.support.v4.text.util;

import android.annotation.SuppressLint;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.util.PatternsCompat;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.method.LinkMovementMethod;
import android.text.method.MovementMethod;
import android.text.style.URLSpan;
import android.text.util.Linkify;
import android.webkit.WebView;
import android.widget.TextView;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class LinkifyCompat {
    private static final Comparator<LinkSpec> COMPARATOR = null;
    private static final String[] EMPTY_STRING = null;

    private static class LinkSpec {
        int end;
        URLSpan frameworkAddedSpan;
        int start;
        String url;

        LinkSpec() {
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface LinkifyMask {
    }

    static {
        EMPTY_STRING = new String[0];
        COMPARATOR = new 1();
    }

    public static boolean addLinks(@NonNull Spannable r10, int r11) {
        if (shouldAddLinksFallbackToFramework() == false) goto L7;
        return Linkify.addLinks(r10, r11);
    L7:
        if (r11 != 0) goto L9;
        return false;
    L9:
        URLSpan[] r1 = (URLSpan[]) r10.getSpans(0, r10.length(), URLSpan.class);
        int r2 = r1.length - 1;
    L10:
        if (r2 < 0) goto L13;
        r10.removeSpan(r1[r2]);
        r2 = r2 - 1;
        goto L10
    L13:
        if ((r11 & 4) == 0) goto L15;
        Linkify.addLinks(r10, 4);
    L15:
        ArrayList r12 = new ArrayList();
        if ((r11 & 1) == 0) goto L19;
        gatherLinks(r12, r10, PatternsCompat.AUTOLINK_WEB_URL, new String[]{"http://", "https://", "rtsp://"}, Linkify.sUrlMatchFilter, null);
    L19:
        if ((r11 & 2) == 0) goto L22;
        gatherLinks(r12, r10, PatternsCompat.AUTOLINK_EMAIL_ADDRESS, new String[]{"mailto:"}, null, null);
    L22:
        if ((r11 & 8) == 0) goto L24;
        gatherMapLinks(r12, r10);
    L24:
        pruneOverlaps(r12, r10);
        if (r12.size() != 0) goto L27;
        return false;
    L27:
        Iterator r112 = r12.iterator();
    L29:
        if (r112.hasNext() == false) goto L33;
        LinkSpec r0 = (LinkSpec) r112.next();
        if (r0.frameworkAddedSpan != null) goto L29;
        applyLink(r0.url, r0.start, r0.end, r10);
        goto L29
    L33:
        return true;
    }

    public static boolean addLinks(@NonNull TextView r4, int r5) {
        if (shouldAddLinksFallbackToFramework() == false) goto L7;
        return Linkify.addLinks(r4, r5);
    L7:
        if (r5 != 0) goto L9;
        return false;
    L9:
        CharSequence r1 = r4.getText();
        if ((r1 instanceof Spannable) == true) goto L12;
        SpannableString r12 = SpannableString.valueOf(r1);
        if (addLinks(r12, r5) == false) goto L20;
        addLinkMovementMethod(r4);
        r4.setText(r12);
        return true;
    L20:
        return false;
    L12:
        if (addLinks((Spannable) r1, r5) == false) goto L15;
        addLinkMovementMethod(r4);
        return true;
    L15:
        return false;
    }

    public static void addLinks(@NonNull TextView r7, @NonNull Pattern r8, @Nullable String r9) {
        if (shouldAddLinksFallbackToFramework() == false) goto L6;
        Linkify.addLinks(r7, r8, r9);
        return;
    L6:
        addLinks(r7, r8, r9, null, null, null);
    }

    public static void addLinks(@NonNull TextView r7, @NonNull Pattern r8, @Nullable String r9, @Nullable Linkify.MatchFilter r10, @Nullable Linkify.TransformFilter r11) {
        if (shouldAddLinksFallbackToFramework() == false) goto L6;
        Linkify.addLinks(r7, r8, r9, r10, r11);
        return;
    L6:
        addLinks(r7, r8, r9, null, r10, r11);
    }

    @SuppressLint({"NewApi"})
    public static void addLinks(@NonNull TextView r7, @NonNull Pattern r8, @Nullable String r9, @Nullable String[] r10, @Nullable Linkify.MatchFilter r11, @Nullable Linkify.TransformFilter r12) {
        if (shouldAddLinksFallbackToFramework() == false) goto L6;
        Linkify.addLinks(r7, r8, r9, r10, r11, r12);
        return;
    L6:
        SpannableString r0 = SpannableString.valueOf(r7.getText());
        if (addLinks(r0, r8, r9, r10, r11, r12) == false) goto L10;
        r7.setText(r0);
        addLinkMovementMethod(r7);
        return;
    }

    public static boolean addLinks(@NonNull Spannable r6, @NonNull Pattern r7, @Nullable String r8) {
        if (shouldAddLinksFallbackToFramework() == false) goto L7;
        return Linkify.addLinks(r6, r7, r8);
    L7:
        return addLinks(r6, r7, r8, null, null, null);
    }

    public static boolean addLinks(@NonNull Spannable r6, @NonNull Pattern r7, @Nullable String r8, @Nullable Linkify.MatchFilter r9, @Nullable Linkify.TransformFilter r10) {
        if (shouldAddLinksFallbackToFramework() == false) goto L7;
        return Linkify.addLinks(r6, r7, r8, r9, r10);
    L7:
        return addLinks(r6, r7, r8, null, r9, r10);
    }

    @SuppressLint({"NewApi"})
    public static boolean addLinks(@NonNull Spannable r6, @NonNull Pattern r7, @Nullable String r8, @Nullable String[] r9, @Nullable Linkify.MatchFilter r10, @Nullable Linkify.TransformFilter r11) {
        if (shouldAddLinksFallbackToFramework() == false) goto L7;
        return Linkify.addLinks(r6, r7, r8, r9, r10, r11);
    L7:
        if (r8 != null) goto L10;
        r8 = "";
    L10:
        if (r9 != null) goto L12;
    L13:
        r9 = EMPTY_STRING;
    L14:
        String[] r2 = new String[r9.length + 1];
        r2[0] = r8.toLowerCase(Locale.ROOT);
        int r82 = 0;
    L16:
        if (r82 >= r9.length) goto L22;
        String r4 = r9[r82];
        r82 = r82 + 1;
        if (r4 != null) goto L20;
        String r42 = "";
    L21:
        r2[r82] = r42;
        goto L16
    L20:
        r42 = r4.toLowerCase(Locale.ROOT);
        goto L21
    L22:
        Matcher r72 = r7.matcher(r6);
        boolean r83 = false;
    L24:
        if (r72.find() == false) goto L31;
        int r92 = r72.start();
        int r0 = r72.end();
        if (r10 == null) goto L28;
        boolean r43 = r10.acceptMatch(r6, r92, r0);
    L29:
        if (r43 == false) goto L24;
        applyLink(makeUrl(r72.group(0), r2, r72, r11), r92, r0, r6);
        r83 = true;
        goto L24
    L28:
        r43 = true;
        goto L29
    L31:
        return r83;
    L12:
        if (r9.length >= 1) goto L14;
        goto L13
    }

    private static boolean shouldAddLinksFallbackToFramework() {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        return true;
    L5:
        return false;
    }

    private static void addLinkMovementMethod(@NonNull TextView r1) {
        MovementMethod r0 = r1.getMovementMethod();
        if (r0 == null) goto L7;
        if ((r0 instanceof LinkMovementMethod) == false) goto L7;
        return;
    L7:
        if (r1.getLinksClickable() == false) goto L11;
        r1.setMovementMethod(LinkMovementMethod.getInstance());
        return;
    }

    private static String makeUrl(@NonNull String r7, @NonNull String[] r8, Matcher r9, @Nullable Linkify.TransformFilter r10) {
        if (r10 == null) goto L4;
        r7 = r10.transformUrl(r9, r7);
    L4:
        int r102 = 0;
    L5:
        boolean r6 = true;
        if (r102 >= r8.length) goto L13;
        if (r7.regionMatches(true, 0, r8[r102], 0, r8[r102].length()) == true) goto L10;
        r102 = r102 + 1;
        goto L5
    L10:
        if (r7.regionMatches(false, 0, r8[r102], 0, r8[r102].length()) == true) goto L14;
        r7 = r8[r102] + r7.substring(r8[r102].length());
    L14:
        if (r6 == false) goto L16;
        return r7;
    L16:
        if (r8.length > 0) goto L18;
        return r7;
    L18:
        return r8[0] + r7;
    L13:
        r6 = false;
        goto L14
    }

    private static void gatherLinks(ArrayList<LinkSpec> r4, Spannable r5, Pattern r6, String[] r7, Linkify.MatchFilter r8, Linkify.TransformFilter r9) {
        Matcher r62 = r6.matcher(r5);
    L4:
        if (r62.find() == false) goto L10;
        int r0 = r62.start();
        int r1 = r62.end();
        if (r8 == null) goto L9;
        if (r8.acceptMatch(r5, r0, r1) == false) goto L4;
    L9:
        LinkSpec r2 = new LinkSpec();
        r2.url = makeUrl(r62.group(0), r7, r62, r9);
        r2.start = r0;
        r2.end = r1;
        r4.add(r2);
        goto L4
    }

    private static void applyLink(String r1, int r2, int r3, Spannable r4) {
        r4.setSpan(new URLSpan(r1), r2, r3, 33);
    }

    private static void gatherMapLinks(ArrayList<LinkSpec> r5, Spannable r6) {
        String r62 = r6.toString();
        int r0 = 0;
    L15:
        String r1 = findAddress(r62);     // Catch: UnsupportedOperationException -> L14
        if (r1 == null) goto L25;
        int r2 = r62.indexOf(r1);     // Catch: UnsupportedOperationException -> L14
        if (r2 < 0) goto L12;
        LinkSpec r3 = new LinkSpec();     // Catch: UnsupportedOperationException -> L14
        int r4 = r1.length() + r2;     // Catch: UnsupportedOperationException -> L14
        r3.start = r2 + r0;     // Catch: UnsupportedOperationException -> L14
        r0 = r0 + r4;     // Catch: UnsupportedOperationException -> L14
        r3.end = r0;     // Catch: UnsupportedOperationException -> L14
        r62 = r62.substring(r4);     // Catch: UnsupportedOperationException -> L14
        r3.url = "geo:0,0?q=" + URLEncoder.encode(r1, "UTF-8");     // Catch: UnsupportedOperationException -> L14
        r5.add(r3);     // Catch: UnsupportedOperationException -> L14
        goto L15
    L12:
        return;
    L25:
        return;
    }

    private static String findAddress(String r2) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return WebView.findAddress(r2);
    L7:
        return FindAddress.findAddress(r2);
    }

    private static void pruneOverlaps(ArrayList<LinkSpec> r9, Spannable r10) {
        int r2 = 0;
        URLSpan[] r0 = (URLSpan[]) r10.getSpans(0, r10.length(), URLSpan.class);
        int r1 = 0;
    L4:
        if (r1 >= r0.length) goto L6;
        LinkSpec r3 = new LinkSpec();
        r3.frameworkAddedSpan = r0[r1];
        r3.start = r10.getSpanStart(r0[r1]);
        r3.end = r10.getSpanEnd(r0[r1]);
        r9.add(r3);
        r1 = r1 + 1;
        goto L4
    L6:
        Collections.sort(r9, COMPARATOR);
        int r02 = r9.size();
    L8:
        if (r2 >= (r02 - 1)) goto L29;
        LinkSpec r12 = r9.get(r2);
        int r32 = r2 + 1;
        LinkSpec r4 = r9.get(r32);
        if (r12.start > r4.start) goto L28;
        if (r12.end <= r4.start) goto L28;
        if (r4.end > r12.end) goto L17;
    L15:
        int r13 = r32;
    L23:
        if (r13 == (-1)) goto L28;
        Object r33 = r9.get(r13).frameworkAddedSpan;
        if (r33 == null) goto L27;
        r10.removeSpan(r33);
    L27:
        r9.remove(r13);
        r02 = r02 - 1;
        goto L8
    L17:
        if ((r12.end - r12.start) > (r4.end - r4.start)) goto L15;
        if ((r12.end - r12.start) >= (r4.end - r4.start)) goto L22;
        r13 = r2;
        goto L23
    L22:
        r13 = -1;
    L28:
        r2 = r32;
        goto L8
    }

    private LinkifyCompat() {
    }
}
