package android.support.v7.widget;

public class AppCompatSpinner extends android.widget.Spinner implements android.support.v4.view.TintableBackgroundView {
    private static final int[] ATTRS_ANDROID_SPINNERMODE = null;
    private static final int MAX_ITEMS_MEASURED = 15;
    private static final int MODE_DIALOG = 0;
    private static final int MODE_DROPDOWN = 1;
    private static final int MODE_THEME = -1;
    private static final java.lang.String TAG = "AppCompatSpinner";
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    int mDropDownWidth;
    private android.support.v7.widget.ForwardingListener mForwardingListener;
    android.support.v7.widget.AppCompatSpinner.DropdownPopup mPopup;
    private final android.content.Context mPopupContext;
    private final boolean mPopupSet;
    private android.widget.SpinnerAdapter mTempAdapter;
    final android.graphics.Rect mTempRect;


    private static class DropDownAdapter implements android.widget.ListAdapter, android.widget.SpinnerAdapter {
        private android.widget.SpinnerAdapter mAdapter;
        private android.widget.ListAdapter mListAdapter;

        public DropDownAdapter(@android.support.annotation.Nullable android.widget.SpinnerAdapter r3, @android.support.annotation.Nullable android.content.res.Resources.Theme r4) {
                r2 = this;
                r2.<init>()
                r2.mAdapter = r3
                boolean r0 = r3 instanceof android.widget.ListAdapter
                if (r0 == 0) goto Le
                r0 = r3
                android.widget.ListAdapter r0 = (android.widget.ListAdapter) r0
                r2.mListAdapter = r0
            Le:
                if (r4 == 0) goto L35
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 23
                if (r0 < r1) goto L26
                boolean r0 = r3 instanceof android.widget.ThemedSpinnerAdapter
                if (r0 == 0) goto L26
                android.widget.ThemedSpinnerAdapter r3 = (android.widget.ThemedSpinnerAdapter) r3
                android.content.res.Resources$Theme r0 = r3.getDropDownViewTheme()
                if (r0 == r4) goto L35
                r3.setDropDownViewTheme(r4)
                goto L35
            L26:
                boolean r0 = r3 instanceof android.support.v7.widget.ThemedSpinnerAdapter
                if (r0 == 0) goto L35
                android.support.v7.widget.ThemedSpinnerAdapter r3 = (android.support.v7.widget.ThemedSpinnerAdapter) r3
                android.content.res.Resources$Theme r0 = r3.getDropDownViewTheme()
                if (r0 != 0) goto L35
                r3.setDropDownViewTheme(r4)
            L35:
                return
        }

        @Override
        public boolean areAllItemsEnabled() {
                r1 = this;
                android.widget.ListAdapter r0 = r1.mListAdapter
                if (r0 == 0) goto L9
                boolean r0 = r0.areAllItemsEnabled()
                return r0
            L9:
                r0 = 1
                return r0
        }

        @Override
        public int getCount() {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                int r0 = r0.getCount()
            La:
                return r0
        }

        @Override
        public android.view.View getDropDownView(int r2, android.view.View r3, android.view.ViewGroup r4) {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 != 0) goto L6
                r2 = 0
                goto La
            L6:
                android.view.View r2 = r0.getDropDownView(r2, r3, r4)
            La:
                return r2
        }

