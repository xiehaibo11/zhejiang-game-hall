package com.mbridge.msdk.dycreator.binding;

import android.graphics.Bitmap;
import android.graphics.Rect;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.mbridge.msdk.dycreator.baseview.MBApkInfoView;
import com.mbridge.msdk.dycreator.baseview.MBFeedBack;
import com.mbridge.msdk.dycreator.baseview.MBLogoTextView;
import com.mbridge.msdk.dycreator.baseview.MBSplashClickView;
import com.mbridge.msdk.dycreator.baseview.MBSplashImageBgView;
import com.mbridge.msdk.dycreator.baseview.MBSplashPortView;
import com.mbridge.msdk.dycreator.baseview.MBSplashShakeView;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.bridge.MBSplashData;
import com.mbridge.msdk.dycreator.bus.EventBus;
import com.mbridge.msdk.dycreator.d.a;
import com.mbridge.msdk.dycreator.g.d;
import com.mbridge.msdk.dycreator.g.e;
import com.mbridge.msdk.dycreator.g.f;
import com.mbridge.msdk.dycreator.g.g;
import com.mbridge.msdk.dycreator.g.h;
import com.mbridge.msdk.dycreator.g.i;
import com.mbridge.msdk.dycreator.listener.DyCountDownListenerWrapper;
import com.mbridge.msdk.dycreator.listener.action.EAction;
import com.mbridge.msdk.dycreator.viewmodel.BaseViewModel;
import com.mbridge.msdk.dycreator.wrapper.DyOption;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.y;
import com.mbridge.msdk.foundation.tools.z;

public final class b {
    private static volatile b a;
    private d b = (d) com.mbridge.msdk.dycreator.d.a.a().a(a.a.a);
    private com.mbridge.msdk.dycreator.g.c c = (com.mbridge.msdk.dycreator.g.c) com.mbridge.msdk.dycreator.d.a.a().a(a.a.b);
    private f d = (f) com.mbridge.msdk.dycreator.d.a.a().a(a.a.c);
    private h e = (h) com.mbridge.msdk.dycreator.d.a.a().a(a.a.d);
    private BaseViewModel f;
    private com.mbridge.msdk.shake.b g;

    private b() {
    }

