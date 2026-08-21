package android.support.v7.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Handler;
import android.support.annotation.AttrRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.support.v4.view.PointerIconCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.widget.PopupWindowCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.ShowableListMenu;
import android.support.v7.widget.ActivityChooserView;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.AbsListView;
import android.widget.AdapterView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.PopupWindow;
import java.lang.reflect.Method;

public class ListPopupWindow implements ShowableListMenu {
    private static final boolean DEBUG = false;
    static final int EXPAND_LIST_TIMEOUT = 250;
    public static final int INPUT_METHOD_FROM_FOCUSABLE = 0;
    public static final int INPUT_METHOD_NEEDED = 1;
    public static final int INPUT_METHOD_NOT_NEEDED = 2;
    public static final int MATCH_PARENT = -1;
    public static final int POSITION_PROMPT_ABOVE = 0;
    public static final int POSITION_PROMPT_BELOW = 1;
    private static final String TAG = "ListPopupWindow";
    public static final int WRAP_CONTENT = -2;
    private static Method sClipToWindowEnabledMethod;
    private static Method sGetMaxAvailableHeightMethod;
    private static Method sSetEpicenterBoundsMethod;
    private ListAdapter mAdapter;
    private Context mContext;
    private boolean mDropDownAlwaysVisible;
    private View mDropDownAnchorView;
    private int mDropDownGravity;
    private int mDropDownHeight;
    private int mDropDownHorizontalOffset;
    DropDownListView mDropDownList;
    private Drawable mDropDownListHighlight;
    private int mDropDownVerticalOffset;
    private boolean mDropDownVerticalOffsetSet;
    private int mDropDownWidth;
    private int mDropDownWindowLayoutType;
    private Rect mEpicenterBounds;
    private boolean mForceIgnoreOutsideTouch;
    final Handler mHandler;
    private final ListSelectorHider mHideSelector;
    private boolean mIsAnimatedFromAnchor;
    private AdapterView.OnItemClickListener mItemClickListener;
    private AdapterView.OnItemSelectedListener mItemSelectedListener;
    int mListItemExpandMaximum;
    private boolean mModal;
    private DataSetObserver mObserver;
    private boolean mOverlapAnchor;
    private boolean mOverlapAnchorSet;
    PopupWindow mPopup;
    private int mPromptPosition;
    private View mPromptView;
    final ResizePopupRunnable mResizePopupRunnable;
    private final PopupScrollListener mScrollListener;
    private Runnable mShowDropDownRunnable;
    private final Rect mTempRect;
    private final PopupTouchInterceptor mTouchInterceptor;

    private class ListSelectorHider implements Runnable {
        final ListPopupWindow this$0;

        ListSelectorHider(ListPopupWindow r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            this.this$0.clearListSelection();
        }
    }

    private class PopupDataSetObserver extends DataSetObserver {
        final ListPopupWindow this$0;

        PopupDataSetObserver(ListPopupWindow r1) {
            this.this$0 = r1;
        }

        @Override
        public void onChanged() {
            if (this.this$0.isShowing() == false) goto L6;
            this.this$0.show();
            return;
        }

        @Override
        public void onInvalidated() {
            this.this$0.dismiss();
        }
    }

    private class PopupScrollListener implements AbsListView.OnScrollListener {
        final ListPopupWindow this$0;

        @Override
        public void onScroll(AbsListView r1, int r2, int r3, int r4) {
        }

        PopupScrollListener(ListPopupWindow r1) {
            this.this$0 = r1;
        }

        @Override
        public void onScrollStateChanged(AbsListView r1, int r2) {
            if (r2 == 1) goto L5;
            return;
        L5:
            if (this.this$0.isInputMethodNotNeeded() == false) goto L7;
            return;
        L7:
            if (this.this$0.mPopup.getContentView() == null) goto L12;
            this.this$0.mHandler.removeCallbacks(this.this$0.mResizePopupRunnable);
            this.this$0.mResizePopupRunnable.run();
            return;
        }
    }

