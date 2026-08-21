package android.support.v7.app;

import android.R;
import android.content.Context;
import android.content.DialogInterface;
import android.content.res.TypedArray;
import android.database.Cursor;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.support.annotation.Nullable;
import android.support.v4.view.ViewCompat;
import android.support.v4.widget.NestedScrollView;
import android.support.v7.widget.LinearLayoutCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.ViewStub;
import android.view.Window;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;
import android.widget.TextView;
import java.lang.ref.WeakReference;

class AlertController {
    ListAdapter mAdapter;
    private int mAlertDialogLayout;
    private final View.OnClickListener mButtonHandler;
    private final int mButtonIconDimen;
    Button mButtonNegative;
    private Drawable mButtonNegativeIcon;
    Message mButtonNegativeMessage;
    private CharSequence mButtonNegativeText;
    Button mButtonNeutral;
    private Drawable mButtonNeutralIcon;
    Message mButtonNeutralMessage;
    private CharSequence mButtonNeutralText;
    private int mButtonPanelLayoutHint;
    private int mButtonPanelSideLayout;
    Button mButtonPositive;
    private Drawable mButtonPositiveIcon;
    Message mButtonPositiveMessage;
    private CharSequence mButtonPositiveText;
    int mCheckedItem;
    private final Context mContext;
    private View mCustomTitleView;
    final AppCompatDialog mDialog;
    Handler mHandler;
    private Drawable mIcon;
    private int mIconId;
    private ImageView mIconView;
    int mListItemLayout;
    int mListLayout;
    ListView mListView;
    private CharSequence mMessage;
    private TextView mMessageView;
    int mMultiChoiceItemLayout;
    NestedScrollView mScrollView;
    private boolean mShowTitle;
    int mSingleChoiceItemLayout;
    private CharSequence mTitle;
    private TextView mTitleView;
    private View mView;
    private int mViewLayoutResId;
    private int mViewSpacingBottom;
    private int mViewSpacingLeft;
    private int mViewSpacingRight;
    private boolean mViewSpacingSpecified;
    private int mViewSpacingTop;
    private final Window mWindow;

    public static class AlertParams {
        public ListAdapter mAdapter;
        public boolean mCancelable;
        public int mCheckedItem;
        public boolean[] mCheckedItems;
        public final Context mContext;
        public Cursor mCursor;
        public View mCustomTitleView;
        public boolean mForceInverseBackground;
        public Drawable mIcon;
        public int mIconAttrId;
        public int mIconId;
        public final LayoutInflater mInflater;
        public String mIsCheckedColumn;
        public boolean mIsMultiChoice;
        public boolean mIsSingleChoice;
        public CharSequence[] mItems;
        public String mLabelColumn;
        public CharSequence mMessage;
        public Drawable mNegativeButtonIcon;
        public DialogInterface.OnClickListener mNegativeButtonListener;
        public CharSequence mNegativeButtonText;
        public Drawable mNeutralButtonIcon;
        public DialogInterface.OnClickListener mNeutralButtonListener;
        public CharSequence mNeutralButtonText;
        public DialogInterface.OnCancelListener mOnCancelListener;
        public DialogInterface.OnMultiChoiceClickListener mOnCheckboxClickListener;
        public DialogInterface.OnClickListener mOnClickListener;
        public DialogInterface.OnDismissListener mOnDismissListener;
        public AdapterView.OnItemSelectedListener mOnItemSelectedListener;
        public DialogInterface.OnKeyListener mOnKeyListener;
        public OnPrepareListViewListener mOnPrepareListViewListener;
        public Drawable mPositiveButtonIcon;
        public DialogInterface.OnClickListener mPositiveButtonListener;
        public CharSequence mPositiveButtonText;
        public boolean mRecycleOnMeasure;
        public CharSequence mTitle;
        public View mView;
        public int mViewLayoutResId;
        public int mViewSpacingBottom;
        public int mViewSpacingLeft;
        public int mViewSpacingRight;
        public boolean mViewSpacingSpecified;
        public int mViewSpacingTop;

        public interface OnPrepareListViewListener {
            void onPrepareListView(ListView r1);
        }

