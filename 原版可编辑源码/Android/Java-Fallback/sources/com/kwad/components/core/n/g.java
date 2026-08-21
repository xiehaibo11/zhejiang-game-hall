package com.kwad.components.core.n;

public abstract class g extends android.app.DialogFragment {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(android.app.FragmentTransaction r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "mDismissed"
            java.lang.Boolean r1 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L16
            com.kwad.sdk.utils.s.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "mShownByMe"
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L16
            com.kwad.sdk.utils.s.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "mViewDestroyed"
            java.lang.Boolean r1 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L16
            com.kwad.sdk.utils.s.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L1a:
            android.app.FragmentTransaction r3 = r3.add(r2, r4)
            int r3 = r3.commitAllowingStateLoss()
            return r3
    }

    protected abstract android.view.View a(android.view.LayoutInflater r1, android.view.ViewGroup r2);

    @Override
    public void dismiss() {
            r1 = this;
            android.app.Activity r0 = r1.getActivity()     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L14
            android.app.Activity r0 = r1.getActivity()     // Catch: java.lang.Exception -> L1e
            boolean r0 = r0.isFinishing()     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto L14
            super.dismissAllowingStateLoss()     // Catch: java.lang.Exception -> L1e
            goto L22
        L14:
            android.app.Activity r0 = r1.getActivity()     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto L1d
            super.dismissAllowingStateLoss()     // Catch: java.lang.Exception -> L1e
        L1d:
            return
        L1e:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L22:
            return
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = super.getContext()
            android.content.Context r0 = com.kwad.sdk.m.l.wrapContextIfNeed(r0)
            return r0
    }

    public final boolean isShowing() {
            r1 = this;
            android.app.Dialog r0 = r1.getDialog()
            if (r0 == 0) goto Lb
            boolean r0 = r0.isShowing()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public void onAttach(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            super.onAttach(r1)
            return
    }

    @Override
    public final android.view.View onCreateView(android.view.LayoutInflater r2, android.view.ViewGroup r3, android.os.Bundle r4) {
            r1 = this;
            android.content.Context r2 = r2.getContext()
            android.content.Context r2 = com.kwad.sdk.m.l.wrapContextIfNeed(r2)
            android.view.LayoutInflater r2 = com.kwad.sdk.m.l.dy(r2)
            android.app.Dialog r4 = r1.getDialog()
            r0 = 1
            r4.requestWindowFeature(r0)
            android.view.View r2 = r1.a(r2, r3)
            return r2
    }

    @Override
    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = super.onGetLayoutInflater(r1)
            android.content.Context r1 = r1.getContext()
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            android.view.LayoutInflater r1 = com.kwad.sdk.m.l.dy(r1)
            return r1
    }

    @Override
    public int show(android.app.FragmentTransaction r1, java.lang.String r2) {
            r0 = this;
            int r1 = super.show(r1, r2)     // Catch: java.lang.Throwable -> L5
            return r1
        L5:
            int r1 = r0.a(r1, r2)
            return r1
    }

    @Override
    public void show(android.app.FragmentManager r4, java.lang.String r5) {
            r3 = this;
            super.show(r4, r5)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            java.lang.String r0 = "showAllowingStateLoss"
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L13
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Throwable -> L13
            r2 = 1
            r1[r2] = r5     // Catch: java.lang.Throwable -> L13
            com.kwad.sdk.utils.s.f(r3, r0, r1)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            android.app.FragmentTransaction r4 = r4.beginTransaction()
            r3.a(r4, r5)
            return
    }
}
