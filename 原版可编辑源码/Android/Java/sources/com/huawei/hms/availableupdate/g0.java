package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.BroadcastReceiver;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.common.PackageConstants;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.ui.SafeBundle;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.ss.android.download.api.constant.BaseConstants;
import com.vivo.push.PushClientConstants;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class g0 extends p {
    public BroadcastReceiver j;
    public Handler k = new Handler();
    public int l = 0;
    public Handler m = new a();

    public class a extends Handler {
        public a() {
        }

        @Override
        public void handleMessage(Message message) {
            SafeBundle safeBundle = new SafeBundle((Bundle) message.obj);
            switch (message.what) {
                case 101:
                    g0.this.a(safeBundle);
                    break;
                case 102:
                    g0.this.b(safeBundle);
                    break;
                case 103:
                    g0.this.c(safeBundle);
                    break;
            }
        }
    }

    public class b implements Runnable {
        public b() {
        }

        @Override
        public void run() {
            g0.this.c(14);
        }

        public b(g0 g0Var, a aVar) {
            this();
        }
    }

    public final void d() {
        BroadcastReceiver broadcastReceiver;
        Activity activityB = b();
        if (activityB == null || (broadcastReceiver = this.j) == null) {
            return;
        }
        activityB.unregisterReceiver(broadcastReceiver);
        this.j = null;
    }

    public void e() {
        c(13, this.f);
    }

    @Override
    public int getRequestCode() {
        return 2000;
    }

    @Override
    public void onBridgeActivityCreate(Activity activity) {
        super.onBridgeActivityCreate(activity);
        if (this.c == null) {
            return;
        }
        this.f = 0;
        if (a(activity)) {
            return;
        }
        if (a(true)) {
            a(8, this.f);
        } else {
            c(8, this.f);
        }
    }

    @Override
    public void onBridgeActivityDestroy() {
        this.k.removeCallbacksAndMessages(null);
        d();
        super.onBridgeActivityDestroy();
    }

    @Override
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            return iBridgeActivityDelegate.onBridgeActivityResult(i, i2, intent);
        }
        HMSLog.i("SilentUpdateWizard", "onBridgeActivityResult requestCode is " + i + "resultCode is " + i2);
        if (i != getRequestCode()) {
            return false;
        }
        if (i2 == 0) {
            c();
            b(20000);
            return true;
        }
        if (i2 == 4) {
            e();
            return true;
        }
        if (a(true)) {
            a(i2, this.f);
        } else {
            c(i2, this.f);
        }
        return true;
    }

    @Override
    public void onBridgeConfigurationChanged() {
        super.onBridgeConfigurationChanged();
    }

    @Override
    public void onKeyUp(int i, KeyEvent keyEvent) {
        super.onKeyUp(i, keyEvent);
    }

    public final void b(int i) {
        this.k.removeCallbacksAndMessages(null);
        this.k.postDelayed(new b(this, null), i);
    }

    public final void c() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.huawei.appmarket.service.downloadservice.Receiver");
        intentFilter.addAction("com.huawei.appmarket.service.downloadservice.progress.Receiver");
        intentFilter.addAction("com.huawei.appmarket.service.installerservice.Receiver");
        this.j = new o(this.m);
        Activity activityB = b();
        if (activityB != null) {
            activityB.registerReceiver(this.j, intentFilter);
        }
    }

    public final boolean a(Activity activity) {
        if (TextUtils.isEmpty(this.g)) {
            return false;
        }
        Intent intent = new Intent("com.huawei.appmarket.intent.action.ThirdUpdateAction");
        intent.setPackage(PackageConstants.SERVICES_PACKAGE_APPMARKET);
        JSONArray jSONArray = new JSONArray();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(PushClientConstants.TAG_PKG_NAME, this.g);
            jSONObject.put("versioncode", this.i);
            jSONArray.put(jSONObject);
            intent.putExtra("params", jSONArray.toString());
            intent.putExtra("isHmsOrApkUpgrade", this.c.d());
            intent.putExtra("buttonDlgY", ResourceLoaderUtil.getString("hms_install"));
            intent.putExtra("buttonDlgN", ResourceLoaderUtil.getString("hms_cancel"));
            intent.putExtra("upgradeDlgContent", ResourceLoaderUtil.getString("hms_update_message_new", "%P"));
            try {
                HMSLog.i("SilentUpdateWizard", "start silent activity of AppMarket");
                activity.startActivityForResult(intent, getRequestCode());
                HMSLog.i("SilentUpdateWizard", "start silent activity finished");
                return true;
            } catch (ActivityNotFoundException unused) {
                HMSLog.e("SilentUpdateWizard", "ActivityNotFoundException");
                return false;
            }
        } catch (JSONException e) {
            HMSLog.e("SilentUpdateWizard", "create hmsJsonObject fail" + e.getMessage());
            return false;
        }
    }

    public final void b(SafeBundle safeBundle) {
        String string = safeBundle.containsKey("UpgradePkgName") ? safeBundle.getString("UpgradePkgName") : null;
        if (string != null && string.equals(this.g) && safeBundle.containsKey("UpgradeDownloadProgress") && safeBundle.containsKey("UpgradeAppName")) {
            int i = safeBundle.getInt("UpgradeDownloadProgress");
            HMSLog.i("SilentUpdateWizard", "handlerDownloadProgress-progress is " + i);
            b(20000);
            if (i >= 99) {
                i = 99;
            }
            this.l = i;
            if (this.d == null) {
                a(y.class);
            }
            q qVar = this.d;
            if (qVar != null) {
                ((y) qVar).b(i);
            }
        }
    }

    public final void c(int i) {
        this.k.removeCallbacksAndMessages(null);
        d();
        a();
        if (!a(false)) {
            c(i, this.f);
        } else {
            a(i, this.f);
        }
    }

    public final void c(SafeBundle safeBundle) {
        if (safeBundle.containsKey("packagename") && safeBundle.containsKey("status")) {
            String string = safeBundle.getString("packagename");
            int i = safeBundle.getInt("status");
            HMSLog.i("SilentUpdateWizard", "handlerInstallStatus-status is " + i);
            if (string == null || !string.equals(this.g)) {
                return;
            }
            if (i == 2) {
                this.k.removeCallbacksAndMessages(null);
                q qVar = this.d;
                if (qVar != null) {
                    ((y) qVar).b(100);
                }
                c(0, this.f);
                return;
            }
            if (i != -1 && i != -2) {
                b(BaseConstants.Time.MINUTE);
            } else {
                c(i);
            }
        }
    }

    public final void a(SafeBundle safeBundle) {
        String string = safeBundle.containsKey("UpgradePkgName") ? safeBundle.getString("UpgradePkgName") : null;
        if (string != null && string.equals(this.g) && safeBundle.containsKey("downloadtask.status")) {
            int i = safeBundle.getInt("downloadtask.status");
            HMSLog.i("SilentUpdateWizard", "handleDownloadStatus-status is " + i);
            if (i == 3 || i == 5 || i == 6 || i == 8) {
                c(i);
            } else if (i == 4) {
                b(BaseConstants.Time.MINUTE);
            } else {
                b(20000);
            }
        }
    }

    @Override
    public void a(Class<? extends q> cls) {
        try {
            q qVarNewInstance = cls.newInstance();
            if (this.l > 0 && (qVarNewInstance instanceof y)) {
                ((y) qVarNewInstance).a(this.l);
            }
            qVarNewInstance.a(this);
            this.d = qVarNewInstance;
        } catch (IllegalAccessException | IllegalStateException | InstantiationException e) {
            HMSLog.e("SilentUpdateWizard", "In showDialog, Failed to show the dialog." + e.getMessage());
        }
    }
}
