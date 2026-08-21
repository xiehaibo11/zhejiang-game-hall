package com.ss.android.downloadlib.rg.df;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ResolveInfo;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Pair;
import com.kuaishou.weapon.p0.t;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.rg.df.q;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public class rg {
    private static String c = "";
    private static volatile rg fw = null;
    private static String pp = "";
    private static String pt = "";
    private Context b;
    public q rg;
    private boolean ux = true;
    private boolean rz = false;
    private volatile boolean bm = false;
    private final List<Pair<df, pt>> hq = new ArrayList();
    public final List<rg> df = new ArrayList();
    private final ServiceConnection oh = new ServiceConnection() {
        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            synchronized (rg.this.q) {
                rg.this.rg(false);
                rg.this.rg = q.rg.rg(iBinder);
                rg.this.q();
                Iterator<rg> it = rg.this.df.iterator();
                while (it.hasNext()) {
                    it.next().rg();
                }
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            synchronized (rg.this.q) {
                rg.this.rg(false);
                rg.this.rg = null;
                Iterator<rg> it = rg.this.df.iterator();
                while (it.hasNext()) {
                    it.next().df();
                }
            }
        }
    };
    private String f = "";
    public final Object q = new Object();

    public interface rg {
        void df();

        void rg();
    }

    private rg() {
    }

    public static rg rg() {
        if (fw == null) {
            synchronized (rg.class) {
                if (fw == null) {
                    fw = new rg();
                }
            }
        }
        return fw;
    }

    public boolean rg(Context context, boolean z) {
        if (TextUtils.isEmpty(pt)) {
            JSONObject jSONObjectRz = bm.rz();
            String strOptString = jSONObjectRz.optString("s");
            pt = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("q"), strOptString);
            pp = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString(t.i), strOptString);
            c = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("w"), strOptString);
        }
        this.rz = z;
        if (context == null) {
            return true;
        }
        this.b = context.getApplicationContext();
        if (TextUtils.isEmpty(c)) {
            c = this.b.getPackageName();
        }
        if (this.rg != null || pt()) {
            return true;
        }
        return this.b.bindService(rg(context), this.oh, 33);
    }

    public void df() {
        if (this.rg != null) {
            this.b.unbindService(this.oh);
            this.rg = null;
        }
        this.df.clear();
        this.hq.clear();
    }

    public Intent rg(Context context) {
        Intent intent = new Intent();
        intent.setAction(pt);
        List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(intent, 0);
        if (listQueryIntentServices == null || listQueryIntentServices.size() != 1) {
            return null;
        }
        for (ResolveInfo resolveInfo : listQueryIntentServices) {
            String str = resolveInfo.serviceInfo.packageName;
            String str2 = resolveInfo.serviceInfo.name;
            if (pp.equals(str)) {
                ComponentName componentName = new ComponentName(str, str2);
                Intent intent2 = new Intent(intent);
                intent2.setComponent(componentName);
                return intent2;
            }
        }
        return null;
    }

    public void rg(df dfVar, pt ptVar) {
        synchronized (this.q) {
            dfVar.pp = c;
            if (TextUtils.isEmpty(dfVar.c)) {
                dfVar.c = this.f;
            }
            if (this.rg != null) {
                try {
                    this.rg.rg(dfVar, ptVar);
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
            } else if (pt() || rg(this.b, this.rz)) {
                this.hq.add(Pair.create(dfVar, ptVar));
            }
        }
    }

    public void q() {
        for (Pair<df, pt> pair : this.hq) {
            try {
                this.rg.rg((df) pair.first, (pt) pair.second);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }
        this.hq.clear();
    }

    public boolean pt() {
        return this.bm;
    }

    public void rg(boolean z) {
        this.bm = z;
    }
}
