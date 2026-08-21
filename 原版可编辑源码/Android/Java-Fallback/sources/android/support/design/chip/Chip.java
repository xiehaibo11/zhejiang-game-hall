package android.support.design.chip;

public class Chip extends android.support.v7.widget.AppCompatCheckBox implements android.support.design.chip.ChipDrawable.Delegate {
    private static final int CLOSE_ICON_VIRTUAL_ID = 0;
    private static final android.graphics.Rect EMPTY_BOUNDS = null;
    private static final java.lang.String NAMESPACE_ANDROID = "http://schemas.android.com/apk/res/android";
    private static final int[] SELECTED_STATE = null;
    private static final java.lang.String TAG = "Chip";
    private android.support.design.chip.ChipDrawable chipDrawable;
    private boolean closeIconFocused;
    private boolean closeIconHovered;
    private boolean closeIconPressed;
    private boolean deferredCheckedValue;
    private int focusedVirtualView;
    private final android.support.v4.content.res.ResourcesCompat.FontCallback fontCallback;
    private android.widget.CompoundButton.OnCheckedChangeListener onCheckedChangeListenerInternal;
    private android.view.View.OnClickListener onCloseIconClickListener;
    private final android.graphics.Rect rect;
    private final android.graphics.RectF rectF;
    private android.graphics.drawable.RippleDrawable ripple;
    private final android.support.design.chip.Chip.ChipTouchHelper touchHelper;



    private class ChipTouchHelper extends android.support.v4.widget.ExploreByTouchHelper {
        final android.support.design.chip.Chip this$0;

        ChipTouchHelper(android.support.design.chip.Chip r1, android.support.design.chip.Chip r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        protected int getVirtualViewAt(float r2, float r3) {
                r1 = this;
                android.support.design.chip.Chip r0 = r1.this$0
                boolean r0 = android.support.design.chip.Chip.access$100(r0)
                if (r0 == 0) goto L16
                android.support.design.chip.Chip r0 = r1.this$0
                android.graphics.RectF r0 = android.support.design.chip.Chip.access$200(r0)
                boolean r2 = r0.contains(r2, r3)
                if (r2 == 0) goto L16
                r2 = 0
                goto L17
            L16:
                r2 = -1
            L17:
                return r2
        }

        @Override
        protected void getVisibleVirtualViews(java.util.List<java.lang.Integer> r2) {
                r1 = this;
                android.support.design.chip.Chip r0 = r1.this$0
                boolean r0 = android.support.design.chip.Chip.access$100(r0)
                if (r0 == 0) goto L10
                r0 = 0
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                r2.add(r0)
            L10:
                return
        }

        @Override
        protected boolean onPerformActionForVirtualView(int r1, int r2, android.os.Bundle r3) {
                r0 = this;
                r3 = 16
                if (r2 != r3) goto Ld
                if (r1 != 0) goto Ld
                android.support.design.chip.Chip r1 = r0.this$0
                boolean r1 = r1.performCloseIconClick()
                return r1
            Ld:
                r1 = 0
                return r1
        }

        @Override
        protected void onPopulateNodeForHost(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r4) {
                r3 = this;
                android.support.design.chip.Chip r0 = r3.this$0
                android.support.design.chip.ChipDrawable r0 = android.support.design.chip.Chip.access$000(r0)
                if (r0 == 0) goto L16
                android.support.design.chip.Chip r0 = r3.this$0
                android.support.design.chip.ChipDrawable r0 = android.support.design.chip.Chip.access$000(r0)
                boolean r0 = r0.isCheckable()
                if (r0 == 0) goto L16
                r0 = 1
                goto L17
            L16:
                r0 = 0
            L17:
                r4.setCheckable(r0)
                java.lang.Class<android.support.design.chip.Chip> r0 = android.support.design.chip.Chip.class
                java.lang.String r0 = r0.getName()
                r4.setClassName(r0)
                android.support.design.chip.Chip r0 = r3.this$0
                java.lang.CharSequence r0 = r0.getText()
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 23
                if (r1 < r2) goto L33
                r4.setText(r0)
                goto L36
            L33:
                r4.setContentDescription(r0)
            L36:
                return
        }

        @Override
        protected void onPopulateNodeForVirtualView(int r7, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r8) {
                r6 = this;
                android.support.design.chip.Chip r7 = r6.this$0
                boolean r7 = android.support.design.chip.Chip.access$100(r7)
                java.lang.String r0 = ""
                if (r7 == 0) goto L54
                android.support.design.chip.Chip r7 = r6.this$0
                java.lang.CharSequence r7 = r7.getCloseIconContentDescription()
                if (r7 == 0) goto L16
                r8.setContentDescription(r7)
                goto L3c
            L16:
                android.support.design.chip.Chip r7 = r6.this$0
                java.lang.CharSequence r7 = r7.getText()
                android.support.design.chip.Chip r1 = r6.this$0
                android.content.Context r1 = r1.getContext()
                int r2 = android.support.design.R.string.mtrl_chip_close_icon_content_description
                r3 = 1
                java.lang.Object[] r3 = new java.lang.Object[r3]
                r4 = 0
                boolean r5 = android.text.TextUtils.isEmpty(r7)
                if (r5 != 0) goto L2f
                r0 = r7
            L2f:
                r3[r4] = r0
                java.lang.String r7 = r1.getString(r2, r3)
                java.lang.String r7 = r7.trim()
                r8.setContentDescription(r7)
            L3c:
                android.support.design.chip.Chip r7 = r6.this$0
                android.graphics.Rect r7 = android.support.design.chip.Chip.access$300(r7)
                r8.setBoundsInParent(r7)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityActionCompat r7 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLICK
                r8.addAction(r7)
                android.support.design.chip.Chip r7 = r6.this$0
                boolean r7 = r7.isEnabled()
                r8.setEnabled(r7)
                goto L5e
            L54:
                r8.setContentDescription(r0)
                android.graphics.Rect r7 = android.support.design.chip.Chip.access$400()
                r8.setBoundsInParent(r7)
            L5e:
                return
        }
    }

    static {
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.support.design.chip.Chip.EMPTY_BOUNDS = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16842913(0x10100a1, float:2.369401E-38)
            r0[r1] = r2
            android.support.design.chip.Chip.SELECTED_STATE = r0
            return
    }

