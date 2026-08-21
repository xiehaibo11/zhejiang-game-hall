package com.kwad.components.core.n;

import android.R;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import com.kwad.components.core.t.j;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.proxy.IActivityProxy;
import com.kwad.sdk.m.l;

/* JADX INFO: loaded from: classes2.dex */
public abstract class c extends IActivityProxy {
    private static final String FRAGMENTS_TAG = "android:fragments";
    public static final String KEY_START_TIME = "key_start_time";
    public Context mContext;
    private boolean mHasCallFinish;
    public View mRootView;
    private final com.kwad.components.core.n.a.a mPageMonitor = new com.kwad.components.core.n.a.a();
    private final com.kwad.sdk.l.a.a mBackPressDelete = new com.kwad.sdk.l.a.a();

    private void disableFragmentRestore(Bundle bundle) {
        if (bundle == null || !KsAdSDKImpl.get().getIsExternal()) {
            return;
        }
        bundle.remove(FRAGMENTS_TAG);
    }

    public void addBackPressable(com.kwad.sdk.l.a.b bVar) {
        this.mBackPressDelete.addBackPressable(bVar);
    }

    public void addBackPressable(com.kwad.sdk.l.a.b bVar, int i) {
        this.mBackPressDelete.addBackPressable(bVar, i);
    }

    protected boolean checkIntentData(Intent intent) {
        return true;
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public <T extends View> T findViewById(int i) {
        T t = (T) this.mRootView.findViewById(i);
        return t != null ? t : (T) super.findViewById(i);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void finish() {
        if (this.mHasCallFinish) {
            return;
        }
        this.mHasCallFinish = true;
        super.finish();
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public Intent getIntent() {
        Intent intent = super.getIntent();
        j.c(intent);
        return intent;
    }

    protected abstract int getLayoutId();

    protected abstract String getPageName();

    protected abstract void initData();

    protected abstract void initView();

    protected boolean needAdaptionScreen() {
        return false;
    }

    protected void onActivityCreate() {
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onBackPressed() {
        if (this.mBackPressDelete.bP()) {
            return;
        }
        super.onBackPressed();
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onCreate(Bundle bundle) {
        try {
            if (!KsAdSDKImpl.get().hasInitFinish()) {
                finish();
                return;
            }
            super.onCreate(bundle);
            getActivity().setTheme(R.style.Theme.Light.NoTitleBar.Fullscreen);
            this.mContext = l.wrapContextIfNeed(getActivity());
            Intent intent = getIntent();
            if (!checkIntentData(intent)) {
                finish();
                return;
            }
            getWindow().setFlags(16777216, 16777216);
            long longExtra = intent != null ? intent.getLongExtra("key_start_time", 0L) : 0L;
            this.mPageMonitor.at(getPageName());
            this.mPageMonitor.y(longExtra);
            int layoutId = getLayoutId();
            if (layoutId != 0) {
                setContentView(layoutId);
            }
            initData();
            initView();
            h.py().a(this, bundle);
            onActivityCreate();
        } catch (Throwable th) {
            if (!KsAdSDKImpl.get().getIsExternal()) {
                throw th;
            }
            com.kwad.components.core.d.a.b(th);
            finish();
        }
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onDestroy() {
        super.onDestroy();
        h.py().g(this);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onPause() {
        super.onPause();
        h.py().f(this);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onPreCreate(Bundle bundle) {
        super.onPreCreate(bundle);
        try {
            if (!KsAdSDKImpl.get().getIsExternal() && needAdaptionScreen() && Build.VERSION.SDK_INT <= 27) {
                com.kwad.components.core.t.d.a(getActivity(), 0, true, false);
            }
        } catch (Throwable th) {
            com.kwad.components.core.d.a.b(th);
        }
        disableFragmentRestore(bundle);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onResume() {
        super.onResume();
        com.kwad.components.core.n.a.a aVar = this.mPageMonitor;
        getActivity();
        aVar.pz();
        h.py().e(this);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        disableFragmentRestore(bundle);
    }

    public void removeBackPressable(com.kwad.sdk.l.a.b bVar) {
        this.mBackPressDelete.removeBackPressable(bVar);
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void setContentView(int i) {
        View viewInflate = l.inflate(this.mContext, i, null);
        this.mRootView = viewInflate;
        super.setContentView(viewInflate);
    }
}
