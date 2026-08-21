package com.bianfeng.pluginlibrary;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Process;
import com.ymnsdk.replugin.service.IHostAidlInterface;

public class RePluginInterface {
    private Activity activity;
    IHostAidlInterface iHostAidlInterface;
    private int isconnected;
    private ServiceConnection serviceConnection;

    public String get_framework_version() {
        return "2.0.0";
    }

    public RePluginInterface() {
        this.isconnected = -1;
    }

    protected void onCreate(Context r1) {
        this.activity = (Activity) r1;
        this.serviceConnection = new 1(this);
    }

    protected void closePlugin(String r5, boolean r6) {
        Intent r0 = this.activity.getIntent();
        String r1 = r0.getExtras().getString("hostActivity");
        String r02 = r0.getExtras().getString("hostPackageName");
        Intent r2 = new Intent();
        if (this.activity.getIntent().getData() == null) goto L6;
        r2.setData(this.activity.getIntent().getData());
    L6:
        if (this.activity.getIntent().getExtras() == null) goto L8;
        r2.putExtras(this.activity.getIntent().getExtras());
    L8:
        r2.addFlags(131072);
        r2.putExtra("data", r5);
        Activity r52 = this.activity;
        if (r52 != null) goto L11;
    L15:
        r2.setClassName(r02, r1);
        this.activity.startActivity(r2);
        if (r6 == true) goto L19;
        Process.killProcess(Process.myPid());
        System.exit(0);
        return;
    L19:
        return;
    L11:
        if (r52.getIntent() == null) goto L15;
        if (this.activity.getIntent().getExtras().containsKey("pluginId") == false) goto L15;
        r2.putExtra("pluginId", this.activity.getIntent().getExtras().getString("pluginId"));
        goto L15
    }

    protected void invokeFuncNameandParameters(String r7, String r8) {
        Intent r0 = new Intent();
        r0.setComponent(new ComponentName(new String(this.activity.getIntent().getExtras().getString("hostPackageName")), new String(this.activity.getIntent().getExtras().getString("hostProcessActivity"))));
        if ("payForProduct".equals(r7) == false) goto L5;
        r0.putExtra("funName", "pay");
    L6:
        r0.putExtra("funParams", r8);
        this.activity.startActivityForResult(r0, 112233);
        this.activity.overridePendingTransition(0, 0);
        return;
    L5:
        r0.putExtra("funName", r7);
        goto L6
    }

    public void mBindService(String r4) {
        Intent r0 = new Intent();
        r0.setAction("com.bianfeng.replugin.HostService");
        r0.setPackage(r4);
        this.activity.bindService(r0, this.serviceConnection, 1);
        this.isconnected = 0;
    }

    public void mUnBindService() {
        if ((-1) == this.isconnected) goto L6;
        this.activity.unbindService(this.serviceConnection);
        this.isconnected = -1;
        return;
    }

    public void postToSepperllita(String r2) {
        this.iHostAidlInterface.postToSepperllita(r2);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }
}