    public Chip(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public Chip(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.chipStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public Chip(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.focusedVirtualView = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.rect = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.rectF = r0
            android.support.design.chip.Chip$1 r0 = new android.support.design.chip.Chip$1
            r0.<init>(r1)
            r1.fontCallback = r0
            r1.validateAttributes(r3)
            int r0 = android.support.design.R.style.Widget_MaterialComponents_Chip_Action
            android.support.design.chip.ChipDrawable r2 = android.support.design.chip.ChipDrawable.createFromAttributes(r2, r3, r4, r0)
            r1.setChipDrawable(r2)
            android.support.design.chip.Chip$ChipTouchHelper r3 = new android.support.design.chip.Chip$ChipTouchHelper
            r3.<init>(r1, r1)
            r1.touchHelper = r3
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r1, r3)
            r1.initOutlineProvider()
            boolean r3 = r1.deferredCheckedValue
            r1.setChecked(r3)
            r3 = 0
            r2.setShouldDrawText(r3)
            java.lang.CharSequence r4 = r2.getText()
            r1.setText(r4)
            android.text.TextUtils$TruncateAt r2 = r2.getEllipsize()
            r1.setEllipsize(r2)
            r1.setIncludeFontPadding(r3)
            android.support.design.resources.TextAppearance r2 = r1.getTextAppearance()
            if (r2 == 0) goto L5c
            android.support.design.resources.TextAppearance r2 = r1.getTextAppearance()
            r1.updateTextPaintDrawState(r2)
        L5c:
            r1.setSingleLine()
            r2 = 8388627(0x800013, float:1.175497E-38)
            r1.setGravity(r2)
            r1.updatePaddingInternal()
            return
    }

    static android.support.design.chip.ChipDrawable access$000(android.support.design.chip.Chip r0) {
            android.support.design.chip.ChipDrawable r0 = r0.chipDrawable
            return r0
    }

    static boolean access$100(android.support.design.chip.Chip r0) {
            boolean r0 = r0.hasCloseIcon()
            return r0
    }

    static android.graphics.RectF access$200(android.support.design.chip.Chip r0) {
            android.graphics.RectF r0 = r0.getCloseIconTouchBounds()
            return r0
    }

    static android.graphics.Rect access$300(android.support.design.chip.Chip r0) {
            android.graphics.Rect r0 = r0.getCloseIconTouchBoundsInt()
            return r0
    }

    static android.graphics.Rect access$400() {
            android.graphics.Rect r0 = android.support.design.chip.Chip.EMPTY_BOUNDS
            return r0
    }

    private void applyChipDrawable(android.support.design.chip.ChipDrawable r1) {
            r0 = this;
            r1.setDelegate(r0)
            return
    }

    private float calculateTextOffsetFromStart(android.support.design.chip.ChipDrawable r2) {
            r1 = this;
            float r0 = r1.getChipStartPadding()
            float r2 = r2.calculateChipIconWidth()
            float r0 = r0 + r2
            float r2 = r1.getTextStartPadding()
            float r0 = r0 + r2
            int r2 = android.support.v4.view.ViewCompat.getLayoutDirection(r1)
            if (r2 != 0) goto L15
            return r0
        L15:
            float r2 = -r0
            return r2
    }

    private int[] createCloseIconDrawableState() {
            r4 = this;
            boolean r0 = r4.isEnabled()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            boolean r3 = r4.closeIconFocused
            if (r3 == 0) goto L11
            int r0 = r0 + 1
        L11:
            boolean r3 = r4.closeIconHovered
            if (r3 == 0) goto L17
            int r0 = r0 + 1
        L17:
            boolean r3 = r4.closeIconPressed
            if (r3 == 0) goto L1d
            int r0 = r0 + 1
        L1d:
            boolean r3 = r4.isChecked()
            if (r3 == 0) goto L25
            int r0 = r0 + 1
        L25:
            int[] r0 = new int[r0]
            boolean r3 = r4.isEnabled()
            if (r3 == 0) goto L33
            r3 = 16842910(0x101009e, float:2.3694E-38)
            r0[r1] = r3
            r1 = r2
        L33:
            boolean r2 = r4.closeIconFocused
            if (r2 == 0) goto L3e
            r2 = 16842908(0x101009c, float:2.3693995E-38)
            r0[r1] = r2
            int r1 = r1 + 1
        L3e:
            boolean r2 = r4.closeIconHovered
            if (r2 == 0) goto L49
            r2 = 16843623(0x1010367, float:2.3696E-38)
            r0[r1] = r2
            int r1 = r1 + 1
        L49:
            boolean r2 = r4.closeIconPressed
            if (r2 == 0) goto L54
            r2 = 16842919(0x10100a7, float:2.3694026E-38)
            r0[r1] = r2
            int r1 = r1 + 1
        L54:
            boolean r2 = r4.isChecked()
            if (r2 == 0) goto L5f
            r2 = 16842913(0x10100a1, float:2.369401E-38)
            r0[r1] = r2
        L5f:
            return r0
    }

    private void ensureFocus() {
            r2 = this;
            int r0 = r2.focusedVirtualView
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 != r1) goto La
            r0 = -1
            r2.setFocusedVirtualView(r0)
        La:
            return
    }

    private android.graphics.RectF getCloseIconTouchBounds() {
            r2 = this;
            android.graphics.RectF r0 = r2.rectF
            r0.setEmpty()
            boolean r0 = r2.hasCloseIcon()
            if (r0 == 0) goto L12
            android.support.design.chip.ChipDrawable r0 = r2.chipDrawable
            android.graphics.RectF r1 = r2.rectF
            r0.getCloseIconTouchBounds(r1)
        L12:
            android.graphics.RectF r0 = r2.rectF
            return r0
    }

    private android.graphics.Rect getCloseIconTouchBoundsInt() {
            r5 = this;
            android.graphics.RectF r0 = r5.getCloseIconTouchBounds()
            android.graphics.Rect r1 = r5.rect
            float r2 = r0.left
            int r2 = (int) r2
            float r3 = r0.top
            int r3 = (int) r3
            float r4 = r0.right
            int r4 = (int) r4
            float r0 = r0.bottom
            int r0 = (int) r0
            r1.set(r2, r3, r4, r0)
            android.graphics.Rect r0 = r5.rect
            return r0
    }