        public AlertParams(Context r2) {
            this.mIconId = 0;
            this.mIconAttrId = 0;
            this.mViewSpacingSpecified = false;
            this.mCheckedItem = -1;
            this.mRecycleOnMeasure = true;
            this.mContext = r2;
            this.mCancelable = true;
            this.mInflater = (LayoutInflater) r2.getSystemService("layout_inflater");
        }

        public void apply(AlertController r8) {
            View r0 = this.mCustomTitleView;
            if (r0 == null) goto L5;
            r8.setCustomTitle(r0);
        L17:
            CharSequence r02 = this.mMessage;
            if (r02 == null) goto L21;
            r8.setMessage(r02);
        L21:
            if (this.mPositiveButtonText == null) goto L23;
        L24:
            r8.setButton(-1, this.mPositiveButtonText, this.mPositiveButtonListener, null, this.mPositiveButtonIcon);
        L26:
            if (this.mNegativeButtonText == null) goto L28;
        L29:
            r8.setButton(-2, this.mNegativeButtonText, this.mNegativeButtonListener, null, this.mNegativeButtonIcon);
        L31:
            if (this.mNeutralButtonText == null) goto L33;
        L34:
            r8.setButton(-3, this.mNeutralButtonText, this.mNeutralButtonListener, null, this.mNeutralButtonIcon);
        L36:
            if (this.mItems == null) goto L38;
        L41:
            createListView(r8);
        L42:
            View r2 = this.mView;
            if (r2 != null) goto L45;
            int r03 = this.mViewLayoutResId;
            if (r03 == 0) goto L54;
            r8.setView(r03);
            return;
        L54:
            return;
        L45:
            if (this.mViewSpacingSpecified == false) goto L47;
            r8.setView(r2, this.mViewSpacingLeft, this.mViewSpacingTop, this.mViewSpacingRight, this.mViewSpacingBottom);
            return;
        L47:
            r8.setView(r2);
            return;
        L38:
            if (this.mCursor != null) goto L41;
            if (this.mAdapter == null) goto L42;
        L33:
            if (this.mNeutralButtonIcon == null) goto L36;
        L28:
            if (this.mNegativeButtonIcon == null) goto L31;
        L23:
            if (this.mPositiveButtonIcon == null) goto L26;
        L5:
            CharSequence r04 = this.mTitle;
            if (r04 == null) goto L8;
            r8.setTitle(r04);
        L8:
            Drawable r05 = this.mIcon;
            if (r05 == null) goto L11;
            r8.setIcon(r05);
        L11:
            int r06 = this.mIconId;
            if (r06 == 0) goto L14;
            r8.setIcon(r06);
        L14:
            int r07 = this.mIconAttrId;
            if (r07 == 0) goto L17;
            r8.setIcon(r8.getIconAttributeResId(r07));
            goto L17
        }

        private void createListView(final AlertController r12) {
            final RecycleListView r0 = (RecycleListView) this.mInflater.inflate(r12.mListLayout, null);
            if (this.mIsMultiChoice == false) goto L9;
            final Cursor r4 = this.mCursor;
            if (r4 != null) goto L7;
            final Context r3 = this.mContext;
            final int r42 = r12.mMultiChoiceItemLayout;
            final int r5 = R.id.text1;
            final CharSequence[] r6 = this.mItems;
            ListAdapter r9 = new 1(this, r3, r42, r5, r6, r0);
        L19:
            OnPrepareListViewListener r1 = this.mOnPrepareListViewListener;
            if (r1 == null) goto L22;
            r1.onPrepareListView(r0);
        L22:
            r12.mAdapter = r9;
            r12.mCheckedItem = this.mCheckedItem;
            if (this.mOnClickListener == null) goto L26;
            r0.setOnItemClickListener(new 3(this, r12));
        L28:
            AdapterView.OnItemSelectedListener r13 = this.mOnItemSelectedListener;
            if (r13 == null) goto L32;
            r0.setOnItemSelectedListener(r13);
        L32:
            if (this.mIsSingleChoice == false) goto L35;
            r0.setChoiceMode(1);
        L37:
            r12.mListView = r0;
            return;
        L35:
            if (this.mIsMultiChoice == false) goto L37;
            r0.setChoiceMode(2);
            goto L37
        L26:
            if (this.mOnCheckboxClickListener == null) goto L28;
            r0.setOnItemClickListener(new 4(this, r0, r12));
            goto L28
        L7:
            final Context r32 = this.mContext;
            final boolean r52 = false;
            r9 = new 2(this, r32, r4, r52, r0, r12);
            goto L19
        L9:
            if (this.mIsSingleChoice == false) goto L11;
            int r14 = r12.mSingleChoiceItemLayout;
        L12:
            int r43 = r14;
            Cursor r53 = this.mCursor;
            if (r53 == null) goto L15;
            r9 = new SimpleCursorAdapter(this.mContext, r43, r53, new String[]{this.mLabelColumn}, new int[]{R.id.text1});
            goto L19
        L15:
            r9 = this.mAdapter;
            if (r9 != null) goto L19;
            r9 = new CheckedItemAdapter(this.mContext, r43, R.id.text1, this.mItems);
            goto L19
        L11:
            r14 = r12.mListItemLayout;
            goto L12
        }
    }

