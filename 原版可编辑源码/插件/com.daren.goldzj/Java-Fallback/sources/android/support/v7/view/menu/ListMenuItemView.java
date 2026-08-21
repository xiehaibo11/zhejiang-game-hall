package android.support.v7.view.menu;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuView;
import android.support.v7.widget.TintTypedArray;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.TextView;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ListMenuItemView extends LinearLayout implements MenuView.ItemView, AbsListView.SelectionBoundsAdjuster {
    private static final String TAG = "ListMenuItemView";
    private Drawable mBackground;
    private CheckBox mCheckBox;
    private LinearLayout mContent;
    private boolean mForceShowIcon;
    private ImageView mGroupDivider;
    private boolean mHasListDivider;
    private ImageView mIconView;
    private LayoutInflater mInflater;
    private MenuItemImpl mItemData;
    private int mMenuType;
    private boolean mPreserveIconSpacing;
    private RadioButton mRadioButton;
    private TextView mShortcutView;
    private Drawable mSubMenuArrow;
    private ImageView mSubMenuArrowView;
    private int mTextAppearance;
    private Context mTextAppearanceContext;
    private TextView mTitleView;

    @Override
    public boolean prefersCondensedTitle() {
        return false;
    }

    public ListMenuItemView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.listMenuViewStyle);
    }

    public ListMenuItemView(Context r4, AttributeSet r5, int r6) {
        super(r4, r5);
        TintTypedArray r52 = TintTypedArray.obtainStyledAttributes(getContext(), r5, R.styleable.MenuView, r6, 0);
        this.mBackground = r52.getDrawable(R.styleable.MenuView_android_itemBackground);
        this.mTextAppearance = r52.getResourceId(R.styleable.MenuView_android_itemTextAppearance, -1);
        this.mPreserveIconSpacing = r52.getBoolean(R.styleable.MenuView_preserveIconSpacing, false);
        this.mTextAppearanceContext = r4;
        this.mSubMenuArrow = r52.getDrawable(R.styleable.MenuView_subMenuArrow);
        TypedArray r42 = r4.getTheme().obtainStyledAttributes(null, new int[]{android.R.attr.divider}, R.attr.dropDownListViewStyle, 0);
        this.mHasListDivider = r42.hasValue(0);
        r52.recycle();
        r42.recycle();
    }

    @Override
    protected void onFinishInflate() {
        super.onFinishInflate();
        ViewCompat.setBackground(this, this.mBackground);
        this.mTitleView = (TextView) findViewById(R.id.title);
        int r0 = this.mTextAppearance;
        if (r0 == (-1)) goto L5;
        this.mTitleView.setTextAppearance(this.mTextAppearanceContext, r0);
    L5:
        this.mShortcutView = (TextView) findViewById(R.id.shortcut);
        this.mSubMenuArrowView = (ImageView) findViewById(R.id.submenuarrow);
        ImageView r02 = this.mSubMenuArrowView;
        if (r02 == null) goto L8;
        r02.setImageDrawable(this.mSubMenuArrow);
    L8:
        this.mGroupDivider = (ImageView) findViewById(R.id.group_divider);
        this.mContent = (LinearLayout) findViewById(R.id.content);
    }

    @Override
    public void initialize(MenuItemImpl r2, int r3) {
        this.mItemData = r2;
        this.mMenuType = r3;
        if (r2.isVisible() == false) goto L5;
        int r32 = 0;
    L6:
        setVisibility(r32);
        setTitle(r2.getTitleForItemView(this));
        setCheckable(r2.isCheckable());
        setShortcut(r2.shouldShowShortcut(), r2.getShortcut());
        setIcon(r2.getIcon());
        setEnabled(r2.isEnabled());
        setSubMenuArrowVisible(r2.hasSubMenu());
        setContentDescription(r2.getContentDescription());
        return;
    L5:
        r32 = 8;
        goto L6
    }

    private void addContentView(View r2) {
        addContentView(r2, -1);
    }

    private void addContentView(View r2, int r3) {
        LinearLayout r0 = this.mContent;
        if (r0 == null) goto L5;
        r0.addView(r2, r3);
        return;
    L5:
        addView(r2, r3);
    }

    public void setForceShowIcon(boolean r1) {
        this.mForceShowIcon = r1;
        this.mPreserveIconSpacing = r1;
    }

    @Override
    public void setTitle(CharSequence r2) {
        if (r2 == null) goto L7;
        this.mTitleView.setText(r2);
        if (this.mTitleView.getVisibility() == 0) goto L10;
        this.mTitleView.setVisibility(0);
        return;
    L10:
        return;
    L7:
        if (this.mTitleView.getVisibility() == 8) goto L12;
        this.mTitleView.setVisibility(8);
        return;
    }

    @Override
    public MenuItemImpl getItemData() {
        return this.mItemData;
    }

    @Override
    public void setCheckable(boolean r4) {
        if (r4 == true) goto L9;
        if (this.mRadioButton != null) goto L9;
        if (this.mCheckBox != null) goto L9;
        return;
    L9:
        if (this.mItemData.isExclusiveCheckable() == false) goto L15;
        if (this.mRadioButton != null) goto L13;
        insertRadioButton();
    L13:
        CompoundButton r0 = this.mRadioButton;
        CompoundButton r1 = this.mCheckBox;
    L19:
        if (r4 == false) goto L27;
        r0.setChecked(this.mItemData.isChecked());
        if (r0.getVisibility() == 0) goto L23;
        r0.setVisibility(0);
    L23:
        if (r1 != null) goto L25;
        return;
    L25:
        if (r1.getVisibility() == 8) goto L35;
        r1.setVisibility(8);
        return;
    L35:
        return;
    L27:
        CheckBox r42 = this.mCheckBox;
        if (r42 == null) goto L30;
        r42.setVisibility(8);
    L30:
        RadioButton r43 = this.mRadioButton;
        if (r43 == null) goto L37;
        r43.setVisibility(8);
        return;
    L37:
        return;
    L15:
        if (this.mCheckBox != null) goto L17;
        insertCheckBox();
    L17:
        r0 = this.mCheckBox;
        r1 = this.mRadioButton;
        goto L19
    }

    @Override
    public void setChecked(boolean r2) {
        if (this.mItemData.isExclusiveCheckable() == false) goto L9;
        if (this.mRadioButton != null) goto L7;
        insertRadioButton();
    L7:
        CompoundButton r0 = this.mRadioButton;
    L12:
        r0.setChecked(r2);
        return;
    L9:
        if (this.mCheckBox != null) goto L11;
        insertCheckBox();
    L11:
        r0 = this.mCheckBox;
        goto L12
    }

    private void setSubMenuArrowVisible(boolean r2) {
        ImageView r0 = this.mSubMenuArrowView;
        if (r0 == null) goto L9;
        if (r2 == false) goto L6;
        int r22 = 0;
    L7:
        r0.setVisibility(r22);
        return;
    L6:
        r22 = 8;
        goto L7
    }

    @Override
    public void setShortcut(boolean r2, char r3) {
        if (r2 == true) goto L4;
    L6:
        int r22 = 8;
    L7:
        if (r22 != 0) goto L10;
        this.mShortcutView.setText(this.mItemData.getShortcutLabel());
    L10:
        if (this.mShortcutView.getVisibility() == r22) goto L13;
        this.mShortcutView.setVisibility(r22);
        return;
    L13:
        return;
    L4:
        if (this.mItemData.shouldShowShortcut() == false) goto L6;
        r22 = 0;
        goto L7
    }

    @Override
    public void setIcon(Drawable r4) {
        if (this.mItemData.shouldShowIcon() == false) goto L5;
    L8:
        boolean r0 = true;
    L9:
        if (r0 == true) goto L14;
        if (this.mPreserveIconSpacing == true) goto L14;
        return;
    L14:
        if (this.mIconView != null) goto L20;
        if (r4 != null) goto L20;
        if (this.mPreserveIconSpacing == true) goto L20;
        return;
    L20:
        if (this.mIconView != null) goto L22;
        insertIconView();
    L22:
        if (r4 == null) goto L24;
    L27:
        ImageView r2 = this.mIconView;
        if (r0 == true) goto L31;
        r4 = null;
    L31:
        r2.setImageDrawable(r4);
        if (this.mIconView.getVisibility() == 0) goto L36;
        this.mIconView.setVisibility(0);
        return;
    L36:
        return;
    L24:
        if (this.mPreserveIconSpacing == true) goto L27;
        this.mIconView.setVisibility(8);
        return;
    L5:
        if (this.mForceShowIcon == true) goto L8;
        r0 = false;
        goto L9
    }

    @Override
    protected void onMeasure(int r4, int r5) {
        if (this.mIconView != null) goto L5;
    L11:
        super.onMeasure(r4, r5);
        return;
    L5:
        if (this.mPreserveIconSpacing == false) goto L11;
        ViewGroup.LayoutParams r0 = getLayoutParams();
        LinearLayout.LayoutParams r1 = (LinearLayout.LayoutParams) this.mIconView.getLayoutParams();
        if (r0.height <= 0) goto L11;
        if (r1.width > 0) goto L11;
        r1.width = r0.height;
        goto L11
    }

    private void insertIconView() {
        this.mIconView = (ImageView) getInflater().inflate(R.layout.abc_list_menu_item_icon, this, false);
        addContentView(this.mIconView, 0);
    }

    private void insertRadioButton() {
        this.mRadioButton = (RadioButton) getInflater().inflate(R.layout.abc_list_menu_item_radio, this, false);
        addContentView(this.mRadioButton);
    }

    private void insertCheckBox() {
        this.mCheckBox = (CheckBox) getInflater().inflate(R.layout.abc_list_menu_item_checkbox, this, false);
        addContentView(this.mCheckBox);
    }

    @Override
    public boolean showsIcon() {
        return this.mForceShowIcon;
    }

    private LayoutInflater getInflater() {
        if (this.mInflater != null) goto L6;
        this.mInflater = LayoutInflater.from(getContext());
    L6:
        return this.mInflater;
    }

    public void setGroupDividerEnabled(boolean r3) {
        ImageView r0 = this.mGroupDivider;
        if (r0 != null) goto L5;
        return;
    L5:
        if (this.mHasListDivider == true) goto L8;
        if (r3 == false) goto L8;
        int r32 = 0;
    L9:
        r0.setVisibility(r32);
        return;
    L8:
        r32 = 8;
        goto L9
    }

    @Override
    public void adjustListItemSelectionBounds(Rect r5) {
        ImageView r0 = this.mGroupDivider;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.getVisibility() != 0) goto L9;
        LinearLayout.LayoutParams r02 = (LinearLayout.LayoutParams) this.mGroupDivider.getLayoutParams();
        r5.top += (this.mGroupDivider.getHeight() + r02.topMargin) + r02.bottomMargin;
        return;
    }
}