    private android.support.design.resources.TextAppearance getTextAppearance() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.support.design.resources.TextAppearance r0 = r0.getTextAppearance()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    private boolean handleAccessibilityExit(android.view.MotionEvent r9) {
            r8 = this;
            java.lang.String r0 = "Unable to send Accessibility Exit event"
            java.lang.String r1 = "Chip"
            int r9 = r9.getAction()
            r2 = 0
            r3 = 10
            if (r9 != r3) goto L5b
            java.lang.Class<android.support.v4.widget.ExploreByTouchHelper> r9 = android.support.v4.widget.ExploreByTouchHelper.class
            java.lang.String r3 = "mHoveredVirtualViewId"
            java.lang.reflect.Field r9 = r9.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r3 = 1
            r9.setAccessible(r3)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            android.support.design.chip.Chip$ChipTouchHelper r4 = r8.touchHelper     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.Object r9 = r9.get(r4)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            int r9 = r9.intValue()     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r9 == r4) goto L5b
            java.lang.Class<android.support.v4.widget.ExploreByTouchHelper> r9 = android.support.v4.widget.ExploreByTouchHelper.class
            java.lang.String r5 = "updateHoveredVirtualView"
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r6[r2] = r7     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.reflect.Method r9 = r9.getDeclaredMethod(r5, r6)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r9.setAccessible(r3)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            android.support.design.chip.Chip$ChipTouchHelper r5 = r8.touchHelper     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r6[r2] = r4     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            r9.invoke(r5, r6)     // Catch: java.lang.NoSuchFieldException -> L48 java.lang.reflect.InvocationTargetException -> L4d java.lang.IllegalAccessException -> L52 java.lang.NoSuchMethodException -> L57
            return r3
        L48:
            r9 = move-exception
            android.util.Log.e(r1, r0, r9)
            goto L5b
        L4d:
            r9 = move-exception
            android.util.Log.e(r1, r0, r9)
            goto L5b
        L52:
            r9 = move-exception
            android.util.Log.e(r1, r0, r9)
            goto L5b
        L57:
            r9 = move-exception
            android.util.Log.e(r1, r0, r9)
        L5b:
            return r2
    }

