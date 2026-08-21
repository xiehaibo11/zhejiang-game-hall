package android.support.v4.util;

import android.support.annotation.RestrictTo;
import java.io.PrintWriter;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class TimeUtils {

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static final int HUNDRED_DAY_FIELD_LEN = 19;
    private static final int SECONDS_PER_DAY = 86400;
    private static final int SECONDS_PER_HOUR = 3600;
    private static final int SECONDS_PER_MINUTE = 60;
    private static char[] sFormatStr;
    private static final Object sFormatSync = null;

    private static int accumField(int r2, int r3, boolean r4, int r5) {
        if (r2 > 99) goto L22;
        if (r4 == false) goto L8;
        if (r5 >= 3) goto L22;
    L8:
        if (r2 > 9) goto L20;
        if (r4 == false) goto L12;
        if (r5 >= 2) goto L20;
    L12:
        if (r4 == true) goto L18;
        if (r2 > 0) goto L18;
        return 0;
    L18:
        return r3 + 1;
    L20:
        return r3 + 2;
    L22:
        return r3 + 3;
    }

    static {
        sFormatSync = new Object();
        sFormatStr = new char[24];
    }

    private static int printField(char[] r2, int r3, char r4, int r5, boolean r6, int r7) {
        if (r6 == true) goto L4;
        if (r3 > 0) goto L4;
        return r5;
    L4:
        if (r6 == false) goto L8;
        if (r7 < 3) goto L8;
    L9:
        int r0 = r3 / 100;
        r2[r5] = (char) (r0 + 48);
        int r1 = r5 + 1;
        r3 = r3 - (r0 * 100);
    L11:
        if (r6 == false) goto L15;
        if (r7 < 2) goto L15;
    L17:
        int r52 = r3 / 10;
        r2[r1] = (char) (r52 + 48);
        r1 = r1 + 1;
        r3 = r3 - (r52 * 10);
    L18:
        r2[r1] = (char) (r3 + 48);
        int r12 = r1 + 1;
        r2[r12] = r4;
        return r12 + 1;
    L15:
        if (r3 > 9) goto L17;
        if (r5 == r1) goto L18;
    L8:
        if (r3 > 99) goto L9;
        r1 = r5;
        goto L11
    }

    private static int formatDurationLocked(long r17, int r19) {
        long r0 = r17;
        if (sFormatStr.length >= r19) goto L5;
        sFormatStr = new char[r19];
    L5:
        char[] r3 = sFormatStr;
        if (r0 != 0) goto L12;
        int r02 = r19 - 1;
    L8:
        if (r02 <= 0) goto L10;
        r3[0] = ' ';
        goto L8
    L10:
        r3[0] = '0';
        return 1;
    L12:
        if (r0 <= 0) goto L14;
        char r4 = '+';
    L15:
        int r13 = (int) (r0 % 1000);
        int r03 = (int) Math.floor(r0 / 1000);
        if (r03 <= SECONDS_PER_DAY) goto L18;
        int r5 = r03 / SECONDS_PER_DAY;
        r03 = r03 - (SECONDS_PER_DAY * r5);
    L20:
        if (r03 <= SECONDS_PER_HOUR) goto L22;
        int r1 = r03 / SECONDS_PER_HOUR;
        r03 = r03 - (r1 * SECONDS_PER_HOUR);
    L24:
        if (r03 <= 60) goto L26;
        int r7 = r03 / 60;
        int r12 = r03 - (r7 * 60);
        int r04 = r7;
    L28:
        if (r19 == 0) goto L48;
        int r72 = accumField(r5, 1, false, 0);
        if (r72 <= 0) goto L32;
        boolean r8 = true;
    L33:
        int r73 = r72 + accumField(r1, 1, r8, 2);
        if (r73 <= 0) goto L36;
        boolean r82 = true;
    L37:
        int r74 = r73 + accumField(r04, 1, r82, 2);
        if (r74 <= 0) goto L40;
        boolean r83 = true;
    L41:
        int r75 = r74 + accumField(r12, 1, r83, 2);
        if (r75 <= 0) goto L44;
        int r84 = 3;
    L45:
        int r76 = r75 + (accumField(r13, 2, true, r84) + 1);
        int r85 = 0;
    L46:
        if (r76 >= r19) goto L49;
        r3[r85] = ' ';
        r85 = r85 + 1;
        r76 = r76 + 1;
    L49:
        r3[r85] = r4;
        int r9 = r85 + 1;
        if (r19 == 0) goto L52;
        boolean r2 = true;
    L53:
        int r77 = printField(r3, r5, 'd', r9, false, 0);
        if (r77 == r9) goto L56;
        boolean r86 = true;
    L57:
        if (r2 == false) goto L59;
        int r92 = 2;
    L60:
        int r78 = printField(r3, r1, 'h', r77, r86, r92);
        if (r78 == r9) goto L63;
        boolean r87 = true;
    L64:
        if (r2 == false) goto L66;
        int r93 = 2;
    L67:
        int r79 = printField(r3, r04, 'm', r78, r87, r93);
        if (r79 == r9) goto L70;
        boolean r88 = true;
    L71:
        if (r2 == false) goto L73;
        int r94 = 2;
    L74:
        int r710 = printField(r3, r12, 's', r79, r88, r94);
        if (r2 == false) goto L78;
        if (r710 == r9) goto L78;
        int r95 = 3;
    L79:
        int r05 = printField(r3, r13, 'm', r710, true, r95);
        r3[r05] = 's';
        return r05 + 1;
    L78:
        r95 = 0;
        goto L79
    L73:
        r94 = 0;
        goto L74
    L70:
        r88 = false;
        goto L71
    L66:
        r93 = 0;
        goto L67
    L63:
        r87 = false;
        goto L64
    L59:
        r92 = 0;
        goto L60
    L56:
        r86 = false;
        goto L57
    L52:
        r2 = false;
        goto L53
    L44:
        r84 = 0;
        goto L45
    L40:
        r83 = false;
        goto L41
    L36:
        r82 = false;
        goto L37
    L32:
        r8 = false;
        goto L33
    L48:
        r85 = 0;
        goto L49
    L26:
        r12 = r03;
        r04 = 0;
        goto L28
    L22:
        r1 = 0;
        goto L24
    L18:
        r5 = 0;
        goto L20
    L14:
        r4 = '-';
        r0 = -r0;
        goto L15
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void formatDuration(long r2, StringBuilder r4) {
        Object r0 = sFormatSync;
        monitor-enter(r0);
        int r22 = formatDurationLocked(r2, 0);     // Catch: Throwable -> L8
        r4.append(sFormatStr, 0, r22);     // Catch: Throwable -> L8
        monitor-exit(r0);     // Catch: Throwable -> L8
        return;
    L8:
        th = move-exception;
        throw th;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void formatDuration(long r2, PrintWriter r4, int r5) {
        Object r0 = sFormatSync;
        monitor-enter(r0);
        int r22 = formatDurationLocked(r2, r5);     // Catch: Throwable -> L7
        r4.print(new String(sFormatStr, 0, r22));     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return;
    L7:
        th = move-exception;
        throw th;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void formatDuration(long r1, PrintWriter r3) {
        formatDuration(r1, r3, 0);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void formatDuration(long r3, long r5, PrintWriter r7) {
        if (r3 != 0) goto L6;
        r7.print("--");
        return;
    L6:
        formatDuration(r3 - r5, r7, 0);
    }

    private TimeUtils() {
    }
}
