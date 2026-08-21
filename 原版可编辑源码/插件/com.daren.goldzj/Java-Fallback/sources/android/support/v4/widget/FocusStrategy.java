package android.support.v4.widget;

import android.graphics.Rect;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class FocusStrategy {

    public interface BoundsAdapter<T> {
        void obtainBounds(T r1, Rect r2);
    }

    public interface CollectionAdapter<T, V> {
        V get(T r1, int r2);

        int size(T r1);
    }

    private static class SequentialComparator<T> implements Comparator<T> {
        private final BoundsAdapter<T> mAdapter;
        private final boolean mIsLayoutRtl;
        private final Rect mTemp1;
        private final Rect mTemp2;

        SequentialComparator(boolean r2, BoundsAdapter<T> r3) {
            this.mTemp1 = new Rect();
            this.mTemp2 = new Rect();
            this.mIsLayoutRtl = r2;
            this.mAdapter = r3;
        }

        @Override
        public int compare(T r5, T r6) {
            Rect r0 = this.mTemp1;
            Rect r1 = this.mTemp2;
            this.mAdapter.obtainBounds(r5, r0);
            this.mAdapter.obtainBounds(r6, r1);
            if (r0.top >= r1.top) goto L6;
            return -1;
        L6:
            if (r0.top <= r1.top) goto L9;
            return 1;
        L9:
            if (r0.left >= r1.left) goto L15;
            if (this.mIsLayoutRtl == false) goto L42;
            return 1;
        L42:
            return -1;
        L15:
            if (r0.left <= r1.left) goto L22;
            if (this.mIsLayoutRtl == true) goto L43;
            return 1;
        L43:
            return -1;
        L22:
            if (r0.bottom >= r1.bottom) goto L25;
            return -1;
        L25:
            if (r0.bottom <= r1.bottom) goto L28;
            return 1;
        L28:
            if (r0.right >= r1.right) goto L34;
            if (this.mIsLayoutRtl == false) goto L44;
            return 1;
        L44:
            return -1;
        L34:
            if (r0.right > r1.right) goto L36;
            return 0;
        L36:
            if (this.mIsLayoutRtl == true) goto L45;
            return 1;
        L45:
            return -1;
        }
    }

    private static int getWeightedDistanceFor(int r1, int r2) {
        return ((r1 * 13) * r1) + (r2 * r2);
    }

    public static <L, T> T findNextFocusInRelativeDirection(@NonNull L r4, @NonNull CollectionAdapter<L, T> r5, @NonNull BoundsAdapter<T> r6, @Nullable T r7, int r8, boolean r9, boolean r10) {
        int r0 = r5.size(r4);
        ArrayList r1 = new ArrayList(r0);
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L5;
        r1.add(r5.get(r4, r2));
        r2 = r2 + 1;
        goto L3
    L5:
        Collections.sort(r1, new SequentialComparator(r9, r6));
        if (r8 == 1) goto L14;
        if (r8 != 2) goto L12;
        return (T) getNextFocusable(r7, r1, r10);
    L12:
        throw new IllegalArgumentException("direction must be one of {FOCUS_FORWARD, FOCUS_BACKWARD}.");
    L14:
        return (T) getPreviousFocusable(r7, r1, r10);
    }

    private static <T> T getNextFocusable(T r1, ArrayList<T> r2, boolean r3) {
        int r0 = r2.size();
        if (r1 != null) goto L5;
        int r12 = -1;
    L6:
        int r13 = r12 + 1;
        if (r13 < r0) goto L9;
        if (r3 == false) goto L14;
        if (r0 > 0) goto L13;
        return null;
    L13:
        return r2.get(0);
    L14:
        return null;
    L9:
        return r2.get(r13);
    L5:
        r12 = r2.lastIndexOf(r1);
        goto L6
    }

    private static <T> T getPreviousFocusable(T r1, ArrayList<T> r2, boolean r3) {
        int r0 = r2.size();
        if (r1 != null) goto L5;
        int r12 = r0;
    L6:
        int r13 = r12 - 1;
        if (r13 >= 0) goto L9;
        if (r3 == false) goto L14;
        if (r0 > 0) goto L13;
        return null;
    L13:
        return r2.get(r0 - 1);
    L14:
        return null;
    L9:
        return r2.get(r13);
    L5:
        r12 = r2.indexOf(r1);
        goto L6
    }

    public static <L, T> T findNextFocusInAbsoluteDirection(@NonNull L r7, @NonNull CollectionAdapter<L, T> r8, @NonNull BoundsAdapter<T> r9, @Nullable T r10, @NonNull Rect r11, int r12) {
        Rect r0 = new Rect(r11);
        int r2 = 0;
        if (r12 != 17) goto L5;
        r0.offset(r11.width() + 1, 0);
    L16:
        T r1 = null;
        int r3 = r8.size(r7);
        Rect r4 = new Rect();
    L17:
        if (r2 >= r3) goto L25;
        T r5 = r8.get(r7, r2);
        if (r5 == r10) goto L24;
        r9.obtainBounds(r5, r4);
        if (isBetterCandidate(r12, r11, r4, r0) == false) goto L24;
        r0.set(r4);
        r1 = r5;
    L24:
        r2 = r2 + 1;
        goto L17
    L25:
        return r1;
    L5:
        if (r12 != 33) goto L7;
        r0.offset(0, r11.height() + 1);
        goto L16
    L7:
        if (r12 != 66) goto L9;
        r0.offset(-(r11.width() + 1), 0);
        goto L16
    L9:
        if (r12 != 130) goto L12;
        r0.offset(0, -(r11.height() + 1));
        goto L16
    L12:
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    }

    private static boolean isBetterCandidate(int r3, @NonNull Rect r4, @NonNull Rect r5, @NonNull Rect r6) {
        if (isCandidate(r4, r5, r3) == true) goto L6;
        return false;
    L6:
        if (isCandidate(r4, r6, r3) == true) goto L9;
        return true;
    L9:
        if (beamBeats(r3, r4, r5, r6) == false) goto L12;
        return true;
    L12:
        if (beamBeats(r3, r4, r6, r5) == false) goto L15;
        return false;
    L15:
        if (getWeightedDistanceFor(majorAxisDistance(r3, r4, r5), minorAxisDistance(r3, r4, r5)) >= getWeightedDistanceFor(majorAxisDistance(r3, r4, r6), minorAxisDistance(r3, r4, r6))) goto L18;
        return true;
    L18:
        return false;
    }

    private static boolean beamBeats(int r3, @NonNull Rect r4, @NonNull Rect r5, @NonNull Rect r6) {
        boolean r0 = beamsOverlap(r3, r4, r5);
        if (beamsOverlap(r3, r4, r6) == true) goto L19;
        if (r0 == false) goto L19;
        if (isToDirectionOf(r3, r4, r6) == true) goto L10;
        return true;
    L10:
        if (r3 != 17) goto L12;
        return true;
    L12:
        if (r3 != 66) goto L15;
        return true;
    L15:
        if (majorAxisDistance(r3, r4, r5) < majorAxisDistanceToFarEdge(r3, r4, r6)) goto L22;
        return false;
    L22:
        return true;
    L19:
        return false;
    }

    private static boolean isCandidate(@NonNull Rect r3, @NonNull Rect r4, int r5) {
        if (r5 == 17) goto L40;
        if (r5 == 33) goto L31;
        if (r5 == 66) goto L22;
        if (r5 != 130) goto L20;
        if (r3.top < r4.top) goto L15;
        if (r3.bottom <= r4.top) goto L15;
    L17:
        return false;
    L15:
        if (r3.bottom >= r4.bottom) goto L17;
        return true;
    L20:
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    L22:
        if (r3.left < r4.left) goto L26;
        if (r3.right <= r4.left) goto L26;
    L28:
        return false;
    L26:
        if (r3.right >= r4.right) goto L28;
        return true;
    L31:
        if (r3.bottom > r4.bottom) goto L35;
        if (r3.top >= r4.bottom) goto L35;
    L37:
        return false;
    L35:
        if (r3.top <= r4.top) goto L37;
        return true;
    L40:
        if (r3.right > r4.right) goto L44;
        if (r3.left >= r4.right) goto L44;
    L46:
        return false;
    L44:
        if (r3.left <= r4.left) goto L46;
        return true;
    }

    private static boolean beamsOverlap(int r3, @NonNull Rect r4, @NonNull Rect r5) {
        if (r3 == 17) goto L21;
        if (r3 == 33) goto L14;
        if (r3 == 66) goto L21;
        if (r3 == 130) goto L14;
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    L14:
        if (r5.right >= r4.left) goto L16;
    L18:
        return false;
    L16:
        if (r5.left > r4.right) goto L18;
        return true;
    L21:
        if (r5.bottom >= r4.top) goto L23;
    L25:
        return false;
    L23:
        if (r5.top > r4.bottom) goto L25;
        return true;
    }

    private static boolean isToDirectionOf(int r3, @NonNull Rect r4, @NonNull Rect r5) {
        if (r3 == 17) goto L28;
        if (r3 == 33) goto L23;
        if (r3 == 66) goto L18;
        if (r3 != 130) goto L16;
        if (r4.bottom <= r5.top) goto L32;
        return false;
    L32:
        return true;
    L16:
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    L18:
        if (r4.right <= r5.left) goto L33;
        return false;
    L33:
        return true;
    L23:
        if (r4.top >= r5.bottom) goto L34;
        return false;
    L34:
        return true;
    L28:
        if (r4.left >= r5.right) goto L35;
        return false;
    L35:
        return true;
    }

    private static int majorAxisDistance(int r0, @NonNull Rect r1, @NonNull Rect r2) {
        return Math.max(0, majorAxisDistanceRaw(r0, r1, r2));
    }

    private static int majorAxisDistanceRaw(int r1, @NonNull Rect r2, @NonNull Rect r3) {
        if (r1 != 17) goto L5;
        int r12 = r2.left;
        int r22 = r3.right;
    L12:
        return r12 - r22;
    L5:
        if (r1 != 33) goto L7;
        r12 = r2.top;
        r22 = r3.bottom;
        goto L12
    L7:
        if (r1 != 66) goto L9;
        r12 = r3.left;
        r22 = r2.right;
        goto L12
    L9:
        if (r1 != 130) goto L14;
        r12 = r3.top;
        r22 = r2.bottom;
        goto L12
    L14:
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    }

    private static int majorAxisDistanceToFarEdge(int r0, @NonNull Rect r1, @NonNull Rect r2) {
        return Math.max(1, majorAxisDistanceToFarEdgeRaw(r0, r1, r2));
    }

    private static int majorAxisDistanceToFarEdgeRaw(int r1, @NonNull Rect r2, @NonNull Rect r3) {
        if (r1 != 17) goto L5;
        int r12 = r2.left;
        int r22 = r3.left;
    L12:
        return r12 - r22;
    L5:
        if (r1 != 33) goto L7;
        r12 = r2.top;
        r22 = r3.top;
        goto L12
    L7:
        if (r1 != 66) goto L9;
        r12 = r3.right;
        r22 = r2.right;
        goto L12
    L9:
        if (r1 != 130) goto L14;
        r12 = r3.bottom;
        r22 = r2.bottom;
        goto L12
    L14:
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    }

    private static int minorAxisDistance(int r1, @NonNull Rect r2, @NonNull Rect r3) {
        if (r1 == 17) goto L16;
        if (r1 == 33) goto L14;
        if (r1 == 66) goto L16;
        if (r1 == 130) goto L14;
        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
    L14:
        return Math.abs((r2.left + (r2.width() / 2)) - (r3.left + (r3.width() / 2)));
    L16:
        return Math.abs((r2.top + (r2.height() / 2)) - (r3.top + (r3.height() / 2)));
    }

    private FocusStrategy() {
    }
}
