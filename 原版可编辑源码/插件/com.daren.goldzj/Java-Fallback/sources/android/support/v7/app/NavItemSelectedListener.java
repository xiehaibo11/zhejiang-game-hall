package android.support.v7.app;

import android.support.v7.app.ActionBar;
import android.view.View;
import android.widget.AdapterView;

class NavItemSelectedListener implements AdapterView.OnItemSelectedListener {
    private final ActionBar.OnNavigationListener mListener;

    @Override
    public void onNothingSelected(AdapterView<?> r1) {
    }

    public NavItemSelectedListener(ActionBar.OnNavigationListener r1) {
        this.mListener = r1;
    }

    @Override
    public void onItemSelected(AdapterView<?> r1, View r2, int r3, long r4) {
        ActionBar.OnNavigationListener r12 = this.mListener;
        if (r12 == null) goto L6;
        r12.onNavigationItemSelected(r3, r4);
        return;
    }
}
