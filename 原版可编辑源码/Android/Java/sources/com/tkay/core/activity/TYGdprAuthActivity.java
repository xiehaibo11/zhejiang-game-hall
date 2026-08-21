package com.tkay.core.activity;

import android.app.Activity;
import android.os.Bundle;
import com.tkay.core.activity.component.PrivacyPolicyView;
import com.tkay.core.api.TYGDPRAuthCallback;
import com.tkay.core.common.i;

public class TYGdprAuthActivity extends Activity {
    public static TYGDPRAuthCallback mCallback;
    String a;
    PrivacyPolicyView b;
    boolean c = false;

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        i.a();
        this.a = i.l();
        if (getResources().getConfiguration().orientation == 2) {
            setRequestedOrientation(6);
        } else {
            setRequestedOrientation(7);
        }
        try {
            PrivacyPolicyView privacyPolicyView = new PrivacyPolicyView(this);
            this.b = privacyPolicyView;
            privacyPolicyView.setResultCallbackListener(new PrivacyPolicyView.a() {
                @Override
                public final void onLevelSelect(int i) {
                    if (TYGdprAuthActivity.mCallback != null) {
                        TYGdprAuthActivity.mCallback.onAuthResult(i);
                        TYGdprAuthActivity.mCallback = null;
                    }
                    TYGdprAuthActivity.this.finish();
                }

                @Override
                public final void onPageLoadFail() {
                    TYGdprAuthActivity.this.c = true;
                    if (TYGdprAuthActivity.mCallback != null) {
                        TYGdprAuthActivity.mCallback.onPageLoadFail();
                    }
                }

                @Override
                public final void onPageLoadSuccess() {
                    TYGdprAuthActivity.this.c = false;
                }
            });
            setContentView(this.b);
            this.b.loadPolicyUrl(this.a);
        } catch (Exception unused) {
        }
    }

    @Override
    public void onBackPressed() {
        if (this.c) {
            super.onBackPressed();
        }
    }

    @Override
    protected void onDestroy() {
        PrivacyPolicyView privacyPolicyView = this.b;
        if (privacyPolicyView != null) {
            privacyPolicyView.destory();
        }
        mCallback = null;
        super.onDestroy();
    }
}
