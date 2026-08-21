package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.ui.UpdateBean;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.kwad.library.solder.lib.ext.PluginError;
import java.util.Iterator;
import java.util.List;

public class r extends p {
    @Override
    public void a(q qVar) {
        HMSLog.i("AppTouchWizard", "Enter onCancel.");
        if (qVar instanceof a0) {
            d();
        }
    }

    @Override
    public void b(q qVar) {
        HMSLog.i("AppTouchWizard", "Enter onDoWork.");
        if (qVar instanceof a0) {
            qVar.b();
            if (c()) {
                return;
            }
            a(8, this.f);
        }
    }

    public final boolean c() {
        Activity activityB = b();
        if (activityB == null || activityB.isFinishing() || TextUtils.isEmpty(this.g)) {
            return false;
        }
        try {
            Intent intent = new Intent();
            intent.setAction("com.huawei.appmarket.intent.action.AppDetail");
            intent.putExtra("APP_PACKAGENAME", this.g);
            a(intent);
            activityB.startActivityForResult(intent, getRequestCode());
            return true;
        } catch (ActivityNotFoundException unused) {
            HMSLog.e("AppTouchWizard", "can not open AppTouch detail page");
            return false;
        }
    }

    public void d() {
        c(13, this.f);
    }

    @Override
    public int getRequestCode() {
        return PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD;
    }

    @Override
    public void onBridgeActivityCreate(Activity activity) {
        super.onBridgeActivityCreate(activity);
        UpdateBean updateBean = this.c;
        if (updateBean == null) {
            return;
        }
        this.f = 7;
        if (updateBean.isNeedConfirm() && !TextUtils.isEmpty(this.h)) {
            a(a0.class);
        } else {
            if (c()) {
                return;
            }
            a(8, this.f);
        }
    }

    @Override
    public void onBridgeActivityDestroy() {
        super.onBridgeActivityDestroy();
    }

    @Override
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            return iBridgeActivityDelegate.onBridgeActivityResult(i, i2, intent);
        }
        if (this.f != 7 || i != getRequestCode()) {
            return false;
        }
        if (a(this.g, this.i)) {
            c(0, this.f);
            return true;
        }
        c(8, this.f);
        return true;
    }

    @Override
    public void onBridgeConfigurationChanged() {
        super.onBridgeConfigurationChanged();
    }

    @Override
    public void onKeyUp(int i, KeyEvent keyEvent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            iBridgeActivityDelegate.onKeyUp(i, keyEvent);
            return;
        }
        if (4 == i) {
            HMSLog.i("AppTouchWizard", "In onKeyUp, Call finish.");
            Activity activityB = b();
            if (activityB == null || activityB.isFinishing()) {
                return;
            }
            activityB.setResult(0, null);
            activityB.finish();
        }
    }

    public final void a(Intent intent) {
        String str;
        List<ResolveInfo> listQueryIntentServices = b().getPackageManager().queryIntentServices(new Intent("com.apptouch.intent.action.update_hms"), 0);
        if (listQueryIntentServices == null || listQueryIntentServices.isEmpty()) {
            str = null;
        } else {
            Iterator<ResolveInfo> it = listQueryIntentServices.iterator();
            while (it.hasNext()) {
                ServiceInfo serviceInfo = it.next().serviceInfo;
                if (serviceInfo != null) {
                    str = serviceInfo.packageName;
                    if (!TextUtils.isEmpty(str)) {
                        break;
                    }
                }
            }
            str = null;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        intent.setPackage(str);
    }

    @Override
    public void a(Class<? extends q> cls) {
        a();
        try {
            q qVarNewInstance = cls.newInstance();
            if (!TextUtils.isEmpty(this.h) && (qVarNewInstance instanceof a0)) {
                this.h = ResourceLoaderUtil.getString("hms_update_title");
                ((a0) qVarNewInstance).a(this.h);
            }
            qVarNewInstance.a(this);
            this.d = qVarNewInstance;
        } catch (IllegalAccessException | IllegalStateException | InstantiationException e) {
            HMSLog.e("AppTouchWizard", "In showDialog, Failed to show the dialog." + e.getMessage());
        }
    }
}
