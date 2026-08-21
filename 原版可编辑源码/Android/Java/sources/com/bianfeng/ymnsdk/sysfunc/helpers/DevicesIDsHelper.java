package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.Context;
import android.os.Build;
import android.util.Log;
import com.ymnsdk.replugin.util.RomUtil;

public class DevicesIDsHelper {
    private AppIdsUpdater _listener;

    public interface AppIdsUpdater {
        void OnIdsAvalid(String str);
    }

    public DevicesIDsHelper(AppIdsUpdater appIdsUpdater) {
        this._listener = appIdsUpdater;
    }

    private String getBrand() {
        return Build.BRAND.toUpperCase();
    }

    private String getManufacturer() {
        return Build.MANUFACTURER.toUpperCase();
    }

    public void getOAID(Context context) {
        Log.e("getManufacturer", "getManufacturer===> " + getManufacturer());
        if ("ASUS".equals(getManufacturer())) {
            getIDFromNewThead(context);
            return;
        }
        if ("HUAWEI".equals(getManufacturer())) {
            getIDFromNewThead(context);
            return;
        }
        if ("LENOVO".equals(getManufacturer())) {
            new LenovoDeviceIDHelper(context).getIdRun(this._listener);
            return;
        }
        if ("MEIZU".equals(getManufacturer())) {
            new MeizuDeviceIDHelper(context).getMeizuID(this._listener);
            return;
        }
        if ("NUBIA".equals(getManufacturer())) {
            String nubiaID = new NubiaDeviceIDHelper(context).getNubiaID();
            AppIdsUpdater appIdsUpdater = this._listener;
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(nubiaID);
                return;
            }
            return;
        }
        if (RomUtil.ROM_OPPO.equals(getManufacturer())) {
            getIDFromNewThead(context);
            return;
        }
        if ("SAMSUNG".equals(getManufacturer())) {
            new SamsungDeviceIDHelper(context).getSumsungID(this._listener);
            return;
        }
        if (RomUtil.ROM_VIVO.equals(getManufacturer())) {
            String oaid = new VivoDeviceIDHelper(context).getOaid();
            AppIdsUpdater appIdsUpdater2 = this._listener;
            if (appIdsUpdater2 != null) {
                appIdsUpdater2.OnIdsAvalid(oaid);
                return;
            }
            return;
        }
        if ("XIAOMI".equals(getManufacturer())) {
            String oaid2 = new XiaomiDeviceIDHelper(context).getOAID();
            AppIdsUpdater appIdsUpdater3 = this._listener;
            if (appIdsUpdater3 != null) {
                appIdsUpdater3.OnIdsAvalid(oaid2);
            }
        }
    }

    private void getIDFromNewThead(final Context context) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                if ("ASUS".equals(DevicesIDsHelper.this.getManufacturer())) {
                    new ASUSDeviceIDHelper(context).getID(DevicesIDsHelper.this._listener);
                } else if ("HUAWEI".equals(DevicesIDsHelper.this.getManufacturer())) {
                    new HWDeviceIDHelper(context).getHWID(DevicesIDsHelper.this._listener);
                } else if (RomUtil.ROM_OPPO.equals(DevicesIDsHelper.this.getManufacturer())) {
                    new OppoDeviceIDHelper(context).getID(DevicesIDsHelper.this._listener);
                }
            }
        }).start();
    }
}
