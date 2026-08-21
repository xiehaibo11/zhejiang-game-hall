package com.kwad.components.core.n;

import android.app.Dialog;
import android.app.DialogFragment;
import android.app.FragmentManager;
import android.app.FragmentTransaction;
import android.content.Context;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.s;

public abstract class g extends DialogFragment {
    private int a(FragmentTransaction fragmentTransaction, String str) {
        try {
            s.a(this, "mDismissed", Boolean.FALSE);
            s.a(this, "mShownByMe", Boolean.TRUE);
            s.a(this, "mViewDestroyed", Boolean.FALSE);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        return fragmentTransaction.add(this, str).commitAllowingStateLoss();
    }

    protected abstract View a(LayoutInflater layoutInflater, ViewGroup viewGroup);

    @Override
    public void dismiss() {
        try {
            if (getActivity() != null && !getActivity().isFinishing()) {
                super.dismissAllowingStateLoss();
            } else if (getActivity() == null) {
                super.dismissAllowingStateLoss();
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    @Override
    public Context getContext() {
        return l.wrapContextIfNeed(super.getContext());
    }

    public final boolean isShowing() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            return dialog.isShowing();
        }
        return false;
    }

    @Override
    public void onAttach(Context context) {
        super.onAttach(l.wrapContextIfNeed(context));
    }

    @Override
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        LayoutInflater layoutInflaterDy = l.dy(l.wrapContextIfNeed(layoutInflater.getContext()));
        getDialog().requestWindowFeature(1);
        return a(layoutInflaterDy, viewGroup);
    }

    @Override
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        return l.dy(l.wrapContextIfNeed(super.onGetLayoutInflater(bundle).getContext()));
    }

    @Override
    public int show(FragmentTransaction fragmentTransaction, String str) {
        try {
            return super.show(fragmentTransaction, str);
        } catch (Throwable unused) {
            return a(fragmentTransaction, str);
        }
    }

    @Override
    public void show(FragmentManager fragmentManager, String str) {
        try {
            try {
                super.show(fragmentManager, str);
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                a(fragmentManager.beginTransaction(), str);
            }
        } catch (Throwable unused) {
            s.f(this, "showAllowingStateLoss", fragmentManager, str);
        }
    }
}