    private static final class ButtonHandler extends Handler {
        private static final int MSG_DISMISS_DIALOG = 1;
        private WeakReference<DialogInterface> mDialog;

        public ButtonHandler(DialogInterface r2) {
            this.mDialog = new WeakReference(r2);
        }

        @Override
        public void handleMessage(Message r3) {
            int r0 = r3.what;
            if (r0 != (-3)) goto L5;
        L12:
            ((DialogInterface.OnClickListener) r3.obj).onClick(this.mDialog.get(), r3.what);
            return;
        L5:
            if (r0 == (-2)) goto L12;
            if (r0 == (-1)) goto L12;
            if (r0 != 1) goto L15;
            ((DialogInterface) r3.obj).dismiss();
            return;
        }
    }

    private static class CheckedItemAdapter extends ArrayAdapter<CharSequence> {
        @Override
        public long getItemId(int r3) {
            return r3;
        }

        @Override
        public boolean hasStableIds() {
            return true;
        }

        public CheckedItemAdapter(Context r1, int r2, int r3, CharSequence[] r4) {
            super(r1, r2, r3, r4);
        }
    }

    public static class RecycleListView extends ListView {
        private final int mPaddingBottomNoButtons;
        private final int mPaddingTopNoTitle;

        public RecycleListView(Context r2) {
            this(r2, null);
        }

        public RecycleListView(Context r2, AttributeSet r3) {
            super(r2, r3);
            TypedArray r22 = r2.obtainStyledAttributes(r3, android.support.v7.appcompat.R.styleable.RecycleListView);
            this.mPaddingBottomNoButtons = r22.getDimensionPixelOffset(android.support.v7.appcompat.R.styleable.RecycleListView_paddingBottomNoButtons, -1);
            this.mPaddingTopNoTitle = r22.getDimensionPixelOffset(android.support.v7.appcompat.R.styleable.RecycleListView_paddingTopNoTitle, -1);
        }

        public void setHasDecor(boolean r3, boolean r4) {
            if (r4 == false) goto L4;
            if (r3 == false) goto L4;
            return;
        L4:
            int r0 = getPaddingLeft();
            if (r3 == false) goto L7;
            int r32 = getPaddingTop();
        L8:
            int r1 = getPaddingRight();
            if (r4 == false) goto L11;
            int r42 = getPaddingBottom();
        L12:
            setPadding(r0, r32, r1, r42);
            return;
        L11:
            r42 = this.mPaddingBottomNoButtons;
            goto L12
        L7:
            r32 = this.mPaddingTopNoTitle;
            goto L8
        }
    }

    private static boolean shouldCenterSingleButton(Context r3) {
        TypedValue r0 = new TypedValue();
        r3.getTheme().resolveAttribute(android.support.v7.appcompat.R.attr.alertDialogCenterButtons, r0, true);
        if (r0.data != 0) goto L7;
        return false;
    L7:
        return true;
    }

