package com.vivo.push.sdk;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import com.heytap.mcssdk.constant.b;
import com.vivo.push.b.x;
import com.vivo.push.c.d;
import com.vivo.push.e;
import com.vivo.push.q;
import com.vivo.push.util.ContextDelegate;
import com.vivo.push.util.p;
import com.vivo.push.util.t;
import com.vivo.push.util.u;
import com.vivo.push.util.z;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public final class a extends q {
    private static a c;
    private static final List<Integer> e = Arrays.asList(3);
    private String d;
    private String f = "";

    private a() {
    }

    public static synchronized a a() {
        if (c == null) {
            c = new a();
        }
        return c;
    }

    private static String a(Context context, String str, String str2) {
        List<ResolveInfo> listQueryBroadcastReceivers;
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return null;
        }
        Intent intent = new Intent(str2);
        intent.setPackage(str);
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null || (listQueryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent, 64)) == null || listQueryBroadcastReceivers.size() <= 0) {
                return null;
            }
            return listQueryBroadcastReceivers.get(0).activityInfo.name;
        } catch (Exception e2) {
            p.a("CommandWorker", "error  " + e2.getMessage());
            return null;
        }
    }

    private boolean b(Intent intent) {
        String stringExtra = intent.getStringExtra("security_avoid_pull");
        if (TextUtils.isEmpty(stringExtra)) {
            p.a("CommandWorker", "checkIntentIsSecurityTextUtils.isEmpty");
            return true;
        }
        try {
            String strB = com.vivo.push.util.a.a(this.a).b(stringExtra);
            if ("com.vivo.pushservice".equals(strB)) {
                return true;
            }
            p.a("CommandWorker", "!decrypt.equals, so decrypt == ".concat(String.valueOf(strB)));
            return false;
        } catch (Exception e2) {
            p.a("CommandWorker", "checkIntentIsSecurity Exception: " + e2.getMessage());
            return false;
        }
    }

    private boolean c(Intent intent) {
        if (Build.VERSION.SDK_INT < 18) {
            return true;
        }
        String strC = z.c(this.a, "com.vivo.pushservice");
        p.d("CommandWorker", " 配置的验签参数 = ".concat(String.valueOf(strC)));
        if (!TextUtils.equals(strC, "1")) {
            return true;
        }
        String stringExtra = intent.getStringExtra("security_avoid_pull_rsa");
        String stringExtra2 = intent.getStringExtra("security_avoid_rsa_public_key");
        if (TextUtils.isEmpty(stringExtra) || TextUtils.isEmpty(stringExtra2)) {
            p.a("CommandWorker", "!decrypt.equals, so securityContent == " + stringExtra + " or publickKey isempty ");
            return false;
        }
        try {
            if (d.a(this.a).a().a("com.vivo.pushservice".getBytes("UTF-8"), u.a(stringExtra2), Base64.decode(stringExtra, 2))) {
                p.d("CommandWorker", " RSA验签通过  ");
                return true;
            }
        } catch (Exception e2) {
            p.a("CommandWorker", "checkIntentIsSecurity Exception: " + e2.getMessage());
        }
        p.d("CommandWorker", " RSA验签 不通过  ");
        return false;
    }

    private int d(Intent intent) {
        String stringExtra;
        if (!TextUtils.isEmpty(this.f) && this.f.contains("CommandService")) {
            if (!(intent != null && b(intent) && c(intent))) {
                p.a("CommandWorker", " !checkIntentIsSecurity(intent)");
                return 2151;
            }
        }
        String packageName = this.a.getPackageName();
        try {
            stringExtra = intent.getStringExtra("command_type");
        } catch (Exception e2) {
            p.a("CommandWorker", e2);
        }
        if (!TextUtils.isEmpty(stringExtra) && stringExtra.equals("reflect_receiver")) {
            int intExtra = intent.getIntExtra(b.y, -1);
            if (intExtra < 0) {
                intExtra = intent.getIntExtra("method", -1);
            }
            if (e.contains(Integer.valueOf(intExtra)) && t.c(this.a, packageName) && !t.c(this.a)) {
                p.a("CommandWorker", "METHOD_ON_MESSAGE is not support");
                return 2153;
            }
            String action = intent.getAction();
            if (TextUtils.isEmpty(this.d)) {
                String strA = a(this.a, packageName, action);
                this.d = strA;
                if (TextUtils.isEmpty(strA)) {
                    p.d("CommandWorker", " reflectReceiver error: receiver for: " + action + " not found, package: " + packageName);
                    intent.setPackage(packageName);
                    this.a.sendBroadcast(intent);
                    return 2152;
                }
            }
            return 0;
        }
        p.a("CommandWorker", "commandTypeStr is not satisfy == ".concat(String.valueOf(stringExtra)));
        return 2151;
    }

    public final void a(Intent intent) {
        if (intent != null && this.a != null) {
            Message messageObtain = Message.obtain();
            messageObtain.obj = intent;
            a(messageObtain);
        } else {
            p.d("CommandWorker", " sendMessage error: intent : " + intent + ", mContext: " + this.a);
        }
    }

    public final void a(String str) {
        this.f = str;
    }

    public final void b() {
        this.d = null;
    }

    @Override
    public final void b(Message message) {
        Intent intent = (Intent) message.obj;
        if (intent == null || this.a == null) {
            p.d("CommandWorker", " handleMessage error: intent : " + intent + ", mContext: " + this.a);
            return;
        }
        String packageName = this.a.getPackageName();
        int iD = d(intent);
        if (iD <= 0) {
            try {
                Class<?> cls = Class.forName(this.d);
                Object objNewInstance = cls.getConstructor(new Class[0]).newInstance(new Object[0]);
                Method method = cls.getMethod("onReceive", Context.class, Intent.class);
                intent.setClassName(packageName, this.d);
                method.invoke(objNewInstance, ContextDelegate.getContext(this.a).getApplicationContext(), intent);
                return;
            } catch (Exception e2) {
                p.b("CommandWorker", "reflect e: ", e2);
                return;
            }
        }
        x xVar = new x(iD);
        HashMap<String, String> map = new HashMap<>();
        if (intent != null) {
            Bundle extras = intent.getExtras();
            map.put(b.c, String.valueOf(extras != null ? extras.getLong("notify_id", 404000044642424832L) : 404000044642424832L));
        }
        String strB = z.b(this.a, packageName);
        if (!TextUtils.isEmpty(strB)) {
            map.put("remoteAppId", strB);
        }
        xVar.a(map);
        e.a().a(xVar);
    }
}
