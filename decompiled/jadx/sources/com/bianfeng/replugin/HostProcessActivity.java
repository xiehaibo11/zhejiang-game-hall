package com.bianfeng.replugin;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.util.ResourceManger;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class HostProcessActivity extends Activity implements Handler.Callback {
    private Handler handler;
    private boolean isPaying;
    private Activity hostActivity = null;
    private volatile boolean isNeedActivityReplace = false;
    private volatile Set<YmnCallback> callbacks = null;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        String str;
        super.onCreate(bundle);
        Log.e("zzx", "onCreate");
        this.isNeedActivityReplace = false;
        this.callbacks = new HashSet();
        for (Iterator<YmnCallback> it = YmnSdk.getCallbacks().iterator(); it.hasNext(); it = it) {
            this.callbacks.add(it.next());
        }
        YmnSdk.clearCallbacks();
        setContentView(ResourceManger.getId(this, "R.layout.activity_hostprocess"));
        this.handler = new Handler(this);
        this.hostActivity = YmnSdkWrapper.activity;
        YmnSdk.registCallback(new YmnCallback() { // from class: com.bianfeng.replugin.HostProcessActivity.1
            @Override // com.bianfeng.platform.PlatformSdkListener
            public void onCallBack(int i, String str2) {
                HostProcessActivity.this.__fixNoCallbackBugEnd();
                HostProcessActivity.this.isPaying = false;
                HostProcessActivity.this.finishTemp(i, str2);
            }
        });
        Intent intent = getIntent();
        String stringExtra = intent.getStringExtra("funName");
        String stringExtra2 = intent.getStringExtra("funParams");
        HashMap map = new HashMap();
        try {
            JSONObject jSONObject = new JSONObject(stringExtra2);
            str = stringExtra2;
            try {
                map.put(IPaymentFeature.ARG_CP_ORDER_ID, jSONObject.optString(IPaymentFeature.ARG_CP_ORDER_ID));
                map.put("product_id", jSONObject.optString("product_id"));
                map.put("product_name", jSONObject.optString("product_name"));
                map.put("product_price", jSONObject.optString("product_price"));
                map.put("product_count", jSONObject.optString("product_count"));
                map.put("role_id", jSONObject.optString("role_id"));
                map.put("role_name", jSONObject.optString("role_name"));
                map.put(IPaymentFeature.ARG_ROLE_GRADE, jSONObject.optString(IPaymentFeature.ARG_ROLE_GRADE));
                map.put(IPaymentFeature.ARG_ROLE_BALANCE, jSONObject.optString(IPaymentFeature.ARG_ROLE_BALANCE));
                map.put(IPaymentFeature.ARG_SERVER_ID, jSONObject.optString(IPaymentFeature.ARG_SERVER_ID));
                map.put(IPaymentFeature.ARG_SERVER_NAME, jSONObject.optString(IPaymentFeature.ARG_SERVER_NAME));
                map.put("notify_url", jSONObject.optString("notify_url"));
                map.put("ext", jSONObject.optString("ext"));
            } catch (JSONException e) {
                e = e;
                e.printStackTrace();
            }
        } catch (JSONException e2) {
            e = e2;
            str = stringExtra2;
        }
        Log.e("zzx-- ", stringExtra);
        String str2 = str;
        Log.e("zzx-- ", str2);
        this.isPaying = true;
        if (stringExtra.equals("pay")) {
            this.isNeedActivityReplace = true;
            YmnSdk.onCreate(this);
            YmnSdk.pay(map);
            return;
        }
        if (stringExtra.equals(HostConstant.login)) {
            YmnSdk.login();
            return;
        }
        if (YmnSdk.isSupportFunction(stringExtra)) {
            if (str2 == null || stringExtra.isEmpty()) {
                YmnSdk.callFunction(stringExtra);
                return;
            } else {
                YmnSdk.callFunction(stringExtra, str2);
                return;
            }
        }
        finishTemp(201, "不支持" + stringExtra + "方法");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void finishTemp(int i, String str) {
        Intent intent = new Intent();
        intent.putExtra("code", i);
        intent.putExtra("msg", str);
        setResult(332211, intent);
        Log.e("zzx--code ", String.valueOf(i));
        Log.e("zzx--msg ", str);
        finish();
        overridePendingTransition(0, 0);
    }

    private void __fixNoCallbackBugBegin() {
        Handler handler = this.handler;
        if (handler != null) {
            handler.sendEmptyMessageDelayed(0, 3000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void __fixNoCallbackBugEnd() {
        Handler handler = this.handler;
        if (handler != null) {
            handler.removeMessages(0);
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        Log.e("zzx", "onPause");
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        Log.e("zzx", "onStart");
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        Log.e("zzx", "onRestart");
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Log.e("zzx", "onResume");
        if (this.isPaying) {
            return;
        }
        __fixNoCallbackBugBegin();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.isNeedActivityReplace) {
            this.isNeedActivityReplace = false;
            YmnSdk.onCreate(this.hostActivity);
        }
        Iterator<YmnCallback> it = this.callbacks.iterator();
        while (it.hasNext()) {
            YmnSdk.registCallback(it.next());
        }
        Log.e("zzx", "onDestroy");
    }

    @Override // android.os.Handler.Callback
    public boolean handleMessage(Message message) {
        Log.e("zzx", "回调异常");
        finishTemp(201, "回调异常");
        return false;
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        YmnSdk.onActivityResult(i, i2, intent);
    }
}