        @Override
        public java.lang.Object getItem(int r2) {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 != 0) goto L6
                r2 = 0
                goto La
            L6:
                java.lang.Object r2 = r0.getItem(r2)
            La:
                return r2
        }

        @Override
        public long getItemId(int r3) {
                r2 = this;
                android.widget.SpinnerAdapter r0 = r2.mAdapter
                if (r0 != 0) goto L7
                r0 = -1
                goto Lb
            L7:
                long r0 = r0.getItemId(r3)
            Lb:
                return r0
        }

        @Override
        public int getItemViewType(int r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.view.View getView(int r1, android.view.View r2, android.view.ViewGroup r3) {
                r0 = this;
                android.view.View r1 = r0.getDropDownView(r1, r2, r3)
                return r1
        }

        @Override
        public int getViewTypeCount() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public boolean hasStableIds() {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 == 0) goto Lc
                boolean r0 = r0.hasStableIds()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        @Override
        public boolean isEmpty() {
                r1 = this;
                int r0 = r1.getCount()
                if (r0 != 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        @Override
        public boolean isEnabled(int r2) {
                r1 = this;
                android.widget.ListAdapter r0 = r1.mListAdapter
                if (r0 == 0) goto L9
                boolean r2 = r0.isEnabled(r2)
                return r2
            L9:
                r2 = 1
                return r2
        }

        @Override
        public void registerDataSetObserver(android.database.DataSetObserver r2) {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 == 0) goto L7
                r0.registerDataSetObserver(r2)
            L7:
                return
        }

        @Override
        public void unregisterDataSetObserver(android.database.DataSetObserver r2) {
                r1 = this;
                android.widget.SpinnerAdapter r0 = r1.mAdapter
                if (r0 == 0) goto L7
                r0.unregisterDataSetObserver(r2)
            L7:
                return
        }
    }

    private class DropdownPopup extends android.support.v7.widget.ListPopupWindow {
        android.widget.ListAdapter mAdapter;
        private java.lang.CharSequence mHintText;
        private final android.graphics.Rect mVisibleRect;
        final android.support.v7.widget.AppCompatSpinner this$0;




        public DropdownPopup(android.support.v7.widget.AppCompatSpinner r1, android.content.Context r2, android.util.AttributeSet r3, int r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2, r3, r4)
                android.graphics.Rect r2 = new android.graphics.Rect
                r2.<init>()
                r0.mVisibleRect = r2
                r0.setAnchorView(r1)
                r2 = 1
                r0.setModal(r2)
                r2 = 0
                r0.setPromptPosition(r2)
                android.support.v7.widget.AppCompatSpinner$DropdownPopup$1 r2 = new android.support.v7.widget.AppCompatSpinner$DropdownPopup$1
                r2.<init>(r0, r1)
                r0.setOnItemClickListener(r2)
                return
        }

        static void access$001(android.support.v7.widget.AppCompatSpinner.DropdownPopup r0) {
                super.show()
                return
        }

        void computeContentWidth() {
                r7 = this;
                android.graphics.drawable.Drawable r0 = r7.getBackground()
                r1 = 0
                if (r0 == 0) goto L26
                android.support.v7.widget.AppCompatSpinner r1 = r7.this$0
                android.graphics.Rect r1 = r1.mTempRect
                r0.getPadding(r1)
                android.support.v7.widget.AppCompatSpinner r0 = r7.this$0
                boolean r0 = android.support.v7.widget.ViewUtils.isLayoutRtl(r0)
                if (r0 == 0) goto L1d
                android.support.v7.widget.AppCompatSpinner r0 = r7.this$0
                android.graphics.Rect r0 = r0.mTempRect
                int r0 = r0.right
                goto L24
            L1d:
                android.support.v7.widget.AppCompatSpinner r0 = r7.this$0
                android.graphics.Rect r0 = r0.mTempRect
                int r0 = r0.left
                int r0 = -r0
            L24:
                r1 = r0
                goto L32
            L26:
                android.support.v7.widget.AppCompatSpinner r0 = r7.this$0
                android.graphics.Rect r0 = r0.mTempRect
                android.support.v7.widget.AppCompatSpinner r2 = r7.this$0
                android.graphics.Rect r2 = r2.mTempRect
                r2.right = r1
                r0.left = r1
            L32:
                android.support.v7.widget.AppCompatSpinner r0 = r7.this$0
                int r0 = r0.getPaddingLeft()
                android.support.v7.widget.AppCompatSpinner r2 = r7.this$0
                int r2 = r2.getPaddingRight()
                android.support.v7.widget.AppCompatSpinner r3 = r7.this$0
                int r3 = r3.getWidth()
                android.support.v7.widget.AppCompatSpinner r4 = r7.this$0
                int r4 = r4.mDropDownWidth
                r5 = -2
                if (r4 != r5) goto L85
                android.support.v7.widget.AppCompatSpinner r4 = r7.this$0
                android.widget.ListAdapter r5 = r7.mAdapter
                android.widget.SpinnerAdapter r5 = (android.widget.SpinnerAdapter) r5
                android.graphics.drawable.Drawable r6 = r7.getBackground()
                int r4 = r4.compatMeasureContentWidth(r5, r6)
                android.support.v7.widget.AppCompatSpinner r5 = r7.this$0
                android.content.Context r5 = r5.getContext()
                android.content.res.Resources r5 = r5.getResources()
                android.util.DisplayMetrics r5 = r5.getDisplayMetrics()
                int r5 = r5.widthPixels
                android.support.v7.widget.AppCompatSpinner r6 = r7.this$0
                android.graphics.Rect r6 = r6.mTempRect
                int r6 = r6.left
                int r5 = r5 - r6
                android.support.v7.widget.AppCompatSpinner r6 = r7.this$0
                android.graphics.Rect r6 = r6.mTempRect
                int r6 = r6.right
                int r5 = r5 - r6
                if (r4 <= r5) goto L7a
                r4 = r5
            L7a:
                int r5 = r3 - r0
                int r5 = r5 - r2
                int r4 = java.lang.Math.max(r4, r5)
                r7.setContentWidth(r4)
                goto L9a
            L85:
                android.support.v7.widget.AppCompatSpinner r4 = r7.this$0
                int r4 = r4.mDropDownWidth
                r5 = -1
                if (r4 != r5) goto L93
                int r4 = r3 - r0
                int r4 = r4 - r2
                r7.setContentWidth(r4)
                goto L9a
            L93:
                android.support.v7.widget.AppCompatSpinner r4 = r7.this$0
                int r4 = r4.mDropDownWidth
                r7.setContentWidth(r4)
            L9a:
                android.support.v7.widget.AppCompatSpinner r4 = r7.this$0
                boolean r4 = android.support.v7.widget.ViewUtils.isLayoutRtl(r4)
                if (r4 == 0) goto Laa
                int r3 = r3 - r2
                int r0 = r7.getWidth()
                int r3 = r3 - r0
                int r1 = r1 + r3
                goto Lab
            Laa:
                int r1 = r1 + r0
            Lab:
                r7.setHorizontalOffset(r1)
                return
        }

        public java.lang.CharSequence getHintText() {
                r1 = this;
                java.lang.CharSequence r0 = r1.mHintText
                return r0
        }

        boolean isVisibleToUser(android.view.View r2) {
                r1 = this;
                boolean r0 = android.support.v4.view.ViewCompat.isAttachedToWindow(r2)
                if (r0 == 0) goto L10
                android.graphics.Rect r0 = r1.mVisibleRect
                boolean r2 = r2.getGlobalVisibleRect(r0)
                if (r2 == 0) goto L10
                r2 = 1
                goto L11
            L10:
                r2 = 0
            L11:
                return r2
        }

        @Override
        public void setAdapter(android.widget.ListAdapter r1) {
                r0 = this;
                super.setAdapter(r1)
                r0.mAdapter = r1
                return
        }

        public void setPromptText(java.lang.CharSequence r1) {
                r0 = this;
                r0.mHintText = r1
                return
        }

        @Override
        public void show() {
                r3 = this;
                boolean r0 = r3.isShowing()
                r3.computeContentWidth()
                r1 = 2
                r3.setInputMethodMode(r1)
                super.show()
                android.widget.ListView r1 = r3.getListView()
                r2 = 1
                r1.setChoiceMode(r2)
                android.support.v7.widget.AppCompatSpinner r1 = r3.this$0
                int r1 = r1.getSelectedItemPosition()
                r3.setSelection(r1)
                if (r0 == 0) goto L22
                return
            L22:
                android.support.v7.widget.AppCompatSpinner r0 = r3.this$0
                android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
                if (r0 == 0) goto L3a
                android.support.v7.widget.AppCompatSpinner$DropdownPopup$2 r1 = new android.support.v7.widget.AppCompatSpinner$DropdownPopup$2
                r1.<init>(r3)
                r0.addOnGlobalLayoutListener(r1)
                android.support.v7.widget.AppCompatSpinner$DropdownPopup$3 r0 = new android.support.v7.widget.AppCompatSpinner$DropdownPopup$3
                r0.<init>(r3, r1)
                r3.setOnDismissListener(r0)
            L3a:
                return
        }
    }

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16843505(0x10102f1, float:2.3695668E-38)
            r0[r1] = r2
            android.support.v7.widget.AppCompatSpinner.ATTRS_ANDROID_SPINNERMODE = r0
            return
    }

    public AppCompatSpinner(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatSpinner(android.content.Context r3, int r4) {
            r2 = this;
            int r0 = android.support.v7.appcompat.R.attr.spinnerStyle
            r1 = 0
            r2.<init>(r3, r1, r0, r4)
            return
    }

    public AppCompatSpinner(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.spinnerStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatSpinner(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r0 = -1
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AppCompatSpinner(android.content.Context r7, android.util.AttributeSet r8, int r9, int r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public AppCompatSpinner(android.content.Context r8, android.util.AttributeSet r9, int r10, int r11, android.content.res.Resources.Theme r12) {
            r7 = this;
            r7.<init>(r8, r9, r10)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r7.mTempRect = r0
            int[] r0 = android.support.v7.appcompat.R.styleable.Spinner
            r1 = 0
            android.support.v7.widget.TintTypedArray r0 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r8, r9, r0, r10, r1)
            android.support.v7.widget.AppCompatBackgroundHelper r2 = new android.support.v7.widget.AppCompatBackgroundHelper
            r2.<init>(r7)
            r7.mBackgroundTintHelper = r2
            r2 = 0
            if (r12 == 0) goto L23
            android.support.v7.view.ContextThemeWrapper r3 = new android.support.v7.view.ContextThemeWrapper
            r3.<init>(r8, r12)
            r7.mPopupContext = r3
            goto L3e
        L23:
            int r12 = android.support.v7.appcompat.R.styleable.Spinner_popupTheme
            int r12 = r0.getResourceId(r12, r1)
            if (r12 == 0) goto L33
            android.support.v7.view.ContextThemeWrapper r3 = new android.support.v7.view.ContextThemeWrapper
            r3.<init>(r8, r12)
            r7.mPopupContext = r3
            goto L3e
        L33:
            int r12 = android.os.Build.VERSION.SDK_INT
            r3 = 23
            if (r12 >= r3) goto L3b
            r12 = r8
            goto L3c
        L3b:
            r12 = r2
        L3c:
            r7.mPopupContext = r12
        L3e:
            android.content.Context r12 = r7.mPopupContext
            r3 = 1
            if (r12 == 0) goto Lac
            r12 = -1
            if (r11 != r12) goto L74
            int[] r12 = android.support.v7.widget.AppCompatSpinner.ATTRS_ANDROID_SPINNERMODE     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            android.content.res.TypedArray r12 = r8.obtainStyledAttributes(r9, r12, r10, r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            boolean r4 = r12.hasValue(r1)     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L6d
            if (r4 == 0) goto L56
            int r11 = r12.getInt(r1, r1)     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L6d
        L56:
            if (r12 == 0) goto L74
        L58:
            r12.recycle()
            goto L74
        L5c:
            r4 = move-exception
            goto L63
        L5e:
            r8 = move-exception
            r12 = r2
            goto L6e
        L61:
            r4 = move-exception
            r12 = r2
        L63:
            java.lang.String r5 = "AppCompatSpinner"
            java.lang.String r6 = "Could not read android:spinnerMode"
            android.util.Log.i(r5, r6, r4)     // Catch: java.lang.Throwable -> L6d
            if (r12 == 0) goto L74
            goto L58
        L6d:
            r8 = move-exception
        L6e:
            if (r12 == 0) goto L73
            r12.recycle()
        L73:
            throw r8
        L74:
            if (r11 != r3) goto Lac
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r11 = new android.support.v7.widget.AppCompatSpinner$DropdownPopup
            android.content.Context r12 = r7.mPopupContext
            r11.<init>(r7, r12, r9, r10)
            android.content.Context r12 = r7.mPopupContext
            int[] r4 = android.support.v7.appcompat.R.styleable.Spinner
            android.support.v7.widget.TintTypedArray r12 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r12, r9, r4, r10, r1)
            int r1 = android.support.v7.appcompat.R.styleable.Spinner_android_dropDownWidth
            r4 = -2
            int r1 = r12.getLayoutDimension(r1, r4)
            r7.mDropDownWidth = r1
            int r1 = android.support.v7.appcompat.R.styleable.Spinner_android_popupBackground
            android.graphics.drawable.Drawable r1 = r12.getDrawable(r1)
            r11.setBackgroundDrawable(r1)
            int r1 = android.support.v7.appcompat.R.styleable.Spinner_android_prompt
            java.lang.String r1 = r0.getString(r1)
            r11.setPromptText(r1)
            r12.recycle()
            r7.mPopup = r11
            android.support.v7.widget.AppCompatSpinner$1 r12 = new android.support.v7.widget.AppCompatSpinner$1
            r12.<init>(r7, r7, r11)
            r7.mForwardingListener = r12
        Lac:
            int r11 = android.support.v7.appcompat.R.styleable.Spinner_android_entries
            java.lang.CharSequence[] r11 = r0.getTextArray(r11)
            if (r11 == 0) goto Lc4
            android.widget.ArrayAdapter r12 = new android.widget.ArrayAdapter
            r1 = 17367048(0x1090008, float:2.5162948E-38)
            r12.<init>(r8, r1, r11)
            int r8 = android.support.v7.appcompat.R.layout.support_simple_spinner_dropdown_item
            r12.setDropDownViewResource(r8)
            r7.setAdapter(r12)
        Lc4:
            r0.recycle()
            r7.mPopupSet = r3
            android.widget.SpinnerAdapter r8 = r7.mTempAdapter
            if (r8 == 0) goto Ld2
            r7.setAdapter(r8)
            r7.mTempAdapter = r2
        Ld2:
            android.support.v7.widget.AppCompatBackgroundHelper r8 = r7.mBackgroundTintHelper
            r8.loadFromAttributes(r9, r10)
            return
    }

    int compatMeasureContentWidth(android.widget.SpinnerAdapter r11, android.graphics.drawable.Drawable r12) {
            r10 = this;
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            int r1 = r10.getMeasuredWidth()
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r0)
            int r2 = r10.getMeasuredHeight()
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r0)
            int r3 = r10.getSelectedItemPosition()
            int r3 = java.lang.Math.max(r0, r3)
            int r4 = r11.getCount()
            int r5 = r3 + 15
            int r4 = java.lang.Math.min(r4, r5)
            int r5 = r4 - r3
            int r5 = 15 - r5
            int r3 = r3 - r5
            int r3 = java.lang.Math.max(r0, r3)
            r5 = 0
            r7 = r5
            r6 = 0
        L32:
            if (r3 >= r4) goto L5d
            int r8 = r11.getItemViewType(r3)
            if (r8 == r0) goto L3c
            r7 = r5
            r0 = r8
        L3c:
            android.view.View r7 = r11.getView(r3, r7, r10)
            android.view.ViewGroup$LayoutParams r8 = r7.getLayoutParams()
            if (r8 != 0) goto L4f
            android.view.ViewGroup$LayoutParams r8 = new android.view.ViewGroup$LayoutParams
            r9 = -2
            r8.<init>(r9, r9)
            r7.setLayoutParams(r8)
        L4f:
            r7.measure(r1, r2)
            int r8 = r7.getMeasuredWidth()
            int r6 = java.lang.Math.max(r6, r8)
            int r3 = r3 + 1
            goto L32
        L5d:
            if (r12 == 0) goto L6e
            android.graphics.Rect r11 = r10.mTempRect
            r12.getPadding(r11)
            android.graphics.Rect r11 = r10.mTempRect
            int r11 = r11.left
            android.graphics.Rect r12 = r10.mTempRect
            int r12 = r12.right
            int r11 = r11 + r12
            int r6 = r6 + r11
        L6e:
            return r6
    }

    @Override
    protected void drawableStateChanged() {
            r1 = this;
            super.drawableStateChanged()
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.applySupportBackgroundTint()
        La:
            return
    }

    @Override
    public int getDropDownHorizontalOffset() {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L9
            int r0 = r0.getHorizontalOffset()
            return r0
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L14
            int r0 = super.getDropDownHorizontalOffset()
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public int getDropDownVerticalOffset() {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L9
            int r0 = r0.getVerticalOffset()
            return r0
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L14
            int r0 = super.getDropDownVerticalOffset()
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public int getDropDownWidth() {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L7
            int r0 = r2.mDropDownWidth
            return r0
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L12
            int r0 = super.getDropDownWidth()
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable getPopupBackground() {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            return r0
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L14
            android.graphics.drawable.Drawable r0 = super.getPopupBackground()
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public android.content.Context getPopupContext() {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L7
            android.content.Context r0 = r2.mPopupContext
            return r0
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L12
            android.content.Context r0 = super.getPopupContext()
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.CharSequence getPrompt() {
            r1 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.getHintText()
            goto Ld
        L9:
            java.lang.CharSequence r0 = super.getPrompt()
        Ld:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getSupportBackgroundTintList()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.graphics.PorterDuff$Mode r0 = r0.getSupportBackgroundTintMode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            if (r0 == 0) goto L12
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L12
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            r0.dismiss()
        L12:
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            super.onMeasure(r3, r4)
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r4 = r2.mPopup
            if (r4 == 0) goto L32
            int r4 = android.view.View.MeasureSpec.getMode(r3)
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 != r0) goto L32
            int r4 = r2.getMeasuredWidth()
            android.widget.SpinnerAdapter r0 = r2.getAdapter()
            android.graphics.drawable.Drawable r1 = r2.getBackground()
            int r0 = r2.compatMeasureContentWidth(r0, r1)
            int r4 = java.lang.Math.max(r4, r0)
            int r3 = android.view.View.MeasureSpec.getSize(r3)
            int r3 = java.lang.Math.min(r4, r3)
            int r4 = r2.getMeasuredHeight()
            r2.setMeasuredDimension(r3, r4)
        L32:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v7.widget.ForwardingListener r0 = r1.mForwardingListener
            if (r0 == 0) goto Lc
            boolean r0 = r0.onTouch(r1, r2)
            if (r0 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            boolean r2 = super.onTouchEvent(r2)
            return r2
    }

    @Override
    public boolean performClick() {
            r1 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            if (r0 == 0) goto L11
            boolean r0 = r0.isShowing()
            if (r0 != 0) goto Lf
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            r0.show()
        Lf:
            r0 = 1
            return r0
        L11:
            boolean r0 = super.performClick()
            return r0
    }

    @Override
    public void setAdapter(android.widget.Adapter r1) {
            r0 = this;
            android.widget.SpinnerAdapter r1 = (android.widget.SpinnerAdapter) r1
            r0.setAdapter(r1)
            return
    }

    @Override
    public void setAdapter(android.widget.SpinnerAdapter r4) {
            r3 = this;
            boolean r0 = r3.mPopupSet
            if (r0 != 0) goto L7
            r3.mTempAdapter = r4
            return
        L7:
            super.setAdapter(r4)
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r3.mPopup
            if (r0 == 0) goto L24
            android.content.Context r0 = r3.mPopupContext
            if (r0 != 0) goto L16
            android.content.Context r0 = r3.getContext()
        L16:
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r1 = r3.mPopup
            android.support.v7.widget.AppCompatSpinner$DropDownAdapter r2 = new android.support.v7.widget.AppCompatSpinner$DropDownAdapter
            android.content.res.Resources$Theme r0 = r0.getTheme()
            r2.<init>(r4, r0)
            r1.setAdapter(r2)
        L24:
            return
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            super.setBackgroundDrawable(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundDrawable(r2)
        La:
            return
    }

    @Override
    public void setBackgroundResource(@android.support.annotation.DrawableRes int r2) {
            r1 = this;
            super.setBackgroundResource(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundResource(r2)
        La:
            return
    }

    @Override
    public void setDropDownHorizontalOffset(int r3) {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L8
            r0.setHorizontalOffset(r3)
            goto L11
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            super.setDropDownHorizontalOffset(r3)
        L11:
            return
    }

    @Override
    public void setDropDownVerticalOffset(int r3) {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L8
            r0.setVerticalOffset(r3)
            goto L11
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            super.setDropDownVerticalOffset(r3)
        L11:
            return
    }

    @Override
    public void setDropDownWidth(int r3) {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L7
            r2.mDropDownWidth = r3
            goto L10
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L10
            super.setDropDownWidth(r3)
        L10:
            return
    }

    @Override
    public void setPopupBackgroundDrawable(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r2.mPopup
            if (r0 == 0) goto L8
            r0.setBackgroundDrawable(r3)
            goto L11
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L11
            super.setPopupBackgroundDrawable(r3)
        L11:
            return
    }

    @Override
    public void setPopupBackgroundResource(@android.support.annotation.DrawableRes int r2) {
            r1 = this;
            android.content.Context r0 = r1.getPopupContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setPopupBackgroundDrawable(r2)
            return
    }

    @Override
    public void setPrompt(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.widget.AppCompatSpinner$DropdownPopup r0 = r1.mPopup
            if (r0 == 0) goto L8
            r0.setPromptText(r2)
            goto Lb
        L8:
            super.setPrompt(r2)
        Lb:
            return
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintList(@android.support.annotation.Nullable android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintList(r2)
        L7:
            return
    }

    @Override
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintMode(@android.support.annotation.Nullable android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintMode(r2)
        L7:
            return
    }
}