    public static b a() {
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b();
                }
            }
        }
        return a;
    }

    public final void a(final View view) {
        g gVar = new g() {
            @Override
            public final void a(Object obj) {
                try {
                    if (view instanceof InterBase) {
                        b.a(b.this, (InterBase) view, obj);
                    }
                } catch (Exception e) {
                    z.d("MBDataBinding", e.getMessage());
                }
            }
        };
        int id = view.getId();
        h hVar = this.e;
        if (hVar != null) {
            hVar.a(gVar, id);
        }
    }

    public final void b(final View view) {
        e eVar = new e() {
            @Override
            public final void a(Object obj) {
                try {
                    if (view instanceof InterBase) {
                        b.b(b.this, (InterBase) view, obj);
                    }
                } catch (Exception e) {
                    z.d("MBDataBinding", e.getMessage());
                }
            }
        };
        int id = view.getId();
        f fVar = this.d;
        if (fVar != null) {
            fVar.a(eVar, id);
        }
    }

    public final void c(final View view) {
        i iVar = new i() {
            @Override
            public final void a(Object obj) {
                try {
                    if (view instanceof InterBase) {
                        b.c(b.this, (InterBase) view, obj);
                    }
                } catch (Exception e) {
                    z.d("MBDataBinding", e.getMessage());
                }
            }
        };
        int id = view.getId();
        d dVar = this.b;
        if (dVar != null) {
            dVar.a(iVar, id);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void d(final View view) {
        if (view != 0) {
            try {
                if (view instanceof InterBase) {
                    String actionDes = ((InterBase) view).getActionDes();
                    if (!TextUtils.isEmpty(actionDes)) {
                        if (actionDes.startsWith("click")) {
                            com.mbridge.msdk.dycreator.g.b bVar = new com.mbridge.msdk.dycreator.g.b() {
                                @Override
                                public final void a(Object obj) {
                                    if (obj == null) {
                                        return;
                                    }
                                    try {
                                        if (com.mbridge.msdk.dycreator.e.d.a(view, (com.mbridge.msdk.dycreator.f.a.a) obj)) {
                                            b.a(b.this, view, obj);
                                        }
                                    } catch (Exception e) {
                                        z.d("MBDataBinding", e.getMessage());
                                    }
                                }
                            };
                            int id = view.getId();
                            if (this.c != null) {
                                this.c.a(bVar, id);
                            }
                        } else if (!actionDes.equals("move") && !actionDes.equals("long_click")) {
                            actionDes.equals("wobble");
                        }
                    }
                }
            } catch (Exception e) {
                z.d("MBDataBinding", e.getMessage());
            }
        }
    }

    public final synchronized void b() {
        if (this.c != null) {
            this.c.a();
        }
        if (this.b != null) {
            this.b.a();
        }
        if (this.d != null) {
            this.d.a();
        }
        if (this.f != null) {
            this.f = null;
        }
        if (this.g != null) {
            this.g = null;
        }
        if (a != null) {
            a = null;
        }
    }

    public final void a(BaseViewModel baseViewModel) {
        this.f = baseViewModel;
        if (baseViewModel != null) {
            baseViewModel.setClickSubject(this.c);
            this.f.setConcreteSubject(this.b);
            this.f.setEffectSubject(this.d);
            this.f.setReportSubject(this.e);
        }
    }

    private com.mbridge.msdk.shake.b a(final View view, final MBSplashData mBSplashData) {
        if (mBSplashData != null) {
            try {
                DyOption dyOption = mBSplashData.getDyOption();
                if (dyOption != null && dyOption.isShakeVisible() && this.g == null) {
                    this.g = new com.mbridge.msdk.shake.b(dyOption.getShakeStrenght(), dyOption.getShakeTime() * 1000) {
                        @Override
                        public final void a() {
                            View view2 = view;
                            if (view2 != null) {
                                try {
                                    if (view2.getGlobalVisibleRect(new Rect())) {
                                        SplashResData splashResData = new SplashResData();
                                        mBSplashData.setClickType(4);
                                        splashResData.setBaseViewData(mBSplashData);
                                        splashResData.seteAction(EAction.DOWNLOAD);
                                        EventBus.getDefault().post(splashResData);
                                        com.mbridge.msdk.shake.a.a().b(b.this.g);
                                    }
                                } catch (Exception e) {
                                    z.d("MBDataBinding", e.getMessage());
                                }
                            }
                        }
                    };
                }
            } catch (Exception e) {
                z.d("MBDataBinding", e.getMessage());
            }
        }
        return this.g;
    }

    static void a(b bVar, InterBase interBase, Object obj) {
        if (interBase == null || obj == null) {
            return;
        }
        String reportDes = interBase.getReportDes();
        if (TextUtils.isEmpty(reportDes)) {
            return;
        }
        try {
            if (!(obj instanceof com.mbridge.msdk.dycreator.f.a.a) || ((com.mbridge.msdk.dycreator.f.a.a) obj).getBindData() == null) {
                return;
            }
            interBase.setDynamicReport(reportDes, ((com.mbridge.msdk.dycreator.f.a.a) obj).getBindData());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    static void b(b bVar, InterBase interBase, Object obj) {
        final boolean zIsCanSkip;
        if (interBase == 0 || obj == null) {
            return;
        }
        String effectDes = interBase.getEffectDes();
        if (TextUtils.isEmpty(effectDes)) {
            return;
        }
        try {
            if (interBase instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) interBase;
                com.mbridge.msdk.dycreator.f.a.a aVar = (com.mbridge.msdk.dycreator.f.a.a) obj;
                if (effectDes == null || !(effectDes instanceof String)) {
                    return;
                }
                if (effectDes.equals("wobble") && (viewGroup instanceof MBSplashShakeView)) {
                    if (aVar.getEffectData().isShakeVisible()) {
                        if (bVar.g != null) {
                            com.mbridge.msdk.shake.a.a().b(bVar.g);
                        }
                        com.mbridge.msdk.shake.a.a().a(bVar.a(viewGroup, (MBSplashData) aVar));
                    } else if (bVar.g != null) {
                        com.mbridge.msdk.shake.a.a().b(bVar.g);
                    }
                }
                if (effectDes.equals("visible") && (viewGroup instanceof MBApkInfoView)) {
                    if (aVar.getEffectData().isApkInfoVisible()) {
                        if ((aVar instanceof MBSplashData) && !TextUtils.isEmpty(((MBSplashData) aVar).getAppInfo())) {
                            viewGroup.setVisibility(0);
                        } else {
                            viewGroup.setVisibility(4);
                        }
                    } else {
                        viewGroup.setVisibility(8);
                    }
                }
                effectDes.equals(com.tkay.expressad.foundation.h.i.f);
                return;
            }
            if (interBase instanceof View) {
                final View view = (View) interBase;
                if (effectDes == null || !(effectDes instanceof String)) {
                    return;
                }
                com.mbridge.msdk.dycreator.f.a.a aVar2 = (com.mbridge.msdk.dycreator.f.a.a) obj;
                if (effectDes.equals(com.tkay.expressad.d.a.b.dk) && view != null && (view instanceof TextView) && aVar2 != null) {
                    final String str = (String) ((TextView) view).getText();
                    final String strS = v.s(view.getContext());
                    DyOption effectData = aVar2.getEffectData();
                    int countDownTime = 5;
                    if (effectData != null) {
                        zIsCanSkip = effectData.isCanSkip();
                        countDownTime = effectData.getCountDownTime();
                    } else {
                        zIsCanSkip = false;
                    }
                    ((TextView) view).setText(com.mbridge.msdk.dycreator.e.d.a(zIsCanSkip, countDownTime, str, strS));
                    ((com.mbridge.msdk.dycreator.f.a.a) obj).getEffectData().setDyCountDownListenerWrapper(new DyCountDownListenerWrapper() {
                        @Override
                        public final void getCountDownValue(int i) {
                            if (i == 0) {
                                SplashResData splashResData = new SplashResData();
                                splashResData.seteAction(EAction.CLOSE);
                                EventBus.getDefault().post(splashResData);
                            } else {
                                ((TextView) view).setText(com.mbridge.msdk.dycreator.e.d.a(zIsCanSkip, i, str, strS));
                            }
                        }
                    });
                }
                effectDes.equals(com.tkay.expressad.foundation.h.i.f);
                if (effectDes.equals("visible")) {
                    if (view instanceof MBFeedBack) {
                        if (com.mbridge.msdk.foundation.b.b.a().b()) {
                            view.setVisibility(0);
                        } else {
                            view.setVisibility(8);
                        }
                    }
                    if (!(view instanceof MBLogoTextView) || aVar2 == null || aVar2.getEffectData() == null || aVar2.getEffectData().isLogoVisible()) {
                        return;
                    }
                    ((MBLogoTextView) view).setCompoundDrawables(null, null, null, null);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    static void c(b bVar, InterBase interBase, Object obj) {
        if (interBase == 0 || obj == null) {
            return;
        }
        String bindDataDes = interBase.getBindDataDes();
        if (TextUtils.isEmpty(bindDataDes)) {
            return;
        }
        try {
            Object objA = com.mbridge.msdk.dycreator.e.d.a(obj, bindDataDes);
            if (objA == null) {
                return;
            }
            if (interBase instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) interBase;
                com.mbridge.msdk.dycreator.f.a.a aVar = (com.mbridge.msdk.dycreator.f.a.a) obj;
                if (viewGroup != null) {
                    if (viewGroup instanceof MBSplashClickView) {
                        if (aVar != null && aVar.getEffectData() != null && aVar.getEffectData().isClickButtonVisible() && !aVar.getEffectData().isShakeVisible()) {
                            if (objA != null && !TextUtils.isEmpty(objA.toString())) {
                                viewGroup.setVisibility(0);
                                ((MBSplashClickView) viewGroup).initView(objA.toString());
                            }
                        } else {
                            viewGroup.setVisibility(8);
                        }
                    }
                    if (viewGroup instanceof MBSplashShakeView) {
                        if (aVar != null && aVar.getEffectData() != null && aVar.getEffectData().isShakeVisible()) {
                            if (objA == null || TextUtils.isEmpty(objA.toString())) {
                                return;
                            }
                            viewGroup.setVisibility(0);
                            ((MBSplashShakeView) viewGroup).initView(objA.toString());
                            return;
                        }
                        viewGroup.setVisibility(8);
                        return;
                    }
                    return;
                }
                return;
            }
            if (interBase instanceof View) {
                final View view = (View) interBase;
                final com.mbridge.msdk.dycreator.f.a.a aVar2 = (com.mbridge.msdk.dycreator.f.a.a) obj;
                if (view == null || objA == null) {
                    return;
                }
                try {
                    if (view instanceof TextView) {
                        try {
                            ((TextView) view).setText(String.valueOf(objA).replace("\\n", "\n"));
                            return;
                        } catch (Exception e) {
                            e.printStackTrace();
                            return;
                        }
                    }
                    if (!(view instanceof ImageView) || objA == null) {
                        return;
                    }
                    if (objA instanceof Integer) {
                        ((ImageView) view).setImageResource(((Integer) objA).intValue());
                    }
                    if (objA instanceof String) {
                        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(objA.toString(), new com.mbridge.msdk.foundation.same.c.c() {
                            @Override
                            public final void onSuccessLoad(Bitmap bitmap, String str) {
                                int orientation;
                                if (bitmap != null) {
                                    try {
                                        if (!bitmap.isRecycled()) {
                                            boolean z = bitmap.getWidth() > bitmap.getHeight();
                                            if (aVar2.getEffectData().getOrientation() == 1) {
                                                orientation = view.getResources().getConfiguration().orientation;
                                            } else {
                                                orientation = aVar2.getEffectData().getOrientation();
                                            }
                                            if (orientation == 1) {
                                                if (z) {
                                                    if (view instanceof MBSplashPortView) {
                                                        if (view.getParent() != null) {
                                                            ((ViewGroup) view.getParent()).setVisibility(8);
                                                            return;
                                                        }
                                                        return;
                                                    } else if (view instanceof MBSplashImageBgView) {
                                                        view.setVisibility(0);
                                                        Bitmap bitmapA = y.a(bitmap);
                                                        ((MBSplashImageBgView) view).setScaleType(ImageView.ScaleType.CENTER_CROP);
                                                        ((MBSplashImageBgView) view).setImageBitmap(bitmapA);
                                                        return;
                                                    }
                                                } else if (view instanceof MBSplashPortView) {
                                                    view.setVisibility(0);
                                                    ((MBSplashPortView) view).setScaleType(ImageView.ScaleType.FIT_CENTER);
                                                    ((MBSplashPortView) view).setImageBitmap(bitmap);
                                                    return;
                                                } else if (view instanceof MBSplashImageBgView) {
                                                    view.setVisibility(8);
                                                    return;
                                                } else if (view instanceof InterBase) {
                                                    String effectDes = ((InterBase) view).getEffectDes();
                                                    ViewGroup viewGroup2 = (ViewGroup) view.getParent();
                                                    if (viewGroup2 != null) {
                                                        com.mbridge.msdk.dycreator.e.d.a(effectDes, viewGroup2, true);
                                                    }
                                                }
                                            } else if (z) {
                                                if (view instanceof MBSplashPortView) {
                                                    view.setVisibility(0);
                                                    ((MBSplashPortView) view).setScaleType(ImageView.ScaleType.FIT_XY);
                                                    ((ImageView) view).setImageBitmap(bitmap);
                                                    return;
                                                } else if (view instanceof MBSplashImageBgView) {
                                                    view.setVisibility(8);
                                                    ((MBSplashImageBgView) view).setImageBitmap(y.a(bitmap));
                                                    return;
                                                } else if (view instanceof InterBase) {
                                                    String effectDes2 = ((InterBase) view).getEffectDes();
                                                    ViewGroup viewGroup3 = (ViewGroup) view.getParent();
                                                    if (viewGroup3 != null) {
                                                        com.mbridge.msdk.dycreator.e.d.a(effectDes2, viewGroup3, true);
                                                    }
                                                }
                                            } else if (view instanceof MBSplashPortView) {
                                                view.setVisibility(0);
                                                ((MBSplashPortView) view).setImageBitmap(bitmap);
                                                return;
                                            } else {
                                                if (view instanceof MBSplashImageBgView) {
                                                    view.setVisibility(0);
                                                    Bitmap bitmapA2 = y.a(bitmap);
                                                    ((MBSplashImageBgView) view).setScaleType(ImageView.ScaleType.CENTER_CROP);
                                                    ((MBSplashImageBgView) view).setImageBitmap(bitmapA2);
                                                    return;
                                                }
                                                if (view instanceof InterBase) {
                                                    String effectDes3 = ((InterBase) view).getEffectDes();
                                                    ViewGroup viewGroup4 = (ViewGroup) view.getParent();
                                                    if (viewGroup4 != null) {
                                                        com.mbridge.msdk.dycreator.e.d.a(effectDes3, viewGroup4, true);
                                                    }
                                                }
                                            }
                                            ((ImageView) view).setImageBitmap(bitmap);
                                            return;
                                        }
                                    } catch (Exception e2) {
                                        z.d("MBDataBinding", e2.getMessage());
                                        return;
                                    }
                                }
                                ((ImageView) view).setBackgroundColor(-7829368);
                            }

                            @Override
                            public final void onFailedLoad(String str, String str2) {
                                View view2 = view;
                                if (view2 != null) {
                                    ((ImageView) view2).setBackgroundColor(-7829368);
                                }
                            }
                        });
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        } catch (Exception e3) {
            e3.printStackTrace();
        }
    }

    static void a(b bVar, View view, Object obj) {
        if (view == null || obj == null || !(obj instanceof com.mbridge.msdk.dycreator.f.a.a)) {
            return;
        }
        view.setOnClickListener(new a((com.mbridge.msdk.dycreator.f.a.a) obj));
    }
}