    private boolean hasCloseIcon() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto Lc
            android.graphics.drawable.Drawable r0 = r0.getCloseIcon()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private void initOutlineProvider() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            android.support.design.chip.Chip$2 r0 = new android.support.design.chip.Chip$2
            r0.<init>(r2)
            r2.setOutlineProvider(r0)
        Le:
            return
    }

    private boolean moveFocus(boolean r4) {
            r3 = this;
            r3.ensureFocus()
            r0 = 1
            r1 = -1
            r2 = 0
            if (r4 == 0) goto L10
            int r4 = r3.focusedVirtualView
            if (r4 != r1) goto L18
            r3.setFocusedVirtualView(r2)
            goto L19
        L10:
            int r4 = r3.focusedVirtualView
            if (r4 != 0) goto L18
            r3.setFocusedVirtualView(r1)
            goto L19
        L18:
            r0 = r2
        L19:
            return r0
    }

    private void setCloseIconFocused(boolean r2) {
            r1 = this;
            boolean r0 = r1.closeIconFocused
            if (r0 == r2) goto L9
            r1.closeIconFocused = r2
            r1.refreshDrawableState()
        L9:
            return
    }

    private void setCloseIconHovered(boolean r2) {
            r1 = this;
            boolean r0 = r1.closeIconHovered
            if (r0 == r2) goto L9
            r1.closeIconHovered = r2
            r1.refreshDrawableState()
        L9:
            return
    }

    private void setCloseIconPressed(boolean r2) {
            r1 = this;
            boolean r0 = r1.closeIconPressed
            if (r0 == r2) goto L9
            r1.closeIconPressed = r2
            r1.refreshDrawableState()
        L9:
            return
    }

    private void setFocusedVirtualView(int r2) {
            r1 = this;
            int r0 = r1.focusedVirtualView
            if (r0 == r2) goto L12
            if (r0 != 0) goto La
            r0 = 0
            r1.setCloseIconFocused(r0)
        La:
            r1.focusedVirtualView = r2
            if (r2 != 0) goto L12
            r2 = 1
            r1.setCloseIconFocused(r2)
        L12:
            return
    }

    private void unapplyChipDrawable(android.support.design.chip.ChipDrawable r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r0 = 0
            r2.setDelegate(r0)
        L6:
            return
    }

    private void updatePaddingInternal() {
            r4 = this;
            java.lang.CharSequence r0 = r4.getText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La2
            android.support.design.chip.ChipDrawable r0 = r4.chipDrawable
            if (r0 != 0) goto L10
            goto La2
        L10:
            float r0 = r0.getChipStartPadding()
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            float r1 = r1.getChipEndPadding()
            float r0 = r0 + r1
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            float r1 = r1.getTextStartPadding()
            float r0 = r0 + r1
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            float r1 = r1.getTextEndPadding()
            float r0 = r0 + r1
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            boolean r1 = r1.isChipIconVisible()
            if (r1 == 0) goto L39
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            android.graphics.drawable.Drawable r1 = r1.getChipIcon()
            if (r1 != 0) goto L4f
        L39:
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            android.graphics.drawable.Drawable r1 = r1.getCheckedIcon()
            if (r1 == 0) goto L64
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            boolean r1 = r1.isCheckedIconVisible()
            if (r1 == 0) goto L64
            boolean r1 = r4.isChecked()
            if (r1 == 0) goto L64
        L4f:
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            float r1 = r1.getIconStartPadding()
            android.support.design.chip.ChipDrawable r2 = r4.chipDrawable
            float r2 = r2.getIconEndPadding()
            float r1 = r1 + r2
            android.support.design.chip.ChipDrawable r2 = r4.chipDrawable
            float r2 = r2.getChipIconSize()
            float r1 = r1 + r2
            float r0 = r0 + r1
        L64:
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            boolean r1 = r1.isCloseIconVisible()
            if (r1 == 0) goto L89
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            android.graphics.drawable.Drawable r1 = r1.getCloseIcon()
            if (r1 == 0) goto L89
            android.support.design.chip.ChipDrawable r1 = r4.chipDrawable
            float r1 = r1.getCloseIconStartPadding()
            android.support.design.chip.ChipDrawable r2 = r4.chipDrawable
            float r2 = r2.getCloseIconEndPadding()
            float r1 = r1 + r2
            android.support.design.chip.ChipDrawable r2 = r4.chipDrawable
            float r2 = r2.getCloseIconSize()
            float r1 = r1 + r2
            float r0 = r0 + r1
        L89:
            int r1 = android.support.v4.view.ViewCompat.getPaddingEnd(r4)
            float r1 = (float) r1
            int r1 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r1 == 0) goto La2
            int r1 = android.support.v4.view.ViewCompat.getPaddingStart(r4)
            int r2 = r4.getPaddingTop()
            int r0 = (int) r0
            int r3 = r4.getPaddingBottom()
            android.support.v4.view.ViewCompat.setPaddingRelative(r4, r1, r2, r0, r3)
        La2:
            return
    }

    private void updateTextPaintDrawState(android.support.design.resources.TextAppearance r4) {
            r3 = this;
            android.text.TextPaint r0 = r3.getPaint()
            android.support.design.chip.ChipDrawable r1 = r3.chipDrawable
            int[] r1 = r1.getState()
            r0.drawableState = r1
            android.content.Context r1 = r3.getContext()
            android.support.v4.content.res.ResourcesCompat$FontCallback r2 = r3.fontCallback
            r4.updateDrawState(r1, r0, r2)
            return
    }

    private void validateAttributes(android.util.AttributeSet r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "http://schemas.android.com/apk/res/android"
            java.lang.String r1 = "background"
            java.lang.String r1 = r4.getAttributeValue(r0, r1)
            if (r1 != 0) goto L87
            java.lang.String r1 = "drawableLeft"
            java.lang.String r1 = r4.getAttributeValue(r0, r1)
            if (r1 != 0) goto L7f
            java.lang.String r1 = "drawableStart"
            java.lang.String r1 = r4.getAttributeValue(r0, r1)
            if (r1 != 0) goto L77
            java.lang.String r1 = "drawableEnd"
            java.lang.String r1 = r4.getAttributeValue(r0, r1)
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            if (r1 != 0) goto L71
            java.lang.String r1 = "drawableRight"
            java.lang.String r1 = r4.getAttributeValue(r0, r1)
            if (r1 != 0) goto L6b
            r1 = 1
            java.lang.String r2 = "singleLine"
            boolean r2 = r4.getAttributeBooleanValue(r0, r2, r1)
            if (r2 == 0) goto L63
            java.lang.String r2 = "lines"
            int r2 = r4.getAttributeIntValue(r0, r2, r1)
            if (r2 != r1) goto L63
            java.lang.String r2 = "minLines"
            int r2 = r4.getAttributeIntValue(r0, r2, r1)
            if (r2 != r1) goto L63
            java.lang.String r2 = "maxLines"
            int r2 = r4.getAttributeIntValue(r0, r2, r1)
            if (r2 != r1) goto L63
            r1 = 8388627(0x800013, float:1.175497E-38)
            java.lang.String r2 = "gravity"
            int r4 = r4.getAttributeIntValue(r0, r2, r1)
            if (r4 == r1) goto L62
            java.lang.String r4 = "Chip"
            java.lang.String r0 = "Chip text must be vertically center and start aligned"
            android.util.Log.w(r4, r0)
        L62:
            return
        L63:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Chip does not support multi-line text"
            r4.<init>(r0)
            throw r4
        L6b:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>(r2)
            throw r4
        L71:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>(r2)
            throw r4
        L77:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Please set start drawable using R.attr#chipIcon."
            r4.<init>(r0)
            throw r4
        L7f:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Please set left drawable using R.attr#chipIcon."
            r4.<init>(r0)
            throw r4
        L87:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background; Chip manages its own background drawable."
            r4.<init>(r0)
            throw r4
    }

    @Override
    protected boolean dispatchHoverEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.handleAccessibilityExit(r2)
            if (r0 != 0) goto L17
            android.support.design.chip.Chip$ChipTouchHelper r0 = r1.touchHelper
            boolean r0 = r0.dispatchHoverEvent(r2)
            if (r0 != 0) goto L17
            boolean r2 = super.dispatchHoverEvent(r2)
            if (r2 == 0) goto L15
            goto L17
        L15:
            r2 = 0
            goto L18
        L17:
            r2 = 1
        L18:
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.support.design.chip.Chip$ChipTouchHelper r0 = r1.touchHelper
            boolean r0 = r0.dispatchKeyEvent(r2)
            if (r0 != 0) goto L11
            boolean r2 = super.dispatchKeyEvent(r2)
            if (r2 == 0) goto Lf
            goto L11
        Lf:
            r2 = 0
            goto L12
        L11:
            r2 = 1
        L12:
            return r2
    }

    @Override
    protected void drawableStateChanged() {
            r2 = this;
            super.drawableStateChanged()
            android.support.design.chip.ChipDrawable r0 = r2.chipDrawable
            if (r0 == 0) goto L18
            boolean r0 = r0.isCloseIconStateful()
            if (r0 == 0) goto L18
            android.support.design.chip.ChipDrawable r0 = r2.chipDrawable
            int[] r1 = r2.createCloseIconDrawableState()
            boolean r0 = r0.setCloseIconState(r1)
            goto L19
        L18:
            r0 = 0
        L19:
            if (r0 == 0) goto L1e
            r2.invalidate()
        L1e:
            return
    }

    public android.graphics.drawable.Drawable getCheckedIcon() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getCheckedIcon()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getChipBackgroundColor() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getChipBackgroundColor()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipCornerRadius() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipCornerRadius()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.graphics.drawable.Drawable getChipDrawable() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            return r0
    }

    public float getChipEndPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipEndPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.graphics.drawable.Drawable getChipIcon() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getChipIcon()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipIconSize() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipIconSize()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getChipIconTint() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getChipIconTint()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipMinHeight() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipMinHeight()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipStartPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipStartPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getChipStrokeColor() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getChipStrokeColor()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipStrokeWidth() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getChipStrokeWidth()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @java.lang.Deprecated
    public java.lang.CharSequence getChipText() {
            r1 = this;
            java.lang.CharSequence r0 = r1.getText()
            return r0
    }

    public android.graphics.drawable.Drawable getCloseIcon() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getCloseIcon()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public java.lang.CharSequence getCloseIconContentDescription() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.getCloseIconContentDescription()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getCloseIconEndPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getCloseIconEndPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getCloseIconSize() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getCloseIconSize()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getCloseIconStartPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getCloseIconStartPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getCloseIconTint() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getCloseIconTint()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.text.TextUtils.TruncateAt getEllipsize() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.text.TextUtils$TruncateAt r0 = r0.getEllipsize()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public void getFocusedRect(android.graphics.Rect r2) {
            r1 = this;
            int r0 = r1.focusedVirtualView
            if (r0 != 0) goto Lc
            android.graphics.Rect r0 = r1.getCloseIconTouchBoundsInt()
            r2.set(r0)
            goto Lf
        Lc:
            super.getFocusedRect(r2)
        Lf:
            return
    }

    public android.support.design.animation.MotionSpec getHideMotionSpec() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.support.design.animation.MotionSpec r0 = r0.getHideMotionSpec()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getIconEndPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getIconEndPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getIconStartPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getIconStartPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getRippleColor() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getRippleColor()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.support.design.animation.MotionSpec getShowMotionSpec() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            android.support.design.animation.MotionSpec r0 = r0.getShowMotionSpec()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public java.lang.CharSequence getText() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.getText()
            goto Lb
        L9:
            java.lang.String r0 = ""
        Lb:
            return r0
    }

    public float getTextEndPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getTextEndPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getTextStartPadding() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L9
            float r0 = r0.getTextStartPadding()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public boolean isCheckable() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto Lc
            boolean r0 = r0.isCheckable()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @java.lang.Deprecated
    public boolean isCheckedIconEnabled() {
            r1 = this;
            boolean r0 = r1.isCheckedIconVisible()
            return r0
    }

    public boolean isCheckedIconVisible() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto Lc
            boolean r0 = r0.isCheckedIconVisible()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @java.lang.Deprecated
    public boolean isChipIconEnabled() {
            r1 = this;
            boolean r0 = r1.isChipIconVisible()
            return r0
    }

    public boolean isChipIconVisible() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto Lc
            boolean r0 = r0.isChipIconVisible()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @java.lang.Deprecated
    public boolean isCloseIconEnabled() {
            r1 = this;
            boolean r0 = r1.isCloseIconVisible()
            return r0
    }

    public boolean isCloseIconVisible() {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto Lc
            boolean r0 = r0.isCloseIconVisible()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void onChipDrawableSizeChange() {
            r2 = this;
            r2.updatePaddingInternal()
            r2.requestLayout()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            r2.invalidateOutline()
        Lf:
            return
    }

    @Override
    protected int[] onCreateDrawableState(int r2) {
            r1 = this;
            int r2 = r2 + 1
            int[] r2 = super.onCreateDrawableState(r2)
            boolean r0 = r1.isChecked()
            if (r0 == 0) goto L11
            int[] r0 = android.support.design.chip.Chip.SELECTED_STATE
            mergeDrawableStates(r2, r0)
        L11:
            return r2
    }

    @Override
    protected void onDraw(android.graphics.Canvas r4) {
            r3 = this;
            java.lang.CharSequence r0 = r3.getText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            android.support.design.chip.ChipDrawable r0 = r3.chipDrawable
            if (r0 == 0) goto L2a
            boolean r0 = r0.shouldDrawText()
            if (r0 == 0) goto L15
            goto L2a
        L15:
            int r0 = r4.save()
            android.support.design.chip.ChipDrawable r1 = r3.chipDrawable
            float r1 = r3.calculateTextOffsetFromStart(r1)
            r2 = 0
            r4.translate(r1, r2)
            super.onDraw(r4)
            r4.restoreToCount(r0)
            return
        L2a:
            super.onDraw(r4)
            return
    }

    @Override
    protected void onFocusChanged(boolean r2, int r3, android.graphics.Rect r4) {
            r1 = this;
            if (r2 == 0) goto L7
            r0 = -1
            r1.setFocusedVirtualView(r0)
            goto Lc
        L7:
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.setFocusedVirtualView(r0)
        Lc:
            r1.invalidate()
            super.onFocusChanged(r2, r3, r4)
            android.support.design.chip.Chip$ChipTouchHelper r0 = r1.touchHelper
            r0.onFocusChanged(r2, r3, r4)
            return
    }

    @Override
    public boolean onHoverEvent(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getActionMasked()
            r1 = 7
            if (r0 == r1) goto L11
            r1 = 10
            if (r0 == r1) goto Lc
            goto L24
        Lc:
            r0 = 0
            r3.setCloseIconHovered(r0)
            goto L24
        L11:
            android.graphics.RectF r0 = r3.getCloseIconTouchBounds()
            float r1 = r4.getX()
            float r2 = r4.getY()
            boolean r0 = r0.contains(r1, r2)
            r3.setCloseIconHovered(r0)
        L24:
            boolean r4 = super.onHoverEvent(r4)
            return r4
    }

    @Override
    public boolean onKeyDown(int r7, android.view.KeyEvent r8) {
            r6 = this;
            int r0 = r8.getKeyCode()
            r1 = 61
            r2 = 0
            r3 = 1
            if (r0 == r1) goto L41
            r1 = 66
            if (r0 == r1) goto L31
            switch(r0) {
                case 21: goto L22;
                case 22: goto L12;
                case 23: goto L31;
                default: goto L11;
            }
        L11:
            goto L6d
        L12:
            boolean r0 = r8.hasNoModifiers()
            if (r0 == 0) goto L6d
            boolean r0 = android.support.design.internal.ViewUtils.isLayoutRtl(r6)
            r0 = r0 ^ r3
            boolean r2 = r6.moveFocus(r0)
            goto L6d
        L22:
            boolean r0 = r8.hasNoModifiers()
            if (r0 == 0) goto L6d
            boolean r0 = android.support.design.internal.ViewUtils.isLayoutRtl(r6)
            boolean r2 = r6.moveFocus(r0)
            goto L6d
        L31:
            int r0 = r6.focusedVirtualView
            r1 = -1
            if (r0 == r1) goto L3d
            if (r0 == 0) goto L39
            goto L6d
        L39:
            r6.performCloseIconClick()
            return r3
        L3d:
            r6.performClick()
            return r3
        L41:
            boolean r0 = r8.hasNoModifiers()
            if (r0 == 0) goto L49
            r0 = 2
            goto L52
        L49:
            boolean r0 = r8.hasModifiers(r3)
            if (r0 == 0) goto L51
            r0 = r3
            goto L52
        L51:
            r0 = r2
        L52:
            if (r0 == 0) goto L6d
            android.view.ViewParent r1 = r6.getParent()
            r4 = r6
        L59:
            android.view.View r4 = r4.focusSearch(r0)
            if (r4 == 0) goto L67
            if (r4 == r6) goto L67
            android.view.ViewParent r5 = r4.getParent()
            if (r5 == r1) goto L59
        L67:
            if (r4 == 0) goto L6d
            r4.requestFocus()
            return r3
        L6d:
            if (r2 == 0) goto L73
            r6.invalidate()
            return r3
        L73:
            boolean r7 = super.onKeyDown(r7, r8)
            return r7
    }

    @Override
    public android.view.PointerIcon onResolvePointerIcon(android.view.MotionEvent r2, int r3) {
            r1 = this;
            android.graphics.RectF r3 = r1.getCloseIconTouchBounds()
            float r0 = r2.getX()
            float r2 = r2.getY()
            boolean r2 = r3.contains(r0, r2)
            if (r2 == 0) goto L23
            boolean r2 = r1.isEnabled()
            if (r2 == 0) goto L23
            android.content.Context r2 = r1.getContext()
            r3 = 1002(0x3ea, float:1.404E-42)
            android.view.PointerIcon r2 = android.view.PointerIcon.getSystemIcon(r2, r3)
            return r2
        L23:
            r2 = 0
            return r2
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r6) {
            r5 = this;
            int r0 = r6.getActionMasked()
            android.graphics.RectF r1 = r5.getCloseIconTouchBounds()
            float r2 = r6.getX()
            float r3 = r6.getY()
            boolean r1 = r1.contains(r2, r3)
            r2 = 0
            r3 = 1
            if (r0 == 0) goto L39
            if (r0 == r3) goto L2b
            r4 = 2
            if (r0 == r4) goto L21
            r1 = 3
            if (r0 == r1) goto L34
            goto L40
        L21:
            boolean r0 = r5.closeIconPressed
            if (r0 == 0) goto L40
            if (r1 != 0) goto L3e
            r5.setCloseIconPressed(r2)
            goto L3e
        L2b:
            boolean r0 = r5.closeIconPressed
            if (r0 == 0) goto L34
            r5.performCloseIconClick()
            r0 = r3
            goto L35
        L34:
            r0 = r2
        L35:
            r5.setCloseIconPressed(r2)
            goto L41
        L39:
            if (r1 == 0) goto L40
            r5.setCloseIconPressed(r3)
        L3e:
            r0 = r3
            goto L41
        L40:
            r0 = r2
        L41:
            if (r0 != 0) goto L49
            boolean r6 = super.onTouchEvent(r6)
            if (r6 == 0) goto L4a
        L49:
            r2 = r3
        L4a:
            return r2
    }

    public boolean performCloseIconClick() {
            r4 = this;
            r0 = 0
            r4.playSoundEffect(r0)
            android.view.View$OnClickListener r1 = r4.onCloseIconClickListener
            r2 = 1
            if (r1 == 0) goto Le
            r1.onClick(r4)
            r1 = r2
            goto Lf
        Le:
            r1 = r0
        Lf:
            android.support.design.chip.Chip$ChipTouchHelper r3 = r4.touchHelper
            r3.sendEventForVirtualView(r0, r2)
            return r1
    }

    @Override
    public void setBackground(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r2 == r0) goto L11
            android.graphics.drawable.RippleDrawable r0 = r1.ripple
            if (r2 != r0) goto L9
            goto L11
        L9:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
        L11:
            super.setBackground(r2)
            return
    }

    @Override
    public void setBackgroundColor(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background color; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r2 == r0) goto L11
            android.graphics.drawable.RippleDrawable r0 = r1.ripple
            if (r2 != r0) goto L9
            goto L11
        L9:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background drawable; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
        L11:
            super.setBackgroundDrawable(r2)
            return
    }

    @Override
    public void setBackgroundResource(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background resource; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background tint list; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Do not set the background tint mode; Chip manages its own background drawable."
            r2.<init>(r0)
            throw r2
    }

    public void setCheckable(boolean r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckable(r2)
        L7:
            return
    }

    public void setCheckableResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckableResource(r2)
        L7:
            return
    }

    @Override
    public void setChecked(boolean r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 != 0) goto L7
            r1.deferredCheckedValue = r2
            goto L1d
        L7:
            boolean r0 = r0.isCheckable()
            if (r0 == 0) goto L1d
            boolean r0 = r1.isChecked()
            super.setChecked(r2)
            if (r0 == r2) goto L1d
            android.widget.CompoundButton$OnCheckedChangeListener r0 = r1.onCheckedChangeListenerInternal
            if (r0 == 0) goto L1d
            r0.onCheckedChanged(r1, r2)
        L1d:
            return
    }

    public void setCheckedIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckedIcon(r2)
        L7:
            return
    }

    @java.lang.Deprecated
    public void setCheckedIconEnabled(boolean r1) {
            r0 = this;
            r0.setCheckedIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setCheckedIconEnabledResource(int r1) {
            r0 = this;
            r0.setCheckedIconVisible(r1)
            return
    }

    public void setCheckedIconResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckedIconResource(r2)
        L7:
            return
    }

    public void setCheckedIconVisible(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckedIconVisible(r2)
        L7:
            return
    }

    public void setCheckedIconVisible(boolean r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCheckedIconVisible(r2)
        L7:
            return
    }

    public void setChipBackgroundColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipBackgroundColor(r2)
        L7:
            return
    }

    public void setChipBackgroundColorResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipBackgroundColorResource(r2)
        L7:
            return
    }

    public void setChipCornerRadius(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipCornerRadius(r2)
        L7:
            return
    }

    public void setChipCornerRadiusResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipCornerRadiusResource(r2)
        L7:
            return
    }

    public void setChipDrawable(android.support.design.chip.ChipDrawable r4) {
            r3 = this;
            android.support.design.chip.ChipDrawable r0 = r3.chipDrawable
            if (r0 == r4) goto L3b
            r3.unapplyChipDrawable(r0)
            r3.chipDrawable = r4
            r3.applyChipDrawable(r4)
            boolean r4 = android.support.design.ripple.RippleUtils.USE_FRAMEWORK_RIPPLE
            if (r4 == 0) goto L30
            android.graphics.drawable.RippleDrawable r4 = new android.graphics.drawable.RippleDrawable
            android.support.design.chip.ChipDrawable r0 = r3.chipDrawable
            android.content.res.ColorStateList r0 = r0.getRippleColor()
            android.content.res.ColorStateList r0 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r0)
            android.support.design.chip.ChipDrawable r1 = r3.chipDrawable
            r2 = 0
            r4.<init>(r0, r1, r2)
            r3.ripple = r4
            android.support.design.chip.ChipDrawable r4 = r3.chipDrawable
            r0 = 0
            r4.setUseCompatRipple(r0)
            android.graphics.drawable.RippleDrawable r4 = r3.ripple
            android.support.v4.view.ViewCompat.setBackground(r3, r4)
            goto L3b
        L30:
            android.support.design.chip.ChipDrawable r4 = r3.chipDrawable
            r0 = 1
            r4.setUseCompatRipple(r0)
            android.support.design.chip.ChipDrawable r4 = r3.chipDrawable
            android.support.v4.view.ViewCompat.setBackground(r3, r4)
        L3b:
            return
    }

    public void setChipEndPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipEndPadding(r2)
        L7:
            return
    }

    public void setChipEndPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipEndPaddingResource(r2)
        L7:
            return
    }

    public void setChipIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIcon(r2)
        L7:
            return
    }

    @java.lang.Deprecated
    public void setChipIconEnabled(boolean r1) {
            r0 = this;
            r0.setChipIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setChipIconEnabledResource(int r1) {
            r0 = this;
            r0.setChipIconVisible(r1)
            return
    }

    public void setChipIconResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconResource(r2)
        L7:
            return
    }

    public void setChipIconSize(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconSize(r2)
        L7:
            return
    }

    public void setChipIconSizeResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconSizeResource(r2)
        L7:
            return
    }

    public void setChipIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconTint(r2)
        L7:
            return
    }

    public void setChipIconTintResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconTintResource(r2)
        L7:
            return
    }

    public void setChipIconVisible(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconVisible(r2)
        L7:
            return
    }

    public void setChipIconVisible(boolean r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipIconVisible(r2)
        L7:
            return
    }

    public void setChipMinHeight(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipMinHeight(r2)
        L7:
            return
    }

    public void setChipMinHeightResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipMinHeightResource(r2)
        L7:
            return
    }

    public void setChipStartPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStartPadding(r2)
        L7:
            return
    }

    public void setChipStartPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStartPaddingResource(r2)
        L7:
            return
    }

    public void setChipStrokeColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStrokeColor(r2)
        L7:
            return
    }

    public void setChipStrokeColorResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStrokeColorResource(r2)
        L7:
            return
    }

    public void setChipStrokeWidth(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStrokeWidth(r2)
        L7:
            return
    }

    public void setChipStrokeWidthResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setChipStrokeWidthResource(r2)
        L7:
            return
    }

    @java.lang.Deprecated
    public void setChipText(java.lang.CharSequence r1) {
            r0 = this;
            r0.setText(r1)
            return
    }

    @java.lang.Deprecated
    public void setChipTextResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r2 = r0.getString(r2)
            r1.setText(r2)
            return
    }

    public void setCloseIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIcon(r2)
        L7:
            return
    }

    public void setCloseIconContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconContentDescription(r2)
        L7:
            return
    }

    @java.lang.Deprecated
    public void setCloseIconEnabled(boolean r1) {
            r0 = this;
            r0.setCloseIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setCloseIconEnabledResource(int r1) {
            r0 = this;
            r0.setCloseIconVisible(r1)
            return
    }

    public void setCloseIconEndPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconEndPadding(r2)
        L7:
            return
    }

    public void setCloseIconEndPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconEndPaddingResource(r2)
        L7:
            return
    }

    public void setCloseIconResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconResource(r2)
        L7:
            return
    }

    public void setCloseIconSize(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconSize(r2)
        L7:
            return
    }

    public void setCloseIconSizeResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconSizeResource(r2)
        L7:
            return
    }

    public void setCloseIconStartPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconStartPadding(r2)
        L7:
            return
    }

    public void setCloseIconStartPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconStartPaddingResource(r2)
        L7:
            return
    }

    public void setCloseIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconTint(r2)
        L7:
            return
    }

    public void setCloseIconTintResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconTintResource(r2)
        L7:
            return
    }

    public void setCloseIconVisible(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconVisible(r2)
        L7:
            return
    }

    public void setCloseIconVisible(boolean r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setCloseIconVisible(r2)
        L7:
            return
    }

    @Override
    public void setCompoundDrawables(android.graphics.drawable.Drawable r1, android.graphics.drawable.Drawable r2, android.graphics.drawable.Drawable r3, android.graphics.drawable.Drawable r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawables(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set start drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setCompoundDrawablesRelative(android.graphics.drawable.Drawable r1, android.graphics.drawable.Drawable r2, android.graphics.drawable.Drawable r3, android.graphics.drawable.Drawable r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawablesRelative(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set start drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setCompoundDrawablesRelativeWithIntrinsicBounds(int r1, int r2, int r3, int r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawablesRelativeWithIntrinsicBounds(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set start drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setCompoundDrawablesRelativeWithIntrinsicBounds(android.graphics.drawable.Drawable r1, android.graphics.drawable.Drawable r2, android.graphics.drawable.Drawable r3, android.graphics.drawable.Drawable r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawablesRelativeWithIntrinsicBounds(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set start drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setCompoundDrawablesWithIntrinsicBounds(int r1, int r2, int r3, int r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawablesWithIntrinsicBounds(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set end drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set start drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setCompoundDrawablesWithIntrinsicBounds(android.graphics.drawable.Drawable r1, android.graphics.drawable.Drawable r2, android.graphics.drawable.Drawable r3, android.graphics.drawable.Drawable r4) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 != 0) goto L8
            super.setCompoundDrawablesWithIntrinsicBounds(r1, r2, r3, r4)
            return
        L8:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set right drawable using R.attr#closeIcon."
            r1.<init>(r2)
            throw r1
        L10:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Please set left drawable using R.attr#chipIcon."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void setEllipsize(android.text.TextUtils.TruncateAt r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 != 0) goto L5
            return
        L5:
            android.text.TextUtils$TruncateAt r0 = android.text.TextUtils.TruncateAt.MARQUEE
            if (r2 == r0) goto L14
            super.setEllipsize(r2)
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L13
            r0.setEllipsize(r2)
        L13:
            return
        L14:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Text within a chip are not allowed to scroll."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setGravity(int r2) {
            r1 = this;
            r0 = 8388627(0x800013, float:1.175497E-38)
            if (r2 == r0) goto Ld
            java.lang.String r2 = "Chip"
            java.lang.String r0 = "Chip text must be vertically center and start aligned"
            android.util.Log.w(r2, r0)
            goto L10
        Ld:
            super.setGravity(r2)
        L10:
            return
    }

    public void setHideMotionSpec(android.support.design.animation.MotionSpec r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setHideMotionSpec(r2)
        L7:
            return
    }

    public void setHideMotionSpecResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setHideMotionSpecResource(r2)
        L7:
            return
    }

    public void setIconEndPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setIconEndPadding(r2)
        L7:
            return
    }

    public void setIconEndPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setIconEndPaddingResource(r2)
        L7:
            return
    }

    public void setIconStartPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setIconStartPadding(r2)
        L7:
            return
    }

    public void setIconStartPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setIconStartPaddingResource(r2)
        L7:
            return
    }

    @Override
    public void setLines(int r2) {
            r1 = this;
            r0 = 1
            if (r2 > r0) goto L7
            super.setLines(r2)
            return
        L7:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Chip does not support multi-line text"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setMaxLines(int r2) {
            r1 = this;
            r0 = 1
            if (r2 > r0) goto L7
            super.setMaxLines(r2)
            return
        L7:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Chip does not support multi-line text"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setMaxWidth(int r2) {
            r1 = this;
            super.setMaxWidth(r2)
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto La
            r0.setMaxWidth(r2)
        La:
            return
    }

    @Override
    public void setMinLines(int r2) {
            r1 = this;
            r0 = 1
            if (r2 > r0) goto L7
            super.setMinLines(r2)
            return
        L7:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Chip does not support multi-line text"
            r2.<init>(r0)
            throw r2
    }

    void setOnCheckedChangeListenerInternal(android.widget.CompoundButton.OnCheckedChangeListener r1) {
            r0 = this;
            r0.onCheckedChangeListenerInternal = r1
            return
    }

    public void setOnCloseIconClickListener(android.view.View.OnClickListener r1) {
            r0 = this;
            r0.onCloseIconClickListener = r1
            return
    }

    public void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setRippleColor(r2)
        L7:
            return
    }

    public void setRippleColorResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setRippleColorResource(r2)
        L7:
            return
    }

    public void setShowMotionSpec(android.support.design.animation.MotionSpec r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setShowMotionSpec(r2)
        L7:
            return
    }

    public void setShowMotionSpecResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setShowMotionSpecResource(r2)
        L7:
            return
    }

    @Override
    public void setSingleLine(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L6
            super.setSingleLine(r2)
            return
        L6:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Chip does not support multi-line text"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void setText(java.lang.CharSequence r3, android.widget.TextView.BufferType r4) {
            r2 = this;
            android.support.design.chip.ChipDrawable r0 = r2.chipDrawable
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 != 0) goto L9
            java.lang.String r3 = ""
        L9:
            android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.getInstance()
            java.lang.CharSequence r0 = r0.unicodeWrap(r3)
            android.support.design.chip.ChipDrawable r1 = r2.chipDrawable
            boolean r1 = r1.shouldDrawText()
            if (r1 == 0) goto L1a
            r0 = 0
        L1a:
            super.setText(r0, r4)
            android.support.design.chip.ChipDrawable r4 = r2.chipDrawable
            if (r4 == 0) goto L24
            r4.setText(r3)
        L24:
            return
    }

    @Override
    public void setTextAppearance(int r4) {
            r3 = this;
            super.setTextAppearance(r4)
            android.support.design.chip.ChipDrawable r0 = r3.chipDrawable
            if (r0 == 0) goto La
            r0.setTextAppearanceResource(r4)
        La:
            android.support.design.resources.TextAppearance r4 = r3.getTextAppearance()
            if (r4 == 0) goto L28
            android.support.design.resources.TextAppearance r4 = r3.getTextAppearance()
            android.content.Context r0 = r3.getContext()
            android.text.TextPaint r1 = r3.getPaint()
            android.support.v4.content.res.ResourcesCompat$FontCallback r2 = r3.fontCallback
            r4.updateMeasureState(r0, r1, r2)
            android.support.design.resources.TextAppearance r4 = r3.getTextAppearance()
            r3.updateTextPaintDrawState(r4)
        L28:
            return
    }

    @Override
    public void setTextAppearance(android.content.Context r3, int r4) {
            r2 = this;
            super.setTextAppearance(r3, r4)
            android.support.design.chip.ChipDrawable r0 = r2.chipDrawable
            if (r0 == 0) goto La
            r0.setTextAppearanceResource(r4)
        La:
            android.support.design.resources.TextAppearance r4 = r2.getTextAppearance()
            if (r4 == 0) goto L24
            android.support.design.resources.TextAppearance r4 = r2.getTextAppearance()
            android.text.TextPaint r0 = r2.getPaint()
            android.support.v4.content.res.ResourcesCompat$FontCallback r1 = r2.fontCallback
            r4.updateMeasureState(r3, r0, r1)
            android.support.design.resources.TextAppearance r3 = r2.getTextAppearance()
            r2.updateTextPaintDrawState(r3)
        L24:
            return
    }

    public void setTextAppearance(android.support.design.resources.TextAppearance r5) {
            r4 = this;
            android.support.design.chip.ChipDrawable r0 = r4.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextAppearance(r5)
        L7:
            android.support.design.resources.TextAppearance r0 = r4.getTextAppearance()
            if (r0 == 0) goto L21
            android.support.design.resources.TextAppearance r0 = r4.getTextAppearance()
            android.content.Context r1 = r4.getContext()
            android.text.TextPaint r2 = r4.getPaint()
            android.support.v4.content.res.ResourcesCompat$FontCallback r3 = r4.fontCallback
            r0.updateMeasureState(r1, r2, r3)
            r4.updateTextPaintDrawState(r5)
        L21:
            return
    }

    public void setTextAppearanceResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextAppearanceResource(r2)
        L7:
            android.content.Context r0 = r1.getContext()
            r1.setTextAppearance(r0, r2)
            return
    }

    public void setTextEndPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextEndPadding(r2)
        L7:
            return
    }

    public void setTextEndPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextEndPaddingResource(r2)
        L7:
            return
    }

    public void setTextStartPadding(float r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextStartPadding(r2)
        L7:
            return
    }

    public void setTextStartPaddingResource(int r2) {
            r1 = this;
            android.support.design.chip.ChipDrawable r0 = r1.chipDrawable
            if (r0 == 0) goto L7
            r0.setTextStartPaddingResource(r2)
        L7:
            return
    }
}
