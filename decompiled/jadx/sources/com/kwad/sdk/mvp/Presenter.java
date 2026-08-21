package com.kwad.sdk.mvp;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.c;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class Presenter {
    private Object aDg;
    private View mRootView;
    private final List<Presenter> aDf = new CopyOnWriteArrayList();
    private PresenterState aDh = PresenterState.INIT;

    /* JADX WARN: Enum visitor error
    jadx.core.utils.exceptions.JadxRuntimeException: Init of enum field 'INIT' uses external variables
    	at jadx.core.dex.visitors.EnumVisitor.createEnumFieldByConstructor(EnumVisitor.java:451)
    	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByField(EnumVisitor.java:372)
    	at jadx.core.dex.visitors.EnumVisitor.processEnumFieldByWrappedInsn(EnumVisitor.java:337)
    	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromFilledArray(EnumVisitor.java:322)
    	at jadx.core.dex.visitors.EnumVisitor.extractEnumFieldsFromInsn(EnumVisitor.java:262)
    	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:151)
    	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
     */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    static abstract class PresenterState {
        private static final /* synthetic */ PresenterState[] $VALUES;
        public static final PresenterState BIND;
        public static final PresenterState CREATE;
        public static final PresenterState DESTROY;
        public static final PresenterState INIT;
        public static final PresenterState UNBIND;
        private int mIndex;

        static {
            int i = 0;
            INIT = new PresenterState("INIT", i, i) { // from class: com.kwad.sdk.mvp.Presenter.PresenterState.1
                @Override // com.kwad.sdk.mvp.Presenter.PresenterState
                public final void performCallState(Presenter presenter) {
                }
            };
            int i2 = 1;
            CREATE = new PresenterState("CREATE", i2, i2) { // from class: com.kwad.sdk.mvp.Presenter.PresenterState.2
                @Override // com.kwad.sdk.mvp.Presenter.PresenterState
                public final void performCallState(Presenter presenter) {
                    Iterator it = presenter.aDf.iterator();
                    while (it.hasNext()) {
                        try {
                            ((Presenter) it.next()).F(presenter.mRootView);
                        } catch (Exception e) {
                            c.gatherException(e);
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                }
            };
            int i3 = 2;
            BIND = new PresenterState("BIND", i3, i3) { // from class: com.kwad.sdk.mvp.Presenter.PresenterState.3
                @Override // com.kwad.sdk.mvp.Presenter.PresenterState
                final void performCallState(Presenter presenter) {
                    Iterator it = presenter.aDf.iterator();
                    while (it.hasNext()) {
                        try {
                            ((Presenter) it.next()).k(presenter.aDg);
                        } catch (Throwable th) {
                            c.gatherException(th);
                            com.kwad.sdk.core.e.c.printStackTrace(th);
                        }
                    }
                }
            };
            int i4 = 3;
            UNBIND = new PresenterState("UNBIND", i4, i4) { // from class: com.kwad.sdk.mvp.Presenter.PresenterState.4
                @Override // com.kwad.sdk.mvp.Presenter.PresenterState
                final void performCallState(Presenter presenter) {
                    Iterator it = presenter.aDf.iterator();
                    while (it.hasNext()) {
                        try {
                            ((Presenter) it.next()).lI();
                        } catch (Exception e) {
                            c.gatherException(e);
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                }
            };
            int i5 = 4;
            PresenterState presenterState = new PresenterState("DESTROY", i5, i5) { // from class: com.kwad.sdk.mvp.Presenter.PresenterState.5
                @Override // com.kwad.sdk.mvp.Presenter.PresenterState
                final void performCallState(Presenter presenter) {
                    Iterator it = presenter.aDf.iterator();
                    while (it.hasNext()) {
                        try {
                            ((Presenter) it.next()).destroy();
                        } catch (Exception e) {
                            c.gatherException(e);
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                }
            };
            DESTROY = presenterState;
            $VALUES = new PresenterState[]{INIT, CREATE, BIND, UNBIND, presenterState};
        }

        private PresenterState(String str, int i, int i2) {
            this.mIndex = i2;
        }

        public static PresenterState valueOf(String str) {
            return (PresenterState) Enum.valueOf(PresenterState.class, str);
        }

        public static PresenterState[] values() {
            return (PresenterState[]) $VALUES.clone();
        }

        public int index() {
            return this.mIndex;
        }

        abstract void performCallState(Presenter presenter);
    }

    private boolean Gi() {
        return this.aDh.index() >= PresenterState.CREATE.index();
    }

    private void b(Presenter presenter) {
        Object obj;
        View view;
        if (this.aDh.index() >= PresenterState.UNBIND.index() || presenter.aDh.index() >= PresenterState.UNBIND.index()) {
            return;
        }
        if (Gi() && !presenter.Gi() && (view = this.mRootView) != null) {
            presenter.F(view);
        }
        if (!isBound() || !presenter.Gi() || presenter.isBound() || (obj = this.aDg) == null) {
            return;
        }
        presenter.k(obj);
    }

    private boolean isBound() {
        return this.aDh == PresenterState.BIND;
    }

    public final void F(View view) {
        this.aDh = PresenterState.CREATE;
        this.mRootView = view;
        onCreate();
        this.aDh.performCallState(this);
    }

    public final List<Presenter> Gj() {
        return this.aDf;
    }

    public final Object Gk() {
        return this.aDg;
    }

    public final void a(Presenter presenter) {
        this.aDf.add(presenter);
        if (!Gi() || presenter.Gi()) {
            return;
        }
        F(this.mRootView);
    }

    public final void a(Presenter presenter, boolean z) {
        this.aDf.add(presenter);
        try {
            b(presenter);
        } catch (Throwable th) {
            c.gatherException(th);
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    protected void ah() {
    }

    public final void destroy() {
        if (this.aDh == PresenterState.BIND) {
            lI();
        }
        this.aDh = PresenterState.DESTROY;
        onDestroy();
        this.aDh.performCallState(this);
    }

    public final <T extends View> T findViewById(int i) {
        return (T) this.mRootView.findViewById(i);
    }

    public final Activity getActivity() {
        return l.dr(getContext());
    }

    public final Context getContext() {
        View view = this.mRootView;
        if (view == null) {
            return null;
        }
        return view.getContext();
    }

    public final View getRootView() {
        return this.mRootView;
    }

    public final void k(Object obj) {
        if (this.aDh != PresenterState.INIT) {
            PresenterState presenterState = PresenterState.DESTROY;
        }
        if (this.aDh == PresenterState.BIND) {
            lI();
        }
        this.aDh = PresenterState.BIND;
        this.aDg = obj;
        ah();
        this.aDh.performCallState(this);
    }

    public final void lI() {
        this.aDh = PresenterState.UNBIND;
        onUnbind();
        this.aDh.performCallState(this);
    }

    protected void onCreate() {
    }

    protected void onDestroy() {
    }

    protected void onUnbind() {
    }
}
