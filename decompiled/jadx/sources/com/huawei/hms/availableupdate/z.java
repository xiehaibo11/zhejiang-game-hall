package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.huawei.hms.activity.IBridgeActivityDelegate;
import com.huawei.hms.android.SystemUtils;
import com.huawei.hms.common.PackageConstants;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.update.ui.UpdateBean;
import com.huawei.hms.utils.PackageManagerHelper;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: HiappWizard.java */
/* JADX INFO: loaded from: classes.dex */
public class z extends p {
    @Override // com.huawei.hms.availableupdate.p
    public void a(q qVar) {
        HMSLog.i("HiappWizard", "Enter onCancel.");
        if (qVar instanceof a0) {
            d();
        }
    }

    @Override // com.huawei.hms.availableupdate.p
    public void b(q qVar) {
        HMSLog.i("HiappWizard", "Enter onDoWork.");
        if (qVar instanceof a0) {
            qVar.b();
            if (c()) {
                return;
            }
            if (a(false)) {
                a(8, this.f);
            } else {
                c(8, this.f);
            }
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
            if (SystemUtils.isTVDevice()) {
                int packageVersionCode = new PackageManagerHelper(activityB).getPackageVersionCode("com.hisilicon.android.hiRMService");
                HMSLog.i("HiappWizard", "version " + packageVersionCode);
                if (packageVersionCode == 1) {
                    HMSLog.i("HiappWizard", "startActivity");
                    intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    a(intent);
                    activityB.startActivity(intent);
                    return true;
                }
            }
            HMSLog.i("HiappWizard", "startActivityForResult");
            a(intent);
            activityB.startActivityForResult(intent, getRequestCode());
            return true;
        } catch (ActivityNotFoundException unused) {
            HMSLog.e("HiappWizard", "can not open hiapp");
            return false;
        }
    }

    public void d() {
        c(13, this.f);
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public int getRequestCode() {
        return 2005;
    }

    @Override // com.huawei.hms.availableupdate.p, com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityCreate(Activity activity) {
        super.onBridgeActivityCreate(activity);
        UpdateBean updateBean = this.c;
        if (updateBean == null) {
            return;
        }
        this.f = 5;
        if (updateBean.isNeedConfirm() && !TextUtils.isEmpty(this.h)) {
            a(a0.class);
        } else {
            if (c()) {
                return;
            }
            if (a(false)) {
                a(8, this.f);
            } else {
                c(8, this.f);
            }
        }
    }

    @Override // com.huawei.hms.availableupdate.p, com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeActivityDestroy() {
        super.onBridgeActivityDestroy();
    }

    @Override // com.huawei.hms.activity.IBridgeActivityDelegate
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            return iBridgeActivityDelegate.onBridgeActivityResult(i, i2, intent);
        }
        if (this.f != 5 || i != getRequestCode()) {
            return false;
        }
        if (a(this.g, this.i)) {
            c(0, this.f);
            return true;
        }
        c(8, this.f);
        return true;
    }

    @Override // com.huawei.hms.availableupdate.p, com.huawei.hms.activity.IBridgeActivityDelegate
    public void onBridgeConfigurationChanged() {
        super.onBridgeConfigurationChanged();
    }

    @Override // com.huawei.hms.availableupdate.p, com.huawei.hms.activity.IBridgeActivityDelegate
    public void onKeyUp(int i, KeyEvent keyEvent) {
        IBridgeActivityDelegate iBridgeActivityDelegate;
        if (this.e && (iBridgeActivityDelegate = this.b) != null) {
            iBridgeActivityDelegate.onKeyUp(i, keyEvent);
            return;
        }
        if (4 == i) {
            HMSLog.i("HiappWizard", "In onKeyUp, Call finish.");
            Activity activityB = b();
            if (activityB == null || activityB.isFinishing()) {
                return;
            }
            activityB.setResult(0, null);
            activityB.finish();
        }
    }

    public final void a(Intent intent) {
        List<ResolveInfo> listQueryIntentActivities = b().getPackageManager().queryIntentActivities(intent, 65536);
        if (listQueryIntentActivities == null || listQueryIntentActivities.isEmpty()) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(PackageConstants.SERVICES_PACKAGE_APPMARKET_TV);
        arrayList.add(PackageConstants.SERVICES_PACKAGE_APPMARKET_CAR);
        arrayList.add(PackageConstants.SERVICES_PACKAGE_APPMARKET);
        if (listQueryIntentActivities.size() == 1) {
            return;
        }
        for (ResolveInfo resolveInfo : listQueryIntentActivities) {
            if (arrayList.contains(resolveInfo.activityInfo.packageName)) {
                intent.setPackage(resolveInfo.activityInfo.packageName);
                return;
            }
        }
    }

    @Override // com.huawei.hms.availableupdate.p
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
            HMSLog.e("HiappWizard", "In showDialog, Failed to show the dialog." + e.getMessage());
        }
    }
}
