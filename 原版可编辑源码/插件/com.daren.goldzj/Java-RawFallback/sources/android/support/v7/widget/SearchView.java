package android.support.v7.widget;

public class SearchView extends android.support.v7.widget.LinearLayoutCompat implements android.support.v7.view.CollapsibleActionView {
    static final boolean DBG = false;
    static final android.support.v7.widget.SearchView.AutoCompleteTextViewReflector HIDDEN_METHOD_INVOKER = null;
    private static final java.lang.String IME_OPTION_NO_MICROPHONE = "nm";
    static final java.lang.String LOG_TAG = "SearchView";
    private android.os.Bundle mAppSearchData;
    private boolean mClearingFocus;
    final android.widget.ImageView mCloseButton;
    private final android.widget.ImageView mCollapsedIcon;
    private int mCollapsedImeOptions;
    private final java.lang.CharSequence mDefaultQueryHint;
    private final android.view.View mDropDownAnchor;
    private boolean mExpandedInActionView;
    final android.widget.ImageView mGoButton;
    private boolean mIconified;
    private boolean mIconifiedByDefault;
    private int mMaxWidth;
    private java.lang.CharSequence mOldQueryText;
    private final android.view.View.OnClickListener mOnClickListener;
    private android.support.v7.widget.SearchView.OnCloseListener mOnCloseListener;
    private final android.widget.TextView.OnEditorActionListener mOnEditorActionListener;
    private final android.widget.AdapterView.OnItemClickListener mOnItemClickListener;
    private final android.widget.AdapterView.OnItemSelectedListener mOnItemSelectedListener;
    private android.support.v7.widget.SearchView.OnQueryTextListener mOnQueryChangeListener;
    android.view.View.OnFocusChangeListener mOnQueryTextFocusChangeListener;
    private android.view.View.OnClickListener mOnSearchClickListener;
    private android.support.v7.widget.SearchView.OnSuggestionListener mOnSuggestionListener;
    private final java.util.WeakHashMap<java.lang.String, android.graphics.drawable.Drawable.ConstantState> mOutsideDrawablesCache;
    private java.lang.CharSequence mQueryHint;
    private boolean mQueryRefinement;
    private java.lang.Runnable mReleaseCursorRunnable;
    final android.widget.ImageView mSearchButton;
    private final android.view.View mSearchEditFrame;
    private final android.graphics.drawable.Drawable mSearchHintIcon;
    private final android.view.View mSearchPlate;
    final android.support.v7.widget.SearchView.SearchAutoComplete mSearchSrcTextView;
    private android.graphics.Rect mSearchSrcTextViewBounds;
    private android.graphics.Rect mSearchSrtTextViewBoundsExpanded;
    android.app.SearchableInfo mSearchable;
    private final android.view.View mSubmitArea;
    private boolean mSubmitButtonEnabled;
    private final int mSuggestionCommitIconResId;
    private final int mSuggestionRowLayout;
    android.support.v4.widget.CursorAdapter mSuggestionsAdapter;
    private int[] mTemp;
    private int[] mTemp2;
    android.view.View.OnKeyListener mTextKeyListener;
    private android.text.TextWatcher mTextWatcher;
    private android.support.v7.widget.SearchView.UpdatableTouchDelegate mTouchDelegate;
    private final java.lang.Runnable mUpdateDrawableStateRunnable;
    private java.lang.CharSequence mUserQuery;
    private final android.content.Intent mVoiceAppSearchIntent;
    final android.widget.ImageView mVoiceButton;
    private boolean mVoiceButtonEnabled;
    private final android.content.Intent mVoiceWebSearchIntent;











    private static class AutoCompleteTextViewReflector {
        private java.lang.reflect.Method doAfterTextChanged;
        private java.lang.reflect.Method doBeforeTextChanged;
        private java.lang.reflect.Method ensureImeVisible;
        private java.lang.reflect.Method showSoftInputUnchecked;

        AutoCompleteTextViewReflector() {
                r6 = this;
                r6.<init>()
                r0 = 0
                r1 = 1
                java.lang.Class<android.widget.AutoCompleteTextView> r2 = android.widget.AutoCompleteTextView.class
                java.lang.String r3 = "doBeforeTextChanged"
                java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L16
                java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L16
                r6.doBeforeTextChanged = r2     // Catch: java.lang.NoSuchMethodException -> L16
                java.lang.reflect.Method r2 = r6.doBeforeTextChanged     // Catch: java.lang.NoSuchMethodException -> L16
                r2.setAccessible(r1)     // Catch: java.lang.NoSuchMethodException -> L16
            L16:
                java.lang.Class<android.widget.AutoCompleteTextView> r2 = android.widget.AutoCompleteTextView.class
                java.lang.String r3 = "doAfterTextChanged"
                java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L27
                java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L27
                r6.doAfterTextChanged = r2     // Catch: java.lang.NoSuchMethodException -> L27
                java.lang.reflect.Method r2 = r6.doAfterTextChanged     // Catch: java.lang.NoSuchMethodException -> L27
                r2.setAccessible(r1)     // Catch: java.lang.NoSuchMethodException -> L27
            L27:
                java.lang.Class<android.widget.AutoCompleteTextView> r2 = android.widget.AutoCompleteTextView.class
                java.lang.String r3 = "ensureImeVisible"
                java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L3c
                java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> L3c
                r4[r0] = r5     // Catch: java.lang.NoSuchMethodException -> L3c
                java.lang.reflect.Method r0 = r2.getMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L3c
                r6.ensureImeVisible = r0     // Catch: java.lang.NoSuchMethodException -> L3c
                java.lang.reflect.Method r0 = r6.ensureImeVisible     // Catch: java.lang.NoSuchMethodException -> L3c
                r0.setAccessible(r1)     // Catch: java.lang.NoSuchMethodException -> L3c
            L3c:
                return
        }

        void doAfterTextChanged(android.widget.AutoCompleteTextView r3) {
                r2 = this;
                java.lang.reflect.Method r0 = r2.doAfterTextChanged
                if (r0 == 0) goto La
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> La
                r0.invoke(r3, r1)     // Catch: java.lang.Exception -> La
            La:
                return
        }

        void doBeforeTextChanged(android.widget.AutoCompleteTextView r3) {
                r2 = this;
                java.lang.reflect.Method r0 = r2.doBeforeTextChanged
                if (r0 == 0) goto La
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> La
                r0.invoke(r3, r1)     // Catch: java.lang.Exception -> La
            La:
                return
        }

        void ensureImeVisible(android.widget.AutoCompleteTextView r4, boolean r5) {
                r3 = this;
                java.lang.reflect.Method r0 = r3.ensureImeVisible
                if (r0 == 0) goto L11
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L11
                r2 = 0
                java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> L11
                r1[r2] = r5     // Catch: java.lang.Exception -> L11
                r0.invoke(r4, r1)     // Catch: java.lang.Exception -> L11
            L11:
                return
        }
    }

    public interface OnCloseListener {
        boolean onClose();
    }

    public interface OnQueryTextListener {
        boolean onQueryTextChange(java.lang.String r1);

        boolean onQueryTextSubmit(java.lang.String r1);
    }

    public interface OnSuggestionListener {
        boolean onSuggestionClick(int r1);

        boolean onSuggestionSelect(int r1);
    }

    static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.v7.widget.SearchView.SavedState> CREATOR = null;
        boolean isIconified;


        static {
                android.support.v7.widget.SearchView$SavedState$1 r0 = new android.support.v7.widget.SearchView$SavedState$1
                r0.<init>()
                android.support.v7.widget.SearchView.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r2 = 0
                java.lang.Object r1 = r1.readValue(r2)
                java.lang.Boolean r1 = (java.lang.Boolean) r1
                boolean r1 = r1.booleanValue()
                r0.isIconified = r1
                return
        }

        SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "SearchView.SavedState{"
                r0.append(r1)
                int r1 = java.lang.System.identityHashCode(r2)
                java.lang.String r1 = java.lang.Integer.toHexString(r1)
                r0.append(r1)
                java.lang.String r1 = " isIconified="
                r0.append(r1)
                boolean r1 = r2.isIconified
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                boolean r2 = r0.isIconified
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                r1.writeValue(r2)
                return
        }
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public static class SearchAutoComplete extends android.support.v7.widget.AppCompatAutoCompleteTextView {
        private boolean mHasPendingShowSoftInputRequest;
        final java.lang.Runnable mRunShowSoftInputIfNecessary;
        private android.support.v7.widget.SearchView mSearchView;
        private int mThreshold;


        public SearchAutoComplete(android.content.Context r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public SearchAutoComplete(android.content.Context r2, android.util.AttributeSet r3) {
                r1 = this;
                int r0 = android.support.v7.appcompat.R.attr.autoCompleteTextViewStyle
                r1.<init>(r2, r3, r0)
                return
        }

        public SearchAutoComplete(android.content.Context r1, android.util.AttributeSet r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                android.support.v7.widget.SearchView$SearchAutoComplete$1 r1 = new android.support.v7.widget.SearchView$SearchAutoComplete$1
                r1.<init>(r0)
                r0.mRunShowSoftInputIfNecessary = r1
                int r1 = r0.getThreshold()
                r0.mThreshold = r1
                return
        }

        private int getSearchViewTextMinWidthDp() {
                r4 = this;
                android.content.res.Resources r0 = r4.getResources()
                android.content.res.Configuration r0 = r0.getConfiguration()
                int r1 = r0.screenWidthDp
                int r2 = r0.screenHeightDp
                r3 = 960(0x3c0, float:1.345E-42)
                if (r1 < r3) goto L1c
                r3 = 720(0x2d0, float:1.009E-42)
                if (r2 < r3) goto L1c
                int r0 = r0.orientation
                r3 = 2
                if (r0 != r3) goto L1c
                r0 = 256(0x100, float:3.59E-43)
                return r0
            L1c:
                r0 = 600(0x258, float:8.41E-43)
                if (r1 >= r0) goto L2c
                r0 = 640(0x280, float:8.97E-43)
                if (r1 < r0) goto L29
                r0 = 480(0x1e0, float:6.73E-43)
                if (r2 < r0) goto L29
                goto L2c
            L29:
                r0 = 160(0xa0, float:2.24E-43)
                return r0
            L2c:
                r0 = 192(0xc0, float:2.69E-43)
                return r0
        }

        @Override
        public boolean enoughToFilter() {
                r1 = this;
                int r0 = r1.mThreshold
                if (r0 <= 0) goto Ld
                boolean r0 = super.enoughToFilter()
                if (r0 == 0) goto Lb
                goto Ld
            Lb:
                r0 = 0
                goto Le
            Ld:
                r0 = 1
            Le:
                return r0
        }

        boolean isEmpty() {
                r1 = this;
                android.text.Editable r0 = r1.getText()
                int r0 = android.text.TextUtils.getTrimmedLength(r0)
                if (r0 != 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        @Override
        public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo r2) {
                r1 = this;
                android.view.inputmethod.InputConnection r2 = super.onCreateInputConnection(r2)
                boolean r0 = r1.mHasPendingShowSoftInputRequest
                if (r0 == 0) goto L12
                java.lang.Runnable r0 = r1.mRunShowSoftInputIfNecessary
                r1.removeCallbacks(r0)
                java.lang.Runnable r0 = r1.mRunShowSoftInputIfNecessary
                r1.post(r0)
            L12:
                return r2
        }

        @Override
        protected void onFinishInflate() {
                r3 = this;
                super.onFinishInflate()
                android.content.res.Resources r0 = r3.getResources()
                android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
                int r1 = r3.getSearchViewTextMinWidthDp()
                float r1 = (float) r1
                r2 = 1
                float r0 = android.util.TypedValue.applyDimension(r2, r1, r0)
                int r0 = (int) r0
                r3.setMinWidth(r0)
                return
        }

        @Override
        protected void onFocusChanged(boolean r1, int r2, android.graphics.Rect r3) {
                r0 = this;
                super.onFocusChanged(r1, r2, r3)
                android.support.v7.widget.SearchView r1 = r0.mSearchView
                r1.onTextFocusChanged()
                return
        }

        @Override
        public boolean onKeyPreIme(int r3, android.view.KeyEvent r4) {
                r2 = this;
                r0 = 4
                if (r3 != r0) goto L3f
                int r0 = r4.getAction()
                r1 = 1
                if (r0 != 0) goto L1a
                int r0 = r4.getRepeatCount()
                if (r0 != 0) goto L1a
                android.view.KeyEvent$DispatcherState r3 = r2.getKeyDispatcherState()
                if (r3 == 0) goto L19
                r3.startTracking(r4, r2)
            L19:
                return r1
            L1a:
                int r0 = r4.getAction()
                if (r0 != r1) goto L3f
                android.view.KeyEvent$DispatcherState r0 = r2.getKeyDispatcherState()
                if (r0 == 0) goto L29
                r0.handleUpEvent(r4)
            L29:
                boolean r0 = r4.isTracking()
                if (r0 == 0) goto L3f
                boolean r0 = r4.isCanceled()
                if (r0 != 0) goto L3f
                android.support.v7.widget.SearchView r3 = r2.mSearchView
                r3.clearFocus()
                r3 = 0
                r2.setImeVisibility(r3)
                return r1
            L3f:
                boolean r3 = super.onKeyPreIme(r3, r4)
                return r3
        }

        @Override
        public void onWindowFocusChanged(boolean r2) {
                r1 = this;
                super.onWindowFocusChanged(r2)
                if (r2 == 0) goto L25
                android.support.v7.widget.SearchView r2 = r1.mSearchView
                boolean r2 = r2.hasFocus()
                if (r2 == 0) goto L25
                int r2 = r1.getVisibility()
                if (r2 != 0) goto L25
                r2 = 1
                r1.mHasPendingShowSoftInputRequest = r2
                android.content.Context r0 = r1.getContext()
                boolean r0 = android.support.v7.widget.SearchView.isLandscapeMode(r0)
                if (r0 == 0) goto L25
                android.support.v7.widget.SearchView$AutoCompleteTextViewReflector r0 = android.support.v7.widget.SearchView.HIDDEN_METHOD_INVOKER
                r0.ensureImeVisible(r1, r2)
            L25:
                return
        }

        @Override
        public void performCompletion() {
                r0 = this;
                return
        }

        @Override
        protected void replaceText(java.lang.CharSequence r1) {
                r0 = this;
                return
        }

        void setImeVisibility(boolean r3) {
                r2 = this;
                android.content.Context r0 = r2.getContext()
                java.lang.String r1 = "input_method"
                java.lang.Object r0 = r0.getSystemService(r1)
                android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
                r1 = 0
                if (r3 != 0) goto L1e
                r2.mHasPendingShowSoftInputRequest = r1
                java.lang.Runnable r3 = r2.mRunShowSoftInputIfNecessary
                r2.removeCallbacks(r3)
                android.os.IBinder r3 = r2.getWindowToken()
                r0.hideSoftInputFromWindow(r3, r1)
                return
            L1e:
                boolean r3 = r0.isActive(r2)
                if (r3 == 0) goto L2f
                r2.mHasPendingShowSoftInputRequest = r1
                java.lang.Runnable r3 = r2.mRunShowSoftInputIfNecessary
                r2.removeCallbacks(r3)
                r0.showSoftInput(r2, r1)
                return
            L2f:
                r3 = 1
                r2.mHasPendingShowSoftInputRequest = r3
                return
        }

        void setSearchView(android.support.v7.widget.SearchView r1) {
                r0 = this;
                r0.mSearchView = r1
                return
        }

        @Override
        public void setThreshold(int r1) {
                r0 = this;
                super.setThreshold(r1)
                r0.mThreshold = r1
                return
        }

        void showSoftInputIfNecessary() {
                r2 = this;
                boolean r0 = r2.mHasPendingShowSoftInputRequest
                if (r0 == 0) goto L16
                android.content.Context r0 = r2.getContext()
                java.lang.String r1 = "input_method"
                java.lang.Object r0 = r0.getSystemService(r1)
                android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
                r1 = 0
                r0.showSoftInput(r2, r1)
                r2.mHasPendingShowSoftInputRequest = r1
            L16:
                return
        }
    }

    private static class UpdatableTouchDelegate extends android.view.TouchDelegate {
        private final android.graphics.Rect mActualBounds;
        private boolean mDelegateTargeted;
        private final android.view.View mDelegateView;
        private final int mSlop;
        private final android.graphics.Rect mSlopBounds;
        private final android.graphics.Rect mTargetBounds;

        public UpdatableTouchDelegate(android.graphics.Rect r2, android.graphics.Rect r3, android.view.View r4) {
                r1 = this;
                r1.<init>(r2, r4)
                android.content.Context r0 = r4.getContext()
                android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
                int r0 = r0.getScaledTouchSlop()
                r1.mSlop = r0
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r1.mTargetBounds = r0
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r1.mSlopBounds = r0
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r1.mActualBounds = r0
                r1.setBounds(r2, r3)
                r1.mDelegateView = r4
                return
        }

        @Override
        public boolean onTouchEvent(android.view.MotionEvent r8) {
                r7 = this;
                float r0 = r8.getX()
                int r0 = (int) r0
                float r1 = r8.getY()
                int r1 = (int) r1
                int r2 = r8.getAction()
                r3 = 2
                r4 = 1
                r5 = 0
                if (r2 == 0) goto L2e
                if (r2 == r4) goto L20
                if (r2 == r3) goto L20
                r6 = 3
                if (r2 == r6) goto L1b
                goto L3a
            L1b:
                boolean r2 = r7.mDelegateTargeted
                r7.mDelegateTargeted = r5
                goto L3b
            L20:
                boolean r2 = r7.mDelegateTargeted
                if (r2 == 0) goto L3b
                android.graphics.Rect r6 = r7.mSlopBounds
                boolean r6 = r6.contains(r0, r1)
                if (r6 != 0) goto L3b
                r4 = 0
                goto L3b
            L2e:
                android.graphics.Rect r2 = r7.mTargetBounds
                boolean r2 = r2.contains(r0, r1)
                if (r2 == 0) goto L3a
                r7.mDelegateTargeted = r4
                r2 = 1
                goto L3b
            L3a:
                r2 = 0
            L3b:
                if (r2 == 0) goto L70
                if (r4 == 0) goto L5b
                android.graphics.Rect r2 = r7.mActualBounds
                boolean r2 = r2.contains(r0, r1)
                if (r2 != 0) goto L5b
                android.view.View r0 = r7.mDelegateView
                int r0 = r0.getWidth()
                int r0 = r0 / r3
                float r0 = (float) r0
                android.view.View r1 = r7.mDelegateView
                int r1 = r1.getHeight()
                int r1 = r1 / r3
                float r1 = (float) r1
                r8.setLocation(r0, r1)
                goto L6a
            L5b:
                android.graphics.Rect r2 = r7.mActualBounds
                int r2 = r2.left
                int r0 = r0 - r2
                float r0 = (float) r0
                android.graphics.Rect r2 = r7.mActualBounds
                int r2 = r2.top
                int r1 = r1 - r2
                float r1 = (float) r1
                r8.setLocation(r0, r1)
            L6a:
                android.view.View r0 = r7.mDelegateView
                boolean r5 = r0.dispatchTouchEvent(r8)
            L70:
                return r5
        }

        public void setBounds(android.graphics.Rect r3, android.graphics.Rect r4) {
                r2 = this;
                android.graphics.Rect r0 = r2.mTargetBounds
                r0.set(r3)
                android.graphics.Rect r0 = r2.mSlopBounds
                r0.set(r3)
                android.graphics.Rect r3 = r2.mSlopBounds
                int r0 = r2.mSlop
                int r1 = -r0
                int r0 = -r0
                r3.inset(r1, r0)
                android.graphics.Rect r3 = r2.mActualBounds
                r3.set(r4)
                return
        }
    }

    static {
            android.support.v7.widget.SearchView$AutoCompleteTextViewReflector r0 = new android.support.v7.widget.SearchView$AutoCompleteTextViewReflector
            r0.<init>()
            android.support.v7.widget.SearchView.HIDDEN_METHOD_INVOKER = r0
            return
    }

    public SearchView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public SearchView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.searchViewStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public SearchView(android.content.Context r4, android.util.AttributeSet r5, int r6) {
            r3 = this;
            r3.<init>(r4, r5, r6)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r3.mSearchSrcTextViewBounds = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r3.mSearchSrtTextViewBoundsExpanded = r0
            r0 = 2
            int[] r1 = new int[r0]
            r3.mTemp = r1
            int[] r0 = new int[r0]
            r3.mTemp2 = r0
            android.support.v7.widget.SearchView$1 r0 = new android.support.v7.widget.SearchView$1
            r0.<init>(r3)
            r3.mUpdateDrawableStateRunnable = r0
            android.support.v7.widget.SearchView$2 r0 = new android.support.v7.widget.SearchView$2
            r0.<init>(r3)
            r3.mReleaseCursorRunnable = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r3.mOutsideDrawablesCache = r0
            android.support.v7.widget.SearchView$5 r0 = new android.support.v7.widget.SearchView$5
            r0.<init>(r3)
            r3.mOnClickListener = r0
            android.support.v7.widget.SearchView$6 r0 = new android.support.v7.widget.SearchView$6
            r0.<init>(r3)
            r3.mTextKeyListener = r0
            android.support.v7.widget.SearchView$7 r0 = new android.support.v7.widget.SearchView$7
            r0.<init>(r3)
            r3.mOnEditorActionListener = r0
            android.support.v7.widget.SearchView$8 r0 = new android.support.v7.widget.SearchView$8
            r0.<init>(r3)
            r3.mOnItemClickListener = r0
            android.support.v7.widget.SearchView$9 r0 = new android.support.v7.widget.SearchView$9
            r0.<init>(r3)
            r3.mOnItemSelectedListener = r0
            android.support.v7.widget.SearchView$10 r0 = new android.support.v7.widget.SearchView$10
            r0.<init>(r3)
            r3.mTextWatcher = r0
            int[] r0 = android.support.v7.appcompat.R.styleable.SearchView
            r1 = 0
            android.support.v7.widget.TintTypedArray r5 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r4, r5, r0, r6, r1)
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r4)
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_layout
            int r0 = android.support.v7.appcompat.R.layout.abc_search_view
            int r6 = r5.getResourceId(r6, r0)
            r0 = 1
            r4.inflate(r6, r3, r0)
            int r4 = android.support.v7.appcompat.R.id.search_src_text
            android.view.View r4 = r3.findViewById(r4)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = (android.support.v7.widget.SearchView.SearchAutoComplete) r4
            r3.mSearchSrcTextView = r4
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            r4.setSearchView(r3)
            int r4 = android.support.v7.appcompat.R.id.search_edit_frame
            android.view.View r4 = r3.findViewById(r4)
            r3.mSearchEditFrame = r4
            int r4 = android.support.v7.appcompat.R.id.search_plate
            android.view.View r4 = r3.findViewById(r4)
            r3.mSearchPlate = r4
            int r4 = android.support.v7.appcompat.R.id.submit_area
            android.view.View r4 = r3.findViewById(r4)
            r3.mSubmitArea = r4
            int r4 = android.support.v7.appcompat.R.id.search_button
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.mSearchButton = r4
            int r4 = android.support.v7.appcompat.R.id.search_go_btn
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.mGoButton = r4
            int r4 = android.support.v7.appcompat.R.id.search_close_btn
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.mCloseButton = r4
            int r4 = android.support.v7.appcompat.R.id.search_voice_btn
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.mVoiceButton = r4
            int r4 = android.support.v7.appcompat.R.id.search_mag_icon
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.mCollapsedIcon = r4
            android.view.View r4 = r3.mSearchPlate
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_queryBackground
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            android.support.v4.view.ViewCompat.setBackground(r4, r6)
            android.view.View r4 = r3.mSubmitArea
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_submitBackground
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            android.support.v4.view.ViewCompat.setBackground(r4, r6)
            android.widget.ImageView r4 = r3.mSearchButton
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_searchIcon
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setImageDrawable(r6)
            android.widget.ImageView r4 = r3.mGoButton
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_goIcon
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setImageDrawable(r6)
            android.widget.ImageView r4 = r3.mCloseButton
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_closeIcon
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setImageDrawable(r6)
            android.widget.ImageView r4 = r3.mVoiceButton
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_voiceIcon
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setImageDrawable(r6)
            android.widget.ImageView r4 = r3.mCollapsedIcon
            int r6 = android.support.v7.appcompat.R.styleable.SearchView_searchIcon
            android.graphics.drawable.Drawable r6 = r5.getDrawable(r6)
            r4.setImageDrawable(r6)
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_searchHintIcon
            android.graphics.drawable.Drawable r4 = r5.getDrawable(r4)
            r3.mSearchHintIcon = r4
            android.widget.ImageView r4 = r3.mSearchButton
            android.content.res.Resources r6 = r3.getResources()
            int r2 = android.support.v7.appcompat.R.string.abc_searchview_description_search
            java.lang.String r6 = r6.getString(r2)
            android.support.v7.widget.TooltipCompat.setTooltipText(r4, r6)
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_suggestionRowLayout
            int r6 = android.support.v7.appcompat.R.layout.abc_search_dropdown_item_icons_2line
            int r4 = r5.getResourceId(r4, r6)
            r3.mSuggestionRowLayout = r4
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_commitIcon
            int r4 = r5.getResourceId(r4, r1)
            r3.mSuggestionCommitIconResId = r4
            android.widget.ImageView r4 = r3.mSearchButton
            android.view.View$OnClickListener r6 = r3.mOnClickListener
            r4.setOnClickListener(r6)
            android.widget.ImageView r4 = r3.mCloseButton
            android.view.View$OnClickListener r6 = r3.mOnClickListener
            r4.setOnClickListener(r6)
            android.widget.ImageView r4 = r3.mGoButton
            android.view.View$OnClickListener r6 = r3.mOnClickListener
            r4.setOnClickListener(r6)
            android.widget.ImageView r4 = r3.mVoiceButton
            android.view.View$OnClickListener r6 = r3.mOnClickListener
            r4.setOnClickListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.view.View$OnClickListener r6 = r3.mOnClickListener
            r4.setOnClickListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.text.TextWatcher r6 = r3.mTextWatcher
            r4.addTextChangedListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.widget.TextView$OnEditorActionListener r6 = r3.mOnEditorActionListener
            r4.setOnEditorActionListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.widget.AdapterView$OnItemClickListener r6 = r3.mOnItemClickListener
            r4.setOnItemClickListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.widget.AdapterView$OnItemSelectedListener r6 = r3.mOnItemSelectedListener
            r4.setOnItemSelectedListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.view.View$OnKeyListener r6 = r3.mTextKeyListener
            r4.setOnKeyListener(r6)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            android.support.v7.widget.SearchView$3 r6 = new android.support.v7.widget.SearchView$3
            r6.<init>(r3)
            r4.setOnFocusChangeListener(r6)
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_iconifiedByDefault
            boolean r4 = r5.getBoolean(r4, r0)
            r3.setIconifiedByDefault(r4)
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_android_maxWidth
            r6 = -1
            int r4 = r5.getDimensionPixelSize(r4, r6)
            if (r4 == r6) goto L1a4
            r3.setMaxWidth(r4)
        L1a4:
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_defaultQueryHint
            java.lang.CharSequence r4 = r5.getText(r4)
            r3.mDefaultQueryHint = r4
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_queryHint
            java.lang.CharSequence r4 = r5.getText(r4)
            r3.mQueryHint = r4
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_android_imeOptions
            int r4 = r5.getInt(r4, r6)
            if (r4 == r6) goto L1bf
            r3.setImeOptions(r4)
        L1bf:
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_android_inputType
            int r4 = r5.getInt(r4, r6)
            if (r4 == r6) goto L1ca
            r3.setInputType(r4)
        L1ca:
            int r4 = android.support.v7.appcompat.R.styleable.SearchView_android_focusable
            boolean r4 = r5.getBoolean(r4, r0)
            r3.setFocusable(r4)
            r5.recycle()
            android.content.Intent r4 = new android.content.Intent
            java.lang.String r5 = "android.speech.action.WEB_SEARCH"
            r4.<init>(r5)
            r3.mVoiceWebSearchIntent = r4
            android.content.Intent r4 = r3.mVoiceWebSearchIntent
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r5)
            android.content.Intent r4 = r3.mVoiceWebSearchIntent
            java.lang.String r6 = "android.speech.extra.LANGUAGE_MODEL"
            java.lang.String r0 = "web_search"
            r4.putExtra(r6, r0)
            android.content.Intent r4 = new android.content.Intent
            java.lang.String r6 = "android.speech.action.RECOGNIZE_SPEECH"
            r4.<init>(r6)
            r3.mVoiceAppSearchIntent = r4
            android.content.Intent r4 = r3.mVoiceAppSearchIntent
            r4.addFlags(r5)
            android.support.v7.widget.SearchView$SearchAutoComplete r4 = r3.mSearchSrcTextView
            int r4 = r4.getDropDownAnchor()
            android.view.View r4 = r3.findViewById(r4)
            r3.mDropDownAnchor = r4
            android.view.View r4 = r3.mDropDownAnchor
            if (r4 == 0) goto L215
            android.support.v7.widget.SearchView$4 r5 = new android.support.v7.widget.SearchView$4
            r5.<init>(r3)
            r4.addOnLayoutChangeListener(r5)
        L215:
            boolean r4 = r3.mIconifiedByDefault
            r3.updateViewsVisibility(r4)
            r3.updateQueryHint()
            return
    }

    private android.content.Intent createIntent(java.lang.String r2, android.net.Uri r3, java.lang.String r4, java.lang.String r5, int r6, java.lang.String r7) {
            r1 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r2)
            if (r3 == 0) goto Lf
            r0.setData(r3)
        Lf:
            java.lang.CharSequence r2 = r1.mUserQuery
            java.lang.String r3 = "user_query"
            r0.putExtra(r3, r2)
            if (r5 == 0) goto L1d
            java.lang.String r2 = "query"
            r0.putExtra(r2, r5)
        L1d:
            if (r4 == 0) goto L24
            java.lang.String r2 = "intent_extra_data_key"
            r0.putExtra(r2, r4)
        L24:
            android.os.Bundle r2 = r1.mAppSearchData
            if (r2 == 0) goto L2d
            java.lang.String r3 = "app_data"
            r0.putExtra(r3, r2)
        L2d:
            if (r6 == 0) goto L39
            java.lang.String r2 = "action_key"
            r0.putExtra(r2, r6)
            java.lang.String r2 = "action_msg"
            r0.putExtra(r2, r7)
        L39:
            android.app.SearchableInfo r2 = r1.mSearchable
            android.content.ComponentName r2 = r2.getSearchActivity()
            r0.setComponent(r2)
            return r0
    }

    private android.content.Intent createIntentFromSuggestion(android.database.Cursor r9, int r10, java.lang.String r11) {
            r8 = this;
            r0 = 0
            java.lang.String r1 = "suggest_intent_action"
            java.lang.String r1 = android.support.v7.widget.SuggestionsAdapter.getColumnString(r9, r1)     // Catch: java.lang.RuntimeException -> L61
            if (r1 != 0) goto Lf
            android.app.SearchableInfo r1 = r8.mSearchable     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = r1.getSuggestIntentAction()     // Catch: java.lang.RuntimeException -> L61
        Lf:
            if (r1 != 0) goto L13
            java.lang.String r1 = "android.intent.action.SEARCH"
        L13:
            r2 = r1
            java.lang.String r1 = "suggest_intent_data"
            java.lang.String r1 = android.support.v7.widget.SuggestionsAdapter.getColumnString(r9, r1)     // Catch: java.lang.RuntimeException -> L61
            if (r1 != 0) goto L22
            android.app.SearchableInfo r1 = r8.mSearchable     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = r1.getSuggestIntentData()     // Catch: java.lang.RuntimeException -> L61
        L22:
            if (r1 == 0) goto L44
            java.lang.String r3 = "suggest_intent_data_id"
            java.lang.String r3 = android.support.v7.widget.SuggestionsAdapter.getColumnString(r9, r3)     // Catch: java.lang.RuntimeException -> L61
            if (r3 == 0) goto L44
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L61
            r4.<init>()     // Catch: java.lang.RuntimeException -> L61
            r4.append(r1)     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = "/"
            r4.append(r1)     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = android.net.Uri.encode(r3)     // Catch: java.lang.RuntimeException -> L61
            r4.append(r1)     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = r4.toString()     // Catch: java.lang.RuntimeException -> L61
        L44:
            if (r1 != 0) goto L48
            r3 = r0
            goto L4d
        L48:
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.RuntimeException -> L61
            r3 = r1
        L4d:
            java.lang.String r1 = "suggest_intent_query"
            java.lang.String r5 = android.support.v7.widget.SuggestionsAdapter.getColumnString(r9, r1)     // Catch: java.lang.RuntimeException -> L61
            java.lang.String r1 = "suggest_intent_extra_data"
            java.lang.String r4 = android.support.v7.widget.SuggestionsAdapter.getColumnString(r9, r1)     // Catch: java.lang.RuntimeException -> L61
            r1 = r8
            r6 = r10
            r7 = r11
            android.content.Intent r9 = r1.createIntent(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.RuntimeException -> L61
            return r9
        L61:
            r10 = move-exception
            int r9 = r9.getPosition()     // Catch: java.lang.RuntimeException -> L67
            goto L68
        L67:
            r9 = -1
        L68:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "Search suggestions cursor at row "
            r11.append(r1)
            r11.append(r9)
            java.lang.String r9 = " returned exception."
            r11.append(r9)
            java.lang.String r9 = r11.toString()
            java.lang.String r11 = "SearchView"
            android.util.Log.w(r11, r9, r10)
            return r0
    }

    private android.content.Intent createVoiceAppSearchIntent(android.content.Intent r10, android.app.SearchableInfo r11) {
            r9 = this;
            android.content.ComponentName r0 = r11.getSearchActivity()
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.SEARCH"
            r1.<init>(r2)
            r1.setComponent(r0)
            android.content.Context r2 = r9.getContext()
            r3 = 0
            r4 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r1 = android.app.PendingIntent.getActivity(r2, r3, r1, r4)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            android.os.Bundle r3 = r9.mAppSearchData
            if (r3 == 0) goto L27
            java.lang.String r4 = "app_data"
            r2.putParcelable(r4, r3)
        L27:
            android.content.Intent r3 = new android.content.Intent
            r3.<init>(r10)
            r10 = 1
            android.content.res.Resources r4 = r9.getResources()
            int r5 = r11.getVoiceLanguageModeId()
            if (r5 == 0) goto L40
            int r5 = r11.getVoiceLanguageModeId()
            java.lang.String r5 = r4.getString(r5)
            goto L42
        L40:
            java.lang.String r5 = "free_form"
        L42:
            int r6 = r11.getVoicePromptTextId()
            r7 = 0
            if (r6 == 0) goto L52
            int r6 = r11.getVoicePromptTextId()
            java.lang.String r6 = r4.getString(r6)
            goto L53
        L52:
            r6 = r7
        L53:
            int r8 = r11.getVoiceLanguageId()
            if (r8 == 0) goto L62
            int r8 = r11.getVoiceLanguageId()
            java.lang.String r4 = r4.getString(r8)
            goto L63
        L62:
            r4 = r7
        L63:
            int r8 = r11.getVoiceMaxResults()
            if (r8 == 0) goto L6d
            int r10 = r11.getVoiceMaxResults()
        L6d:
            java.lang.String r11 = "android.speech.extra.LANGUAGE_MODEL"
            r3.putExtra(r11, r5)
            java.lang.String r11 = "android.speech.extra.PROMPT"
            r3.putExtra(r11, r6)
            java.lang.String r11 = "android.speech.extra.LANGUAGE"
            r3.putExtra(r11, r4)
            java.lang.String r11 = "android.speech.extra.MAX_RESULTS"
            r3.putExtra(r11, r10)
            if (r0 != 0) goto L84
            goto L88
        L84:
            java.lang.String r7 = r0.flattenToShortString()
        L88:
            java.lang.String r10 = "calling_package"
            r3.putExtra(r10, r7)
            java.lang.String r10 = "android.speech.extra.RESULTS_PENDINGINTENT"
            r3.putExtra(r10, r1)
            java.lang.String r10 = "android.speech.extra.RESULTS_PENDINGINTENT_BUNDLE"
            r3.putExtra(r10, r2)
            return r3
    }

    private android.content.Intent createVoiceWebSearchIntent(android.content.Intent r2, android.app.SearchableInfo r3) {
            r1 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2)
            android.content.ComponentName r2 = r3.getSearchActivity()
            if (r2 != 0) goto Ld
            r2 = 0
            goto L11
        Ld:
            java.lang.String r2 = r2.flattenToShortString()
        L11:
            java.lang.String r3 = "calling_package"
            r0.putExtra(r3, r2)
            return r0
    }

    private void dismissSuggestions() {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            r0.dismissDropDown()
            return
    }

    private void getChildBoundsWithinSearchView(android.view.View r5, android.graphics.Rect r6) {
            r4 = this;
            int[] r0 = r4.mTemp
            r5.getLocationInWindow(r0)
            int[] r0 = r4.mTemp2
            r4.getLocationInWindow(r0)
            int[] r0 = r4.mTemp
            r1 = 1
            r2 = r0[r1]
            int[] r3 = r4.mTemp2
            r1 = r3[r1]
            int r2 = r2 - r1
            r1 = 0
            r0 = r0[r1]
            r1 = r3[r1]
            int r0 = r0 - r1
            int r1 = r5.getWidth()
            int r1 = r1 + r0
            int r5 = r5.getHeight()
            int r5 = r5 + r2
            r6.set(r0, r2, r1, r5)
            return
    }

    private java.lang.CharSequence getDecoratedHint(java.lang.CharSequence r6) {
            r5 = this;
            boolean r0 = r5.mIconifiedByDefault
            if (r0 == 0) goto L34
            android.graphics.drawable.Drawable r0 = r5.mSearchHintIcon
            if (r0 != 0) goto L9
            goto L34
        L9:
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r5.mSearchSrcTextView
            float r0 = r0.getTextSize()
            double r0 = (double) r0
            r2 = 4608308318706860032(0x3ff4000000000000, double:1.25)
            double r0 = r0 * r2
            int r0 = (int) r0
            android.graphics.drawable.Drawable r1 = r5.mSearchHintIcon
            r2 = 0
            r1.setBounds(r2, r2, r0, r0)
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            java.lang.String r1 = "   "
            r0.<init>(r1)
            android.text.style.ImageSpan r1 = new android.text.style.ImageSpan
            android.graphics.drawable.Drawable r2 = r5.mSearchHintIcon
            r1.<init>(r2)
            r2 = 1
            r3 = 2
            r4 = 33
            r0.setSpan(r1, r2, r3, r4)
            r0.append(r6)
            return r0
        L34:
            return r6
    }

    private int getPreferredHeight() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = android.support.v7.appcompat.R.dimen.abc_search_view_preferred_height
            int r0 = r0.getDimensionPixelSize(r1)
            return r0
    }

    private int getPreferredWidth() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = android.support.v7.appcompat.R.dimen.abc_search_view_preferred_width
            int r0 = r0.getDimensionPixelSize(r1)
            return r0
    }

    private boolean hasVoiceSearch() {
            r4 = this;
            android.app.SearchableInfo r0 = r4.mSearchable
            r1 = 0
            if (r0 == 0) goto L34
            boolean r0 = r0.getVoiceSearchEnabled()
            if (r0 == 0) goto L34
            r0 = 0
            android.app.SearchableInfo r2 = r4.mSearchable
            boolean r2 = r2.getVoiceSearchLaunchWebSearch()
            if (r2 == 0) goto L17
            android.content.Intent r0 = r4.mVoiceWebSearchIntent
            goto L21
        L17:
            android.app.SearchableInfo r2 = r4.mSearchable
            boolean r2 = r2.getVoiceSearchLaunchRecognizer()
            if (r2 == 0) goto L21
            android.content.Intent r0 = r4.mVoiceAppSearchIntent
        L21:
            if (r0 == 0) goto L34
            android.content.Context r2 = r4.getContext()
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r3 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r0 = r2.resolveActivity(r0, r3)
            if (r0 == 0) goto L34
            r1 = 1
        L34:
            return r1
    }

    static boolean isLandscapeMode(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r0 = 2
            if (r1 != r0) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    private boolean isSubmitAreaEnabled() {
            r1 = this;
            boolean r0 = r1.mSubmitButtonEnabled
            if (r0 != 0) goto L8
            boolean r0 = r1.mVoiceButtonEnabled
            if (r0 == 0) goto L10
        L8:
            boolean r0 = r1.isIconified()
            if (r0 != 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    private void launchIntent(android.content.Intent r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.content.Context r0 = r3.getContext()     // Catch: java.lang.RuntimeException -> Lb
            r0.startActivity(r4)     // Catch: java.lang.RuntimeException -> Lb
            goto L22
        Lb:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed launch activity: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "SearchView"
            android.util.Log.e(r1, r4, r0)
        L22:
            return
    }

    private boolean launchSuggestion(int r2, int r3, java.lang.String r4) {
            r1 = this;
            android.support.v4.widget.CursorAdapter r0 = r1.mSuggestionsAdapter
            android.database.Cursor r0 = r0.getCursor()
            if (r0 == 0) goto L17
            boolean r2 = r0.moveToPosition(r2)
            if (r2 == 0) goto L17
            android.content.Intent r2 = r1.createIntentFromSuggestion(r0, r3, r4)
            r1.launchIntent(r2)
            r2 = 1
            return r2
        L17:
            r2 = 0
            return r2
    }

    private void postUpdateFocusedState() {
            r1 = this;
            java.lang.Runnable r0 = r1.mUpdateDrawableStateRunnable
            r1.post(r0)
            return
    }

    private void rewriteQueryFromSuggestion(int r3) {
            r2 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            android.support.v4.widget.CursorAdapter r1 = r2.mSuggestionsAdapter
            android.database.Cursor r1 = r1.getCursor()
            if (r1 != 0) goto Lf
            return
        Lf:
            boolean r3 = r1.moveToPosition(r3)
            if (r3 == 0) goto L25
            android.support.v4.widget.CursorAdapter r3 = r2.mSuggestionsAdapter
            java.lang.CharSequence r3 = r3.convertToString(r1)
            if (r3 == 0) goto L21
            r2.setQuery(r3)
            goto L28
        L21:
            r2.setQuery(r0)
            goto L28
        L25:
            r2.setQuery(r0)
        L28:
            return
    }

    private void setQuery(java.lang.CharSequence r3) {
            r2 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r0.setText(r3)
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto Lf
            r3 = 0
            goto L13
        Lf:
            int r3 = r3.length()
        L13:
            r0.setSelection(r3)
            return
    }

    private void updateCloseButton() {
            r4 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r4.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r0 = r0 ^ r1
            r2 = 0
            if (r0 != 0) goto L19
            boolean r3 = r4.mIconifiedByDefault
            if (r3 == 0) goto L18
            boolean r3 = r4.mExpandedInActionView
            if (r3 != 0) goto L18
            goto L19
        L18:
            r1 = 0
        L19:
            android.widget.ImageView r3 = r4.mCloseButton
            if (r1 == 0) goto L1e
            goto L20
        L1e:
            r2 = 8
        L20:
            r3.setVisibility(r2)
            android.widget.ImageView r1 = r4.mCloseButton
            android.graphics.drawable.Drawable r1 = r1.getDrawable()
            if (r1 == 0) goto L35
            if (r0 == 0) goto L30
            int[] r0 = android.support.v7.widget.SearchView.ENABLED_STATE_SET
            goto L32
        L30:
            int[] r0 = android.support.v7.widget.SearchView.EMPTY_STATE_SET
        L32:
            r1.setState(r0)
        L35:
            return
    }

    private void updateQueryHint() {
            r2 = this;
            java.lang.CharSequence r0 = r2.getQueryHint()
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r2.mSearchSrcTextView
            if (r0 != 0) goto La
            java.lang.String r0 = ""
        La:
            java.lang.CharSequence r0 = r2.getDecoratedHint(r0)
            r1.setHint(r0)
            return
    }

    private void updateSearchAutoComplete() {
            r5 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r5.mSearchSrcTextView
            android.app.SearchableInfo r1 = r5.mSearchable
            int r1 = r1.getSuggestThreshold()
            r0.setThreshold(r1)
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r5.mSearchSrcTextView
            android.app.SearchableInfo r1 = r5.mSearchable
            int r1 = r1.getImeOptions()
            r0.setImeOptions(r1)
            android.app.SearchableInfo r0 = r5.mSearchable
            int r0 = r0.getInputType()
            r1 = r0 & 15
            r2 = 1
            if (r1 != r2) goto L33
            r1 = -65537(0xfffffffffffeffff, float:NaN)
            r0 = r0 & r1
            android.app.SearchableInfo r1 = r5.mSearchable
            java.lang.String r1 = r1.getSuggestAuthority()
            if (r1 == 0) goto L33
            r1 = 65536(0x10000, float:9.1835E-41)
            r0 = r0 | r1
            r1 = 524288(0x80000, float:7.34684E-40)
            r0 = r0 | r1
        L33:
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r5.mSearchSrcTextView
            r1.setInputType(r0)
            android.support.v4.widget.CursorAdapter r0 = r5.mSuggestionsAdapter
            if (r0 == 0) goto L40
            r1 = 0
            r0.changeCursor(r1)
        L40:
            android.app.SearchableInfo r0 = r5.mSearchable
            java.lang.String r0 = r0.getSuggestAuthority()
            if (r0 == 0) goto L6a
            android.support.v7.widget.SuggestionsAdapter r0 = new android.support.v7.widget.SuggestionsAdapter
            android.content.Context r1 = r5.getContext()
            android.app.SearchableInfo r3 = r5.mSearchable
            java.util.WeakHashMap<java.lang.String, android.graphics.drawable.Drawable$ConstantState> r4 = r5.mOutsideDrawablesCache
            r0.<init>(r1, r5, r3, r4)
            r5.mSuggestionsAdapter = r0
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r5.mSearchSrcTextView
            android.support.v4.widget.CursorAdapter r1 = r5.mSuggestionsAdapter
            r0.setAdapter(r1)
            android.support.v4.widget.CursorAdapter r0 = r5.mSuggestionsAdapter
            android.support.v7.widget.SuggestionsAdapter r0 = (android.support.v7.widget.SuggestionsAdapter) r0
            boolean r1 = r5.mQueryRefinement
            if (r1 == 0) goto L67
            r2 = 2
        L67:
            r0.setQueryRefinement(r2)
        L6a:
            return
    }

    private void updateSubmitArea() {
            r2 = this;
            boolean r0 = r2.isSubmitAreaEnabled()
            if (r0 == 0) goto L18
            android.widget.ImageView r0 = r2.mGoButton
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L16
            android.widget.ImageView r0 = r2.mVoiceButton
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L18
        L16:
            r0 = 0
            goto L1a
        L18:
            r0 = 8
        L1a:
            android.view.View r1 = r2.mSubmitArea
            r1.setVisibility(r0)
            return
    }

    private void updateSubmitButton(boolean r2) {
            r1 = this;
            boolean r0 = r1.mSubmitButtonEnabled
            if (r0 == 0) goto L18
            boolean r0 = r1.isSubmitAreaEnabled()
            if (r0 == 0) goto L18
            boolean r0 = r1.hasFocus()
            if (r0 == 0) goto L18
            if (r2 != 0) goto L16
            boolean r2 = r1.mVoiceButtonEnabled
            if (r2 != 0) goto L18
        L16:
            r2 = 0
            goto L1a
        L18:
            r2 = 8
        L1a:
            android.widget.ImageView r0 = r1.mGoButton
            r0.setVisibility(r2)
            return
    }

    private void updateViewsVisibility(boolean r7) {
            r6 = this;
            r6.mIconified = r7
            r0 = 8
            r1 = 0
            if (r7 == 0) goto L9
            r2 = 0
            goto Lb
        L9:
            r2 = 8
        Lb:
            android.support.v7.widget.SearchView$SearchAutoComplete r3 = r6.mSearchSrcTextView
            android.text.Editable r3 = r3.getText()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r4 = 1
            r3 = r3 ^ r4
            android.widget.ImageView r5 = r6.mSearchButton
            r5.setVisibility(r2)
            r6.updateSubmitButton(r3)
            android.view.View r2 = r6.mSearchEditFrame
            if (r7 == 0) goto L26
            r7 = 8
            goto L27
        L26:
            r7 = 0
        L27:
            r2.setVisibility(r7)
            android.widget.ImageView r7 = r6.mCollapsedIcon
            android.graphics.drawable.Drawable r7 = r7.getDrawable()
            if (r7 == 0) goto L38
            boolean r7 = r6.mIconifiedByDefault
            if (r7 == 0) goto L37
            goto L38
        L37:
            r0 = 0
        L38:
            android.widget.ImageView r7 = r6.mCollapsedIcon
            r7.setVisibility(r0)
            r6.updateCloseButton()
            if (r3 != 0) goto L43
            r1 = 1
        L43:
            r6.updateVoiceButton(r1)
            r6.updateSubmitArea()
            return
    }

    private void updateVoiceButton(boolean r3) {
            r2 = this;
            boolean r0 = r2.mVoiceButtonEnabled
            r1 = 8
            if (r0 == 0) goto L15
            boolean r0 = r2.isIconified()
            if (r0 != 0) goto L15
            if (r3 == 0) goto L15
            r3 = 0
            android.widget.ImageView r0 = r2.mGoButton
            r0.setVisibility(r1)
            goto L17
        L15:
            r3 = 8
        L17:
            android.widget.ImageView r0 = r2.mVoiceButton
            r0.setVisibility(r3)
            return
    }

    void adjustDropDownSizeAndPosition() {
            r6 = this;
            android.view.View r0 = r6.mDropDownAnchor
            int r0 = r0.getWidth()
            r1 = 1
            if (r0 <= r1) goto L5f
            android.content.Context r0 = r6.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.view.View r1 = r6.mSearchPlate
            int r1 = r1.getPaddingLeft()
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            boolean r3 = android.support.v7.widget.ViewUtils.isLayoutRtl(r6)
            boolean r4 = r6.mIconifiedByDefault
            if (r4 == 0) goto L32
            int r4 = android.support.v7.appcompat.R.dimen.abc_dropdownitem_icon_width
            int r4 = r0.getDimensionPixelSize(r4)
            int r5 = android.support.v7.appcompat.R.dimen.abc_dropdownitem_text_padding_left
            int r0 = r0.getDimensionPixelSize(r5)
            int r4 = r4 + r0
            goto L33
        L32:
            r4 = 0
        L33:
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r6.mSearchSrcTextView
            android.graphics.drawable.Drawable r0 = r0.getDropDownBackground()
            r0.getPadding(r2)
            if (r3 == 0) goto L42
            int r0 = r2.left
            int r0 = -r0
            goto L47
        L42:
            int r0 = r2.left
            int r0 = r0 + r4
            int r0 = r1 - r0
        L47:
            android.support.v7.widget.SearchView$SearchAutoComplete r3 = r6.mSearchSrcTextView
            r3.setDropDownHorizontalOffset(r0)
            android.view.View r0 = r6.mDropDownAnchor
            int r0 = r0.getWidth()
            int r3 = r2.left
            int r0 = r0 + r3
            int r2 = r2.right
            int r0 = r0 + r2
            int r0 = r0 + r4
            int r0 = r0 - r1
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r6.mSearchSrcTextView
            r1.setDropDownWidth(r0)
        L5f:
            return
    }

    @Override
    public void clearFocus() {
            r2 = this;
            r0 = 1
            r2.mClearingFocus = r0
            super.clearFocus()
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r0.clearFocus()
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r1 = 0
            r0.setImeVisibility(r1)
            r2.mClearingFocus = r1
            return
    }

    void forceSuggestionQuery() {
            r2 = this;
            android.support.v7.widget.SearchView$AutoCompleteTextViewReflector r0 = android.support.v7.widget.SearchView.HIDDEN_METHOD_INVOKER
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r2.mSearchSrcTextView
            r0.doBeforeTextChanged(r1)
            android.support.v7.widget.SearchView$AutoCompleteTextViewReflector r0 = android.support.v7.widget.SearchView.HIDDEN_METHOD_INVOKER
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r2.mSearchSrcTextView
            r0.doAfterTextChanged(r1)
            return
    }

    public int getImeOptions() {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            int r0 = r0.getImeOptions()
            return r0
    }

    public int getInputType() {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            int r0 = r0.getInputType()
            return r0
    }

    public int getMaxWidth() {
            r1 = this;
            int r0 = r1.mMaxWidth
            return r0
    }

    public java.lang.CharSequence getQuery() {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            return r0
    }

    @android.support.annotation.Nullable
    public java.lang.CharSequence getQueryHint() {
            r2 = this;
            java.lang.CharSequence r0 = r2.mQueryHint
            if (r0 == 0) goto L5
            goto L20
        L5:
            android.app.SearchableInfo r0 = r2.mSearchable
            if (r0 == 0) goto L1e
            int r0 = r0.getHintId()
            if (r0 == 0) goto L1e
            android.content.Context r0 = r2.getContext()
            android.app.SearchableInfo r1 = r2.mSearchable
            int r1 = r1.getHintId()
            java.lang.CharSequence r0 = r0.getText(r1)
            goto L20
        L1e:
            java.lang.CharSequence r0 = r2.mDefaultQueryHint
        L20:
            return r0
    }

    int getSuggestionCommitIconResId() {
            r1 = this;
            int r0 = r1.mSuggestionCommitIconResId
            return r0
    }

    int getSuggestionRowLayout() {
            r1 = this;
            int r0 = r1.mSuggestionRowLayout
            return r0
    }

    public android.support.v4.widget.CursorAdapter getSuggestionsAdapter() {
            r1 = this;
            android.support.v4.widget.CursorAdapter r0 = r1.mSuggestionsAdapter
            return r0
    }

    public boolean isIconfiedByDefault() {
            r1 = this;
            boolean r0 = r1.mIconifiedByDefault
            return r0
    }

    public boolean isIconified() {
            r1 = this;
            boolean r0 = r1.mIconified
            return r0
    }

    public boolean isQueryRefinementEnabled() {
            r1 = this;
            boolean r0 = r1.mQueryRefinement
            return r0
    }

    public boolean isSubmitButtonEnabled() {
            r1 = this;
            boolean r0 = r1.mSubmitButtonEnabled
            return r0
    }

    void launchQuerySearch(int r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            java.lang.String r1 = "android.intent.action.SEARCH"
            r2 = 0
            r3 = 0
            r0 = r7
            r4 = r10
            r5 = r8
            r6 = r9
            android.content.Intent r8 = r0.createIntent(r1, r2, r3, r4, r5, r6)
            android.content.Context r9 = r7.getContext()
            r9.startActivity(r8)
            return
    }

    @Override
    public void onActionViewCollapsed() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = ""
            r3.setQuery(r1, r0)
            r3.clearFocus()
            r1 = 1
            r3.updateViewsVisibility(r1)
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r3.mSearchSrcTextView
            int r2 = r3.mCollapsedImeOptions
            r1.setImeOptions(r2)
            r3.mExpandedInActionView = r0
            return
    }

    @Override
    public void onActionViewExpanded() {
            r3 = this;
            boolean r0 = r3.mExpandedInActionView
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r3.mExpandedInActionView = r0
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            int r0 = r0.getImeOptions()
            r3.mCollapsedImeOptions = r0
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            int r1 = r3.mCollapsedImeOptions
            r2 = 33554432(0x2000000, float:9.403955E-38)
            r1 = r1 | r2
            r0.setImeOptions(r1)
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            java.lang.String r1 = ""
            r0.setText(r1)
            r0 = 0
            r3.setIconified(r0)
            return
    }

    void onCloseClicked() {
            r3 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            if (r0 == 0) goto L22
            boolean r0 = r3.mIconifiedByDefault
            if (r0 == 0) goto L33
            android.support.v7.widget.SearchView$OnCloseListener r0 = r3.mOnCloseListener
            if (r0 == 0) goto L1b
            boolean r0 = r0.onClose()
            if (r0 != 0) goto L33
        L1b:
            r3.clearFocus()
            r3.updateViewsVisibility(r1)
            goto L33
        L22:
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            java.lang.String r2 = ""
            r0.setText(r2)
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            r0.requestFocus()
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            r0.setImeVisibility(r1)
        L33:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            java.lang.Runnable r0 = r1.mUpdateDrawableStateRunnable
            r1.removeCallbacks(r0)
            java.lang.Runnable r0 = r1.mReleaseCursorRunnable
            r1.post(r0)
            super.onDetachedFromWindow()
            return
    }

    boolean onItemClicked(int r1, int r2, java.lang.String r3) {
            r0 = this;
            android.support.v7.widget.SearchView$OnSuggestionListener r2 = r0.mOnSuggestionListener
            r3 = 0
            if (r2 == 0) goto Ld
            boolean r2 = r2.onSuggestionClick(r1)
            if (r2 != 0) goto Lc
            goto Ld
        Lc:
            return r3
        Ld:
            r2 = 0
            r0.launchSuggestion(r1, r3, r2)
            android.support.v7.widget.SearchView$SearchAutoComplete r1 = r0.mSearchSrcTextView
            r1.setImeVisibility(r3)
            r0.dismissSuggestions()
            r1 = 1
            return r1
    }

    boolean onItemSelected(int r2) {
            r1 = this;
            android.support.v7.widget.SearchView$OnSuggestionListener r0 = r1.mOnSuggestionListener
            if (r0 == 0) goto Ld
            boolean r0 = r0.onSuggestionSelect(r2)
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            return r2
        Ld:
            r1.rewriteQueryFromSuggestion(r2)
            r2 = 1
            return r2
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            super.onLayout(r2, r3, r4, r5, r6)
            if (r2 == 0) goto L39
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            android.graphics.Rect r3 = r1.mSearchSrcTextViewBounds
            r1.getChildBoundsWithinSearchView(r2, r3)
            android.graphics.Rect r2 = r1.mSearchSrtTextViewBoundsExpanded
            android.graphics.Rect r3 = r1.mSearchSrcTextViewBounds
            int r3 = r3.left
            r5 = 0
            android.graphics.Rect r0 = r1.mSearchSrcTextViewBounds
            int r0 = r0.right
            int r6 = r6 - r4
            r2.set(r3, r5, r0, r6)
            android.support.v7.widget.SearchView$UpdatableTouchDelegate r2 = r1.mTouchDelegate
            if (r2 != 0) goto L32
            android.support.v7.widget.SearchView$UpdatableTouchDelegate r2 = new android.support.v7.widget.SearchView$UpdatableTouchDelegate
            android.graphics.Rect r3 = r1.mSearchSrtTextViewBoundsExpanded
            android.graphics.Rect r4 = r1.mSearchSrcTextViewBounds
            android.support.v7.widget.SearchView$SearchAutoComplete r5 = r1.mSearchSrcTextView
            r2.<init>(r3, r4, r5)
            r1.mTouchDelegate = r2
            android.support.v7.widget.SearchView$UpdatableTouchDelegate r2 = r1.mTouchDelegate
            r1.setTouchDelegate(r2)
            goto L39
        L32:
            android.graphics.Rect r3 = r1.mSearchSrtTextViewBoundsExpanded
            android.graphics.Rect r4 = r1.mSearchSrcTextViewBounds
            r2.setBounds(r3, r4)
        L39:
            return
    }

    @Override
    protected void onMeasure(int r4, int r5) {
            r3 = this;
            boolean r0 = r3.isIconified()
            if (r0 == 0) goto La
            super.onMeasure(r4, r5)
            return
        La:
            int r0 = android.view.View.MeasureSpec.getMode(r4)
            int r4 = android.view.View.MeasureSpec.getSize(r4)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 == r1) goto L30
            if (r0 == 0) goto L26
            if (r0 == r2) goto L1d
            goto L41
        L1d:
            int r0 = r3.mMaxWidth
            if (r0 <= 0) goto L41
            int r4 = java.lang.Math.min(r0, r4)
            goto L41
        L26:
            int r4 = r3.mMaxWidth
            if (r4 <= 0) goto L2b
            goto L41
        L2b:
            int r4 = r3.getPreferredWidth()
            goto L41
        L30:
            int r0 = r3.mMaxWidth
            if (r0 <= 0) goto L39
            int r4 = java.lang.Math.min(r0, r4)
            goto L41
        L39:
            int r0 = r3.getPreferredWidth()
            int r4 = java.lang.Math.min(r0, r4)
        L41:
            int r0 = android.view.View.MeasureSpec.getMode(r5)
            int r5 = android.view.View.MeasureSpec.getSize(r5)
            if (r0 == r1) goto L53
            if (r0 == 0) goto L4e
            goto L5b
        L4e:
            int r5 = r3.getPreferredHeight()
            goto L5b
        L53:
            int r0 = r3.getPreferredHeight()
            int r5 = java.lang.Math.min(r0, r5)
        L5b:
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r2)
            int r5 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r2)
            super.onMeasure(r4, r5)
            return
    }

    void onQueryRefine(java.lang.CharSequence r1) {
            r0 = this;
            r0.setQuery(r1)
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.SearchView.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.v7.widget.SearchView$SavedState r2 = (android.support.v7.widget.SearchView.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            boolean r2 = r2.isIconified
            r1.updateViewsVisibility(r2)
            r1.requestLayout()
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.v7.widget.SearchView$SavedState r1 = new android.support.v7.widget.SearchView$SavedState
            r1.<init>(r0)
            boolean r0 = r2.isIconified()
            r1.isIconified = r0
            return r1
    }

    void onSearchClicked() {
            r2 = this;
            r0 = 0
            r2.updateViewsVisibility(r0)
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r0.requestFocus()
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r1 = 1
            r0.setImeVisibility(r1)
            android.view.View$OnClickListener r0 = r2.mOnSearchClickListener
            if (r0 == 0) goto L16
            r0.onClick(r2)
        L16:
            return
    }

    void onSubmitQuery() {
            r3 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            if (r0 == 0) goto L31
            int r1 = android.text.TextUtils.getTrimmedLength(r0)
            if (r1 <= 0) goto L31
            android.support.v7.widget.SearchView$OnQueryTextListener r1 = r3.mOnQueryChangeListener
            if (r1 == 0) goto L1c
            java.lang.String r2 = r0.toString()
            boolean r1 = r1.onQueryTextSubmit(r2)
            if (r1 != 0) goto L31
        L1c:
            android.app.SearchableInfo r1 = r3.mSearchable
            r2 = 0
            if (r1 == 0) goto L29
            r1 = 0
            java.lang.String r0 = r0.toString()
            r3.launchQuerySearch(r2, r1, r0)
        L29:
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r3.mSearchSrcTextView
            r0.setImeVisibility(r2)
            r3.dismissSuggestions()
        L31:
            return
    }

    boolean onSuggestionsKey(android.view.View r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            android.app.SearchableInfo r2 = r1.mSearchable
            r0 = 0
            if (r2 != 0) goto L6
            return r0
        L6:
            android.support.v4.widget.CursorAdapter r2 = r1.mSuggestionsAdapter
            if (r2 != 0) goto Lb
            return r0
        Lb:
            int r2 = r4.getAction()
            if (r2 != 0) goto L68
            boolean r2 = r4.hasNoModifiers()
            if (r2 == 0) goto L68
            r2 = 66
            if (r3 == r2) goto L5c
            r2 = 84
            if (r3 == r2) goto L5c
            r2 = 61
            if (r3 != r2) goto L24
            goto L5c
        L24:
            r2 = 21
            if (r3 == r2) goto L3a
            r4 = 22
            if (r3 != r4) goto L2d
            goto L3a
        L2d:
            r2 = 19
            if (r3 != r2) goto L68
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            int r2 = r2.getListSelection()
            if (r2 != 0) goto L68
            return r0
        L3a:
            if (r3 != r2) goto L3e
            r2 = 0
            goto L44
        L3e:
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            int r2 = r2.length()
        L44:
            android.support.v7.widget.SearchView$SearchAutoComplete r3 = r1.mSearchSrcTextView
            r3.setSelection(r2)
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            r2.setListSelection(r0)
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            r2.clearListSelection()
            android.support.v7.widget.SearchView$AutoCompleteTextViewReflector r2 = android.support.v7.widget.SearchView.HIDDEN_METHOD_INVOKER
            android.support.v7.widget.SearchView$SearchAutoComplete r3 = r1.mSearchSrcTextView
            r4 = 1
            r2.ensureImeVisible(r3, r4)
            return r4
        L5c:
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            int r2 = r2.getListSelection()
            r3 = 0
            boolean r2 = r1.onItemClicked(r2, r0, r3)
            return r2
        L68:
            return r0
    }

    void onTextChanged(java.lang.CharSequence r3) {
            r2 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            android.text.Editable r0 = r0.getText()
            r2.mUserQuery = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r0 = r0 ^ r1
            r2.updateSubmitButton(r0)
            if (r0 != 0) goto L14
            goto L15
        L14:
            r1 = 0
        L15:
            r2.updateVoiceButton(r1)
            r2.updateCloseButton()
            r2.updateSubmitArea()
            android.support.v7.widget.SearchView$OnQueryTextListener r0 = r2.mOnQueryChangeListener
            if (r0 == 0) goto L33
            java.lang.CharSequence r0 = r2.mOldQueryText
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 != 0) goto L33
            android.support.v7.widget.SearchView$OnQueryTextListener r0 = r2.mOnQueryChangeListener
            java.lang.String r1 = r3.toString()
            r0.onQueryTextChange(r1)
        L33:
            java.lang.String r3 = r3.toString()
            r2.mOldQueryText = r3
            return
    }

    void onTextFocusChanged() {
            r1 = this;
            boolean r0 = r1.isIconified()
            r1.updateViewsVisibility(r0)
            r1.postUpdateFocusedState()
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            boolean r0 = r0.hasFocus()
            if (r0 == 0) goto L15
            r1.forceSuggestionQuery()
        L15:
            return
    }

    void onVoiceClicked() {
            r2 = this;
            android.app.SearchableInfo r0 = r2.mSearchable
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r0.getVoiceSearchLaunchWebSearch()     // Catch: android.content.ActivityNotFoundException -> L2d
            if (r1 == 0) goto L19
            android.content.Intent r1 = r2.mVoiceWebSearchIntent     // Catch: android.content.ActivityNotFoundException -> L2d
            android.content.Intent r0 = r2.createVoiceWebSearchIntent(r1, r0)     // Catch: android.content.ActivityNotFoundException -> L2d
            android.content.Context r1 = r2.getContext()     // Catch: android.content.ActivityNotFoundException -> L2d
            r1.startActivity(r0)     // Catch: android.content.ActivityNotFoundException -> L2d
            goto L34
        L19:
            boolean r1 = r0.getVoiceSearchLaunchRecognizer()     // Catch: android.content.ActivityNotFoundException -> L2d
            if (r1 == 0) goto L34
            android.content.Intent r1 = r2.mVoiceAppSearchIntent     // Catch: android.content.ActivityNotFoundException -> L2d
            android.content.Intent r0 = r2.createVoiceAppSearchIntent(r1, r0)     // Catch: android.content.ActivityNotFoundException -> L2d
            android.content.Context r1 = r2.getContext()     // Catch: android.content.ActivityNotFoundException -> L2d
            r1.startActivity(r0)     // Catch: android.content.ActivityNotFoundException -> L2d
            goto L34
        L2d:
            java.lang.String r0 = "SearchView"
            java.lang.String r1 = "Could not find voice search activity"
            android.util.Log.w(r0, r1)
        L34:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            r0.postUpdateFocusedState()
            return
    }

    @Override
    public boolean requestFocus(int r3, android.graphics.Rect r4) {
            r2 = this;
            boolean r0 = r2.mClearingFocus
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            boolean r0 = r2.isFocusable()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            boolean r0 = r2.isIconified()
            if (r0 != 0) goto L1f
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            boolean r3 = r0.requestFocus(r3, r4)
            if (r3 == 0) goto L1e
            r2.updateViewsVisibility(r1)
        L1e:
            return r3
        L1f:
            boolean r3 = super.requestFocus(r3, r4)
            return r3
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setAppSearchData(android.os.Bundle r1) {
            r0 = this;
            r0.mAppSearchData = r1
            return
    }

    public void setIconified(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L6
            r0.onCloseClicked()
            goto L9
        L6:
            r0.onSearchClicked()
        L9:
            return
    }

    public void setIconifiedByDefault(boolean r2) {
            r1 = this;
            boolean r0 = r1.mIconifiedByDefault
            if (r0 != r2) goto L5
            return
        L5:
            r1.mIconifiedByDefault = r2
            r1.updateViewsVisibility(r2)
            r1.updateQueryHint()
            return
    }

    public void setImeOptions(int r2) {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            r0.setImeOptions(r2)
            return
    }

    public void setInputType(int r2) {
            r1 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r1.mSearchSrcTextView
            r0.setInputType(r2)
            return
    }

    public void setMaxWidth(int r1) {
            r0 = this;
            r0.mMaxWidth = r1
            r0.requestLayout()
            return
    }

    public void setOnCloseListener(android.support.v7.widget.SearchView.OnCloseListener r1) {
            r0 = this;
            r0.mOnCloseListener = r1
            return
    }

    public void setOnQueryTextFocusChangeListener(android.view.View.OnFocusChangeListener r1) {
            r0 = this;
            r0.mOnQueryTextFocusChangeListener = r1
            return
    }

    public void setOnQueryTextListener(android.support.v7.widget.SearchView.OnQueryTextListener r1) {
            r0 = this;
            r0.mOnQueryChangeListener = r1
            return
    }

    public void setOnSearchClickListener(android.view.View.OnClickListener r1) {
            r0 = this;
            r0.mOnSearchClickListener = r1
            return
    }

    public void setOnSuggestionListener(android.support.v7.widget.SearchView.OnSuggestionListener r1) {
            r0 = this;
            r0.mOnSuggestionListener = r1
            return
    }

    public void setQuery(java.lang.CharSequence r3, boolean r4) {
            r2 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            r0.setText(r3)
            if (r3 == 0) goto L12
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            int r1 = r0.length()
            r0.setSelection(r1)
            r2.mUserQuery = r3
        L12:
            if (r4 == 0) goto L1d
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L1d
            r2.onSubmitQuery()
        L1d:
            return
    }

    public void setQueryHint(@android.support.annotation.Nullable java.lang.CharSequence r1) {
            r0 = this;
            r0.mQueryHint = r1
            r0.updateQueryHint()
            return
    }

    public void setQueryRefinementEnabled(boolean r3) {
            r2 = this;
            r2.mQueryRefinement = r3
            android.support.v4.widget.CursorAdapter r0 = r2.mSuggestionsAdapter
            boolean r1 = r0 instanceof android.support.v7.widget.SuggestionsAdapter
            if (r1 == 0) goto L12
            android.support.v7.widget.SuggestionsAdapter r0 = (android.support.v7.widget.SuggestionsAdapter) r0
            if (r3 == 0) goto Le
            r3 = 2
            goto Lf
        Le:
            r3 = 1
        Lf:
            r0.setQueryRefinement(r3)
        L12:
            return
    }

    public void setSearchableInfo(android.app.SearchableInfo r2) {
            r1 = this;
            r1.mSearchable = r2
            android.app.SearchableInfo r2 = r1.mSearchable
            if (r2 == 0) goto Lc
            r1.updateSearchAutoComplete()
            r1.updateQueryHint()
        Lc:
            boolean r2 = r1.hasVoiceSearch()
            r1.mVoiceButtonEnabled = r2
            boolean r2 = r1.mVoiceButtonEnabled
            if (r2 == 0) goto L1d
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            java.lang.String r0 = "nm"
            r2.setPrivateImeOptions(r0)
        L1d:
            boolean r2 = r1.isIconified()
            r1.updateViewsVisibility(r2)
            return
    }

    public void setSubmitButtonEnabled(boolean r1) {
            r0 = this;
            r0.mSubmitButtonEnabled = r1
            boolean r1 = r0.isIconified()
            r0.updateViewsVisibility(r1)
            return
    }

    public void setSuggestionsAdapter(android.support.v4.widget.CursorAdapter r2) {
            r1 = this;
            r1.mSuggestionsAdapter = r2
            android.support.v7.widget.SearchView$SearchAutoComplete r2 = r1.mSearchSrcTextView
            android.support.v4.widget.CursorAdapter r0 = r1.mSuggestionsAdapter
            r2.setAdapter(r0)
            return
    }

    void updateFocusedState() {
            r2 = this;
            android.support.v7.widget.SearchView$SearchAutoComplete r0 = r2.mSearchSrcTextView
            boolean r0 = r0.hasFocus()
            if (r0 == 0) goto Lb
            int[] r0 = android.support.v7.widget.SearchView.FOCUSED_STATE_SET
            goto Ld
        Lb:
            int[] r0 = android.support.v7.widget.SearchView.EMPTY_STATE_SET
        Ld:
            android.view.View r1 = r2.mSearchPlate
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            if (r1 == 0) goto L18
            r1.setState(r0)
        L18:
            android.view.View r1 = r2.mSubmitArea
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            if (r1 == 0) goto L23
            r1.setState(r0)
        L23:
            r2.invalidate()
            return
    }
}
