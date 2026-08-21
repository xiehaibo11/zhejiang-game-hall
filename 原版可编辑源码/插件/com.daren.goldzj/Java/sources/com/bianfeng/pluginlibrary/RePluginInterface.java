package com.bianfeng.pluginlibrary;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.Process;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.service.IHostAidlInterface;

public class RePluginInterface {
    private Activity activity;
    IHostAidlInterface iHostAidlInterface;
    private int isconnected = -1;
    private ServiceConnection serviceConnection;

    public String get_framework_version() {
        return "2.0.0";
    }

    protected void onCreate(Context context) {
        this.activity = (Activity) context;
        this.serviceConnection = new ServiceConnection() {
            @Override
            public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                Log.e(HostConstant.ymn, "onServiceConnected: ok");
                RePluginInterface.this.iHostAidlInterface = IHostAidlInterface.Stub.asInterface(iBinder);
            }

            @Override
            public void onServiceDisconnected(ComponentName componentName) {
                Log.e(HostConstant.ymn, "onServiceDisconnected: ");
            }
        };
    }

    protected void closePlugin(String str, boolean z) {
        Intent intent = this.activity.getIntent();
        String string = intent.getExtras().getString("hostActivity");
        String string2 = intent.getExtras().getString("hostPackageName");
        Intent intent2 = new Intent();
        if (this.activity.getIntent().getData() != null) {
            intent2.setData(this.activity.getIntent().getData());
        }
        if (this.activity.getIntent().getExtras() != null) {
            intent2.putExtras(this.activity.getIntent().getExtras());
        }
        intent2.addFlags(131072);
        intent2.putExtra("data", str);
        Activity activity = this.activity;
        if (activity != null && activity.getIntent() != null && this.activity.getIntent().getExtras().containsKey("pluginId")) {
            intent2.putExtra("pluginId", this.activity.getIntent().getExtras().getString("pluginId"));
        }
        intent2.setClassName(string2, string);
        this.activity.startActivity(intent2);
        if (z) {
            return;
        }
        Process.killProcess(Process.myPid());
        System.exit(0);
    }

    protected void invokeFuncNameandParameters(String str, String str2) {
        Intent intent = new Intent();
        intent.setComponent(new ComponentName(new String(this.activity.getIntent().getExtras().getString("hostPackageName")), new String(this.activity.getIntent().getExtras().getString("hostProcessActivity"))));
        if ("payForProduct".equals(str)) {
            intent.putExtra("funName", "pay");
        } else {
            intent.putExtra("funName", str);
        }
        intent.putExtra("funParams", str2);
        this.activity.startActivityForResult(intent, 112233);
        this.activity.overridePendingTransition(0, 0);
    }

    public void mBindService(String str) {
        Intent intent = new Intent();
        intent.setAction("com.bianfeng.replugin.HostService");
        intent.setPackage(str);
        this.activity.bindService(intent, this.serviceConnection, 1);
        this.isconnected = 0;
    }

    public void mUnBindService() {
        if (-1 != this.isconnected) {
            this.activity.unbindService(this.serviceConnection);
            this.isconnected = -1;
        }
    }

    public void postToSepperllita(String str) {
        try {
            this.iHostAidlInterface.postToSepperllita(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