    private class PopupTouchInterceptor implements View.OnTouchListener {
        final ListPopupWindow this$0;

        PopupTouchInterceptor(ListPopupWindow r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onTouch(View r3, MotionEvent r4) {
            int r32 = r4.getAction();
            int r0 = (int) r4.getX();
            int r42 = (int) r4.getY();
            if (r32 != 0) goto L16;
            if (this.this$0.mPopup == null) goto L16;
            if (this.this$0.mPopup.isShowing() == false) goto L16;
            if (r0 < 0) goto L16;
            if (r0 >= this.this$0.mPopup.getWidth()) goto L16;
            if (r42 < 0) goto L16;
            if (r42 >= this.this$0.mPopup.getHeight()) goto L16;
            this.this$0.mHandler.postDelayed(this.this$0.mResizePopupRunnable, 250);
            return false;
        L16:
            if (r32 != 1) goto L21;
            this.this$0.mHandler.removeCallbacks(this.this$0.mResizePopupRunnable);
            return false;
        L21:
            return false;
        }
    }

    private class ResizePopupRunnable implements Runnable {
        final ListPopupWindow this$0;

        ResizePopupRunnable(ListPopupWindow r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            if (this.this$0.mDropDownList != null) goto L5;
            return;
        L5:
            if (ViewCompat.isAttachedToWindow(this.this$0.mDropDownList) == true) goto L7;
            return;
        L7:
            if (this.this$0.mDropDownList.getCount() > this.this$0.mDropDownList.getChildCount()) goto L9;
            return;
        L9:
            if (this.this$0.mDropDownList.getChildCount() > this.this$0.mListItemExpandMaximum) goto L15;
            this.this$0.mPopup.setInputMethodMode(2);
            this.this$0.show();
            return;
        }
    }

    private static boolean isConfirmKey(int r1) {
        if (r1 != 66) goto L5;
    L8:
        return true;
    L5:
        if (r1 == 23) goto L8;
        return false;
    }

    static {
        sClipToWindowEnabledMethod = PopupWindow.class.getDeclaredMethod("setClipToScreenEnabled", new Class[]{Boolean.TYPE});     // Catch: NoSuchMethodException -> L5
    L15:
        sGetMaxAvailableHeightMethod = PopupWindow.class.getDeclaredMethod("getMaxAvailableHeight", new Class[]{View.class, Integer.TYPE, Boolean.TYPE});     // Catch: NoSuchMethodException -> L8
    L13:
        sSetEpicenterBoundsMethod = PopupWindow.class.getDeclaredMethod("setEpicenterBounds", new Class[]{Rect.class});     // Catch: NoSuchMethodException -> L11
        return;
    L11:
        Log.i(TAG, "Could not find method setEpicenterBounds(Rect) on PopupWindow. Oh well.");
        return;
    L8:
        Log.i(TAG, "Could not find method getMaxAvailableHeight(View, int, boolean) on PopupWindow. Oh well.");
    L5:
        Log.i(TAG, "Could not find method setClipToScreenEnabled() on PopupWindow. Oh well.");
        goto L15
    }

    public ListPopupWindow(@NonNull Context r3) {
        this(r3, null, R.attr.listPopupWindowStyle);
    }

    public ListPopupWindow(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, R.attr.listPopupWindowStyle);
    }

    public ListPopupWindow(@NonNull Context r2, @Nullable AttributeSet r3, @AttrRes int r4) {
        this(r2, r3, r4, 0);
    }

