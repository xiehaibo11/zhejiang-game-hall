package android.support.v4.app;

public class DialogFragment extends android.support.v4.app.Fragment implements android.content.DialogInterface.OnCancelListener, android.content.DialogInterface.OnDismissListener {
    private static final java.lang.String SAVED_BACK_STACK_ID = "android:backStackId";
    private static final java.lang.String SAVED_CANCELABLE = "android:cancelable";
    private static final java.lang.String SAVED_DIALOG_STATE_TAG = "android:savedDialogState";
    private static final java.lang.String SAVED_SHOWS_DIALOG = "android:showsDialog";
    private static final java.lang.String SAVED_STYLE = "android:style";
    private static final java.lang.String SAVED_THEME = "android:theme";
    public static final int STYLE_NORMAL = 0;
    public static final int STYLE_NO_FRAME = 2;
    public static final int STYLE_NO_INPUT = 3;
    public static final int STYLE_NO_TITLE = 1;
    int mBackStackId;
    boolean mCancelable;
    android.app.Dialog mDialog;
    boolean mDismissed;
    boolean mShownByMe;
    boolean mShowsDialog;
    int mStyle;
    int mTheme;
    boolean mViewDestroyed;

    public DialogFragment() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mStyle = r0
            r1.mTheme = r0
            r0 = 1
            r1.mCancelable = r0
            r1.mShowsDialog = r0
            r0 = -1
            r1.mBackStackId = r0
            return
    }

    public void dismiss() {
            r1 = this;
            r0 = 0
            r1.dismissInternal(r0)
            return
    }

    public void dismissAllowingStateLoss() {
            r1 = this;
            r0 = 1
            r1.dismissInternal(r0)
            return
    }

    void dismissInternal(boolean r3) {
            r2 = this;
            boolean r0 = r2.mDismissed
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.mDismissed = r0
            r1 = 0
            r2.mShownByMe = r1
            android.app.Dialog r1 = r2.mDialog
            if (r1 == 0) goto L12
            r1.dismiss()
        L12:
            r2.mViewDestroyed = r0
            int r1 = r2.mBackStackId
            if (r1 < 0) goto L25
            android.support.v4.app.FragmentManager r3 = r2.getFragmentManager()
            int r1 = r2.mBackStackId
            r3.popBackStack(r1, r0)
            r3 = -1
            r2.mBackStackId = r3
            goto L39
        L25:
            android.support.v4.app.FragmentManager r0 = r2.getFragmentManager()
            android.support.v4.app.FragmentTransaction r0 = r0.beginTransaction()
            r0.remove(r2)
            if (r3 == 0) goto L36
            r0.commitAllowingStateLoss()
            goto L39
        L36:
            r0.commit()
        L39:
            return
    }

    public android.app.Dialog getDialog() {
            r1 = this;
            android.app.Dialog r0 = r1.mDialog
            return r0
    }

    public boolean getShowsDialog() {
            r1 = this;
            boolean r0 = r1.mShowsDialog
            return r0
    }

    @android.support.annotation.StyleRes
    public int getTheme() {
            r1 = this;
            int r0 = r1.mTheme
            return r0
    }

    public boolean isCancelable() {
            r1 = this;
            boolean r0 = r1.mCancelable
            return r0
    }

    @Override
    public void onActivityCreated(@android.support.annotation.Nullable android.os.Bundle r3) {
            r2 = this;
            super.onActivityCreated(r3)
            boolean r0 = r2.mShowsDialog
            if (r0 != 0) goto L8
            return
        L8:
            android.view.View r0 = r2.getView()
            if (r0 == 0) goto L22
            android.view.ViewParent r1 = r0.getParent()
            if (r1 != 0) goto L1a
            android.app.Dialog r1 = r2.mDialog
            r1.setContentView(r0)
            goto L22
        L1a:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "DialogFragment can not be attached to a container view"
            r3.<init>(r0)
            throw r3
        L22:
            android.support.v4.app.FragmentActivity r0 = r2.getActivity()
            if (r0 == 0) goto L2d
            android.app.Dialog r1 = r2.mDialog
            r1.setOwnerActivity(r0)
        L2d:
            android.app.Dialog r0 = r2.mDialog
            boolean r1 = r2.mCancelable
            r0.setCancelable(r1)
            android.app.Dialog r0 = r2.mDialog
            r0.setOnCancelListener(r2)
            android.app.Dialog r0 = r2.mDialog
            r0.setOnDismissListener(r2)
            if (r3 == 0) goto L4d
            java.lang.String r0 = "android:savedDialogState"
            android.os.Bundle r3 = r3.getBundle(r0)
            if (r3 == 0) goto L4d
            android.app.Dialog r0 = r2.mDialog
            r0.onRestoreInstanceState(r3)
        L4d:
            return
    }

    @Override
    public void onAttach(android.content.Context r1) {
            r0 = this;
            super.onAttach(r1)
            boolean r1 = r0.mShownByMe
            if (r1 != 0) goto La
            r1 = 0
            r0.mDismissed = r1
        La:
            return
    }

    @Override
    public void onCancel(android.content.DialogInterface r1) {
            r0 = this;
            return
    }

    @Override
    public void onCreate(@android.support.annotation.Nullable android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            int r0 = r3.mContainerId
            r1 = 1
            r2 = 0
            if (r0 != 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r3.mShowsDialog = r0
            if (r4 == 0) goto L3b
            java.lang.String r0 = "android:style"
            int r0 = r4.getInt(r0, r2)
            r3.mStyle = r0
            java.lang.String r0 = "android:theme"
            int r0 = r4.getInt(r0, r2)
            r3.mTheme = r0
            java.lang.String r0 = "android:cancelable"
            boolean r0 = r4.getBoolean(r0, r1)
            r3.mCancelable = r0
            boolean r0 = r3.mShowsDialog
            java.lang.String r1 = "android:showsDialog"
            boolean r0 = r4.getBoolean(r1, r0)
            r3.mShowsDialog = r0
            r0 = -1
            java.lang.String r1 = "android:backStackId"
            int r4 = r4.getInt(r1, r0)
            r3.mBackStackId = r4
        L3b:
            return
    }

    @android.support.annotation.NonNull
    public android.app.Dialog onCreateDialog(@android.support.annotation.Nullable android.os.Bundle r3) {
            r2 = this;
            android.app.Dialog r3 = new android.app.Dialog
            android.support.v4.app.FragmentActivity r0 = r2.getActivity()
            int r1 = r2.getTheme()
            r3.<init>(r0, r1)
            return r3
    }

    @Override
    public void onDestroyView() {
            r2 = this;
            super.onDestroyView()
            android.app.Dialog r0 = r2.mDialog
            if (r0 == 0) goto L10
            r1 = 1
            r2.mViewDestroyed = r1
            r0.dismiss()
            r0 = 0
            r2.mDialog = r0
        L10:
            return
    }

    @Override
    public void onDetach() {
            r1 = this;
            super.onDetach()
            boolean r0 = r1.mShownByMe
            if (r0 != 0) goto Le
            boolean r0 = r1.mDismissed
            if (r0 != 0) goto Le
            r0 = 1
            r1.mDismissed = r0
        Le:
            return
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            boolean r1 = r0.mViewDestroyed
            if (r1 != 0) goto L8
            r1 = 1
            r0.dismissInternal(r1)
        L8:
            return
    }

    @Override
    @android.support.annotation.NonNull
    public android.view.LayoutInflater onGetLayoutInflater(@android.support.annotation.Nullable android.os.Bundle r3) {
            r2 = this;
            boolean r0 = r2.mShowsDialog
            if (r0 != 0) goto L9
            android.view.LayoutInflater r3 = super.onGetLayoutInflater(r3)
            return r3
        L9:
            android.app.Dialog r3 = r2.onCreateDialog(r3)
            r2.mDialog = r3
            android.app.Dialog r3 = r2.mDialog
            java.lang.String r0 = "layout_inflater"
            if (r3 == 0) goto L27
            int r1 = r2.mStyle
            r2.setupDialog(r3, r1)
            android.app.Dialog r3 = r2.mDialog
            android.content.Context r3 = r3.getContext()
            java.lang.Object r3 = r3.getSystemService(r0)
            android.view.LayoutInflater r3 = (android.view.LayoutInflater) r3
            return r3
        L27:
            android.support.v4.app.FragmentHostCallback r3 = r2.mHost
            android.content.Context r3 = r3.getContext()
            java.lang.Object r3 = r3.getSystemService(r0)
            android.view.LayoutInflater r3 = (android.view.LayoutInflater) r3
            return r3
    }

    @Override
    public void onSaveInstanceState(@android.support.annotation.NonNull android.os.Bundle r3) {
            r2 = this;
            super.onSaveInstanceState(r3)
            android.app.Dialog r0 = r2.mDialog
            if (r0 == 0) goto L12
            android.os.Bundle r0 = r0.onSaveInstanceState()
            if (r0 == 0) goto L12
            java.lang.String r1 = "android:savedDialogState"
            r3.putBundle(r1, r0)
        L12:
            int r0 = r2.mStyle
            if (r0 == 0) goto L1b
            java.lang.String r1 = "android:style"
            r3.putInt(r1, r0)
        L1b:
            int r0 = r2.mTheme
            if (r0 == 0) goto L24
            java.lang.String r1 = "android:theme"
            r3.putInt(r1, r0)
        L24:
            boolean r0 = r2.mCancelable
            if (r0 != 0) goto L2d
            java.lang.String r1 = "android:cancelable"
            r3.putBoolean(r1, r0)
        L2d:
            boolean r0 = r2.mShowsDialog
            if (r0 != 0) goto L36
            java.lang.String r1 = "android:showsDialog"
            r3.putBoolean(r1, r0)
        L36:
            int r0 = r2.mBackStackId
            r1 = -1
            if (r0 == r1) goto L40
            java.lang.String r1 = "android:backStackId"
            r3.putInt(r1, r0)
        L40:
            return
    }

    @Override
    public void onStart() {
            r2 = this;
            super.onStart()
            android.app.Dialog r0 = r2.mDialog
            if (r0 == 0) goto Ld
            r1 = 0
            r2.mViewDestroyed = r1
            r0.show()
        Ld:
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            super.onStop()
            android.app.Dialog r0 = r1.mDialog
            if (r0 == 0) goto La
            r0.hide()
        La:
            return
    }

    public void setCancelable(boolean r2) {
            r1 = this;
            r1.mCancelable = r2
            android.app.Dialog r0 = r1.mDialog
            if (r0 == 0) goto L9
            r0.setCancelable(r2)
        L9:
            return
    }

    public void setShowsDialog(boolean r1) {
            r0 = this;
            r0.mShowsDialog = r1
            return
    }

    public void setStyle(int r2, @android.support.annotation.StyleRes int r3) {
            r1 = this;
            r1.mStyle = r2
            int r2 = r1.mStyle
            r0 = 2
            if (r2 == r0) goto La
            r0 = 3
            if (r2 != r0) goto Lf
        La:
            r2 = 16973913(0x1030059, float:2.406115E-38)
            r1.mTheme = r2
        Lf:
            if (r3 == 0) goto L13
            r1.mTheme = r3
        L13:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setupDialog(android.app.Dialog r3, int r4) {
            r2 = this;
            r0 = 1
            if (r4 == r0) goto L13
            r1 = 2
            if (r4 == r1) goto L13
            r1 = 3
            if (r4 == r1) goto La
            goto L16
        La:
            android.view.Window r4 = r3.getWindow()
            r1 = 24
            r4.addFlags(r1)
        L13:
            r3.requestWindowFeature(r0)
        L16:
            return
    }

    public int show(android.support.v4.app.FragmentTransaction r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            r2.mDismissed = r0
            r1 = 1
            r2.mShownByMe = r1
            r3.add(r2, r4)
            r2.mViewDestroyed = r0
            int r3 = r3.commit()
            r2.mBackStackId = r3
            int r3 = r2.mBackStackId
            return r3
    }

    public void show(android.support.v4.app.FragmentManager r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.mDismissed = r0
            r0 = 1
            r1.mShownByMe = r0
            android.support.v4.app.FragmentTransaction r2 = r2.beginTransaction()
            r2.add(r1, r3)
            r2.commit()
            return
    }

    public void showNow(android.support.v4.app.FragmentManager r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.mDismissed = r0
            r0 = 1
            r1.mShownByMe = r0
            android.support.v4.app.FragmentTransaction r2 = r2.beginTransaction()
            r2.add(r1, r3)
            r2.commitNow()
            return
    }
}
