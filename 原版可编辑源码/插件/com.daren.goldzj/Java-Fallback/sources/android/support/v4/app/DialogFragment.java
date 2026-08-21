package android.support.v4.app;

import android.R;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.view.LayoutInflater;
import android.view.View;

public class DialogFragment extends Fragment implements DialogInterface.OnCancelListener, DialogInterface.OnDismissListener {
    private static final String SAVED_BACK_STACK_ID = "android:backStackId";
    private static final String SAVED_CANCELABLE = "android:cancelable";
    private static final String SAVED_DIALOG_STATE_TAG = "android:savedDialogState";
    private static final String SAVED_SHOWS_DIALOG = "android:showsDialog";
    private static final String SAVED_STYLE = "android:style";
    private static final String SAVED_THEME = "android:theme";
    public static final int STYLE_NORMAL = 0;
    public static final int STYLE_NO_FRAME = 2;
    public static final int STYLE_NO_INPUT = 3;
    public static final int STYLE_NO_TITLE = 1;
    int mBackStackId;
    boolean mCancelable;
    Dialog mDialog;
    boolean mDismissed;
    boolean mShownByMe;
    boolean mShowsDialog;
    int mStyle;
    int mTheme;
    boolean mViewDestroyed;

    @Override
    public void onCancel(DialogInterface r1) {
    }

    public DialogFragment() {
        this.mStyle = 0;
        this.mTheme = 0;
        this.mCancelable = true;
        this.mShowsDialog = true;
        this.mBackStackId = -1;
    }

    public void setStyle(int r2, @StyleRes int r3) {
        this.mStyle = r2;
        int r22 = this.mStyle;
        if (r22 != 2) goto L5;
    L6:
        this.mTheme = R.style.Theme.Panel;
    L7:
        if (r3 == 0) goto L10;
        this.mTheme = r3;
        return;
    L10:
        return;
    L5:
        if (r22 != 3) goto L7;
        goto L6
    }

    public void show(FragmentManager r2, String r3) {
        this.mDismissed = false;
        this.mShownByMe = true;
        FragmentTransaction r22 = r2.beginTransaction();
        r22.add(this, r3);
        r22.commit();
    }

    public int show(FragmentTransaction r3, String r4) {
        this.mDismissed = false;
        this.mShownByMe = true;
        r3.add(this, r4);
        this.mViewDestroyed = false;
        this.mBackStackId = r3.commit();
        return this.mBackStackId;
    }

    public void showNow(FragmentManager r2, String r3) {
        this.mDismissed = false;
        this.mShownByMe = true;
        FragmentTransaction r22 = r2.beginTransaction();
        r22.add(this, r3);
        r22.commitNow();
    }

    public void dismiss() {
        dismissInternal(false);
    }

    public void dismissAllowingStateLoss() {
        dismissInternal(true);
    }

    void dismissInternal(boolean r3) {
        if (this.mDismissed == false) goto L5;
        return;
    L5:
        this.mDismissed = true;
        this.mShownByMe = false;
        Dialog r1 = this.mDialog;
        if (r1 == null) goto L8;
        r1.dismiss();
    L8:
        this.mViewDestroyed = true;
        if (this.mBackStackId < 0) goto L11;
        getFragmentManager().popBackStack(this.mBackStackId, 1);
        this.mBackStackId = -1;
        return;
    L11:
        FragmentTransaction r0 = getFragmentManager().beginTransaction();
        r0.remove(this);
        if (r3 == false) goto L14;
        r0.commitAllowingStateLoss();
        return;
    L14:
        r0.commit();
    }

    public Dialog getDialog() {
        return this.mDialog;
    }

    @StyleRes
    public int getTheme() {
        return this.mTheme;
    }

    public void setCancelable(boolean r2) {
        this.mCancelable = r2;
        Dialog r0 = this.mDialog;
        if (r0 == null) goto L6;
        r0.setCancelable(r2);
        return;
    }

    public boolean isCancelable() {
        return this.mCancelable;
    }

    public void setShowsDialog(boolean r1) {
        this.mShowsDialog = r1;
    }

    public boolean getShowsDialog() {
        return this.mShowsDialog;
    }

    @Override
    public void onAttach(Context r1) {
        super.onAttach(r1);
        if (this.mShownByMe == true) goto L6;
        this.mDismissed = false;
        return;
    }

    @Override
    public void onDetach() {
        super.onDetach();
        if (this.mShownByMe == false) goto L5;
        return;
    L5:
        if (this.mDismissed == true) goto L9;
        this.mDismissed = true;
        return;
    }

