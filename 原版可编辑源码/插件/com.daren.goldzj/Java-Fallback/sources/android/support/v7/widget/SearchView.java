package android.support.v7.widget;

import android.app.PendingIntent;
import android.app.SearchableInfo;
import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.AbsSavedState;
import android.support.v4.view.ViewCompat;
import android.support.v4.widget.CursorAdapter;
import android.support.v7.appcompat.R;
import android.support.v7.view.CollapsibleActionView;
import android.text.Editable;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import android.text.TextWatcher;
import android.text.style.ImageSpan;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.TouchDelegate;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.AutoCompleteTextView;
import android.widget.ImageView;
import android.widget.TextView;
import java.lang.reflect.Method;
import java.util.WeakHashMap;

public class SearchView extends LinearLayoutCompat implements CollapsibleActionView {
    static final boolean DBG = false;
    static final AutoCompleteTextViewReflector HIDDEN_METHOD_INVOKER = null;
    private static final String IME_OPTION_NO_MICROPHONE = "nm";
    static final String LOG_TAG = "SearchView";
    private Bundle mAppSearchData;
    private boolean mClearingFocus;
    final ImageView mCloseButton;
    private final ImageView mCollapsedIcon;
    private int mCollapsedImeOptions;
    private final CharSequence mDefaultQueryHint;
    private final View mDropDownAnchor;
    private boolean mExpandedInActionView;
    final ImageView mGoButton;
    private boolean mIconified;
    private boolean mIconifiedByDefault;
    private int mMaxWidth;
    private CharSequence mOldQueryText;
    private final View.OnClickListener mOnClickListener;
    private OnCloseListener mOnCloseListener;
    private final TextView.OnEditorActionListener mOnEditorActionListener;
    private final AdapterView.OnItemClickListener mOnItemClickListener;
    private final AdapterView.OnItemSelectedListener mOnItemSelectedListener;
    private OnQueryTextListener mOnQueryChangeListener;
    View.OnFocusChangeListener mOnQueryTextFocusChangeListener;
    private View.OnClickListener mOnSearchClickListener;
    private OnSuggestionListener mOnSuggestionListener;
    private final WeakHashMap<String, Drawable.ConstantState> mOutsideDrawablesCache;
    private CharSequence mQueryHint;
    private boolean mQueryRefinement;
    private Runnable mReleaseCursorRunnable;
    final ImageView mSearchButton;
    private final View mSearchEditFrame;
    private final Drawable mSearchHintIcon;
    private final View mSearchPlate;
    final SearchAutoComplete mSearchSrcTextView;
    private Rect mSearchSrcTextViewBounds;
    private Rect mSearchSrtTextViewBoundsExpanded;
    SearchableInfo mSearchable;
    private final View mSubmitArea;
    private boolean mSubmitButtonEnabled;
    private final int mSuggestionCommitIconResId;
    private final int mSuggestionRowLayout;
    CursorAdapter mSuggestionsAdapter;
    private int[] mTemp;
    private int[] mTemp2;
    View.OnKeyListener mTextKeyListener;
    private TextWatcher mTextWatcher;
    private UpdatableTouchDelegate mTouchDelegate;
    private final Runnable mUpdateDrawableStateRunnable;
    private CharSequence mUserQuery;
    private final Intent mVoiceAppSearchIntent;
    final ImageView mVoiceButton;
    private boolean mVoiceButtonEnabled;
    private final Intent mVoiceWebSearchIntent;

    private static class AutoCompleteTextViewReflector {
        private Method doAfterTextChanged;
        private Method doBeforeTextChanged;
        private Method ensureImeVisible;
        private Method showSoftInputUnchecked;

        AutoCompleteTextViewReflector() {
            this.doBeforeTextChanged = AutoCompleteTextView.class.getDeclaredMethod("doBeforeTextChanged", new Class[0]);     // Catch: NoSuchMethodException -> L7
            this.doBeforeTextChanged.setAccessible(true);     // Catch: NoSuchMethodException -> L7
        L12:
            this.doAfterTextChanged = AutoCompleteTextView.class.getDeclaredMethod("doAfterTextChanged", new Class[0]);     // Catch: NoSuchMethodException -> L8
            this.doAfterTextChanged.setAccessible(true);     // Catch: NoSuchMethodException -> L8
        L10:
            this.ensureImeVisible = AutoCompleteTextView.class.getMethod("ensureImeVisible", new Class[]{Boolean.TYPE});     // Catch: NoSuchMethodException -> L9
            this.ensureImeVisible.setAccessible(true);     // Catch: NoSuchMethodException -> L9
            return;
        }

        void doBeforeTextChanged(AutoCompleteTextView r3) {
            Method r0 = this.doBeforeTextChanged;
            if (r0 != null) goto L8;
            return;
        L8:
            r0.invoke(r3, new Object[0]);     // Catch: Exception -> L7
            return;
        }

        void doAfterTextChanged(AutoCompleteTextView r3) {
            Method r0 = this.doAfterTextChanged;
            if (r0 != null) goto L8;
            return;
        L8:
            r0.invoke(r3, new Object[0]);     // Catch: Exception -> L7
            return;
        }

        void ensureImeVisible(AutoCompleteTextView r4, boolean r5) {
            Method r0 = this.ensureImeVisible;
            if (r0 != null) goto L8;
            return;
        L8:
            r0.invoke(r4, new Object[]{Boolean.valueOf(r5)});     // Catch: Exception -> L7
            return;
        }
    }

    public interface OnCloseListener {
        boolean onClose();
    }

    public interface OnQueryTextListener {
        boolean onQueryTextChange(String r1);

        boolean onQueryTextSubmit(String r1);
    }

    public interface OnSuggestionListener {
        boolean onSuggestionClick(int r1);

        boolean onSuggestionSelect(int r1);
    }

    static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        boolean isIconified;

        SavedState(Parcelable r1) {
            super(r1);
        }

        public SavedState(Parcel r1, ClassLoader r2) {
            super(r1, r2);
            this.isIconified = ((Boolean) r1.readValue(null)).booleanValue();
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            super.writeToParcel(r1, r2);
            r1.writeValue(Boolean.valueOf(this.isIconified));
        }

