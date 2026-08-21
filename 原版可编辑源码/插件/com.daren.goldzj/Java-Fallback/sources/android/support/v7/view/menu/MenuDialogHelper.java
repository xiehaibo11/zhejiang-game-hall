package android.support.v7.view.menu;

import android.content.DialogInterface;
import android.os.IBinder;
import android.support.v4.view.PointerIconCompat;
import android.support.v7.app.AlertDialog;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuPresenter;
import android.view.KeyEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;

class MenuDialogHelper implements DialogInterface.OnKeyListener, DialogInterface.OnClickListener, DialogInterface.OnDismissListener, MenuPresenter.Callback {
    private AlertDialog mDialog;
    private MenuBuilder mMenu;
    ListMenuPresenter mPresenter;
    private MenuPresenter.Callback mPresenterCallback;

    public MenuDialogHelper(MenuBuilder r1) {
        this.mMenu = r1;
    }

    public void show(IBinder r6) {
        MenuBuilder r0 = this.mMenu;
        AlertDialog.Builder r1 = new AlertDialog.Builder(r0.getContext());
        this.mPresenter = new ListMenuPresenter(r1.getContext(), R.layout.abc_list_menu_item_layout);
        this.mPresenter.setCallback(this);
        this.mMenu.addMenuPresenter(this.mPresenter);
        r1.setAdapter(this.mPresenter.getAdapter(), this);
        View r2 = r0.getHeaderView();
        if (r2 == null) goto L5;
        r1.setCustomTitle(r2);
    L6:
        r1.setOnKeyListener(this);
        this.mDialog = r1.create();
        this.mDialog.setOnDismissListener(this);
        WindowManager.LayoutParams r02 = this.mDialog.getWindow().getAttributes();
        r02.type = PointerIconCompat.TYPE_HELP;
        if (r6 == null) goto L9;
        r02.token = r6;
    L9:
        r02.flags |= 131072;
        this.mDialog.show();
        return;
    L5:
        r1.setIcon(r0.getHeaderIcon()).setTitle(r0.getHeaderTitle());
        goto L6
    }

    @Override
    public boolean onKey(DialogInterface r3, int r4, KeyEvent r5) {
        if (r4 == 82) goto L7;
        if (r4 == 4) goto L7;
    L33:
        return this.mMenu.performShortcut(r4, r5, 0);
    L7:
        if (r5.getAction() != 0) goto L19;
        if (r5.getRepeatCount() != 0) goto L19;
        Window r32 = this.mDialog.getWindow();
        if (r32 == null) goto L33;
        View r33 = r32.getDecorView();
        if (r33 == null) goto L33;
        KeyEvent.DispatcherState r34 = r33.getKeyDispatcherState();
        if (r34 == null) goto L33;
        r34.startTracking(r5, this);
        return true;
    L19:
        if (r5.getAction() != 1) goto L33;
        if (r5.isCanceled() == true) goto L33;
        Window r0 = this.mDialog.getWindow();
        if (r0 == null) goto L33;
        View r02 = r0.getDecorView();
        if (r02 == null) goto L33;
        KeyEvent.DispatcherState r03 = r02.getKeyDispatcherState();
        if (r03 == null) goto L33;
        if (r03.isTracking(r5) == false) goto L33;
        this.mMenu.close(true);
        r3.dismiss();
        return true;
    }

    public void setPresenterCallback(MenuPresenter.Callback r1) {
        this.mPresenterCallback = r1;
    }

    public void dismiss() {
        AlertDialog r0 = this.mDialog;
        if (r0 == null) goto L6;
        r0.dismiss();
        return;
    }

    @Override
    public void onDismiss(DialogInterface r3) {
        this.mPresenter.onCloseMenu(this.mMenu, true);
    }

    @Override
    public void onCloseMenu(MenuBuilder r2, boolean r3) {
        if (r3 == false) goto L4;
    L5:
        dismiss();
    L6:
        MenuPresenter.Callback r0 = this.mPresenterCallback;
        if (r0 == null) goto L10;
        r0.onCloseMenu(r2, r3);
        return;
    L10:
        return;
    L4:
        if (r2 != this.mMenu) goto L6;
        goto L5
    }

    @Override
    public boolean onOpenSubMenu(MenuBuilder r2) {
        MenuPresenter.Callback r0 = this.mPresenterCallback;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.onOpenSubMenu(r2);
    }

    @Override
    public void onClick(DialogInterface r2, int r3) {
        this.mMenu.performItemAction((MenuItemImpl) this.mPresenter.getAdapter().getItem(r3), 0);
    }
}
