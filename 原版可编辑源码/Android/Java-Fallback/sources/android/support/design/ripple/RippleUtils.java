package android.support.design.ripple;

public class RippleUtils {
    private static final int[] FOCUSED_STATE_SET = null;
    private static final int[] HOVERED_FOCUSED_STATE_SET = null;
    private static final int[] HOVERED_STATE_SET = null;
    private static final int[] PRESSED_STATE_SET = null;
    private static final int[] SELECTED_FOCUSED_STATE_SET = null;
    private static final int[] SELECTED_HOVERED_FOCUSED_STATE_SET = null;
    private static final int[] SELECTED_HOVERED_STATE_SET = null;
    private static final int[] SELECTED_PRESSED_STATE_SET = null;
    private static final int[] SELECTED_STATE_SET = null;
    public static final boolean USE_FRAMEWORK_RIPPLE = false;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 21
            if (r0 < r3) goto La
            r0 = r1
            goto Lb
        La:
            r0 = r2
        Lb:
            android.support.design.ripple.RippleUtils.USE_FRAMEWORK_RIPPLE = r0
            int[] r0 = new int[r1]
            r3 = 16842919(0x10100a7, float:2.3694026E-38)
            r0[r2] = r3
            android.support.design.ripple.RippleUtils.PRESSED_STATE_SET = r0
            r0 = 2
            int[] r3 = new int[r0]
            r3 = {x0058: FILL_ARRAY_DATA , data: [16843623, 16842908} // fill-array
            android.support.design.ripple.RippleUtils.HOVERED_FOCUSED_STATE_SET = r3
            int[] r3 = new int[r1]
            r4 = 16842908(0x101009c, float:2.3693995E-38)
            r3[r2] = r4
            android.support.design.ripple.RippleUtils.FOCUSED_STATE_SET = r3
            int[] r3 = new int[r1]
            r4 = 16843623(0x1010367, float:2.3696E-38)
            r3[r2] = r4
            android.support.design.ripple.RippleUtils.HOVERED_STATE_SET = r3
            int[] r3 = new int[r0]
            r3 = {x0060: FILL_ARRAY_DATA , data: [16842913, 16842919} // fill-array
            android.support.design.ripple.RippleUtils.SELECTED_PRESSED_STATE_SET = r3
            r3 = 3
            int[] r3 = new int[r3]
            r3 = {x0068: FILL_ARRAY_DATA , data: [16842913, 16843623, 16842908} // fill-array
            android.support.design.ripple.RippleUtils.SELECTED_HOVERED_FOCUSED_STATE_SET = r3
            int[] r3 = new int[r0]
            r3 = {x0072: FILL_ARRAY_DATA , data: [16842913, 16842908} // fill-array
            android.support.design.ripple.RippleUtils.SELECTED_FOCUSED_STATE_SET = r3
            int[] r0 = new int[r0]
            r0 = {x007a: FILL_ARRAY_DATA , data: [16842913, 16843623} // fill-array
            android.support.design.ripple.RippleUtils.SELECTED_HOVERED_STATE_SET = r0
            int[] r0 = new int[r1]
            r1 = 16842913(0x10100a1, float:2.369401E-38)
            r0[r2] = r1
            android.support.design.ripple.RippleUtils.SELECTED_STATE_SET = r0
            return
    }

    private RippleUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.res.ColorStateList convertToRippleDrawableColor(android.content.res.ColorStateList r6) {
            boolean r0 = android.support.design.ripple.RippleUtils.USE_FRAMEWORK_RIPPLE
            r1 = 2
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L29
            int[][] r0 = new int[r1][]
            int[] r1 = new int[r1]
            int[] r4 = android.support.design.ripple.RippleUtils.SELECTED_STATE_SET
            r0[r3] = r4
            int[] r4 = android.support.design.ripple.RippleUtils.SELECTED_PRESSED_STATE_SET
            int r4 = getColorForState(r6, r4)
            r1[r3] = r4
            int[] r3 = android.util.StateSet.NOTHING
            r0[r2] = r3
            int[] r3 = android.support.design.ripple.RippleUtils.PRESSED_STATE_SET
            int r6 = getColorForState(r6, r3)
            r1[r2] = r6
            android.content.res.ColorStateList r6 = new android.content.res.ColorStateList
            r6.<init>(r0, r1)
            return r6
        L29:
            r0 = 10
            int[][] r4 = new int[r0][]
            int[] r0 = new int[r0]
            int[] r5 = android.support.design.ripple.RippleUtils.SELECTED_PRESSED_STATE_SET
            r4[r3] = r5
            int r5 = getColorForState(r6, r5)
            r0[r3] = r5
            int[] r5 = android.support.design.ripple.RippleUtils.SELECTED_HOVERED_FOCUSED_STATE_SET
            r4[r2] = r5
            int r5 = getColorForState(r6, r5)
            r0[r2] = r5
            int[] r2 = android.support.design.ripple.RippleUtils.SELECTED_FOCUSED_STATE_SET
            r4[r1] = r2
            int r2 = getColorForState(r6, r2)
            r0[r1] = r2
            r1 = 3
            int[] r2 = android.support.design.ripple.RippleUtils.SELECTED_HOVERED_STATE_SET
            r4[r1] = r2
            int r2 = getColorForState(r6, r2)
            r0[r1] = r2
            r1 = 4
            int[] r2 = android.support.design.ripple.RippleUtils.SELECTED_STATE_SET
            r4[r1] = r2
            r0[r1] = r3
            r1 = 5
            int[] r2 = android.support.design.ripple.RippleUtils.PRESSED_STATE_SET
            r4[r1] = r2
            int r2 = getColorForState(r6, r2)
            r0[r1] = r2
            r1 = 6
            int[] r2 = android.support.design.ripple.RippleUtils.HOVERED_FOCUSED_STATE_SET
            r4[r1] = r2
            int r2 = getColorForState(r6, r2)
            r0[r1] = r2
            r1 = 7
            int[] r2 = android.support.design.ripple.RippleUtils.FOCUSED_STATE_SET
            r4[r1] = r2
            int r2 = getColorForState(r6, r2)
            r0[r1] = r2
            r1 = 8
            int[] r2 = android.support.design.ripple.RippleUtils.HOVERED_STATE_SET
            r4[r1] = r2
            int r6 = getColorForState(r6, r2)
            r0[r1] = r6
            r6 = 9
            int[] r1 = android.util.StateSet.NOTHING
            r4[r6] = r1
            r0[r6] = r3
            android.content.res.ColorStateList r6 = new android.content.res.ColorStateList
            r6.<init>(r4, r0)
            return r6
    }

    private static int doubleAlpha(int r2) {
            int r0 = android.graphics.Color.alpha(r2)
            int r0 = r0 * 2
            r1 = 255(0xff, float:3.57E-43)
            int r0 = java.lang.Math.min(r0, r1)
            int r2 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r2, r0)
            return r2
    }

    private static int getColorForState(android.content.res.ColorStateList r1, int[] r2) {
            if (r1 == 0) goto Lb
            int r0 = r1.getDefaultColor()
            int r1 = r1.getColorForState(r2, r0)
            goto Lc
        Lb:
            r1 = 0
        Lc:
            boolean r2 = android.support.design.ripple.RippleUtils.USE_FRAMEWORK_RIPPLE
            if (r2 == 0) goto L14
            int r1 = doubleAlpha(r1)
        L14:
            return r1
    }
}
