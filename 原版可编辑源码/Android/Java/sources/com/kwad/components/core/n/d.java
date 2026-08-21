package com.kwad.components.core.n;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.m.l;

public abstract class d extends AlertDialog {
    public Activity mActivity;
    protected final Context mContext;
    protected ViewGroup zv;

    protected d(Activity activity) {
        super(activity);
        setOwnerActivity(activity);
        this.mActivity = activity;
        this.mContext = l.wrapContextIfNeed(activity);
    }

    protected ViewGroup cf() {
        return null;
    }

    @Override
    public void dismiss() {
        Activity activity = this.mActivity;
        if (activity == null) {
            return;
        }
        try {
            l.h(activity);
        } catch (Throwable unused) {
        }
        try {
            super.dismiss();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    @Override
    public <T extends View> T findViewById(int i) {
        T t = (T) this.zv.findViewById(i);
        return t != null ? t : (T) super.findViewById(i);
    }

    protected abstract void g(View view);

    protected abstract int getLayoutId();

    protected boolean na() {
        return false;
    }

    @Override
    protected final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            this.zv = getLayoutId() != 0 ? (ViewGroup) l.inflate(this.mContext, getLayoutId(), null) : cf();
            setContentView(this.zv);
            setCanceledOnTouchOutside(na());
            getWindow().getDecorView().setPadding(0, 0, 0, 0);
            getWindow().setBackgroundDrawable(new ColorDrawable(0));
            getWindow().clearFlags(131072);
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = -1;
            getWindow().setAttributes(attributes);
            setCancelable(true);
            g(this.zv);
        } catch (Throwable th) {
            if (!KsAdSDKImpl.get().getIsExternal()) {
                throw th;
            }
            com.kwad.components.core.d.a.b(th);
            dismiss();
        }
    }

    @Override
    protected void onStart() {
        super.onStart();
        setTitle((CharSequence) null);
    }

    @Override
    public void setContentView(int i) {
        super.setContentView(i);
        this.zv = (ViewGroup) l.inflate(this.mContext, i, null);
    }
}