    public AlertController(Context r4, AppCompatDialog r5, Window r6) {
        this.mViewSpacingSpecified = false;
        this.mIconId = 0;
        this.mCheckedItem = -1;
        this.mButtonPanelLayoutHint = 0;
        this.mButtonHandler = new 1(this);
        this.mContext = r4;
        this.mDialog = r5;
        this.mWindow = r6;
        this.mHandler = new ButtonHandler(r5);
        TypedArray r42 = r4.obtainStyledAttributes(null, android.support.v7.appcompat.R.styleable.AlertDialog, android.support.v7.appcompat.R.attr.alertDialogStyle, 0);
        this.mAlertDialogLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_android_layout, 0);
        this.mButtonPanelSideLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_buttonPanelSideLayout, 0);
        this.mListLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_listLayout, 0);
        this.mMultiChoiceItemLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_multiChoiceItemLayout, 0);
        this.mSingleChoiceItemLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_singleChoiceItemLayout, 0);
        this.mListItemLayout = r42.getResourceId(android.support.v7.appcompat.R.styleable.AlertDialog_listItemLayout, 0);
        this.mShowTitle = r42.getBoolean(android.support.v7.appcompat.R.styleable.AlertDialog_showTitle, true);
        this.mButtonIconDimen = r42.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.AlertDialog_buttonIconDimen, 0);
        r42.recycle();
        r5.supportRequestWindowFeature(1);
    }

    static boolean canTextInput(View r4) {
        if (r4.onCheckIsTextEditor() == false) goto L6;
        return true;
    L6:
        if ((r4 instanceof ViewGroup) == true) goto L8;
        return false;
    L8:
        ViewGroup r42 = (ViewGroup) r4;
        int r0 = r42.getChildCount();
    L9:
        if (r0 <= 0) goto L13;
        r0 = r0 - 1;
        if (canTextInput(r42.getChildAt(r0)) == false) goto L9;
        return true;
    L13:
        return false;
    }

    public void installContent() {
        int r0 = selectContentView();
        this.mDialog.setContentView(r0);
        setupView();
    }

    private int selectContentView() {
        int r0 = this.mButtonPanelSideLayout;
        if (r0 != 0) goto L7;
        return this.mAlertDialogLayout;
    L7:
        if (this.mButtonPanelLayoutHint != 1) goto L10;
        return r0;
    L10:
        return this.mAlertDialogLayout;
    }

    public void setTitle(CharSequence r2) {
        this.mTitle = r2;
        TextView r0 = this.mTitleView;
        if (r0 == null) goto L6;
        r0.setText(r2);
        return;
    }

    public void setCustomTitle(View r1) {
        this.mCustomTitleView = r1;
    }

    public void setMessage(CharSequence r2) {
        this.mMessage = r2;
        TextView r0 = this.mMessageView;
        if (r0 == null) goto L6;
        r0.setText(r2);
        return;
    }

    public void setView(int r2) {
        this.mView = null;
        this.mViewLayoutResId = r2;
        this.mViewSpacingSpecified = false;
    }

    public void setView(View r1) {
        this.mView = r1;
        this.mViewLayoutResId = 0;
        this.mViewSpacingSpecified = false;
    }

    public void setView(View r1, int r2, int r3, int r4, int r5) {
        this.mView = r1;
        this.mViewLayoutResId = 0;
        this.mViewSpacingSpecified = true;
        this.mViewSpacingLeft = r2;
        this.mViewSpacingTop = r3;
        this.mViewSpacingRight = r4;
        this.mViewSpacingBottom = r5;
    }

    public void setButtonPanelLayoutHint(int r1) {
        this.mButtonPanelLayoutHint = r1;
    }

    public void setButton(int r1, CharSequence r2, DialogInterface.OnClickListener r3, Message r4, Drawable r5) {
        if (r4 != null) goto L6;
        if (r3 == null) goto L6;
        r4 = this.mHandler.obtainMessage(r1, r3);
    L6:
        if (r1 != (-3)) goto L8;
        this.mButtonNeutralText = r2;
        this.mButtonNeutralMessage = r4;
        this.mButtonNeutralIcon = r5;
        return;
    L8:
        if (r1 != (-2)) goto L10;
        this.mButtonNegativeText = r2;
        this.mButtonNegativeMessage = r4;
        this.mButtonNegativeIcon = r5;
        return;
    L10:
        if (r1 != (-1)) goto L13;
        this.mButtonPositiveText = r2;
        this.mButtonPositiveMessage = r4;
        this.mButtonPositiveIcon = r5;
        return;
    L13:
        throw new IllegalArgumentException("Button does not exist");
    }

    public void setIcon(int r2) {
        this.mIcon = null;
        this.mIconId = r2;
        ImageView r0 = this.mIconView;
        if (r0 == null) goto L8;
        if (r2 == 0) goto L6;
        r0.setVisibility(0);
        this.mIconView.setImageResource(this.mIconId);
        return;
    L6:
        r0.setVisibility(8);
        return;
    }

    public void setIcon(Drawable r3) {
        this.mIcon = r3;
        this.mIconId = 0;
        ImageView r1 = this.mIconView;
        if (r1 == null) goto L8;
        if (r3 == null) goto L6;
        r1.setVisibility(0);
        this.mIconView.setImageDrawable(r3);
        return;
    L6:
        r1.setVisibility(8);
        return;
    }

    public int getIconAttributeResId(int r4) {
        TypedValue r0 = new TypedValue();
        this.mContext.getTheme().resolveAttribute(r4, r0, true);
        return r0.resourceId;
    }

    public ListView getListView() {
        return this.mListView;
    }

    public Button getButton(int r2) {
        if (r2 == (-3)) goto L15;
        if (r2 == (-2)) goto L13;
        if (r2 == (-1)) goto L11;
        return null;
    L11:
        return this.mButtonPositive;
    L13:
        return this.mButtonNegative;
    L15:
        return this.mButtonNeutral;
    }

    public boolean onKeyDown(int r1, KeyEvent r2) {
        NestedScrollView r12 = this.mScrollView;
        if (r12 != null) goto L5;
    L7:
        return false;
    L5:
        if (r12.executeKeyEvent(r2) == false) goto L7;
        return true;
    }

    public boolean onKeyUp(int r1, KeyEvent r2) {
        NestedScrollView r12 = this.mScrollView;
        if (r12 != null) goto L5;
    L7:
        return false;
    L5:
        if (r12.executeKeyEvent(r2) == false) goto L7;
        return true;
    }

    @Nullable
    private ViewGroup resolvePanel(@Nullable View r3, @Nullable View r4) {
        if (r3 == null) goto L4;
        if (r4 == null) goto L13;
        ViewParent r0 = r4.getParent();
        if ((r0 instanceof ViewGroup) == false) goto L13;
        ((ViewGroup) r0).removeView(r4);
    L13:
        if ((r3 instanceof ViewStub) == false) goto L16;
        r3 = ((ViewStub) r3).inflate();
    L16:
        return (ViewGroup) r3;
    L4:
        if ((r4 instanceof ViewStub) == false) goto L7;
        r4 = ((ViewStub) r4).inflate();
    L7:
        return (ViewGroup) r4;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void setupView() {
        View r0 = this.mWindow.findViewById(android.support.v7.appcompat.R.id.parentPanel);
        View r1 = r0.findViewById(android.support.v7.appcompat.R.id.topPanel);
        View r2 = r0.findViewById(android.support.v7.appcompat.R.id.contentPanel);
        View r3 = r0.findViewById(android.support.v7.appcompat.R.id.buttonPanel);
        ViewGroup r02 = (ViewGroup) r0.findViewById(android.support.v7.appcompat.R.id.customPanel);
        setupCustomContent(r02);
        View r4 = r02.findViewById(android.support.v7.appcompat.R.id.topPanel);
        View r5 = r02.findViewById(android.support.v7.appcompat.R.id.contentPanel);
        View r6 = r02.findViewById(android.support.v7.appcompat.R.id.buttonPanel);
        ViewGroup r12 = resolvePanel(r4, r1);
        ViewGroup r22 = resolvePanel(r5, r2);
        ViewGroup r32 = resolvePanel(r6, r3);
        setupContent(r22);
        setupButtons(r32);
        setupTitle(r12);
        int r62 = 0;
        if (r02 != null) goto L5;
    L7:
        boolean r03 = false;
    L8:
        if (r12 != null) goto L10;
    L12:
        boolean r7 = 0;
    L13:
        if (r32 != null) goto L15;
    L17:
        boolean r33 = false;
    L18:
        if (r33 == true) goto L23;
        if (r22 == null) goto L23;
        View r42 = r22.findViewById(android.support.v7.appcompat.R.id.textSpacerNoButtons);
        if (r42 == null) goto L23;
        r42.setVisibility(0);
    L23:
        if (r7 == 0) goto L34;
        NestedScrollView r43 = this.mScrollView;
        if (r43 == null) goto L27;
        r43.setClipToPadding(true);
    L27:
        View r44 = null;
        if (this.mMessage == null) goto L30;
    L31:
        r44 = r12.findViewById(android.support.v7.appcompat.R.id.titleDividerNoCustom);
    L32:
        if (r44 == null) goto L38;
        r44.setVisibility(0);
    L38:
        ListView r13 = this.mListView;
        if ((r13 instanceof RecycleListView) == false) goto L41;
        ((RecycleListView) r13).setHasDecor(r7, r33);
    L41:
        if (r03 == true) goto L50;
        View r04 = this.mListView;
        if (r04 != null) goto L46;
        r04 = this.mScrollView;
    L46:
        if (r04 == null) goto L50;
        if (r33 == false) goto L49;
        r62 = 2;
    L49:
        setScrollIndicators(r22, r04, r7 | r62, 3);
    L50:
        ListView r05 = this.mListView;
        if (r05 == null) goto L58;
        ListAdapter r14 = this.mAdapter;
        if (r14 == null) goto L59;
        r05.setAdapter(r14);
        int r15 = this.mCheckedItem;
        if (r15 <= (-1)) goto L60;
        r05.setItemChecked(r15, true);
        r05.setSelection(r15);
        return;
    L60:
        return;
    L59:
        return;
    L58:
        return;
    L30:
        if (this.mListView == null) goto L32;
    L34:
        if (r22 == null) goto L38;
        View r16 = r22.findViewById(android.support.v7.appcompat.R.id.textSpacerNoTitle);
        if (r16 == null) goto L38;
        r16.setVisibility(0);
        goto L38
    L15:
        if (r32.getVisibility() == 8) goto L17;
        r33 = true;
        goto L18
    L10:
        if (r12.getVisibility() == 8) goto L12;
        r7 = 1;
        goto L13
    L5:
        if (r02.getVisibility() == 8) goto L7;
        r03 = true;
        goto L8
    }

    private void setScrollIndicators(ViewGroup r5, View r6, int r7, int r8) {
        final View r0 = this.mWindow.findViewById(android.support.v7.appcompat.R.id.scrollIndicatorUp);
        View r1 = this.mWindow.findViewById(android.support.v7.appcompat.R.id.scrollIndicatorDown);
        if (Build.VERSION.SDK_INT < 23) goto L9;
        ViewCompat.setScrollIndicators(r6, r7, r8);
        if (r0 == null) goto L7;
        r5.removeView(r0);
    L7:
        if (r1 == null) goto L32;
        r5.removeView(r1);
        return;
    L32:
        return;
    L9:
        final View r62 = null;
        if (r0 != null) goto L12;
    L14:
        if (r1 != null) goto L16;
    L18:
        r62 = r1;
    L19:
        if (r0 != null) goto L22;
        if (r62 != null) goto L22;
        return;
    L22:
        if (this.mMessage == null) goto L24;
        this.mScrollView.setOnScrollChangeListener(new 2(this, r0, r62));
        this.mScrollView.post(new 3(this, r0, r62));
        return;
    L24:
        ListView r72 = this.mListView;
        if (r72 == null) goto L27;
        r72.setOnScrollListener(new 4(this, r0, r62));
        this.mListView.post(new 5(this, r0, r62));
        return;
    L27:
        if (r0 == null) goto L29;
        r5.removeView(r0);
    L29:
        if (r62 == null) goto L37;
        r5.removeView(r62);
        return;
    L37:
        return;
    L16:
        if ((r7 & 2) != 0) goto L18;
        r5.removeView(r1);
        goto L19
    L12:
        if ((r7 & 1) != 0) goto L14;
        r5.removeView(r0);
        r0 = null;
        goto L14
    }

    private void setupCustomContent(ViewGroup r6) {
        View r0 = this.mView;
        boolean r1 = false;
        if (r0 == null) goto L6;
    L9:
        if (r0 == null) goto L11;
        r1 = true;
    L11:
        if (r1 == true) goto L13;
    L14:
        this.mWindow.setFlags(131072, 131072);
    L15:
        if (r1 == false) goto L22;
        FrameLayout r12 = (FrameLayout) this.mWindow.findViewById(android.support.v7.appcompat.R.id.custom);
        r12.addView(r0, new ViewGroup.LayoutParams(-1, -1));
        if (this.mViewSpacingSpecified == false) goto L20;
        r12.setPadding(this.mViewSpacingLeft, this.mViewSpacingTop, this.mViewSpacingRight, this.mViewSpacingBottom);
    L20:
        if (this.mListView == null) goto L24;
        ((LinearLayoutCompat.LayoutParams) r6.getLayoutParams()).weight = 0.0f;
        return;
    L24:
        return;
    L22:
        r6.setVisibility(8);
        return;
    L13:
        if (canTextInput(r0) == true) goto L15;
    L6:
        if (this.mViewLayoutResId == 0) goto L8;
        r0 = LayoutInflater.from(this.mContext).inflate(this.mViewLayoutResId, r6, false);
        goto L9
    L8:
        r0 = null;
        goto L9
    }

    private void setupTitle(ViewGroup r6) {
        if (this.mCustomTitleView == null) goto L5;
        r6.addView(this.mCustomTitleView, 0, new ViewGroup.LayoutParams(-1, -2));
        this.mWindow.findViewById(android.support.v7.appcompat.R.id.title_template).setVisibility(8);
        return;
    L5:
        this.mIconView = (ImageView) this.mWindow.findViewById(R.id.icon);
        if ((!TextUtils.isEmpty(this.mTitle)) == true) goto L8;
    L16:
        this.mWindow.findViewById(android.support.v7.appcompat.R.id.title_template).setVisibility(8);
        this.mIconView.setVisibility(8);
        r6.setVisibility(8);
        return;
    L8:
        if (this.mShowTitle == false) goto L16;
        this.mTitleView = (TextView) this.mWindow.findViewById(android.support.v7.appcompat.R.id.alertTitle);
        this.mTitleView.setText(this.mTitle);
        int r62 = this.mIconId;
        if (r62 == 0) goto L12;
        this.mIconView.setImageResource(r62);
        return;
    L12:
        Drawable r63 = this.mIcon;
        if (r63 == null) goto L15;
        this.mIconView.setImageDrawable(r63);
        return;
    L15:
        this.mTitleView.setPadding(this.mIconView.getPaddingLeft(), this.mIconView.getPaddingTop(), this.mIconView.getPaddingRight(), this.mIconView.getPaddingBottom());
        this.mIconView.setVisibility(8);
    }

    private void setupContent(ViewGroup r5) {
        this.mScrollView = (NestedScrollView) this.mWindow.findViewById(android.support.v7.appcompat.R.id.scrollView);
        this.mScrollView.setFocusable(false);
        this.mScrollView.setNestedScrollingEnabled(false);
        this.mMessageView = (TextView) r5.findViewById(R.id.message);
        TextView r0 = this.mMessageView;
        if (r0 != null) goto L5;
        return;
    L5:
        CharSequence r1 = this.mMessage;
        if (r1 == null) goto L8;
        r0.setText(r1);
        return;
    L8:
        r0.setVisibility(8);
        this.mScrollView.removeView(this.mMessageView);
        if (this.mListView == null) goto L11;
        ViewGroup r52 = (ViewGroup) this.mScrollView.getParent();
        int r02 = r52.indexOfChild(this.mScrollView);
        r52.removeViewAt(r02);
        r52.addView(this.mListView, r02, new ViewGroup.LayoutParams(-1, -1));
        return;
    L11:
        r5.setVisibility(8);
    }

    static void manageScrollIndicators(View r3, View r4, View r5) {
        int r0 = 0;
        if (r4 != null) goto L5;
    L9:
        if (r5 != null) goto L11;
        return;
    L11:
        if (r3.canScrollVertically(1) == true) goto L14;
        r0 = 4;
    L14:
        r5.setVisibility(r0);
        return;
    L5:
        if (r3.canScrollVertically(-1) == false) goto L7;
        int r2 = 0;
    L8:
        r4.setVisibility(r2);
        goto L9
    L7:
        r2 = 4;
        goto L8
    }

    private void setupButtons(ViewGroup r8) {
        this.mButtonPositive = (Button) r8.findViewById(R.id.button1);
        this.mButtonPositive.setOnClickListener(this.mButtonHandler);
        boolean r1 = true;
        if (TextUtils.isEmpty(this.mButtonPositiveText) == true) goto L5;
    L7:
        this.mButtonPositive.setText(this.mButtonPositiveText);
        Drawable r0 = this.mButtonPositiveIcon;
        if (r0 == null) goto L10;
        int r5 = this.mButtonIconDimen;
        r0.setBounds(0, 0, r5, r5);
        this.mButtonPositive.setCompoundDrawables(this.mButtonPositiveIcon, null, null, null);
    L10:
        this.mButtonPositive.setVisibility(0);
        int r02 = 1;
    L11:
        this.mButtonNegative = (Button) r8.findViewById(R.id.button2);
        this.mButtonNegative.setOnClickListener(this.mButtonHandler);
        if (TextUtils.isEmpty(this.mButtonNegativeText) == true) goto L14;
    L16:
        this.mButtonNegative.setText(this.mButtonNegativeText);
        Drawable r52 = this.mButtonNegativeIcon;
        if (r52 == null) goto L19;
        int r6 = this.mButtonIconDimen;
        r52.setBounds(0, 0, r6, r6);
        this.mButtonNegative.setCompoundDrawables(this.mButtonNegativeIcon, null, null, null);
    L19:
        this.mButtonNegative.setVisibility(0);
        r02 = r02 | 2;
    L20:
        this.mButtonNeutral = (Button) r8.findViewById(R.id.button3);
        this.mButtonNeutral.setOnClickListener(this.mButtonHandler);
        if (TextUtils.isEmpty(this.mButtonNeutralText) == true) goto L23;
    L25:
        this.mButtonNeutral.setText(this.mButtonNeutralText);
        Drawable r53 = this.mButtonPositiveIcon;
        if (r53 == null) goto L28;
        int r62 = this.mButtonIconDimen;
        r53.setBounds(0, 0, r62, r62);
        this.mButtonPositive.setCompoundDrawables(this.mButtonPositiveIcon, null, null, null);
    L28:
        this.mButtonNeutral.setVisibility(0);
        r02 = r02 | 4;
    L30:
        if (shouldCenterSingleButton(this.mContext) == false) goto L39;
        if (r02 != 1) goto L34;
        centerButton(this.mButtonPositive);
        goto L39
    L34:
        if (r02 != 2) goto L37;
        centerButton(this.mButtonNegative);
        goto L39
    L37:
        if (r02 != 4) goto L39;
        centerButton(this.mButtonNeutral);
    L39:
        if (r02 != 0) goto L42;
        r1 = false;
    L42:
        if (r1 == true) goto L45;
        r8.setVisibility(8);
        return;
    L45:
        return;
    L23:
        if (this.mButtonNeutralIcon != null) goto L25;
        this.mButtonNeutral.setVisibility(8);
        goto L30
    L14:
        if (this.mButtonNegativeIcon != null) goto L16;
        this.mButtonNegative.setVisibility(8);
        goto L20
    L5:
        if (this.mButtonPositiveIcon != null) goto L7;
        this.mButtonPositive.setVisibility(8);
        r02 = 0;
        goto L11
    }

    private void centerButton(Button r3) {
        LinearLayout.LayoutParams r0 = (LinearLayout.LayoutParams) r3.getLayoutParams();
        r0.gravity = 1;
        r0.weight = 0.5f;
        r3.setLayoutParams(r0);
    }
}
