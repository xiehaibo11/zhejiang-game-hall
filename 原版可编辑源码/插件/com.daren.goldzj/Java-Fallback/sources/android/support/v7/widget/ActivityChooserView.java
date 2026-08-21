package android.support.v7.widget;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ActionProvider;
import android.support.v7.appcompat.R;
import android.support.v7.widget.ActivityChooserModel;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.PopupWindow;
import android.widget.TextView;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ActivityChooserView extends ViewGroup implements ActivityChooserModel.ActivityChooserModelClient {
    private static final String LOG_TAG = "ActivityChooserView";
    private final View mActivityChooserContent;
    private final Drawable mActivityChooserContentBackground;
    final ActivityChooserViewAdapter mAdapter;
    private final Callbacks mCallbacks;
    private int mDefaultActionButtonContentDescription;
    final FrameLayout mDefaultActivityButton;
    private final ImageView mDefaultActivityButtonImage;
    final FrameLayout mExpandActivityOverflowButton;
    private final ImageView mExpandActivityOverflowButtonImage;
    int mInitialActivityCount;
    private boolean mIsAttachedToWindow;
    boolean mIsSelectingDefaultActivity;
    private final int mListPopupMaxWidth;
    private ListPopupWindow mListPopupWindow;
    final DataSetObserver mModelDataSetObserver;
    PopupWindow.OnDismissListener mOnDismissListener;
    private final ViewTreeObserver.OnGlobalLayoutListener mOnGlobalLayoutListener;
    ActionProvider mProvider;

    private class ActivityChooserViewAdapter extends BaseAdapter {
        private static final int ITEM_VIEW_TYPE_ACTIVITY = 0;
        private static final int ITEM_VIEW_TYPE_COUNT = 3;
        private static final int ITEM_VIEW_TYPE_FOOTER = 1;
        public static final int MAX_ACTIVITY_COUNT_DEFAULT = 4;
        public static final int MAX_ACTIVITY_COUNT_UNLIMITED = Integer.MAX_VALUE;
        private ActivityChooserModel mDataModel;
        private boolean mHighlightDefaultActivity;
        private int mMaxActivityCount;
        private boolean mShowDefaultActivity;
        private boolean mShowFooterView;
        final ActivityChooserView this$0;

        @Override
        public long getItemId(int r3) {
            return r3;
        }

        @Override
        public int getViewTypeCount() {
            return 3;
        }

        ActivityChooserViewAdapter(ActivityChooserView r1) {
            this.this$0 = r1;
            this.mMaxActivityCount = 4;
        }

        public void setDataModel(ActivityChooserModel r3) {
            ActivityChooserModel r0 = this.this$0.mAdapter.getDataModel();
            if (r0 != null) goto L5;
        L7:
            this.mDataModel = r3;
            if (r3 != null) goto L10;
        L12:
            notifyDataSetChanged();
            return;
        L10:
            if (this.this$0.isShown() == false) goto L12;
            r3.registerObserver(this.this$0.mModelDataSetObserver);
            goto L12
        L5:
            if (this.this$0.isShown() == false) goto L7;
            r0.unregisterObserver(this.this$0.mModelDataSetObserver);
            goto L7
        }

        @Override
        public int getItemViewType(int r3) {
            if (this.mShowFooterView == true) goto L5;
            return 0;
        L5:
            if (r3 != (getCount() - 1)) goto L9;
            return 1;
        L9:
            return 0;
        }

        @Override
        public int getCount() {
            int r0 = this.mDataModel.getActivityCount();
            if (this.mShowDefaultActivity == false) goto L5;
        L7:
            int r02 = Math.min(r0, this.mMaxActivityCount);
            if (this.mShowFooterView == true) goto L10;
            return r02;
        L10:
            return r02 + 1;
        L5:
            if (this.mDataModel.getDefaultActivity() == null) goto L7;
            r0 = r0 - 1;
            goto L7
        }

        @Override
        public Object getItem(int r2) {
            int r0 = getItemViewType(r2);
            if (r0 == 0) goto L11;
            if (r0 != 1) goto L9;
            return null;
        L9:
            throw new IllegalArgumentException();
        L11:
            if (this.mShowDefaultActivity == true) goto L16;
            if (this.mDataModel.getDefaultActivity() == null) goto L16;
            r2 = r2 + 1;
        L16:
            return this.mDataModel.getActivity(r2);
        }

        @Override
        public View getView(int r6, View r7, ViewGroup r8) {
            int r0 = getItemViewType(r6);
            if (r0 == 0) goto L12;
            if (r0 != 1) goto L11;
            if (r7 != null) goto L7;
        L8:
            View r72 = LayoutInflater.from(this.this$0.getContext()).inflate(R.layout.abc_activity_chooser_view_list_item, r8, false);
            r72.setId(1);
            ((TextView) r72.findViewById(R.id.title)).setText(this.this$0.getContext().getString(R.string.abc_activity_chooser_view_see_all));
            return r72;
        L7:
            if (r7.getId() != 1) goto L8;
            return r7;
        L11:
            throw new IllegalArgumentException();
        L12:
            if (r7 != null) goto L14;
        L15:
            r7 = LayoutInflater.from(this.this$0.getContext()).inflate(R.layout.abc_activity_chooser_view_list_item, r8, false);
        L16:
            PackageManager r82 = this.this$0.getContext().getPackageManager();
            ImageView r02 = (ImageView) r7.findViewById(R.id.icon);
            ResolveInfo r3 = (ResolveInfo) getItem(r6);
            r02.setImageDrawable(r3.loadIcon(r82));
            ((TextView) r7.findViewById(R.id.title)).setText(r3.loadLabel(r82));
            if (this.mShowDefaultActivity == false) goto L22;
            if (r6 != 0) goto L22;
            if (this.mHighlightDefaultActivity == false) goto L22;
            r7.setActivated(true);
        L23:
            return r7;
        L22:
            r7.setActivated(false);
            goto L23
        L14:
            if (r7.getId() == R.id.list_item) goto L16;
            goto L15
        }

        public int measureContentWidth() {
            int r0 = this.mMaxActivityCount;
            this.mMaxActivityCount = MAX_ACTIVITY_COUNT_UNLIMITED;
            int r1 = 0;
            int r2 = View.MeasureSpec.makeMeasureSpec(0, 0);
            int r3 = View.MeasureSpec.makeMeasureSpec(0, 0);
            int r4 = getCount();
            View r7 = null;
            int r6 = 0;
        L3:
            if (r1 >= r4) goto L5;
            r7 = getView(r1, r7, null);
            r7.measure(r2, r3);
            r6 = Math.max(r6, r7.getMeasuredWidth());
            r1 = r1 + 1;
            goto L3
        L5:
            this.mMaxActivityCount = r0;
            return r6;
        }

        public void setMaxActivityCount(int r2) {
            if (this.mMaxActivityCount == r2) goto L6;
            this.mMaxActivityCount = r2;
            notifyDataSetChanged();
            return;
        }

        public ResolveInfo getDefaultActivity() {
            return this.mDataModel.getDefaultActivity();
        }

        public void setShowFooterView(boolean r2) {
            if (this.mShowFooterView == r2) goto L6;
            this.mShowFooterView = r2;
            notifyDataSetChanged();
            return;
        }

        public int getActivityCount() {
            return this.mDataModel.getActivityCount();
        }

        public int getHistorySize() {
            return this.mDataModel.getHistorySize();
        }

        public ActivityChooserModel getDataModel() {
            return this.mDataModel;
        }

        public void setShowDefaultActivity(boolean r2, boolean r3) {
            if (this.mShowDefaultActivity == r2) goto L5;
        L6:
            this.mShowDefaultActivity = r2;
            this.mHighlightDefaultActivity = r3;
            notifyDataSetChanged();
            return;
        L5:
            if (this.mHighlightDefaultActivity != r3) goto L6;
        }

        public boolean getShowDefaultActivity() {
            return this.mShowDefaultActivity;
        }
    }

    private class Callbacks implements AdapterView.OnItemClickListener, View.OnClickListener, View.OnLongClickListener, PopupWindow.OnDismissListener {
        final ActivityChooserView this$0;

        Callbacks(ActivityChooserView r1) {
            this.this$0 = r1;
        }

        @Override
        public void onItemClick(AdapterView<?> r1, View r2, int r3, long r4) {
            int r12 = ((ActivityChooserViewAdapter) r1.getAdapter()).getItemViewType(r3);
            if (r12 != 0) goto L5;
            this.this$0.dismissPopup();
            if (this.this$0.mIsSelectingDefaultActivity == false) goto L14;
            if (r3 <= 0) goto L22;
            this.this$0.mAdapter.getDataModel().setDefaultActivity(r3);
            return;
        L22:
            return;
        L14:
            if (this.this$0.mAdapter.getShowDefaultActivity() == true) goto L17;
            r3 = r3 + 1;
        L17:
            Intent r13 = this.this$0.mAdapter.getDataModel().chooseActivity(r3);
            if (r13 == null) goto L24;
            r13.addFlags(524288);
            this.this$0.getContext().startActivity(r13);
            return;
        L24:
            return;
        L5:
            if (r12 != 1) goto L8;
            this.this$0.showPopupUnchecked(ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED);
            return;
        L8:
            throw new IllegalArgumentException();
        }

        @Override
        public void onClick(View r2) {
            if (r2 != this.this$0.mDefaultActivityButton) goto L8;
            this.this$0.dismissPopup();
            ResolveInfo r22 = this.this$0.mAdapter.getDefaultActivity();
            int r23 = this.this$0.mAdapter.getDataModel().getActivityIndex(r22);
            Intent r24 = this.this$0.mAdapter.getDataModel().chooseActivity(r23);
            if (r24 == null) goto L13;
            r24.addFlags(524288);
            this.this$0.getContext().startActivity(r24);
            return;
        L13:
            return;
        L8:
            if (r2 != this.this$0.mExpandActivityOverflowButton) goto L12;
            ActivityChooserView r25 = this.this$0;
            r25.mIsSelectingDefaultActivity = false;
            r25.showPopupUnchecked(r25.mInitialActivityCount);
            return;
        L12:
            throw new IllegalArgumentException();
        }

        @Override
        public boolean onLongClick(View r3) {
            if (r3 != this.this$0.mDefaultActivityButton) goto L9;
            if (this.this$0.mAdapter.getCount() <= 0) goto L7;
            ActivityChooserView r32 = this.this$0;
            r32.mIsSelectingDefaultActivity = true;
            r32.showPopupUnchecked(r32.mInitialActivityCount);
        L7:
            return true;
        L9:
            throw new IllegalArgumentException();
        }

        @Override
        public void onDismiss() {
            notifyOnDismissListener();
            if (this.this$0.mProvider == null) goto L6;
            this.this$0.mProvider.subUiVisibilityChanged(false);
            return;
        }

        private void notifyOnDismissListener() {
            if (this.this$0.mOnDismissListener == null) goto L6;
            this.this$0.mOnDismissListener.onDismiss();
            return;
        }
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static class InnerLayout extends LinearLayout {
        private static final int[] TINT_ATTRS = null;

        static {
            TINT_ATTRS = new int[]{android.R.attr.background};
        }

        public InnerLayout(Context r2, AttributeSet r3) {
            super(r2, r3);
            TintTypedArray r22 = TintTypedArray.obtainStyledAttributes(r2, r3, TINT_ATTRS);
            setBackgroundDrawable(r22.getDrawable(0));
            r22.recycle();
        }
    }

    public ActivityChooserView(Context r2) {
        this(r2, null);
    }

    public ActivityChooserView(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    public ActivityChooserView(Context r4, AttributeSet r5, int r6) {
        super(r4, r5, r6);
        this.mModelDataSetObserver = new 1(this);
        this.mOnGlobalLayoutListener = new 2(this);
        this.mInitialActivityCount = 4;
        TypedArray r52 = r4.obtainStyledAttributes(r5, R.styleable.ActivityChooserView, r6, 0);
        this.mInitialActivityCount = r52.getInt(R.styleable.ActivityChooserView_initialActivityCount, 4);
        Drawable r62 = r52.getDrawable(R.styleable.ActivityChooserView_expandActivityOverflowButtonDrawable);
        r52.recycle();
        LayoutInflater.from(getContext()).inflate(R.layout.abc_activity_chooser_view, this, true);
        this.mCallbacks = new Callbacks(this);
        this.mActivityChooserContent = findViewById(R.id.activity_chooser_view_content);
        this.mActivityChooserContentBackground = this.mActivityChooserContent.getBackground();
        this.mDefaultActivityButton = (FrameLayout) findViewById(R.id.default_activity_button);
        this.mDefaultActivityButton.setOnClickListener(this.mCallbacks);
        this.mDefaultActivityButton.setOnLongClickListener(this.mCallbacks);
        this.mDefaultActivityButtonImage = (ImageView) this.mDefaultActivityButton.findViewById(R.id.image);
        final FrameLayout r53 = (FrameLayout) findViewById(R.id.expand_activities_button);
        r53.setOnClickListener(this.mCallbacks);
        r53.setAccessibilityDelegate(new 3(this));
        r53.setOnTouchListener(new 4(this, r53));
        this.mExpandActivityOverflowButton = r53;
        this.mExpandActivityOverflowButtonImage = (ImageView) r53.findViewById(R.id.image);
        this.mExpandActivityOverflowButtonImage.setImageDrawable(r62);
        this.mAdapter = new ActivityChooserViewAdapter(this);
        this.mAdapter.registerDataSetObserver(new 5(this));
        Resources r42 = r4.getResources();
        this.mListPopupMaxWidth = Math.max(r42.getDisplayMetrics().widthPixels / 2, r42.getDimensionPixelSize(R.dimen.abc_config_prefDialogWidth));
    }

    @Override
    public void setActivityChooserModel(ActivityChooserModel r2) {
        this.mAdapter.setDataModel(r2);
        if (isShowingPopup() == false) goto L6;
        dismissPopup();
        showPopup();
        return;
    }

    public void setExpandActivityOverflowButtonDrawable(Drawable r2) {
        this.mExpandActivityOverflowButtonImage.setImageDrawable(r2);
    }

    public void setExpandActivityOverflowButtonContentDescription(int r2) {
        String r22 = getContext().getString(r2);
        this.mExpandActivityOverflowButtonImage.setContentDescription(r22);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setProvider(ActionProvider r1) {
        this.mProvider = r1;
    }

    public boolean showPopup() {
        if (isShowingPopup() == false) goto L5;
    L9:
        return false;
    L5:
        if (this.mIsAttachedToWindow == false) goto L9;
        this.mIsSelectingDefaultActivity = false;
        showPopupUnchecked(this.mInitialActivityCount);
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v15 */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7, types: [boolean, int] */
    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    void showPopupUnchecked(int r6) {
        if (this.mAdapter.getDataModel() == null) goto L28;
        getViewTreeObserver().addOnGlobalLayoutListener(this.mOnGlobalLayoutListener);
        if (this.mDefaultActivityButton.getVisibility() != 0) goto L7;
        ?? r0 = 1;
    L8:
        int r3 = this.mAdapter.getActivityCount();
        if (r6 != Integer.MAX_VALUE) goto L11;
    L13:
        this.mAdapter.setShowFooterView(false);
        this.mAdapter.setMaxActivityCount(r6);
    L14:
        ListPopupWindow r62 = getListPopupWindow();
        if (r62.isShowing() == false) goto L17;
        return;
    L17:
        if (this.mIsSelectingDefaultActivity == true) goto L21;
        if (r0 == 0) goto L21;
        this.mAdapter.setShowDefaultActivity(false, false);
    L22:
        r62.setContentWidth(Math.min(this.mAdapter.measureContentWidth(), this.mListPopupMaxWidth));
        r62.show();
        ActionProvider r02 = this.mProvider;
        if (r02 == null) goto L25;
        r02.subUiVisibilityChanged(true);
    L25:
        r62.getListView().setContentDescription(getContext().getString(R.string.abc_activitychooserview_choose_application));
        r62.getListView().setSelector(new ColorDrawable(0));
        return;
    L21:
        this.mAdapter.setShowDefaultActivity(true, r0);
        goto L22
    L11:
        if (r3 <= (r6 + r0)) goto L13;
        this.mAdapter.setShowFooterView(true);
        this.mAdapter.setMaxActivityCount(r6 - 1);
        goto L14
    L7:
        r0 = 0;
        goto L8
    L28:
        throw new IllegalStateException("No data model. Did you call #setDataModel?");
    }

    public boolean dismissPopup() {
        if (isShowingPopup() == false) goto L9;
        getListPopupWindow().dismiss();
        ViewTreeObserver r0 = getViewTreeObserver();
        if (r0.isAlive() == false) goto L10;
        r0.removeGlobalOnLayoutListener(this.mOnGlobalLayoutListener);
        return true;
    L10:
        return true;
    L9:
        return true;
    }

    public boolean isShowingPopup() {
        return getListPopupWindow().isShowing();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ActivityChooserModel r0 = this.mAdapter.getDataModel();
        if (r0 == null) goto L5;
        r0.registerObserver(this.mModelDataSetObserver);
    L5:
        this.mIsAttachedToWindow = true;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ActivityChooserModel r0 = this.mAdapter.getDataModel();
        if (r0 == null) goto L5;
        r0.unregisterObserver(this.mModelDataSetObserver);
    L5:
        ViewTreeObserver r02 = getViewTreeObserver();
        if (r02.isAlive() == false) goto L9;
        r02.removeGlobalOnLayoutListener(this.mOnGlobalLayoutListener);
    L9:
        if (isShowingPopup() == false) goto L11;
        dismissPopup();
    L11:
        this.mIsAttachedToWindow = false;
    }

    @Override
    protected void onMeasure(int r3, int r4) {
        View r0 = this.mActivityChooserContent;
        if (this.mDefaultActivityButton.getVisibility() == 0) goto L5;
        r4 = View.MeasureSpec.makeMeasureSpec(View.MeasureSpec.getSize(r4), 1073741824);
    L5:
        measureChild(r0, r3, r4);
        setMeasuredDimension(r0.getMeasuredWidth(), r0.getMeasuredHeight());
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
        this.mActivityChooserContent.layout(0, 0, r4 - r2, r5 - r3);
        if (isShowingPopup() == true) goto L6;
        dismissPopup();
        return;
    }

    public ActivityChooserModel getDataModel() {
        return this.mAdapter.getDataModel();
    }

    public void setOnDismissListener(PopupWindow.OnDismissListener r1) {
        this.mOnDismissListener = r1;
    }

    public void setInitialActivityCount(int r1) {
        this.mInitialActivityCount = r1;
    }

    public void setDefaultActionButtonContentDescription(int r1) {
        this.mDefaultActionButtonContentDescription = r1;
    }

    ListPopupWindow getListPopupWindow() {
        if (this.mListPopupWindow != null) goto L6;
        this.mListPopupWindow = new ListPopupWindow(getContext());
        this.mListPopupWindow.setAdapter(this.mAdapter);
        this.mListPopupWindow.setAnchorView(this);
        this.mListPopupWindow.setModal(true);
        this.mListPopupWindow.setOnItemClickListener(this.mCallbacks);
        this.mListPopupWindow.setOnDismissListener(this.mCallbacks);
    L6:
        return this.mListPopupWindow;
    }

    void updateAppearance() {
        if (this.mAdapter.getCount() <= 0) goto L5;
        this.mExpandActivityOverflowButton.setEnabled(true);
    L6:
        int r0 = this.mAdapter.getActivityCount();
        int r3 = this.mAdapter.getHistorySize();
        if (r0 == 1) goto L12;
        if (r0 <= 1) goto L11;
        if (r3 > 0) goto L12;
    L11:
        this.mDefaultActivityButton.setVisibility(8);
    L16:
        if (this.mDefaultActivityButton.getVisibility() != 0) goto L18;
        this.mActivityChooserContent.setBackgroundDrawable(this.mActivityChooserContentBackground);
        return;
    L18:
        this.mActivityChooserContent.setBackgroundDrawable(null);
        return;
    L12:
        this.mDefaultActivityButton.setVisibility(0);
        ResolveInfo r02 = this.mAdapter.getDefaultActivity();
        PackageManager r32 = getContext().getPackageManager();
        this.mDefaultActivityButtonImage.setImageDrawable(r02.loadIcon(r32));
        if (this.mDefaultActionButtonContentDescription == 0) goto L16;
        CharSequence r03 = r02.loadLabel(r32);
        this.mDefaultActivityButton.setContentDescription(getContext().getString(this.mDefaultActionButtonContentDescription, new Object[]{r03}));
        goto L16
    L5:
        this.mExpandActivityOverflowButton.setEnabled(false);
        goto L6
    }
}