    public ListPopupWindow(@NonNull Context r5, @Nullable AttributeSet r6, @AttrRes int r7, @StyleRes int r8) {
        this.mDropDownHeight = -2;
        this.mDropDownWidth = -2;
        this.mDropDownWindowLayoutType = PointerIconCompat.TYPE_HAND;
        this.mIsAnimatedFromAnchor = true;
        this.mDropDownGravity = 0;
        this.mDropDownAlwaysVisible = false;
        this.mForceIgnoreOutsideTouch = false;
        this.mListItemExpandMaximum = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
        this.mPromptPosition = 0;
        this.mResizePopupRunnable = new ResizePopupRunnable(this);
        this.mTouchInterceptor = new PopupTouchInterceptor(this);
        this.mScrollListener = new PopupScrollListener(this);
        this.mHideSelector = new ListSelectorHider(this);
        this.mTempRect = new Rect();
        this.mContext = r5;
        this.mHandler = new Handler(r5.getMainLooper());
        TypedArray r2 = r5.obtainStyledAttributes(r6, R.styleable.ListPopupWindow, r7, r8);
        this.mDropDownHorizontalOffset = r2.getDimensionPixelOffset(R.styleable.ListPopupWindow_android_dropDownHorizontalOffset, 0);
        this.mDropDownVerticalOffset = r2.getDimensionPixelOffset(R.styleable.ListPopupWindow_android_dropDownVerticalOffset, 0);
        if (this.mDropDownVerticalOffset == 0) goto L5;
        this.mDropDownVerticalOffsetSet = true;
    L5:
        r2.recycle();
        this.mPopup = new AppCompatPopupWindow(r5, r6, r7, r8);
        this.mPopup.setInputMethodMode(1);
    }

    public void setAdapter(@Nullable ListAdapter r3) {
        DataSetObserver r0 = this.mObserver;
        if (r0 != null) goto L5;
        this.mObserver = new PopupDataSetObserver(this);
    L8:
        this.mAdapter = r3;
        if (r3 == null) goto L11;
        r3.registerDataSetObserver(this.mObserver);
    L11:
        DropDownListView r32 = this.mDropDownList;
        if (r32 == null) goto L15;
        r32.setAdapter(this.mAdapter);
        return;
    L15:
        return;
    L5:
        ListAdapter r1 = this.mAdapter;
        if (r1 == null) goto L8;
        r1.unregisterDataSetObserver(r0);
        goto L8
    }

    public void setPromptPosition(int r1) {
        this.mPromptPosition = r1;
    }

    public int getPromptPosition() {
        return this.mPromptPosition;
    }

    public void setModal(boolean r2) {
        this.mModal = r2;
        this.mPopup.setFocusable(r2);
    }