        public String toString() {
            return "SearchView.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " isIconified=" + this.isIconified + "}";
        }

        static {
            CREATOR = new 1();
        }
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static class SearchAutoComplete extends AppCompatAutoCompleteTextView {
        private boolean mHasPendingShowSoftInputRequest;
        final Runnable mRunShowSoftInputIfNecessary;
        private SearchView mSearchView;
        private int mThreshold;

        @Override
        public void performCompletion() {
        }

        @Override
        protected void replaceText(CharSequence r1) {
        }

        public SearchAutoComplete(Context r2) {
            this(r2, null);
        }

        public SearchAutoComplete(Context r2, AttributeSet r3) {
            this(r2, r3, R.attr.autoCompleteTextViewStyle);
        }

        public SearchAutoComplete(Context r1, AttributeSet r2, int r3) {
            super(r1, r2, r3);
            this.mRunShowSoftInputIfNecessary = new 1(this);
            this.mThreshold = getThreshold();
        }

        @Override
        protected void onFinishInflate() {
            super.onFinishInflate();
            setMinWidth((int) TypedValue.applyDimension(1, getSearchViewTextMinWidthDp(), getResources().getDisplayMetrics()));
        }

        void setSearchView(SearchView r1) {
            this.mSearchView = r1;
        }

        @Override
        public void setThreshold(int r1) {
            super.setThreshold(r1);
            this.mThreshold = r1;
        }

        boolean isEmpty() {
            if (TextUtils.getTrimmedLength(getText()) != 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public void onWindowFocusChanged(boolean r2) {
            super.onWindowFocusChanged(r2);
            if (r2 == true) goto L5;
            return;
        L5:
            if (this.mSearchView.hasFocus() == true) goto L7;
            return;
        L7:
            if (getVisibility() != 0) goto L14;
            this.mHasPendingShowSoftInputRequest = true;
            if (SearchView.isLandscapeMode(getContext()) == false) goto L15;
            SearchView.HIDDEN_METHOD_INVOKER.ensureImeVisible(this, true);
            return;
        L15:
            return;
        }

        @Override
        protected void onFocusChanged(boolean r1, int r2, Rect r3) {
            super.onFocusChanged(r1, r2, r3);
            this.mSearchView.onTextFocusChanged();
        }

        @Override
        public boolean enoughToFilter() {
            if (this.mThreshold > 0) goto L5;
        L8:
            return true;
        L5:
            if (super.enoughToFilter() == true) goto L8;
            return false;
        }

        @Override
        public boolean onKeyPreIme(int r3, KeyEvent r4) {
            if (r3 != 4) goto L24;
            if (r4.getAction() != 0) goto L13;
            if (r4.getRepeatCount() != 0) goto L13;
            KeyEvent.DispatcherState r32 = getKeyDispatcherState();
            if (r32 == null) goto L11;
            r32.startTracking(r4, this);
        L11:
            return true;
        L13:
            if (r4.getAction() != 1) goto L24;
            KeyEvent.DispatcherState r0 = getKeyDispatcherState();
            if (r0 == null) goto L18;
            r0.handleUpEvent(r4);
        L18:
            if (r4.isTracking() == false) goto L24;
            if (r4.isCanceled() == true) goto L24;
            this.mSearchView.clearFocus();
            setImeVisibility(false);
            return true;
        L24:
            return super.onKeyPreIme(r3, r4);
        }

        private int getSearchViewTextMinWidthDp() {
            Configuration r0 = getResources().getConfiguration();
            int r1 = r0.screenWidthDp;
            int r2 = r0.screenHeightDp;
            if (r1 < 960) goto L11;
            if (r2 < 720) goto L11;
            if (r0.orientation != 2) goto L11;
            return 256;
        L11:
            if (r1 < 600) goto L13;
            return 192;
        L13:
            if (r1 >= 640) goto L15;
            return 160;
        L15:
            if (r2 >= 480) goto L22;
            return 160;
        L22:
            return 192;
        }

        @Override
        public InputConnection onCreateInputConnection(EditorInfo r2) {
            InputConnection r22 = super.onCreateInputConnection(r2);
            if (this.mHasPendingShowSoftInputRequest == false) goto L5;
            removeCallbacks(this.mRunShowSoftInputIfNecessary);
            post(this.mRunShowSoftInputIfNecessary);
        L5:
            return r22;
        }

        void showSoftInputIfNecessary() {
            if (this.mHasPendingShowSoftInputRequest == false) goto L6;
            ((InputMethodManager) getContext().getSystemService("input_method")).showSoftInput(this, 0);
            this.mHasPendingShowSoftInputRequest = false;
            return;
        }

        void setImeVisibility(boolean r3) {
            InputMethodManager r0 = (InputMethodManager) getContext().getSystemService("input_method");
            if (r3 == true) goto L7;
            this.mHasPendingShowSoftInputRequest = false;
            removeCallbacks(this.mRunShowSoftInputIfNecessary);
            r0.hideSoftInputFromWindow(getWindowToken(), 0);
            return;
        L7:
            if (r0.isActive(this) == false) goto L10;
            this.mHasPendingShowSoftInputRequest = false;
            removeCallbacks(this.mRunShowSoftInputIfNecessary);
            r0.showSoftInput(this, 0);
            return;
        L10:
            this.mHasPendingShowSoftInputRequest = true;
        }
    }

    private static class UpdatableTouchDelegate extends TouchDelegate {
        private final Rect mActualBounds;
        private boolean mDelegateTargeted;
        private final View mDelegateView;
        private final int mSlop;
        private final Rect mSlopBounds;
        private final Rect mTargetBounds;

        public UpdatableTouchDelegate(Rect r2, Rect r3, View r4) {
            super(r2, r4);
            this.mSlop = ViewConfiguration.get(r4.getContext()).getScaledTouchSlop();
            this.mTargetBounds = new Rect();
            this.mSlopBounds = new Rect();
            this.mActualBounds = new Rect();
            setBounds(r2, r3);
            this.mDelegateView = r4;
        }

        public void setBounds(Rect r3, Rect r4) {
            this.mTargetBounds.set(r3);
            this.mSlopBounds.set(r3);
            Rect r32 = this.mSlopBounds;
            int r0 = this.mSlop;
            r32.inset(-r0, -r0);
            this.mActualBounds.set(r4);
        }

        @Override
        public boolean onTouchEvent(MotionEvent r8) {
            int r0 = (int) r8.getX();
            int r1 = (int) r8.getY();
            int r2 = r8.getAction();
            boolean r4 = true;
            if (r2 == 0) goto L16;
            if (r2 == 1) goto L10;
            if (r2 == 2) goto L10;
            if (r2 != 3) goto L18;
            boolean r22 = this.mDelegateTargeted;
            this.mDelegateTargeted = false;
        L19:
            if (r22 == false) goto L27;
            if (r4 == true) goto L22;
        L24:
            r8.setLocation(r0 - this.mActualBounds.left, r1 - this.mActualBounds.top);
        L26:
            return this.mDelegateView.dispatchTouchEvent(r8);
        L22:
            if (this.mActualBounds.contains(r0, r1) == true) goto L24;
            r8.setLocation(this.mDelegateView.getWidth() / 2, this.mDelegateView.getHeight() / 2);
            goto L26
        L27:
            return false;
        L18:
            r22 = false;
        L10:
            r22 = this.mDelegateTargeted;
            if (r22 == false) goto L19;
            if (this.mSlopBounds.contains(r0, r1) == true) goto L19;
            r4 = false;
            goto L19
        L16:
            if (this.mTargetBounds.contains(r0, r1) == false) goto L18;
            this.mDelegateTargeted = true;
            r22 = true;
            goto L19
        }
    }

    static {
        HIDDEN_METHOD_INVOKER = new AutoCompleteTextViewReflector();
    }

    public SearchView(Context r2) {
        this(r2, null);
    }

    public SearchView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.searchViewStyle);
    }

    public SearchView(Context r4, AttributeSet r5, int r6) {
        super(r4, r5, r6);
        this.mSearchSrcTextViewBounds = new Rect();
        this.mSearchSrtTextViewBoundsExpanded = new Rect();
        this.mTemp = new int[2];
        this.mTemp2 = new int[2];
        this.mUpdateDrawableStateRunnable = new 1(this);
        this.mReleaseCursorRunnable = new 2(this);
        this.mOutsideDrawablesCache = new WeakHashMap();
        this.mOnClickListener = new 5(this);
        this.mTextKeyListener = new 6(this);
        this.mOnEditorActionListener = new 7(this);
        this.mOnItemClickListener = new 8(this);
        this.mOnItemSelectedListener = new 9(this);
        this.mTextWatcher = new 10(this);
        TintTypedArray r52 = TintTypedArray.obtainStyledAttributes(r4, r5, R.styleable.SearchView, r6, 0);
        LayoutInflater.from(r4).inflate(r52.getResourceId(R.styleable.SearchView_layout, R.layout.abc_search_view), this, true);
        this.mSearchSrcTextView = (SearchAutoComplete) findViewById(R.id.search_src_text);
        this.mSearchSrcTextView.setSearchView(this);
        this.mSearchEditFrame = findViewById(R.id.search_edit_frame);
        this.mSearchPlate = findViewById(R.id.search_plate);
        this.mSubmitArea = findViewById(R.id.submit_area);
        this.mSearchButton = (ImageView) findViewById(R.id.search_button);
        this.mGoButton = (ImageView) findViewById(R.id.search_go_btn);
        this.mCloseButton = (ImageView) findViewById(R.id.search_close_btn);
        this.mVoiceButton = (ImageView) findViewById(R.id.search_voice_btn);
        this.mCollapsedIcon = (ImageView) findViewById(R.id.search_mag_icon);
        ViewCompat.setBackground(this.mSearchPlate, r52.getDrawable(R.styleable.SearchView_queryBackground));
        ViewCompat.setBackground(this.mSubmitArea, r52.getDrawable(R.styleable.SearchView_submitBackground));
        this.mSearchButton.setImageDrawable(r52.getDrawable(R.styleable.SearchView_searchIcon));
        this.mGoButton.setImageDrawable(r52.getDrawable(R.styleable.SearchView_goIcon));
        this.mCloseButton.setImageDrawable(r52.getDrawable(R.styleable.SearchView_closeIcon));
        this.mVoiceButton.setImageDrawable(r52.getDrawable(R.styleable.SearchView_voiceIcon));
        this.mCollapsedIcon.setImageDrawable(r52.getDrawable(R.styleable.SearchView_searchIcon));
        this.mSearchHintIcon = r52.getDrawable(R.styleable.SearchView_searchHintIcon);
        TooltipCompat.setTooltipText(this.mSearchButton, getResources().getString(R.string.abc_searchview_description_search));
        this.mSuggestionRowLayout = r52.getResourceId(R.styleable.SearchView_suggestionRowLayout, R.layout.abc_search_dropdown_item_icons_2line);
        this.mSuggestionCommitIconResId = r52.getResourceId(R.styleable.SearchView_commitIcon, 0);
        this.mSearchButton.setOnClickListener(this.mOnClickListener);
        this.mCloseButton.setOnClickListener(this.mOnClickListener);
        this.mGoButton.setOnClickListener(this.mOnClickListener);
        this.mVoiceButton.setOnClickListener(this.mOnClickListener);
        this.mSearchSrcTextView.setOnClickListener(this.mOnClickListener);
        this.mSearchSrcTextView.addTextChangedListener(this.mTextWatcher);
        this.mSearchSrcTextView.setOnEditorActionListener(this.mOnEditorActionListener);
        this.mSearchSrcTextView.setOnItemClickListener(this.mOnItemClickListener);
        this.mSearchSrcTextView.setOnItemSelectedListener(this.mOnItemSelectedListener);
        this.mSearchSrcTextView.setOnKeyListener(this.mTextKeyListener);
        this.mSearchSrcTextView.setOnFocusChangeListener(new 3(this));
        setIconifiedByDefault(r52.getBoolean(R.styleable.SearchView_iconifiedByDefault, true));
        int r42 = r52.getDimensionPixelSize(R.styleable.SearchView_android_maxWidth, -1);
        if (r42 == (-1)) goto L5;
        setMaxWidth(r42);
    L5:
        this.mDefaultQueryHint = r52.getText(R.styleable.SearchView_defaultQueryHint);
        this.mQueryHint = r52.getText(R.styleable.SearchView_queryHint);
        int r43 = r52.getInt(R.styleable.SearchView_android_imeOptions, -1);
        if (r43 == (-1)) goto L8;
        setImeOptions(r43);
    L8:
        int r44 = r52.getInt(R.styleable.SearchView_android_inputType, -1);
        if (r44 == (-1)) goto L11;
        setInputType(r44);
    L11:
        setFocusable(r52.getBoolean(R.styleable.SearchView_android_focusable, true));
        r52.recycle();
        this.mVoiceWebSearchIntent = new Intent("android.speech.action.WEB_SEARCH");
        this.mVoiceWebSearchIntent.addFlags(268435456);
        this.mVoiceWebSearchIntent.putExtra("android.speech.extra.LANGUAGE_MODEL", "web_search");
        this.mVoiceAppSearchIntent = new Intent("android.speech.action.RECOGNIZE_SPEECH");
        this.mVoiceAppSearchIntent.addFlags(268435456);
        this.mDropDownAnchor = findViewById(this.mSearchSrcTextView.getDropDownAnchor());
        View r45 = this.mDropDownAnchor;
        if (r45 == null) goto L14;
        r45.addOnLayoutChangeListener(new 4(this));
    L14:
        updateViewsVisibility(this.mIconifiedByDefault);
        updateQueryHint();
    }

    int getSuggestionRowLayout() {
        return this.mSuggestionRowLayout;
    }

    int getSuggestionCommitIconResId() {
        return this.mSuggestionCommitIconResId;
    }

    public void setSearchableInfo(SearchableInfo r2) {
        this.mSearchable = r2;
        if (this.mSearchable == null) goto L5;
        updateSearchAutoComplete();
        updateQueryHint();
    L5:
        this.mVoiceButtonEnabled = hasVoiceSearch();
        if (this.mVoiceButtonEnabled == false) goto L8;
        this.mSearchSrcTextView.setPrivateImeOptions(IME_OPTION_NO_MICROPHONE);
    L8:
        updateViewsVisibility(isIconified());
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setAppSearchData(Bundle r1) {
        this.mAppSearchData = r1;
    }

    public void setImeOptions(int r2) {
        this.mSearchSrcTextView.setImeOptions(r2);
    }

    public int getImeOptions() {
        return this.mSearchSrcTextView.getImeOptions();
    }

    public void setInputType(int r2) {
        this.mSearchSrcTextView.setInputType(r2);
    }

    public int getInputType() {
        return this.mSearchSrcTextView.getInputType();
    }

    @Override
    public boolean requestFocus(int r3, Rect r4) {
        if (this.mClearingFocus == false) goto L6;
        return false;
    L6:
        if (isFocusable() == true) goto L9;
        return false;
    L9:
        if (isIconified() == true) goto L15;
        boolean r32 = this.mSearchSrcTextView.requestFocus(r3, r4);
        if (r32 == false) goto L13;
        updateViewsVisibility(false);
    L13:
        return r32;
    L15:
        return super.requestFocus(r3, r4);
    }

    @Override
    public void clearFocus() {
        this.mClearingFocus = true;
        super.clearFocus();
        this.mSearchSrcTextView.clearFocus();
        this.mSearchSrcTextView.setImeVisibility(false);
        this.mClearingFocus = false;
    }

    public void setOnQueryTextListener(OnQueryTextListener r1) {
        this.mOnQueryChangeListener = r1;
    }

    public void setOnCloseListener(OnCloseListener r1) {
        this.mOnCloseListener = r1;
    }

    public void setOnQueryTextFocusChangeListener(View.OnFocusChangeListener r1) {
        this.mOnQueryTextFocusChangeListener = r1;
    }

    public void setOnSuggestionListener(OnSuggestionListener r1) {
        this.mOnSuggestionListener = r1;
    }

    public void setOnSearchClickListener(View.OnClickListener r1) {
        this.mOnSearchClickListener = r1;
    }

    public CharSequence getQuery() {
        return this.mSearchSrcTextView.getText();
    }

    public void setQuery(CharSequence r3, boolean r4) {
        this.mSearchSrcTextView.setText(r3);
        if (r3 == null) goto L5;
        SearchAutoComplete r0 = this.mSearchSrcTextView;
        r0.setSelection(r0.length());
        this.mUserQuery = r3;
    L5:
        if (r4 == true) goto L7;
        return;
    L7:
        if (TextUtils.isEmpty(r3) == true) goto L11;
        onSubmitQuery();
        return;
    }

    public void setQueryHint(@Nullable CharSequence r1) {
        this.mQueryHint = r1;
        updateQueryHint();
    }

    @Nullable
    public CharSequence getQueryHint() {
        CharSequence r0 = this.mQueryHint;
        if (r0 != null) goto L13;
        SearchableInfo r02 = this.mSearchable;
        if (r02 == null) goto L11;
        if (r02.getHintId() == 0) goto L11;
        return getContext().getText(this.mSearchable.getHintId());
    L11:
        return this.mDefaultQueryHint;
    L13:
        return r0;
    }

    public void setIconifiedByDefault(boolean r2) {
        if (this.mIconifiedByDefault != r2) goto L5;
        return;
    L5:
        this.mIconifiedByDefault = r2;
        updateViewsVisibility(r2);
        updateQueryHint();
    }

    public boolean isIconfiedByDefault() {
        return this.mIconifiedByDefault;
    }

    public void setIconified(boolean r1) {
        if (r1 == false) goto L4;
        onCloseClicked();
        return;
    L4:
        onSearchClicked();
    }

    public boolean isIconified() {
        return this.mIconified;
    }

    public void setSubmitButtonEnabled(boolean r1) {
        this.mSubmitButtonEnabled = r1;
        updateViewsVisibility(isIconified());
    }

    public boolean isSubmitButtonEnabled() {
        return this.mSubmitButtonEnabled;
    }

    public void setQueryRefinementEnabled(boolean r3) {
        this.mQueryRefinement = r3;
        CursorAdapter r0 = this.mSuggestionsAdapter;
        if ((r0 instanceof SuggestionsAdapter) == false) goto L10;
        SuggestionsAdapter r02 = (SuggestionsAdapter) r0;
        if (r3 == false) goto L7;
        int r32 = 2;
    L8:
        r02.setQueryRefinement(r32);
        return;
    L7:
        r32 = 1;
        goto L8
    }

    public boolean isQueryRefinementEnabled() {
        return this.mQueryRefinement;
    }

    public void setSuggestionsAdapter(CursorAdapter r2) {
        this.mSuggestionsAdapter = r2;
        this.mSearchSrcTextView.setAdapter(this.mSuggestionsAdapter);
    }

    public CursorAdapter getSuggestionsAdapter() {
        return this.mSuggestionsAdapter;
    }

    public void setMaxWidth(int r1) {
        this.mMaxWidth = r1;
        requestLayout();
    }

    public int getMaxWidth() {
        return this.mMaxWidth;
    }

    @Override
    protected void onMeasure(int r4, int r5) {
        if (isIconified() == false) goto L6;
        super.onMeasure(r4, r5);
        return;
    L6:
        int r0 = View.MeasureSpec.getMode(r4);
        int r42 = View.MeasureSpec.getSize(r4);
        if (r0 == Integer.MIN_VALUE) goto L18;
        if (r0 == 0) goto L14;
        if (r0 != 1073741824) goto L22;
        int r02 = this.mMaxWidth;
        if (r02 <= 0) goto L22;
        r42 = Math.min(r02, r42);
    L22:
        int r03 = View.MeasureSpec.getMode(r5);
        int r52 = View.MeasureSpec.getSize(r5);
        if (r03 == Integer.MIN_VALUE) goto L27;
        if (r03 != 0) goto L28;
        r52 = getPreferredHeight();
    L28:
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(r42, 1073741824), View.MeasureSpec.makeMeasureSpec(r52, 1073741824));
        return;
    L27:
        r52 = Math.min(getPreferredHeight(), r52);
        goto L28
    L14:
        r42 = this.mMaxWidth;
        if (r42 > 0) goto L22;
        r42 = getPreferredWidth();
        goto L22
    L18:
        int r04 = this.mMaxWidth;
        if (r04 <= 0) goto L21;
        r42 = Math.min(r04, r42);
        goto L22
    L21:
        r42 = Math.min(getPreferredWidth(), r42);
        goto L22
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
        super.onLayout(r2, r3, r4, r5, r6);
        if (r2 == false) goto L9;
        getChildBoundsWithinSearchView(this.mSearchSrcTextView, this.mSearchSrcTextViewBounds);
        this.mSearchSrtTextViewBoundsExpanded.set(this.mSearchSrcTextViewBounds.left, 0, this.mSearchSrcTextViewBounds.right, r6 - r4);
        UpdatableTouchDelegate r22 = this.mTouchDelegate;
        if (r22 != null) goto L7;
        this.mTouchDelegate = new UpdatableTouchDelegate(this.mSearchSrtTextViewBoundsExpanded, this.mSearchSrcTextViewBounds, this.mSearchSrcTextView);
        setTouchDelegate(this.mTouchDelegate);
        return;
    L7:
        r22.setBounds(this.mSearchSrtTextViewBoundsExpanded, this.mSearchSrcTextViewBounds);
        return;
    }

    private void getChildBoundsWithinSearchView(View r5, Rect r6) {
        r5.getLocationInWindow(this.mTemp);
        getLocationInWindow(this.mTemp2);
        int[] r0 = this.mTemp;
        int r2 = r0[1];
        int[] r3 = this.mTemp2;
        int r22 = r2 - r3[1];
        int r02 = r0[0] - r3[0];
        r6.set(r02, r22, r5.getWidth() + r02, r5.getHeight() + r22);
    }

    private int getPreferredWidth() {
        return getContext().getResources().getDimensionPixelSize(R.dimen.abc_search_view_preferred_width);
    }

    private int getPreferredHeight() {
        return getContext().getResources().getDimensionPixelSize(R.dimen.abc_search_view_preferred_height);
    }

    private void updateViewsVisibility(boolean r7) {
        this.mIconified = r7;
        int r0 = 8;
        boolean r1 = false;
        if (r7 == false) goto L5;
        int r2 = 0;
    L6:
        boolean r3 = !TextUtils.isEmpty(this.mSearchSrcTextView.getText());
        this.mSearchButton.setVisibility(r2);
        updateSubmitButton(r3);
        View r22 = this.mSearchEditFrame;
        if (r7 == false) goto L9;
        int r72 = 8;
    L10:
        r22.setVisibility(r72);
        if (this.mCollapsedIcon.getDrawable() != null) goto L13;
    L16:
        this.mCollapsedIcon.setVisibility(r0);
        updateCloseButton();
        if (r3 == true) goto L19;
        r1 = true;
    L19:
        updateVoiceButton(r1);
        updateSubmitArea();
        return;
    L13:
        if (this.mIconifiedByDefault == true) goto L16;
        r0 = 0;
        goto L16
    L9:
        r72 = 0;
        goto L10
    L5:
        r2 = 8;
        goto L6
    }

    private boolean hasVoiceSearch() {
        SearchableInfo r0 = this.mSearchable;
        if (r0 != null) goto L5;
        return false;
    L5:
        if (r0.getVoiceSearchEnabled() == false) goto L18;
        Intent r02 = null;
        if (this.mSearchable.getVoiceSearchLaunchWebSearch() == false) goto L10;
        r02 = this.mVoiceWebSearchIntent;
    L12:
        if (r02 != null) goto L14;
        return false;
    L14:
        if (getContext().getPackageManager().resolveActivity(r02, 65536) == null) goto L20;
        return true;
    L20:
        return false;
    L10:
        if (this.mSearchable.getVoiceSearchLaunchRecognizer() == false) goto L12;
        r02 = this.mVoiceAppSearchIntent;
        goto L12
    L18:
        return false;
    }

    private boolean isSubmitAreaEnabled() {
        if (this.mSubmitButtonEnabled == true) goto L7;
        if (this.mVoiceButtonEnabled == true) goto L7;
    L9:
        return false;
    L7:
        if (isIconified() == true) goto L9;
        return true;
    }

    private void updateSubmitButton(boolean r2) {
        if (this.mSubmitButtonEnabled == true) goto L5;
    L12:
        int r22 = 8;
    L13:
        this.mGoButton.setVisibility(r22);
        return;
    L5:
        if (isSubmitAreaEnabled() == false) goto L12;
        if (hasFocus() == false) goto L12;
        if (r2 == false) goto L10;
    L11:
        r22 = 0;
        goto L13
    L10:
        if (this.mVoiceButtonEnabled == true) goto L12;
        goto L11
    }

    private void updateSubmitArea() {
        if (isSubmitAreaEnabled() == true) goto L5;
    L9:
        int r0 = 8;
    L10:
        this.mSubmitArea.setVisibility(r0);
        return;
    L5:
        if (this.mGoButton.getVisibility() != 0) goto L7;
    L8:
        r0 = 0;
        goto L10
    L7:
        if (this.mVoiceButton.getVisibility() != 0) goto L9;
        goto L8
    }

    private void updateCloseButton() {
        boolean r1 = true;
        boolean r0 = !TextUtils.isEmpty(this.mSearchSrcTextView.getText());
        int r2 = 0;
        if (r0 == false) goto L5;
    L10:
        ImageView r3 = this.mCloseButton;
        if (r1 == true) goto L14;
        r2 = 8;
    L14:
        r3.setVisibility(r2);
        Drawable r12 = this.mCloseButton.getDrawable();
        if (r12 == null) goto L21;
        if (r0 == false) goto L18;
        int[] r02 = ENABLED_STATE_SET;
    L19:
        r12.setState(r02);
        return;
    L18:
        r02 = EMPTY_STATE_SET;
        goto L19
    L21:
        return;
    L5:
        if (this.mIconifiedByDefault == true) goto L7;
    L9:
        r1 = false;
        goto L10
    L7:
        if (this.mExpandedInActionView == true) goto L9;
        goto L9
    }

    private void postUpdateFocusedState() {
        post(this.mUpdateDrawableStateRunnable);
    }

    void updateFocusedState() {
        if (this.mSearchSrcTextView.hasFocus() == false) goto L5;
        int[] r0 = FOCUSED_STATE_SET;
    L6:
        Drawable r1 = this.mSearchPlate.getBackground();
        if (r1 == null) goto L9;
        r1.setState(r0);
    L9:
        Drawable r12 = this.mSubmitArea.getBackground();
        if (r12 == null) goto L12;
        r12.setState(r0);
    L12:
        invalidate();
        return;
    L5:
        r0 = EMPTY_STATE_SET;
        goto L6
    }

    @Override
    protected void onDetachedFromWindow() {
        removeCallbacks(this.mUpdateDrawableStateRunnable);
        post(this.mReleaseCursorRunnable);
        super.onDetachedFromWindow();
    }

    void onQueryRefine(CharSequence r1) {
        setQuery(r1);
    }

    boolean onSuggestionsKey(View r2, int r3, KeyEvent r4) {
        if (this.mSearchable != null) goto L6;
        return false;
    L6:
        if (this.mSuggestionsAdapter != null) goto L9;
        return false;
    L9:
        if (r4.getAction() == 0) goto L11;
    L36:
        return false;
    L11:
        if (r4.hasNoModifiers() == false) goto L36;
        if (r3 == 66) goto L35;
        if (r3 == 84) goto L35;
        if (r3 == 61) goto L35;
        if (r3 != 21) goto L22;
    L29:
        if (r3 != 21) goto L31;
        int r22 = 0;
    L32:
        this.mSearchSrcTextView.setSelection(r22);
        this.mSearchSrcTextView.setListSelection(0);
        this.mSearchSrcTextView.clearListSelection();
        HIDDEN_METHOD_INVOKER.ensureImeVisible(this.mSearchSrcTextView, true);
        return true;
    L31:
        r22 = this.mSearchSrcTextView.length();
        goto L32
    L22:
        if (r3 == 22) goto L29;
        if (r3 != 19) goto L36;
        if (this.mSearchSrcTextView.getListSelection() != 0) goto L36;
        return false;
    L35:
        return onItemClicked(this.mSearchSrcTextView.getListSelection(), 0, null);
    }

    private CharSequence getDecoratedHint(CharSequence r6) {
        if (this.mIconifiedByDefault == true) goto L5;
    L9:
        return r6;
    L5:
        if (this.mSearchHintIcon == null) goto L9;
        int r0 = (int) (((double) this.mSearchSrcTextView.getTextSize()) * 1.25d);
        this.mSearchHintIcon.setBounds(0, 0, r0, r0);
        SpannableStringBuilder r02 = new SpannableStringBuilder("   ");
        r02.setSpan(new ImageSpan(this.mSearchHintIcon), 1, 2, 33);
        r02.append(r6);
        return r02;
    }

    private void updateQueryHint() {
        CharSequence r0 = getQueryHint();
        SearchAutoComplete r1 = this.mSearchSrcTextView;
        if (r0 != null) goto L5;
        r0 = "";
    L5:
        r1.setHint(getDecoratedHint(r0));
    }

    private void updateSearchAutoComplete() {
        this.mSearchSrcTextView.setThreshold(this.mSearchable.getSuggestThreshold());
        this.mSearchSrcTextView.setImeOptions(this.mSearchable.getImeOptions());
        int r0 = this.mSearchable.getInputType();
        int r2 = 1;
        if ((r0 & 15) != 1) goto L7;
        r0 = r0 & (-65537);
        if (this.mSearchable.getSuggestAuthority() == null) goto L7;
        r0 = (r0 | 65536) | 524288;
    L7:
        this.mSearchSrcTextView.setInputType(r0);
        CursorAdapter r02 = this.mSuggestionsAdapter;
        if (r02 == null) goto L11;
        r02.changeCursor(null);
    L11:
        if (this.mSearchable.getSuggestAuthority() == null) goto L17;
        this.mSuggestionsAdapter = new SuggestionsAdapter(getContext(), this, this.mSearchable, this.mOutsideDrawablesCache);
        this.mSearchSrcTextView.setAdapter(this.mSuggestionsAdapter);
        SuggestionsAdapter r03 = (SuggestionsAdapter) this.mSuggestionsAdapter;
        if (this.mQueryRefinement == false) goto L15;
        r2 = 2;
    L15:
        r03.setQueryRefinement(r2);
        return;
    }

    private void updateVoiceButton(boolean r3) {
        if (this.mVoiceButtonEnabled == true) goto L5;
    L8:
        int r32 = 8;
    L9:
        this.mVoiceButton.setVisibility(r32);
        return;
    L5:
        if (isIconified() == true) goto L8;
        if (r3 == false) goto L8;
        r32 = 0;
        this.mGoButton.setVisibility(8);
        goto L9
    }

    void onTextChanged(CharSequence r3) {
        Editable r0 = this.mSearchSrcTextView.getText();
        this.mUserQuery = r0;
        boolean r1 = true;
        boolean r02 = !TextUtils.isEmpty(r0);
        updateSubmitButton(r02);
        if (r02 == false) goto L6;
        r1 = false;
    L6:
        updateVoiceButton(r1);
        updateCloseButton();
        updateSubmitArea();
        if (this.mOnQueryChangeListener != null) goto L9;
    L11:
        this.mOldQueryText = r3.toString();
        return;
    L9:
        if (TextUtils.equals(r3, this.mOldQueryText) == true) goto L11;
        this.mOnQueryChangeListener.onQueryTextChange(r3.toString());
        goto L11
    }

    void onSubmitQuery() {
        Editable r0 = this.mSearchSrcTextView.getText();
        if (r0 != null) goto L5;
        return;
    L5:
        if (TextUtils.getTrimmedLength(r0) <= 0) goto L16;
        OnQueryTextListener r1 = this.mOnQueryChangeListener;
        if (r1 == null) goto L11;
        if (r1.onQueryTextSubmit(r0.toString()) == false) goto L11;
        return;
    L11:
        if (this.mSearchable == null) goto L13;
        launchQuerySearch(0, null, r0.toString());
    L13:
        this.mSearchSrcTextView.setImeVisibility(false);
        dismissSuggestions();
        return;
    }

    private void dismissSuggestions() {
        this.mSearchSrcTextView.dismissDropDown();
    }

    void onCloseClicked() {
        if (TextUtils.isEmpty(this.mSearchSrcTextView.getText()) == true) goto L5;
        this.mSearchSrcTextView.setText("");
        this.mSearchSrcTextView.requestFocus();
        this.mSearchSrcTextView.setImeVisibility(true);
        return;
    L5:
        if (this.mIconifiedByDefault == false) goto L13;
        OnCloseListener r0 = this.mOnCloseListener;
        if (r0 != null) goto L9;
    L10:
        clearFocus();
        updateViewsVisibility(true);
        return;
    L9:
        if (r0.onClose() == false) goto L10;
        return;
    }

    void onSearchClicked() {
        updateViewsVisibility(false);
        this.mSearchSrcTextView.requestFocus();
        this.mSearchSrcTextView.setImeVisibility(true);
        View.OnClickListener r0 = this.mOnSearchClickListener;
        if (r0 == null) goto L6;
        r0.onClick(this);
        return;
    }

    void onVoiceClicked() {
        SearchableInfo r0 = this.mSearchable;
        if (r0 != null) goto L15;
        return;
    L15:
    L12:
        Log.w(LOG_TAG, "Could not find voice search activity");
        return;
    L6:
        if (r0.getVoiceSearchLaunchWebSearch() == false) goto L9;
        Intent r02 = createVoiceWebSearchIntent(this.mVoiceWebSearchIntent, r0);     // Catch: ActivityNotFoundException -> L12
        getContext().startActivity(r02);     // Catch: ActivityNotFoundException -> L12
    L14:
        return;
    L9:
        if (r0.getVoiceSearchLaunchRecognizer() == false) goto L14;
        Intent r03 = createVoiceAppSearchIntent(this.mVoiceAppSearchIntent, r0);     // Catch: ActivityNotFoundException -> L12
        getContext().startActivity(r03);     // Catch: ActivityNotFoundException -> L12
        goto L14
    }

    void onTextFocusChanged() {
        updateViewsVisibility(isIconified());
        postUpdateFocusedState();
        if (this.mSearchSrcTextView.hasFocus() == false) goto L6;
        forceSuggestionQuery();
        return;
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
        super.onWindowFocusChanged(r1);
        postUpdateFocusedState();
    }

    @Override
    public void onActionViewCollapsed() {
        setQuery("", false);
        clearFocus();
        updateViewsVisibility(true);
        this.mSearchSrcTextView.setImeOptions(this.mCollapsedImeOptions);
        this.mExpandedInActionView = false;
    }

    @Override
    public void onActionViewExpanded() {
        if (this.mExpandedInActionView == false) goto L5;
        return;
    L5:
        this.mExpandedInActionView = true;
        this.mCollapsedImeOptions = this.mSearchSrcTextView.getImeOptions();
        this.mSearchSrcTextView.setImeOptions(this.mCollapsedImeOptions | 33554432);
        this.mSearchSrcTextView.setText("");
        setIconified(false);
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        r1.isIconified = isIconified();
        return r1;
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r2) {
        if ((r2 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r2);
        return;
    L6:
        SavedState r22 = (SavedState) r2;
        super.onRestoreInstanceState(r22.getSuperState());
        updateViewsVisibility(r22.isIconified);
        requestLayout();
    }

    void adjustDropDownSizeAndPosition() {
        if (this.mDropDownAnchor.getWidth() <= 1) goto L14;
        Resources r0 = getContext().getResources();
        int r1 = this.mSearchPlate.getPaddingLeft();
        Rect r2 = new Rect();
        boolean r3 = ViewUtils.isLayoutRtl(this);
        if (this.mIconifiedByDefault == false) goto L7;
        int r4 = r0.getDimensionPixelSize(R.dimen.abc_dropdownitem_icon_width) + r0.getDimensionPixelSize(R.dimen.abc_dropdownitem_text_padding_left);
    L8:
        this.mSearchSrcTextView.getDropDownBackground().getPadding(r2);
        if (r3 == false) goto L11;
        int r02 = -r2.left;
    L12:
        this.mSearchSrcTextView.setDropDownHorizontalOffset(r02);
        int r03 = (((this.mDropDownAnchor.getWidth() + r2.left) + r2.right) + r4) - r1;
        this.mSearchSrcTextView.setDropDownWidth(r03);
        return;
    L11:
        r02 = r1 - (r2.left + r4);
        goto L12
    L7:
        r4 = 0;
        goto L8
    }

    boolean onItemClicked(int r1, int r2, String r3) {
        OnSuggestionListener r22 = this.mOnSuggestionListener;
        if (r22 != null) goto L5;
    L8:
        launchSuggestion(r1, 0, null);
        this.mSearchSrcTextView.setImeVisibility(false);
        dismissSuggestions();
        return true;
    L5:
        if (r22.onSuggestionClick(r1) == false) goto L8;
        return false;
    }

    boolean onItemSelected(int r2) {
        OnSuggestionListener r0 = this.mOnSuggestionListener;
        if (r0 != null) goto L5;
    L9:
        rewriteQueryFromSuggestion(r2);
        return true;
    L5:
        if (r0.onSuggestionSelect(r2) == false) goto L9;
        return false;
    }

    private void rewriteQueryFromSuggestion(int r3) {
        Editable r0 = this.mSearchSrcTextView.getText();
        Cursor r1 = this.mSuggestionsAdapter.getCursor();
        if (r1 != null) goto L6;
        return;
    L6:
        if (r1.moveToPosition(r3) == false) goto L11;
        CharSequence r32 = this.mSuggestionsAdapter.convertToString(r1);
        if (r32 == null) goto L10;
        setQuery(r32);
        return;
    L10:
        setQuery(r0);
        return;
    L11:
        setQuery(r0);
    }

    private boolean launchSuggestion(int r2, int r3, String r4) {
        Cursor r0 = this.mSuggestionsAdapter.getCursor();
        if (r0 != null) goto L5;
        return false;
    L5:
        if (r0.moveToPosition(r2) == false) goto L10;
        launchIntent(createIntentFromSuggestion(r0, r3, r4));
        return true;
    L10:
        return false;
    }

    private void launchIntent(Intent r4) {
        if (r4 != null) goto L9;
        return;
    L9:
        getContext().startActivity(r4);     // Catch: RuntimeException -> L6
        return;
    L6:
        e = move-exception;
        Log.e(LOG_TAG, "Failed launch activity: " + r4, e);
    }

    private void setQuery(CharSequence r3) {
        this.mSearchSrcTextView.setText(r3);
        SearchAutoComplete r0 = this.mSearchSrcTextView;
        if (TextUtils.isEmpty(r3) == false) goto L5;
        int r32 = 0;
    L6:
        r0.setSelection(r32);
        return;
    L5:
        r32 = r3.length();
        goto L6
    }

    void launchQuerySearch(int r8, String r9, String r10) {
        Intent r82 = createIntent("android.intent.action.SEARCH", null, null, r10, r8, r9);
        getContext().startActivity(r82);
    }

    private Intent createIntent(String r2, Uri r3, String r4, String r5, int r6, String r7) {
        Intent r0 = new Intent(r2);
        r0.addFlags(268435456);
        if (r3 == null) goto L5;
        r0.setData(r3);
    L5:
        r0.putExtra("user_query", this.mUserQuery);
        if (r5 == null) goto L8;
        r0.putExtra("query", r5);
    L8:
        if (r4 == null) goto L10;
        r0.putExtra("intent_extra_data_key", r4);
    L10:
        Bundle r22 = this.mAppSearchData;
        if (r22 == null) goto L13;
        r0.putExtra("app_data", r22);
    L13:
        if (r6 == 0) goto L15;
        r0.putExtra("action_key", r6);
        r0.putExtra("action_msg", r7);
    L15:
        r0.setComponent(this.mSearchable.getSearchActivity());
        return r0;
    }

    private Intent createVoiceWebSearchIntent(Intent r2, SearchableInfo r3) {
        Intent r0 = new Intent(r2);
        ComponentName r22 = r3.getSearchActivity();
        if (r22 != null) goto L5;
        String r23 = null;
    L6:
        r0.putExtra("calling_package", r23);
        return r0;
    L5:
        r23 = r22.flattenToShortString();
        goto L6
    }

    private Intent createVoiceAppSearchIntent(Intent r10, SearchableInfo r11) {
        ComponentName r0 = r11.getSearchActivity();
        Intent r1 = new Intent("android.intent.action.SEARCH");
        r1.setComponent(r0);
        PendingIntent r12 = PendingIntent.getActivity(getContext(), 0, r1, 1073741824);
        Bundle r2 = new Bundle();
        Bundle r3 = this.mAppSearchData;
        if (r3 == null) goto L5;
        r2.putParcelable("app_data", r3);
    L5:
        Intent r32 = new Intent(r10);
        int r102 = 1;
        Resources r4 = getResources();
        if (r11.getVoiceLanguageModeId() == 0) goto L8;
        String r5 = r4.getString(r11.getVoiceLanguageModeId());
    L9:
        String r7 = null;
        if (r11.getVoicePromptTextId() == 0) goto L12;
        String r6 = r4.getString(r11.getVoicePromptTextId());
    L14:
        if (r11.getVoiceLanguageId() == 0) goto L16;
        String r42 = r4.getString(r11.getVoiceLanguageId());
    L18:
        if (r11.getVoiceMaxResults() == 0) goto L20;
        r102 = r11.getVoiceMaxResults();
    L20:
        r32.putExtra("android.speech.extra.LANGUAGE_MODEL", r5);
        r32.putExtra("android.speech.extra.PROMPT", r6);
        r32.putExtra("android.speech.extra.LANGUAGE", r42);
        r32.putExtra("android.speech.extra.MAX_RESULTS", r102);
        if (r0 == null) goto L24;
        r7 = r0.flattenToShortString();
    L24:
        r32.putExtra("calling_package", r7);
        r32.putExtra("android.speech.extra.RESULTS_PENDINGINTENT", r12);
        r32.putExtra("android.speech.extra.RESULTS_PENDINGINTENT_BUNDLE", r2);
        return r32;
    L16:
        r42 = null;
        goto L18
    L12:
        r6 = null;
        goto L14
    L8:
        r5 = "free_form";
        goto L9
    }

    private Intent createIntentFromSuggestion(Cursor r9, int r10, String r11) {
        String r1 = SuggestionsAdapter.getColumnString(r9, "suggest_intent_action");     // Catch: RuntimeException -> L20
        if (r1 != null) goto L6;
        r1 = this.mSearchable.getSuggestIntentAction();     // Catch: RuntimeException -> L20
    L6:
        if (r1 != null) goto L8;
        r1 = "android.intent.action.SEARCH";
    L8:
        String r2 = r1;
        String r12 = SuggestionsAdapter.getColumnString(r9, "suggest_intent_data");     // Catch: RuntimeException -> L20
        if (r12 != null) goto L11;
        r12 = this.mSearchable.getSuggestIntentData();     // Catch: RuntimeException -> L20
    L11:
        if (r12 == null) goto L15;
        String r3 = SuggestionsAdapter.getColumnString(r9, "suggest_intent_data_id");     // Catch: RuntimeException -> L20
        if (r3 == null) goto L15;
        r12 = r12 + "/" + Uri.encode(r3);     // Catch: RuntimeException -> L20
    L15:
        if (r12 != null) goto L17;
        Uri r32 = null;
    L18:
        return createIntent(r2, r32, SuggestionsAdapter.getColumnString(r9, "suggest_intent_extra_data"), SuggestionsAdapter.getColumnString(r9, "suggest_intent_query"), r10, r11);
    L17:
        r32 = Uri.parse(r12);     // Catch: RuntimeException -> L20
    L20:
        e = move-exception;
        int r92 = r9.getPosition();     // Catch: RuntimeException -> L23
    L24:
        Log.w(LOG_TAG, "Search suggestions cursor at row " + r92 + " returned exception.", e);
        return null;
    L23:
        r92 = -1;
        goto L24
    }

    void forceSuggestionQuery() {
        HIDDEN_METHOD_INVOKER.doBeforeTextChanged(this.mSearchSrcTextView);
        HIDDEN_METHOD_INVOKER.doAfterTextChanged(this.mSearchSrcTextView);
    }

    static boolean isLandscapeMode(Context r1) {
        if (r1.getResources().getConfiguration().orientation != 2) goto L5;
        return true;
    L5:
        return false;
    }
}