    @Override
    public void onCreate(@Nullable Bundle r4) {
        super.onCreate(r4);
        if (this.mContainerId != 0) goto L5;
        boolean r0 = true;
    L6:
        this.mShowsDialog = r0;
        if (r4 == null) goto L10;
        this.mStyle = r4.getInt(SAVED_STYLE, 0);
        this.mTheme = r4.getInt(SAVED_THEME, 0);
        this.mCancelable = r4.getBoolean(SAVED_CANCELABLE, true);
        this.mShowsDialog = r4.getBoolean(SAVED_SHOWS_DIALOG, this.mShowsDialog);
        this.mBackStackId = r4.getInt(SAVED_BACK_STACK_ID, -1);
        return;
    L10:
        return;
    L5:
        r0 = false;
        goto L6
    }

    @Override
    @NonNull
    public LayoutInflater onGetLayoutInflater(@Nullable Bundle r3) {
        if (this.mShowsDialog == false) goto L5;
        this.mDialog = onCreateDialog(r3);
        Dialog r32 = this.mDialog;
        if (r32 == null) goto L11;
        setupDialog(r32, this.mStyle);
        return (LayoutInflater) this.mDialog.getContext().getSystemService("layout_inflater");
    L11:
        return (LayoutInflater) this.mHost.getContext().getSystemService("layout_inflater");
    L5:
        return super.onGetLayoutInflater(r3);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setupDialog(Dialog r3, int r4) {
        if (r4 != 1) goto L5;
    L10:
        r3.requestWindowFeature(1);
        return;
    L5:
        if (r4 == 2) goto L10;
        if (r4 != 3) goto L12;
        r3.getWindow().addFlags(24);
        goto L10
    }

    @NonNull
    public Dialog onCreateDialog(@Nullable Bundle r3) {
        return new Dialog(getActivity(), getTheme());
    }

    @Override
    public void onDismiss(DialogInterface r1) {
        if (this.mViewDestroyed == true) goto L6;
        dismissInternal(true);
        return;
    }

    @Override
    public void onActivityCreated(@Nullable Bundle r3) {
        super.onActivityCreated(r3);
        if (this.mShowsDialog == true) goto L5;
        return;
    L5:
        View r0 = getView();
        if (r0 != null) goto L8;
    L12:
        FragmentActivity r02 = getActivity();
        if (r02 == null) goto L15;
        this.mDialog.setOwnerActivity(r02);
    L15:
        this.mDialog.setCancelable(this.mCancelable);
        this.mDialog.setOnCancelListener(this);
        this.mDialog.setOnDismissListener(this);
        if (r3 == null) goto L21;
        Bundle r32 = r3.getBundle(SAVED_DIALOG_STATE_TAG);
        if (r32 == null) goto L22;
        this.mDialog.onRestoreInstanceState(r32);
        return;
    L22:
        return;
    L21:
        return;
    L8:
        if (r0.getParent() != null) goto L11;
        this.mDialog.setContentView(r0);
        goto L12
    L11:
        throw new IllegalStateException("DialogFragment can not be attached to a container view");
    }

    @Override
    public void onStart() {
        super.onStart();
        Dialog r0 = this.mDialog;
        if (r0 == null) goto L6;
        this.mViewDestroyed = false;
        r0.show();
        return;
    }

    @Override
    public void onSaveInstanceState(@NonNull Bundle r3) {
        super.onSaveInstanceState(r3);
        Dialog r0 = this.mDialog;
        if (r0 == null) goto L7;
        Bundle r02 = r0.onSaveInstanceState();
        if (r02 == null) goto L7;
        r3.putBundle(SAVED_DIALOG_STATE_TAG, r02);
    L7:
        int r03 = this.mStyle;
        if (r03 == 0) goto L10;
        r3.putInt(SAVED_STYLE, r03);
    L10:
        int r04 = this.mTheme;
        if (r04 == 0) goto L13;
        r3.putInt(SAVED_THEME, r04);
    L13:
        boolean r05 = this.mCancelable;
        if (r05 == true) goto L16;
        r3.putBoolean(SAVED_CANCELABLE, r05);
    L16:
        boolean r06 = this.mShowsDialog;
        if (r06 == true) goto L19;
        r3.putBoolean(SAVED_SHOWS_DIALOG, r06);
    L19:
        int r07 = this.mBackStackId;
        if (r07 == (-1)) goto L23;
        r3.putInt(SAVED_BACK_STACK_ID, r07);
        return;
    }

    @Override
    public void onStop() {
        super.onStop();
        Dialog r0 = this.mDialog;
        if (r0 == null) goto L6;
        r0.hide();
        return;
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        Dialog r0 = this.mDialog;
        if (r0 == null) goto L6;
        this.mViewDestroyed = true;
        r0.dismiss();
        this.mDialog = null;
        return;
    }
}
