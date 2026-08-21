package com.huawei.updatesdk.a.b.c;

import android.os.AsyncTask;
import android.text.TextUtils;
import com.huawei.updatesdk.a.a.b.b;
import com.huawei.updatesdk.a.a.d.g;
import com.huawei.updatesdk.a.b.c.c.c;
import com.huawei.updatesdk.a.b.c.c.d;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ConnectException;
import java.net.SocketTimeoutException;
import java.util.concurrent.Executor;
import org.apache.http.conn.ConnectTimeoutException;
import org.json.JSONObject;

public class b extends AsyncTask<c, Void, d> {
    protected c a;
    private com.huawei.updatesdk.a.b.c.c.a c;
    private d b = null;
    private com.huawei.updatesdk.a.a.b.b d = null;
    private int e = 0;

    public b(c cVar, com.huawei.updatesdk.a.b.c.c.a aVar) {
        this.a = null;
        this.c = null;
        this.a = cVar;
        this.c = aVar;
    }

    private d a(String str, d dVar) {
        try {
            dVar.fromJson(new JSONObject(str));
            dVar.b(0);
        } catch (Exception e) {
            com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "parse json error", e);
        }
        return dVar;
    }

    private void a(d dVar, int i, d.a aVar, Throwable th) {
        if (dVar != null) {
            dVar.b(i);
            dVar.a(aVar);
            dVar.a(th.toString());
        }
    }

    private void a(d dVar, Throwable th, String str) {
        d.a aVar;
        int i = 1;
        if (th instanceof ConnectException) {
            aVar = d.a.f;
        } else if ((th instanceof SocketTimeoutException) || (th instanceof ConnectTimeoutException)) {
            aVar = d.a.f;
            i = 2;
        } else if (th instanceof IllegalArgumentException) {
            aVar = d.a.d;
            i = 5;
        } else if (th instanceof IllegalAccessException) {
            aVar = d.a.g;
        } else {
            if (!(th instanceof ArrayIndexOutOfBoundsException)) {
                if ((th instanceof InterruptedException) || (th instanceof InterruptedIOException)) {
                    a(dVar, 0, d.a.a, th);
                    com.huawei.updatesdk.a.a.a.a("StoreTask", "UpdateSDK task is canceled");
                } else if (th instanceof IOException) {
                    aVar = d.a.e;
                } else if (dVar != null) {
                    dVar.a(th.toString());
                }
                a(str, th);
            }
            aVar = d.a.h;
            i = 6;
        }
        a(dVar, i, aVar, th);
        a(str, th);
    }

    private void a(String str, Throwable th) {
        StringBuilder sb = new StringBuilder();
        sb.append("invoke store error");
        sb.append(", exceptionType:");
        sb.append(th.getClass().getName());
        sb.append(", url:");
        sb.append(str);
        sb.append(", method:");
        sb.append(this.a.b());
        sb.append(", retryTimes:" + this.e);
        String string = sb.toString();
        com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", string, th);
        com.huawei.updatesdk.a.a.a.a("StoreTask", "UpdateSDK call store error: " + string);
    }

    private boolean a(String str) {
        return TextUtils.isEmpty(str) || !g.d(str);
    }

    private void b(d dVar) {
        StringBuilder sb;
        d.a aVar;
        if (isCancelled() || this.c == null) {
            return;
        }
        if (dVar == null) {
            com.huawei.updatesdk.a.a.c.a.a.a.b("StoreTask", "notifyResult, response is null");
            try {
                dVar = a.a(this.a.b());
            } catch (IllegalAccessException e) {
                e = e;
                sb = new StringBuilder();
                sb.append("notifyResult, create response error, method:");
                sb.append(this.a.b());
                com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", sb.toString(), e);
            } catch (InstantiationException e2) {
                e = e2;
                sb = new StringBuilder();
                sb.append("notifyResult, create response error, method:");
                sb.append(this.a.b());
                com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", sb.toString(), e);
            }
            if (dVar == null) {
                dVar = new d();
                aVar = d.a.d;
            } else {
                aVar = d.a.g;
            }
            dVar.a(aVar);
            dVar.b(1);
        }
        this.c.b(this.a, dVar);
    }

    private void b(String str) {
        com.huawei.updatesdk.a.a.a.a("StoreTask", TextUtils.isEmpty(str) ? "UpdateSDK response error, resData == null" : "UpdateSDK response error, resData is not json string");
    }

    private boolean c(d dVar) {
        if (isCancelled()) {
            return false;
        }
        if (dVar.d() != 1 && dVar.d() != 2) {
            return false;
        }
        int i = this.e;
        this.e = i + 1;
        if (i >= 3) {
            com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "retry completed total times = " + this.e + ",response.responseCode = " + dVar.d());
            return false;
        }
        com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "retry times = " + this.e + ",response.responseCode = " + dVar.d());
        return true;
    }

    private String d() {
        String strA = com.huawei.updatesdk.b.g.a.a();
        return TextUtils.isEmpty(strA) ? "Android/1.0" : strA;
    }

    private void e() {
        b(this.b);
    }

    protected d a() {
        String str;
        d dVarA;
        d dVar = null;
        try {
            dVarA = a.a(this.a.b());
            try {
                if (com.huawei.updatesdk.a.a.d.i.a.d(com.huawei.updatesdk.a.b.a.a.c().a())) {
                    String strA = this.a.a();
                    String strD = this.a.d();
                    com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "callStore, method:" + this.a.b() + ", url:" + strD + ", body:" + strA);
                    com.huawei.updatesdk.a.a.b.b bVar = new com.huawei.updatesdk.a.a.b.b();
                    this.d = bVar;
                    b.a aVarA = bVar.a(strD, strA, "UTF-8", d(), com.huawei.updatesdk.a.b.a.a.c().a());
                    String strB = aVarA.b();
                    dVarA.a(aVarA.a());
                    com.huawei.updatesdk.a.a.a.b("StoreTask", "UpdateSDK call store responsecode: " + dVarA.b());
                    if (aVarA.a() / 100 == 5) {
                        dVarA.b(0);
                        return dVarA;
                    }
                    if (a(strB)) {
                        dVarA.b(1);
                        dVarA.a(d.a.c);
                        b(strB);
                    } else {
                        dVarA = a(strB, dVarA);
                        com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "callStore response, method:" + this.a.b() + ", url:" + strD + ", body:" + strA + ", Receive Json msg:" + dVarA.toJson());
                    }
                } else {
                    dVarA.b(3);
                    dVarA.a(d.a.b);
                }
            } catch (Throwable th) {
                th = th;
                str = null;
                dVar = dVarA;
                a(dVar, th, str);
                dVarA = dVar;
            }
        } catch (Throwable th2) {
            th = th2;
            str = null;
        }
        if (dVarA != null) {
            return dVarA;
        }
        d dVar2 = new d();
        dVar2.b(5);
        dVar2.a(d.a.d);
        return dVar2;
    }

    @Override
    protected d doInBackground(c... cVarArr) {
        com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "doInBackground, method:" + this.a.b());
        com.huawei.updatesdk.b.g.b.a(this);
        d dVarC = c();
        com.huawei.updatesdk.a.b.c.c.a aVar = this.c;
        if (aVar != null) {
            aVar.a(this.a, dVarC);
        }
        return dVarC;
    }

    @Override
    protected void onPostExecute(d dVar) {
        com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "onPostExecute, method:" + this.a.b());
        com.huawei.updatesdk.b.g.b.a().remove(this);
        e();
    }

    public final void a(Executor executor) {
        executeOnExecutor(executor, this.a);
    }

    public void b() {
        com.huawei.updatesdk.a.a.b.b bVar = this.d;
        if (bVar != null) {
            bVar.a();
            this.d = null;
        }
    }

    public final d c() {
        d dVarA = null;
        do {
            if (this.e > 0 && dVarA != null) {
                com.huawei.updatesdk.a.a.c.a.a.a.a("StoreTask", "call store error! responseCode:" + dVarA.d() + ", retryTimes:" + this.e);
            }
            dVarA = a();
        } while (c(dVarA));
        this.b = dVarA;
        return dVarA;
    }
}
