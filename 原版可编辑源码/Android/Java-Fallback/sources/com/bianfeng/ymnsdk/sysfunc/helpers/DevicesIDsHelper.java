package com.bianfeng.ymnsdk.sysfunc.helpers;

public class DevicesIDsHelper {
    private com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater _listener;


    public interface AppIdsUpdater {
        void OnIdsAvalid(java.lang.String r1);
    }

    public DevicesIDsHelper(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r1) {
            r0 = this;
            r0.<init>()
            r0._listener = r1
            return
    }

    static java.lang.String access$000(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper r0) {
            java.lang.String r0 = r0.getManufacturer()
            return r0
    }

    static com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater access$100(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper r0) {
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r0 = r0._listener
            return r0
    }

    private java.lang.String getBrand() {
            r1 = this;
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r0 = r0.toUpperCase()
            return r0
    }

    private void getIDFromNewThead(android.content.Context r3) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$1 r1 = new com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$1
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    private java.lang.String getManufacturer() {
            r1 = this;
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toUpperCase()
            return r0
    }

    public void getOAID(android.content.Context r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getManufacturer===> "
            r0.append(r1)
            java.lang.String r1 = r2.getManufacturer()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "getManufacturer"
            android.util.Log.e(r1, r0)
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "ASUS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2b
            r2.getIDFromNewThead(r3)
            goto Le9
        L2b:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "HUAWEI"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L3c
            r2.getIDFromNewThead(r3)
            goto Le9
        L3c:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "LENOVO"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L54
            com.bianfeng.ymnsdk.sysfunc.helpers.LenovoDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.LenovoDeviceIDHelper
            r0.<init>(r3)
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r3 = r2._listener
            r0.getIdRun(r3)
            goto Le9
        L54:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "MEIZU"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L6c
            com.bianfeng.ymnsdk.sysfunc.helpers.MeizuDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.MeizuDeviceIDHelper
            r0.<init>(r3)
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r3 = r2._listener
            r0.getMeizuID(r3)
            goto Le9
        L6c:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "NUBIA"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L89
            com.bianfeng.ymnsdk.sysfunc.helpers.NubiaDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.NubiaDeviceIDHelper
            r0.<init>(r3)
            java.lang.String r3 = r0.getNubiaID()
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r0 = r2._listener
            if (r0 == 0) goto Le9
            r0.OnIdsAvalid(r3)
            goto Le9
        L89:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "OPPO"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L99
            r2.getIDFromNewThead(r3)
            goto Le9
        L99:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "SAMSUNG"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lb0
            com.bianfeng.ymnsdk.sysfunc.helpers.SamsungDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.SamsungDeviceIDHelper
            r0.<init>(r3)
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r3 = r2._listener
            r0.getSumsungID(r3)
            goto Le9
        Lb0:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "VIVO"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lcd
            com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper
            r0.<init>(r3)
            java.lang.String r3 = r0.getOaid()
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r0 = r2._listener
            if (r0 == 0) goto Le9
            r0.OnIdsAvalid(r3)
            goto Le9
        Lcd:
            java.lang.String r0 = r2.getManufacturer()
            java.lang.String r1 = "XIAOMI"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Le9
            com.bianfeng.ymnsdk.sysfunc.helpers.XiaomiDeviceIDHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.XiaomiDeviceIDHelper
            r0.<init>(r3)
            java.lang.String r3 = r0.getOAID()
            com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper$AppIdsUpdater r0 = r2._listener
            if (r0 == 0) goto Le9
            r0.OnIdsAvalid(r3)
        Le9:
            return
    }
}
