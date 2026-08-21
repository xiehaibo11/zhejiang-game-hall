package com.bianfeng.pluginlibrary;

public class RePluginInterface {
    private android.app.Activity activity;
    com.ymnsdk.replugin.service.IHostAidlInterface iHostAidlInterface;
    private int isconnected;
    private android.content.ServiceConnection serviceConnection;


    public RePluginInterface() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.isconnected = r0
            return
    }

    protected void closePlugin(java.lang.String r5, boolean r6) {
            r4 = this;
            android.app.Activity r0 = r4.activity
            android.content.Intent r0 = r0.getIntent()
            android.os.Bundle r1 = r0.getExtras()
            java.lang.String r2 = "hostActivity"
            java.lang.String r1 = r1.getString(r2)
            android.os.Bundle r0 = r0.getExtras()
            java.lang.String r2 = "hostPackageName"
            java.lang.String r0 = r0.getString(r2)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            android.app.Activity r3 = r4.activity
            android.content.Intent r3 = r3.getIntent()
            android.net.Uri r3 = r3.getData()
            if (r3 == 0) goto L38
            android.app.Activity r3 = r4.activity
            android.content.Intent r3 = r3.getIntent()
            android.net.Uri r3 = r3.getData()
            r2.setData(r3)
        L38:
            android.app.Activity r3 = r4.activity
            android.content.Intent r3 = r3.getIntent()
            android.os.Bundle r3 = r3.getExtras()
            if (r3 == 0) goto L51
            android.app.Activity r3 = r4.activity
            android.content.Intent r3 = r3.getIntent()
            android.os.Bundle r3 = r3.getExtras()
            r2.putExtras(r3)
        L51:
            r3 = 131072(0x20000, float:1.83671E-40)
            r2.addFlags(r3)
            java.lang.String r3 = "data"
            r2.putExtra(r3, r5)
            android.app.Activity r5 = r4.activity
            if (r5 == 0) goto L88
            android.content.Intent r5 = r5.getIntent()
            if (r5 == 0) goto L88
            android.app.Activity r5 = r4.activity
            android.content.Intent r5 = r5.getIntent()
            android.os.Bundle r5 = r5.getExtras()
            java.lang.String r3 = "pluginId"
            boolean r5 = r5.containsKey(r3)
            if (r5 == 0) goto L88
            android.app.Activity r5 = r4.activity
            android.content.Intent r5 = r5.getIntent()
            android.os.Bundle r5 = r5.getExtras()
            java.lang.String r5 = r5.getString(r3)
            r2.putExtra(r3, r5)
        L88:
            r2.setClassName(r0, r1)
            android.app.Activity r5 = r4.activity
            r5.startActivity(r2)
            if (r6 != 0) goto L9d
            int r5 = android.os.Process.myPid()
            android.os.Process.killProcess(r5)
            r5 = 0
            java.lang.System.exit(r5)
        L9d:
            return
    }

    public java.lang.String get_framework_version() {
            r1 = this;
            java.lang.String r0 = "2.0.0"
            return r0
    }

    protected void invokeFuncNameandParameters(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = new java.lang.String
            android.app.Activity r3 = r6.activity
            android.content.Intent r3 = r3.getIntent()
            android.os.Bundle r3 = r3.getExtras()
            java.lang.String r4 = "hostPackageName"
            java.lang.String r3 = r3.getString(r4)
            r2.<init>(r3)
            java.lang.String r3 = new java.lang.String
            android.app.Activity r4 = r6.activity
            android.content.Intent r4 = r4.getIntent()
            android.os.Bundle r4 = r4.getExtras()
            java.lang.String r5 = "hostProcessActivity"
            java.lang.String r4 = r4.getString(r5)
            r3.<init>(r4)
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            java.lang.String r1 = "payForProduct"
            boolean r1 = r1.equals(r7)
            java.lang.String r2 = "funName"
            if (r1 == 0) goto L47
            java.lang.String r7 = "pay"
            r0.putExtra(r2, r7)
            goto L4a
        L47:
            r0.putExtra(r2, r7)
        L4a:
            java.lang.String r7 = "funParams"
            r0.putExtra(r7, r8)
            android.app.Activity r7 = r6.activity
            r8 = 112233(0x1b669, float:1.57272E-40)
            r7.startActivityForResult(r0, r8)
            android.app.Activity r7 = r6.activity
            r8 = 0
            r7.overridePendingTransition(r8, r8)
            return
    }

    public void mBindService(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.bianfeng.replugin.HostService"
            r0.setAction(r1)
            r0.setPackage(r4)
            android.app.Activity r4 = r3.activity
            android.content.ServiceConnection r1 = r3.serviceConnection
            r2 = 1
            r4.bindService(r0, r1, r2)
            r4 = 0
            r3.isconnected = r4
            return
    }

    public void mUnBindService() {
            r3 = this;
            int r0 = r3.isconnected
            r1 = -1
            if (r1 == r0) goto Le
            android.app.Activity r0 = r3.activity
            android.content.ServiceConnection r2 = r3.serviceConnection
            r0.unbindService(r2)
            r3.isconnected = r1
        Le:
            return
    }

    protected void onCreate(android.content.Context r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.activity = r1
            com.bianfeng.pluginlibrary.RePluginInterface$1 r1 = new com.bianfeng.pluginlibrary.RePluginInterface$1
            r1.<init>(r0)
            r0.serviceConnection = r1
            return
    }

    public void postToSepperllita(java.lang.String r2) {
            r1 = this;
            com.ymnsdk.replugin.service.IHostAidlInterface r0 = r1.iHostAidlInterface     // Catch: java.lang.Exception -> L6
            r0.postToSepperllita(r2)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }
}
