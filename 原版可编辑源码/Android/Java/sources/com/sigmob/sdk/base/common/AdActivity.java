package com.sigmob.sdk.base.common;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import java.lang.reflect.Field;
import java.util.HashMap;

public class AdActivity extends BaseAdActivity implements j {
    private i j;
    private String k;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0053  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private i a(BaseAdUnit baseAdUnit, Bundle bundle) throws IllegalStateException {
        byte b;
        String stringExtra = getIntent().getStringExtra("ad_view_class_name");
        switch (stringExtra.hashCode()) {
            case -1961669118:
                b = !stringExtra.equals(BaseAdActivity.e) ? (byte) -1 : (byte) 4;
                break;
            case -1552818374:
                if (stringExtra.equals(BaseAdActivity.a)) {
                    b = 1;
                    break;
                }
                break;
            case -959624923:
                if (stringExtra.equals(BaseAdActivity.f)) {
                    b = 5;
                    break;
                }
                break;
            case -934326481:
                if (stringExtra.equals("reward")) {
                    b = 0;
                    break;
                }
                break;
            case 104156535:
                if (stringExtra.equals("mraid")) {
                    b = 2;
                    break;
                }
                break;
            case 662743940:
                if (stringExtra.equals(BaseAdActivity.d)) {
                    b = 3;
                    break;
                }
                break;
        }
        if (b == 0) {
            return new com.sigmob.sdk.videoAd.l(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
        }
        if (b == 1) {
            return new u(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
        }
        if (b == 2) {
            return new com.sigmob.sdk.mraid.m(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
        }
        if (b == 3) {
            return new com.sigmob.sdk.mraid2.m(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
        }
        if (b == 4) {
            return new com.sigmob.sdk.nativead.u(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
        }
        if (b != 5) {
            return null;
        }
        return new com.sigmob.sdk.nativead.s(this, baseAdUnit, getIntent().getExtras(), bundle, this.k, this);
    }

    private static String a(Intent intent) {
        return intent.getStringExtra(Constants.BROADCAST_IDENTIFIER_KEY);
    }

    private static void a(Context context) {
        InputMethodManager inputMethodManager;
        if (context == null) {
            return;
        }
        try {
            inputMethodManager = (InputMethodManager) context.getSystemService("input_method");
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            inputMethodManager = null;
        }
        if (inputMethodManager == null) {
            return;
        }
        for (Field field : inputMethodManager.getClass().getDeclaredFields()) {
            try {
                if (!field.isAccessible()) {
                    field.setAccessible(true);
                }
                Object obj = field.get(inputMethodManager);
                if (obj != null && (obj instanceof View)) {
                    field.set(inputMethodManager, null);
                }
            } catch (Throwable th2) {
                SigmobLog.e(th2.getMessage());
            }
        }
    }

    @Override
    public void a() {
        finish();
        overridePendingTransition(0, 0);
    }

    @Override
    public void a(int i) {
        setRequestedOrientation(i);
    }

    @Override
    public void a(Class<? extends Activity> cls, int i, Bundle bundle) {
        if (cls == null) {
            return;
        }
        try {
            startActivityForResult(s.a(this, cls, bundle), i);
        } catch (Throwable unused) {
            SigmobLog.d("Activity " + cls.getName() + " not found. Did you declare it in your AndroidManifest.xml?");
        }
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        i iVar = this.j;
        if (iVar != null) {
            iVar.a(i, i2, intent);
        }
    }

    @Override
    public void onBackPressed() {
        i iVar = this.j;
        if (iVar == null || !iVar.g()) {
            return;
        }
        super.onBackPressed();
        this.j.f();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        i iVar = this.j;
        if (iVar != null) {
            iVar.a(configuration);
        }
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        SigmobLog.i("TaskId :" + getTaskId());
        this.k = a(getIntent());
        String stringExtra = getIntent().getStringExtra("adUnit_requestId_key");
        try {
            if (ClientMetadata.getInstance() != null && !TextUtils.isEmpty(stringExtra)) {
                BaseAdUnit baseAdUnitA = f.a(stringExtra);
                if (!this.k.equals("dislike_broadcastIdentifier") && baseAdUnitA == null) {
                    HashMap map = new HashMap();
                    map.put("playAdUnit", "playAdUnit is null");
                    BaseBroadcastReceiver.a(this, this.k, map, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
                    finish();
                    return;
                }
                i iVarA = a(baseAdUnitA, bundle);
                this.j = iVarA;
                if (iVarA != null) {
                    iVarA.b();
                    return;
                }
                return;
            }
            HashMap map2 = new HashMap();
            map2.put("error", "uuid is empty");
            BaseBroadcastReceiver.a(this, this.k, map2, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
            finish();
        } catch (Throwable th) {
            SigmobLog.e("AdActivity onCreate Throwable:" + th.getMessage());
            HashMap map3 = new HashMap();
            map3.put("error", th.getMessage());
            BaseBroadcastReceiver.a(this, this.k, map3, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
            finish();
        }
    }

    @Override
    protected void onDestroy() {
        SigmobLog.d("RewardVideoAdPlayerActivity onDestroy() called");
        i iVar = this.j;
        if (iVar != null) {
            iVar.e();
        }
        this.j = null;
        super.onDestroy();
    }

    @Override
    protected void onPause() {
        try {
            super.onPause();
            if (this.j != null) {
                this.j.c();
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            HashMap map = new HashMap();
            map.put("error", th.getMessage());
            BaseBroadcastReceiver.a(this, this.k, map, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
            finish();
        }
    }

    @Override
    protected void onResume() {
        try {
            super.onResume();
            if (this.j != null) {
                this.j.d();
            }
        } catch (Throwable th) {
            HashMap map = new HashMap();
            map.put("error", th.getMessage());
            BaseBroadcastReceiver.a(this, this.k, map, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
            finish();
        }
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        i iVar = this.j;
        if (iVar != null) {
            iVar.a(bundle);
        }
    }

    @Override
    public void onSetContentView(View view) {
        setContentView(view);
    }

    @Override
    public void setRequestedOrientation(int i) {
        try {
            super.setRequestedOrientation(i);
        } catch (Exception e) {
            SigmobLog.e("setRequestedOrientation: " + e.getMessage());
        }
    }
}
