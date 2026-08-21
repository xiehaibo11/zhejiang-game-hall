package com.tkay.core.activity;

import android.app.Activity;
import android.os.Bundle;
import com.tkay.core.activity.component.PrivacyPolicyView;
import com.tkay.core.api.TYGDPRAuthCallback;
import com.tkay.core.common.i;

/* JADX INFO: loaded from: classes3.dex */
public class TYGdprAuthActivity extends Activity {
    public static TYGDPRAuthCallback mCallback;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5944a;
    PrivacyPolicyView b;
    boolean c = false;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        i.a();
        this.f5944a = i.l();
        if (getResources().getConfiguration().orientation == 2) {
            setRequestedOrientation(6);
        } else {
            setRequestedOrientation(7);
        }
        try {
            PrivacyPolicyView privacyPolicyView = new PrivacyPolicyView(this);
            this.b = privacyPolicyView;
            privacyPolicyView.setResultCallbackListener(new PrivacyPolicyView.a() { // from class: com.tkay.core.activity.TYGdprAuthActivity.1
                @Override // com.tkay.core.activity.component.PrivacyPolicyView.a
                public final void onLevelSelect(int i) {
                    if (TYGdprAuthActivity.mCallback != null) {
                        TYGdprAuthActivity.mCallback.onAuthResult(i);
                        TYGdprAuthActivity.mCallback = null;
                    }
                    TYGdprAuthActivity.this.finish();
                }

                @Override // com.tkay.core.activity.component.PrivacyPolicyView.a
                public final void onPageLoadFail() {
                    TYGdprAuthActivity.this.c = true;
                    if (TYGdprAuthActivity.mCallback != null) {
                        TYGdprAuthActivity.mCallback.onPageLoadFail();
                    }
                }

                @Override // com.tkay.core.activity.component.PrivacyPolicyView.a
                public final void onPageLoadSuccess() {
                    TYGdprAuthActivity.this.c = false;
                }
            });
            setContentView(this.b);
            this.b.loadPolicyUrl(this.f5944a);
        } catch (Exception unused) {
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.c) {
            super.onBackPressed();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        PrivacyPolicyView privacyPolicyView = this.b;
        if (privacyPolicyView != null) {
            privacyPolicyView.destory();
        }
        mCallback = null;
        super.onDestroy();
    }
}
