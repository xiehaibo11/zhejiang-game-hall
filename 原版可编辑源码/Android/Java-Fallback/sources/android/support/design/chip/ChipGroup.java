package android.support.design.chip;

public class ChipGroup extends android.support.design.internal.FlowLayout {
    private int checkedId;
    private final android.support.design.chip.ChipGroup.CheckedStateTracker checkedStateTracker;
    private int chipSpacingHorizontal;
    private int chipSpacingVertical;
    private android.support.design.chip.ChipGroup.OnCheckedChangeListener onCheckedChangeListener;
    private android.support.design.chip.ChipGroup.PassThroughHierarchyChangeListener passThroughListener;
    private boolean protectFromCheckedChange;
    private boolean singleSelection;

    static class 1 {
    }

    private class CheckedStateTracker implements android.widget.CompoundButton.OnCheckedChangeListener {
        final android.support.design.chip.ChipGroup this$0;

        private CheckedStateTracker(android.support.design.chip.ChipGroup r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        CheckedStateTracker(android.support.design.chip.ChipGroup r1, android.support.design.chip.ChipGroup.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onCheckedChanged(android.widget.CompoundButton r3, boolean r4) {
                r2 = this;
                android.support.design.chip.ChipGroup r0 = r2.this$0
                boolean r0 = android.support.design.chip.ChipGroup.access$300(r0)
                if (r0 == 0) goto L9
                return
            L9:
                int r3 = r3.getId()
                r0 = -1
                if (r4 == 0) goto L38
                android.support.design.chip.ChipGroup r4 = r2.this$0
                int r4 = android.support.design.chip.ChipGroup.access$400(r4)
                if (r4 == r0) goto L32
                android.support.design.chip.ChipGroup r4 = r2.this$0
                int r4 = android.support.design.chip.ChipGroup.access$400(r4)
                if (r4 == r3) goto L32
                android.support.design.chip.ChipGroup r4 = r2.this$0
                boolean r4 = android.support.design.chip.ChipGroup.access$500(r4)
                if (r4 == 0) goto L32
                android.support.design.chip.ChipGroup r4 = r2.this$0
                int r0 = android.support.design.chip.ChipGroup.access$400(r4)
                r1 = 0
                android.support.design.chip.ChipGroup.access$600(r4, r0, r1)
            L32:
                android.support.design.chip.ChipGroup r4 = r2.this$0
                android.support.design.chip.ChipGroup.access$700(r4, r3)
                goto L45
            L38:
                android.support.design.chip.ChipGroup r4 = r2.this$0
                int r4 = android.support.design.chip.ChipGroup.access$400(r4)
                if (r4 != r3) goto L45
                android.support.design.chip.ChipGroup r3 = r2.this$0
                android.support.design.chip.ChipGroup.access$700(r3, r0)
            L45:
                return
        }
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public interface OnCheckedChangeListener {
        void onCheckedChanged(android.support.design.chip.ChipGroup r1, int r2);
    }

    private class PassThroughHierarchyChangeListener implements android.view.ViewGroup.OnHierarchyChangeListener {
        private android.view.ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener;
        final android.support.design.chip.ChipGroup this$0;

        private PassThroughHierarchyChangeListener(android.support.design.chip.ChipGroup r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        PassThroughHierarchyChangeListener(android.support.design.chip.ChipGroup r1, android.support.design.chip.ChipGroup.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        static android.view.ViewGroup.OnHierarchyChangeListener access$202(android.support.design.chip.ChipGroup.PassThroughHierarchyChangeListener r0, android.view.ViewGroup.OnHierarchyChangeListener r1) {
                r0.onHierarchyChangeListener = r1
                return r1
        }

        @Override
        public void onChildViewAdded(android.view.View r3, android.view.View r4) {
                r2 = this;
                android.support.design.chip.ChipGroup r0 = r2.this$0
                if (r3 != r0) goto L2d
                boolean r0 = r4 instanceof android.support.design.chip.Chip
                if (r0 == 0) goto L2d
                int r0 = r4.getId()
                r1 = -1
                if (r0 != r1) goto L21
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 17
                if (r0 < r1) goto L1a
                int r0 = android.view.View.generateViewId()
                goto L1e
            L1a:
                int r0 = r4.hashCode()
            L1e:
                r4.setId(r0)
            L21:
                r0 = r4
                android.support.design.chip.Chip r0 = (android.support.design.chip.Chip) r0
                android.support.design.chip.ChipGroup r1 = r2.this$0
                android.support.design.chip.ChipGroup$CheckedStateTracker r1 = android.support.design.chip.ChipGroup.access$800(r1)
                r0.setOnCheckedChangeListenerInternal(r1)
            L2d:
                android.view.ViewGroup$OnHierarchyChangeListener r0 = r2.onHierarchyChangeListener
                if (r0 == 0) goto L34
                r0.onChildViewAdded(r3, r4)
            L34:
                return
        }

        @Override
        public void onChildViewRemoved(android.view.View r3, android.view.View r4) {
                r2 = this;
                android.support.design.chip.ChipGroup r0 = r2.this$0
                if (r3 != r0) goto Lf
                boolean r0 = r4 instanceof android.support.design.chip.Chip
                if (r0 == 0) goto Lf
                r0 = r4
                android.support.design.chip.Chip r0 = (android.support.design.chip.Chip) r0
                r1 = 0
                r0.setOnCheckedChangeListenerInternal(r1)
            Lf:
                android.view.ViewGroup$OnHierarchyChangeListener r0 = r2.onHierarchyChangeListener
                if (r0 == 0) goto L16
                r0.onChildViewRemoved(r3, r4)
            L16:
                return
        }
    }

    public ChipGroup(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ChipGroup(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.chipGroupStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public ChipGroup(android.content.Context r9, android.util.AttributeSet r10, int r11) {
            r8 = this;
            r8.<init>(r9, r10, r11)
            android.support.design.chip.ChipGroup$CheckedStateTracker r0 = new android.support.design.chip.ChipGroup$CheckedStateTracker
            r1 = 0
            r0.<init>(r8, r1)
            r8.checkedStateTracker = r0
            android.support.design.chip.ChipGroup$PassThroughHierarchyChangeListener r0 = new android.support.design.chip.ChipGroup$PassThroughHierarchyChangeListener
            r0.<init>(r8, r1)
            r8.passThroughListener = r0
            r0 = -1
            r8.checkedId = r0
            r1 = 0
            r8.protectFromCheckedChange = r1
            int[] r4 = android.support.design.R.styleable.ChipGroup
            int r6 = android.support.design.R.style.Widget_MaterialComponents_ChipGroup
            int[] r7 = new int[r1]
            r2 = r9
            r3 = r10
            r5 = r11
            android.content.res.TypedArray r9 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r2, r3, r4, r5, r6, r7)
            int r10 = android.support.design.R.styleable.ChipGroup_chipSpacing
            int r10 = r9.getDimensionPixelOffset(r10, r1)
            int r11 = android.support.design.R.styleable.ChipGroup_chipSpacingHorizontal
            int r11 = r9.getDimensionPixelOffset(r11, r10)
            r8.setChipSpacingHorizontal(r11)
            int r11 = android.support.design.R.styleable.ChipGroup_chipSpacingVertical
            int r10 = r9.getDimensionPixelOffset(r11, r10)
            r8.setChipSpacingVertical(r10)
            int r10 = android.support.design.R.styleable.ChipGroup_singleLine
            boolean r10 = r9.getBoolean(r10, r1)
            r8.setSingleLine(r10)
            int r10 = android.support.design.R.styleable.ChipGroup_singleSelection
            boolean r10 = r9.getBoolean(r10, r1)
            r8.setSingleSelection(r10)
            int r10 = android.support.design.R.styleable.ChipGroup_checkedChip
            int r10 = r9.getResourceId(r10, r0)
            if (r10 == r0) goto L59
            r8.checkedId = r10
        L59:
            r9.recycle()
            android.support.design.chip.ChipGroup$PassThroughHierarchyChangeListener r9 = r8.passThroughListener
            super.setOnHierarchyChangeListener(r9)
            return
    }

    static boolean access$300(android.support.design.chip.ChipGroup r0) {
            boolean r0 = r0.protectFromCheckedChange
            return r0
    }

    static int access$400(android.support.design.chip.ChipGroup r0) {
            int r0 = r0.checkedId
            return r0
    }

    static boolean access$500(android.support.design.chip.ChipGroup r0) {
            boolean r0 = r0.singleSelection
            return r0
    }

    static void access$600(android.support.design.chip.ChipGroup r0, int r1, boolean r2) {
            r0.setCheckedStateForView(r1, r2)
            return
    }

    static void access$700(android.support.design.chip.ChipGroup r0, int r1) {
            r0.setCheckedId(r1)
            return
    }

    static android.support.design.chip.ChipGroup.CheckedStateTracker access$800(android.support.design.chip.ChipGroup r0) {
            android.support.design.chip.ChipGroup$CheckedStateTracker r0 = r0.checkedStateTracker
            return r0
    }

    private void setCheckedId(int r3) {
            r2 = this;
            r2.checkedId = r3
            android.support.design.chip.ChipGroup$OnCheckedChangeListener r0 = r2.onCheckedChangeListener
            if (r0 == 0) goto Ld
            boolean r1 = r2.singleSelection
            if (r1 == 0) goto Ld
            r0.onCheckedChanged(r2, r3)
        Ld:
            return
    }

    private void setCheckedStateForView(int r2, boolean r3) {
            r1 = this;
            android.view.View r2 = r1.findViewById(r2)
            boolean r0 = r2 instanceof android.support.design.chip.Chip
            if (r0 == 0) goto L13
            r0 = 1
            r1.protectFromCheckedChange = r0
            android.support.design.chip.Chip r2 = (android.support.design.chip.Chip) r2
            r2.setChecked(r3)
            r2 = 0
            r1.protectFromCheckedChange = r2
        L13:
            return
    }

    @Override
    public void addView(android.view.View r4, int r5, android.view.ViewGroup.LayoutParams r6) {
            r3 = this;
            boolean r0 = r4 instanceof android.support.design.chip.Chip
            if (r0 == 0) goto L21
            r0 = r4
            android.support.design.chip.Chip r0 = (android.support.design.chip.Chip) r0
            boolean r1 = r0.isChecked()
            if (r1 == 0) goto L21
            int r1 = r3.checkedId
            r2 = -1
            if (r1 == r2) goto L1a
            boolean r2 = r3.singleSelection
            if (r2 == 0) goto L1a
            r2 = 0
            r3.setCheckedStateForView(r1, r2)
        L1a:
            int r0 = r0.getId()
            r3.setCheckedId(r0)
        L21:
            super.addView(r4, r5, r6)
            return
    }

    public void check(int r4) {
            r3 = this;
            int r0 = r3.checkedId
            if (r4 != r0) goto L5
            return
        L5:
            r1 = -1
            if (r0 == r1) goto L10
            boolean r2 = r3.singleSelection
            if (r2 == 0) goto L10
            r2 = 0
            r3.setCheckedStateForView(r0, r2)
        L10:
            if (r4 == r1) goto L16
            r0 = 1
            r3.setCheckedStateForView(r4, r0)
        L16:
            r3.setCheckedId(r4)
            return
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            boolean r0 = super.checkLayoutParams(r2)
            if (r0 == 0) goto Lc
            boolean r2 = r2 instanceof android.support.design.chip.ChipGroup.LayoutParams
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public void clearCheck() {
            r4 = this;
            r0 = 1
            r4.protectFromCheckedChange = r0
            r0 = 0
            r1 = r0
        L5:
            int r2 = r4.getChildCount()
            if (r1 >= r2) goto L1b
            android.view.View r2 = r4.getChildAt(r1)
            boolean r3 = r2 instanceof android.support.design.chip.Chip
            if (r3 == 0) goto L18
            android.support.design.chip.Chip r2 = (android.support.design.chip.Chip) r2
            r2.setChecked(r0)
        L18:
            int r1 = r1 + 1
            goto L5
        L1b:
            r4.protectFromCheckedChange = r0
            r0 = -1
            r4.setCheckedId(r0)
            return
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.design.chip.ChipGroup$LayoutParams r0 = new android.support.design.chip.ChipGroup$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.design.chip.ChipGroup$LayoutParams r0 = new android.support.design.chip.ChipGroup$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            android.support.design.chip.ChipGroup$LayoutParams r0 = new android.support.design.chip.ChipGroup$LayoutParams
            r0.<init>(r2)
            return r0
    }

    public int getCheckedChipId() {
            r1 = this;
            boolean r0 = r1.singleSelection
            if (r0 == 0) goto L7
            int r0 = r1.checkedId
            goto L8
        L7:
            r0 = -1
        L8:
            return r0
    }

    public int getChipSpacingHorizontal() {
            r1 = this;
            int r0 = r1.chipSpacingHorizontal
            return r0
    }

    public int getChipSpacingVertical() {
            r1 = this;
            int r0 = r1.chipSpacingVertical
            return r0
    }

    public boolean isSingleSelection() {
            r1 = this;
            boolean r0 = r1.singleSelection
            return r0
    }

    @Override
    protected void onFinishInflate() {
            r2 = this;
            super.onFinishInflate()
            int r0 = r2.checkedId
            r1 = -1
            if (r0 == r1) goto L11
            r1 = 1
            r2.setCheckedStateForView(r0, r1)
            int r0 = r2.checkedId
            r2.setCheckedId(r0)
        L11:
            return
    }

    public void setChipSpacing(int r1) {
            r0 = this;
            r0.setChipSpacingHorizontal(r1)
            r0.setChipSpacingVertical(r1)
            return
    }

    public void setChipSpacingHorizontal(int r2) {
            r1 = this;
            int r0 = r1.chipSpacingHorizontal
            if (r0 == r2) goto Lc
            r1.chipSpacingHorizontal = r2
            r1.setItemSpacing(r2)
            r1.requestLayout()
        Lc:
            return
    }

    public void setChipSpacingHorizontalResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelOffset(r2)
            r1.setChipSpacingHorizontal(r2)
            return
    }

    public void setChipSpacingResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelOffset(r2)
            r1.setChipSpacing(r2)
            return
    }

    public void setChipSpacingVertical(int r2) {
            r1 = this;
            int r0 = r1.chipSpacingVertical
            if (r0 == r2) goto Lc
            r1.chipSpacingVertical = r2
            r1.setLineSpacing(r2)
            r1.requestLayout()
        Lc:
            return
    }

    public void setChipSpacingVerticalResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelOffset(r2)
            r1.setChipSpacingVertical(r2)
            return
    }

    @java.lang.Deprecated
    public void setDividerDrawableHorizontal(android.graphics.drawable.Drawable r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Changing divider drawables have no effect. ChipGroup do not use divider drawables as spacing."
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    public void setDividerDrawableVertical(android.graphics.drawable.Drawable r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Changing divider drawables have no effect. ChipGroup do not use divider drawables as spacing."
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    public void setFlexWrap(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Changing flex wrap not allowed. ChipGroup exposes a singleLine attribute instead."
            r2.<init>(r0)
            throw r2
    }

    public void setOnCheckedChangeListener(android.support.design.chip.ChipGroup.OnCheckedChangeListener r1) {
            r0 = this;
            r0.onCheckedChangeListener = r1
            return
    }

    @Override
    public void setOnHierarchyChangeListener(android.view.ViewGroup.OnHierarchyChangeListener r2) {
            r1 = this;
            android.support.design.chip.ChipGroup$PassThroughHierarchyChangeListener r0 = r1.passThroughListener
            android.support.design.chip.ChipGroup.PassThroughHierarchyChangeListener.access$202(r0, r2)
            return
    }

    @java.lang.Deprecated
    public void setShowDividerHorizontal(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Changing divider modes has no effect. ChipGroup do not use divider drawables as spacing."
            r2.<init>(r0)
            throw r2
    }

    @java.lang.Deprecated
    public void setShowDividerVertical(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Changing divider modes has no effect. ChipGroup do not use divider drawables as spacing."
            r2.<init>(r0)
            throw r2
    }

    public void setSingleLine(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setSingleLine(r2)
            return
    }

    public void setSingleSelection(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setSingleSelection(r2)
            return
    }

    public void setSingleSelection(boolean r2) {
            r1 = this;
            boolean r0 = r1.singleSelection
            if (r0 == r2) goto L9
            r1.singleSelection = r2
            r1.clearCheck()
        L9:
            return
    }
}