    public boolean isModal() {
        return this.mModal;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setForceIgnoreOutsideTouch(boolean r1) {
        this.mForceIgnoreOutsideTouch = r1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setDropDownAlwaysVisible(boolean r1) {
        this.mDropDownAlwaysVisible = r1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public boolean isDropDownAlwaysVisible() {
        return this.mDropDownAlwaysVisible;
    }

    public void setSoftInputMode(int r2) {
        this.mPopup.setSoftInputMode(r2);
    }

    public int getSoftInputMode() {
        return this.mPopup.getSoftInputMode();
    }

    public void setListSelector(Drawable r1) {
        this.mDropDownListHighlight = r1;
    }

    @Nullable
    public Drawable getBackground() {
        return this.mPopup.getBackground();
    }

    public void setBackgroundDrawable(@Nullable Drawable r2) {
        this.mPopup.setBackgroundDrawable(r2);
    }

    public void setAnimationStyle(@StyleRes int r2) {
        this.mPopup.setAnimationStyle(r2);
    }

    @StyleRes
    public int getAnimationStyle() {
        return this.mPopup.getAnimationStyle();
    }

    @Nullable
    public View getAnchorView() {
        return this.mDropDownAnchorView;
    }

    public void setAnchorView(@Nullable View r1) {
        this.mDropDownAnchorView = r1;
    }

    public int getHorizontalOffset() {
        return this.mDropDownHorizontalOffset;
    }

    public void setHorizontalOffset(int r1) {
        this.mDropDownHorizontalOffset = r1;
    }

    public int getVerticalOffset() {
        if (this.mDropDownVerticalOffsetSet == true) goto L7;
        return 0;
    L7:
        return this.mDropDownVerticalOffset;
    }

    public void setVerticalOffset(int r1) {
        this.mDropDownVerticalOffset = r1;
        this.mDropDownVerticalOffsetSet = true;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setEpicenterBounds(Rect r1) {
        this.mEpicenterBounds = r1;
    }

    public void setDropDownGravity(int r1) {
        this.mDropDownGravity = r1;
    }

    public int getWidth() {
        return this.mDropDownWidth;
    }

    public void setWidth(int r1) {
        this.mDropDownWidth = r1;
    }

    public void setContentWidth(int r3) {
        Drawable r0 = this.mPopup.getBackground();
        if (r0 == null) goto L5;
        r0.getPadding(this.mTempRect);
        this.mDropDownWidth = (this.mTempRect.left + this.mTempRect.right) + r3;
        return;
    L5:
        setWidth(r3);
    }

    public int getHeight() {
        return this.mDropDownHeight;
    }

    public void setHeight(int r2) {
        if (r2 < 0) goto L4;
    L10:
        this.mDropDownHeight = r2;
        return;
    L4:
        if ((-2) == r2) goto L10;
        if ((-1) == r2) goto L10;
        throw new IllegalArgumentException("Invalid height. Must be a positive value, MATCH_PARENT, or WRAP_CONTENT.");
    }

    public void setWindowLayoutType(int r1) {
        this.mDropDownWindowLayoutType = r1;
    }

    public void setOnItemClickListener(@Nullable AdapterView.OnItemClickListener r1) {
        this.mItemClickListener = r1;
    }

    public void setOnItemSelectedListener(@Nullable AdapterView.OnItemSelectedListener r1) {
        this.mItemSelectedListener = r1;
    }

    public void setPromptView(@Nullable View r2) {
        boolean r0 = isShowing();
        if (r0 == false) goto L5;
        removePromptView();
    L5:
        this.mPromptView = r2;
        if (r0 == false) goto L9;
        show();
        return;
    }

    public void postShow() {
        this.mHandler.post(this.mShowDropDownRunnable);
    }

    @Override
    public void show() {
        int r0 = buildDropDown();
        boolean r1 = isInputMethodNotNeeded();
        PopupWindowCompat.setWindowLayoutType(this.mPopup, this.mDropDownWindowLayoutType);
        boolean r3 = true;
        if (this.mPopup.isShowing() == true) goto L5;
        int r12 = this.mDropDownWidth;
        if (r12 != (-1)) goto L48;
        r12 = -1;
    L50:
        int r2 = this.mDropDownHeight;
        if (r2 != (-1)) goto L53;
        r0 = -1;
    L56:
        this.mPopup.setWidth(r12);
        this.mPopup.setHeight(r0);
        setPopupClipToScreenEnabled(true);
        PopupWindow r02 = this.mPopup;
        if (this.mForceIgnoreOutsideTouch == false) goto L59;
    L61:
        boolean r13 = false;
    L62:
        r02.setOutsideTouchable(r13);
        this.mPopup.setTouchInterceptor(this.mTouchInterceptor);
        if (this.mOverlapAnchorSet == false) goto L65;
        PopupWindowCompat.setOverlapAnchor(this.mPopup, this.mOverlapAnchor);
    L65:
        Method r03 = sSetEpicenterBoundsMethod;
        if (r03 != null) goto L80;
    L71:
        PopupWindowCompat.showAsDropDown(this.mPopup, getAnchorView(), this.mDropDownHorizontalOffset, this.mDropDownVerticalOffset, this.mDropDownGravity);
        this.mDropDownList.setSelection(-1);
        if (this.mModal == true) goto L74;
    L75:
        clearListSelection();
    L77:
        if (this.mModal == true) goto L83;
        this.mHandler.post(this.mHideSelector);
        return;
    L83:
        return;
    L74:
        if (this.mDropDownList.isInTouchMode() == false) goto L77;
    L80:
        r03.invoke(this.mPopup, new Object[]{this.mEpicenterBounds});     // Catch: Exception -> L69
    L69:
        e = move-exception;
        Log.e(TAG, "Could not invoke setEpicenterBounds on PopupWindow", e);
        goto L71
    L59:
        if (this.mDropDownAlwaysVisible == true) goto L61;
        r13 = true;
        goto L62
    L53:
        if (r2 == (-2)) goto L56;
        r0 = r2;
        goto L56
    L48:
        if (r12 != (-2)) goto L50;
        r12 = getAnchorView().getWidth();
        goto L50
    L5:
        if (ViewCompat.isAttachedToWindow(getAnchorView()) == true) goto L7;
        return;
    L7:
        int r22 = this.mDropDownWidth;
        if (r22 != (-1)) goto L10;
        r22 = -1;
    L12:
        int r7 = this.mDropDownHeight;
        if (r7 != (-1)) goto L28;
        if (r1 == true) goto L17;
        r0 = -1;
    L17:
        if (r1 == false) goto L23;
        PopupWindow r14 = this.mPopup;
        if (this.mDropDownWidth != (-1)) goto L21;
        int r4 = -1;
    L22:
        r14.setWidth(r4);
        this.mPopup.setHeight(0);
    L31:
        PopupWindow r15 = this.mPopup;
        if (this.mForceIgnoreOutsideTouch == false) goto L34;
    L36:
        r3 = false;
    L37:
        r15.setOutsideTouchable(r3);
        PopupWindow r72 = this.mPopup;
        View r8 = getAnchorView();
        int r9 = this.mDropDownHorizontalOffset;
        int r10 = this.mDropDownVerticalOffset;
        if (r22 >= 0) goto L40;
        int r11 = -1;
    L41:
        if (r0 >= 0) goto L43;
        int r122 = -1;
    L44:
        r72.update(r8, r9, r10, r11, r122);
        return;
    L43:
        r122 = r0;
        goto L44
    L40:
        r11 = r22;
        goto L41
    L34:
        if (this.mDropDownAlwaysVisible == true) goto L36;
    L21:
        r4 = 0;
        goto L22
    L23:
        PopupWindow r16 = this.mPopup;
        if (this.mDropDownWidth != (-1)) goto L26;
        int r42 = -1;
    L27:
        r16.setWidth(r42);
        this.mPopup.setHeight(-1);
        goto L31
    L26:
        r42 = 0;
        goto L27
    L28:
        if (r7 == (-2)) goto L31;
        r0 = r7;
        goto L31
    L10:
        if (r22 != (-2)) goto L12;
        r22 = getAnchorView().getWidth();
        goto L12
    }

    @Override
    public void dismiss() {
        this.mPopup.dismiss();
        removePromptView();
        this.mPopup.setContentView(null);
        this.mDropDownList = null;
        this.mHandler.removeCallbacks(this.mResizePopupRunnable);
    }

    public void setOnDismissListener(@Nullable PopupWindow.OnDismissListener r2) {
        this.mPopup.setOnDismissListener(r2);
    }

    private void removePromptView() {
        View r0 = this.mPromptView;
        if (r0 == null) goto L8;
        ViewParent r02 = r0.getParent();
        if ((r02 instanceof ViewGroup) == false) goto L9;
        ((ViewGroup) r02).removeView(this.mPromptView);
        return;
    L9:
        return;
    }

    public void setInputMethodMode(int r2) {
        this.mPopup.setInputMethodMode(r2);
    }

    public int getInputMethodMode() {
        return this.mPopup.getInputMethodMode();
    }

    public void setSelection(int r3) {
        DropDownListView r0 = this.mDropDownList;
        if (isShowing() == false) goto L9;
        if (r0 == null) goto L10;
        r0.setListSelectionHidden(false);
        r0.setSelection(r3);
        if (r0.getChoiceMode() == 0) goto L11;
        r0.setItemChecked(r3, true);
        return;
    L11:
        return;
    L10:
        return;
    }

    public void clearListSelection() {
        DropDownListView r0 = this.mDropDownList;
        if (r0 == null) goto L6;
        r0.setListSelectionHidden(true);
        r0.requestLayout();
        return;
    }

    @Override
    public boolean isShowing() {
        return this.mPopup.isShowing();
    }

    public boolean isInputMethodNotNeeded() {
        if (this.mPopup.getInputMethodMode() != 2) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean performItemClick(int r8) {
        if (isShowing() == true) goto L5;
        return false;
    L5:
        if (this.mItemClickListener == null) goto L11;
        DropDownListView r2 = this.mDropDownList;
        View r3 = r2.getChildAt(r8 - r2.getFirstVisiblePosition());
        ListAdapter r0 = r2.getAdapter();
        this.mItemClickListener.onItemClick(r2, r3, r8, r0.getItemId(r8));
        return true;
    L11:
        return true;
    }

    @Nullable
    public Object getSelectedItem() {
        if (isShowing() == true) goto L7;
        return null;
    L7:
        return this.mDropDownList.getSelectedItem();
    }

    public int getSelectedItemPosition() {
        if (isShowing() == true) goto L7;
        return -1;
    L7:
        return this.mDropDownList.getSelectedItemPosition();
    }

    public long getSelectedItemId() {
        if (isShowing() == true) goto L7;
        return Long.MIN_VALUE;
    L7:
        return this.mDropDownList.getSelectedItemId();
    }

    @Nullable
    public View getSelectedView() {
        if (isShowing() == true) goto L7;
        return null;
    L7:
        return this.mDropDownList.getSelectedView();
    }

    @Override
    @Nullable
    public ListView getListView() {
        return this.mDropDownList;
    }

    @NonNull
    DropDownListView createDropDownListView(Context r2, boolean r3) {
        return new DropDownListView(r2, r3);
    }

    void setListItemExpandMax(int r1) {
        this.mListItemExpandMaximum = r1;
    }

    public boolean onKeyDown(int r10, @NonNull KeyEvent r11) {
        if (isShowing() == true) goto L5;
    L50:
        return false;
    L5:
        if (r10 == 62) goto L50;
        if (this.mDropDownList.getSelectedItemPosition() < 0) goto L9;
    L10:
        int r0 = this.mDropDownList.getSelectedItemPosition();
        boolean r2 = !this.mPopup.isAboveAnchor();
        ListAdapter r4 = this.mAdapter;
        int r5 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
        if (r4 == null) goto L20;
        boolean r52 = r4.areAllItemsEnabled();
        if (r52 == false) goto L15;
        int r6 = 0;
    L16:
        if (r52 == false) goto L18;
        int r42 = r4.getCount() - 1;
    L19:
        r5 = r6;
    L22:
        if (r2 == false) goto L26;
        if (r10 != 19) goto L26;
        if (r0 > r5) goto L26;
    L29:
        clearListSelection();
        this.mPopup.setInputMethodMode(1);
        show();
        return true;
    L26:
        if (r2 == true) goto L31;
        if (r10 != 20) goto L31;
        if (r0 >= r42) goto L29;
    L31:
        this.mDropDownList.setListSelectionHidden(false);
        if (this.mDropDownList.onKeyDown(r10, r11) == false) goto L42;
        this.mPopup.setInputMethodMode(2);
        this.mDropDownList.requestFocusFromTouch();
        show();
        if (r10 == 19) goto L41;
        if (r10 == 20) goto L41;
        if (r10 == 23) goto L41;
        if (r10 != 66) goto L50;
    L41:
        return true;
    L42:
        if (r2 == false) goto L46;
        if (r10 != 20) goto L46;
        if (r0 != r42) goto L50;
        return true;
    L46:
        if (r2 == true) goto L50;
        if (r10 != 19) goto L50;
        if (r0 != r5) goto L50;
        return true;
    L18:
        r42 = this.mDropDownList.lookForSelectablePosition(r4.getCount() - 1, false);
        goto L19
    L15:
        r6 = this.mDropDownList.lookForSelectablePosition(0, true);
        goto L16
    L20:
        r42 = Integer.MIN_VALUE;
        goto L22
    L9:
        if (isConfirmKey(r10) == true) goto L50;
        goto L10
    }

    public boolean onKeyUp(int r2, @NonNull KeyEvent r3) {
        if (isShowing() == true) goto L5;
        return false;
    L5:
        if (this.mDropDownList.getSelectedItemPosition() < 0) goto L14;
        boolean r32 = this.mDropDownList.onKeyUp(r2, r3);
        if (r32 == true) goto L9;
    L11:
        return r32;
    L9:
        if (isConfirmKey(r2) == false) goto L11;
        dismiss();
        goto L11
    L14:
        return false;
    }

    public boolean onKeyPreIme(int r3, @NonNull KeyEvent r4) {
        if (r3 == 4) goto L5;
        return false;
    L5:
        if (isShowing() == false) goto L27;
        View r32 = this.mDropDownAnchorView;
        if (r4.getAction() != 0) goto L15;
        if (r4.getRepeatCount() != 0) goto L15;
        KeyEvent.DispatcherState r33 = r32.getKeyDispatcherState();
        if (r33 == null) goto L13;
        r33.startTracking(r4, this);
    L13:
        return true;
    L15:
        if (r4.getAction() != 1) goto L28;
        KeyEvent.DispatcherState r34 = r32.getKeyDispatcherState();
        if (r34 == null) goto L20;
        r34.handleUpEvent(r4);
    L20:
        if (r4.isTracking() == true) goto L22;
        return false;
    L22:
        if (r4.isCanceled() == true) goto L30;
        dismiss();
        return true;
    L30:
        return false;
    L28:
        return false;
    L27:
        return false;
    }

    public View.OnTouchListener createDragToOpenListener(final View r2) {
        return new 1(this, r2);
    }

    private int buildDropDown() {
        boolean r3 = true;
        if (this.mDropDownList != null) goto L25;
        Context r0 = this.mContext;
        this.mShowDropDownRunnable = new 2(this);
        this.mDropDownList = createDropDownListView(r0, !this.mModal);
        Drawable r5 = this.mDropDownListHighlight;
        if (r5 == null) goto L7;
        this.mDropDownList.setSelector(r5);
    L7:
        this.mDropDownList.setAdapter(this.mAdapter);
        this.mDropDownList.setOnItemClickListener(this.mItemClickListener);
        this.mDropDownList.setFocusable(true);
        this.mDropDownList.setFocusableInTouchMode(true);
        this.mDropDownList.setOnItemSelectedListener(new 3(this));
        this.mDropDownList.setOnScrollListener(this.mScrollListener);
        AdapterView.OnItemSelectedListener r52 = this.mItemSelectedListener;
        if (r52 == null) goto L10;
        this.mDropDownList.setOnItemSelectedListener(r52);
    L10:
        DropDownListView r53 = this.mDropDownList;
        View r6 = this.mPromptView;
        if (r6 == null) goto L23;
        LinearLayout r7 = new LinearLayout(r0);
        r7.setOrientation(1);
        LinearLayout.LayoutParams r02 = new LinearLayout.LayoutParams(-1, 0, 1.0f);
        int r8 = this.mPromptPosition;
        if (r8 == 0) goto L17;
        if (r8 == 1) goto L16;
        Log.e(TAG, "Invalid hint position " + this.mPromptPosition);
    L18:
        int r03 = this.mDropDownWidth;
        if (r03 < 0) goto L21;
        int r54 = Integer.MIN_VALUE;
    L22:
        r6.measure(View.MeasureSpec.makeMeasureSpec(r03, r54), 0);
        LinearLayout.LayoutParams r04 = (LinearLayout.LayoutParams) r6.getLayoutParams();
        int r05 = (r6.getMeasuredHeight() + r04.topMargin) + r04.bottomMargin;
        View r55 = r7;
    L24:
        this.mPopup.setContentView(r55);
    L29:
        Drawable r56 = this.mPopup.getBackground();
        if (r56 == null) goto L34;
        r56.getPadding(this.mTempRect);
        int r57 = this.mTempRect.top + this.mTempRect.bottom;
        if (this.mDropDownVerticalOffsetSet == true) goto L36;
        this.mDropDownVerticalOffset = -this.mTempRect.top;
    L36:
        if (this.mPopup.getInputMethodMode() == 2) goto L39;
        r3 = false;
    L39:
        int r32 = getMaxAvailableHeight(getAnchorView(), this.mDropDownVerticalOffset, r3);
        if (this.mDropDownAlwaysVisible == true) goto L58;
        if (this.mDropDownHeight == (-1)) goto L58;
        int r4 = this.mDropDownWidth;
        if (r4 != (-2)) goto L47;
        int r1 = View.MeasureSpec.makeMeasureSpec(this.mContext.getResources().getDisplayMetrics().widthPixels - (this.mTempRect.left + this.mTempRect.right), Integer.MIN_VALUE);
    L52:
        int r12 = this.mDropDownList.measureHeightOfChildrenCompat(r1, 0, -1, r32 - r05, -1);
        if (r12 <= 0) goto L56;
        r05 = r05 + (r57 + (this.mDropDownList.getPaddingTop() + this.mDropDownList.getPaddingBottom()));
    L56:
        return r12 + r05;
    L47:
        if (r4 == (-1)) goto L50;
        r1 = View.MeasureSpec.makeMeasureSpec(r4, 1073741824);
        goto L52
    L50:
        r1 = View.MeasureSpec.makeMeasureSpec(this.mContext.getResources().getDisplayMetrics().widthPixels - (this.mTempRect.left + this.mTempRect.right), 1073741824);
    L58:
        return r32 + r57;
    L34:
        this.mTempRect.setEmpty();
        r57 = 0;
        goto L36
    L21:
        r03 = 0;
        r54 = 0;
        goto L22
    L16:
        r7.addView(r53, r02);
        r7.addView(r6);
        goto L18
    L17:
        r7.addView(r6);
        r7.addView(r53, r02);
        goto L18
    L23:
        r05 = 0;
        r55 = r53;
        goto L24
    L25:
        ViewGroup r06 = (ViewGroup) this.mPopup.getContentView();
        View r07 = this.mPromptView;
        if (r07 == null) goto L28;
        LinearLayout.LayoutParams r58 = (LinearLayout.LayoutParams) r07.getLayoutParams();
        r05 = (r07.getMeasuredHeight() + r58.topMargin) + r58.bottomMargin;
        goto L29
    L28:
        r05 = 0;
        goto L29
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setOverlapAnchor(boolean r2) {
        this.mOverlapAnchorSet = true;
        this.mOverlapAnchor = r2;
    }

    private void setPopupClipToScreenEnabled(boolean r5) {
        Method r0 = sClipToWindowEnabledMethod;
        if (r0 == null) goto L10;
        r0.invoke(this.mPopup, new Object[]{Boolean.valueOf(r5)});     // Catch: Exception -> L6
        return;
    L6:
        Log.i(TAG, "Could not call setClipToScreenEnabled() on PopupWindow. Oh well.");
        return;
    }

    private int getMaxAvailableHeight(View r6, int r7, boolean r8) {
        Method r0 = sGetMaxAvailableHeightMethod;
        if (r0 == null) goto L8;
        return ((Integer) r0.invoke(this.mPopup, new Object[]{r6, Integer.valueOf(r7), Boolean.valueOf(r8)})).intValue();
    L6:
        Log.i(TAG, "Could not call getMaxAvailableHeightMethod(View, int, boolean) on PopupWindow. Using the public version.");
    L8:
        return this.mPopup.getMaxAvailableHeight(r6, r7);
    }
}
