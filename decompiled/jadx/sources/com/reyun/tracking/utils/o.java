package com.reyun.tracking.utils;

import cz.msebera.android.httpclient.HttpHeaders;
import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.security.KeyManagementException;
import java.security.NoSuchAlgorithmException;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class o implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4752a;
    private String b;
    private String c;
    private n d;
    private Integer e;
    private Integer f;
    private Boolean g;
    private Integer h;
    private int i;

    public o(String str, String str2, String str3, int i, n nVar) {
        this.f4752a = str;
        this.c = str2;
        this.b = str3;
        this.d = nVar;
        this.h = Integer.valueOf(i);
        this.i = 0;
    }

    public o(String str, String str2, String str3, n nVar) {
        this(str, str2, str3, 1, nVar);
    }

    public void a(Boolean bool) {
        this.g = bool;
    }

    public void a(Integer num) {
        this.e = num;
    }

    public void b(Integer num) {
        this.f = num;
    }

    @Override // java.lang.Runnable
    public void run() {
        String str;
        n nVar;
        Throwable th;
        try {
            com.reyun.tracking.a.a.d("Tracking", "========== POST Request Begin ==========");
            com.reyun.tracking.a.a.d("Tracking", "Request url:" + this.f4752a);
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.f4752a).openConnection();
            httpURLConnection.addRequestProperty("Content-Type", this.c == null ? "application/x-www-form-urlencoded" : this.c);
            httpURLConnection.addRequestProperty(HttpHeaders.ACCEPT_CHARSET, "UTF-8");
            boolean zBooleanValue = this.g == null ? com.reyun.tracking.a.i.d : this.g.booleanValue();
            if (zBooleanValue) {
                httpURLConnection.setRequestProperty("encrypt", "yes");
            }
            int iIntValue = 5000;
            httpURLConnection.setConnectTimeout(this.e == null ? 5000 : this.e.intValue());
            if (this.f != null) {
                iIntValue = this.f.intValue();
            }
            httpURLConnection.setReadTimeout(iIntValue);
            httpURLConnection.setRequestMethod("POST");
            if (httpURLConnection instanceof HttpsURLConnection) {
                SSLContext sSLContext = SSLContext.getInstance("TLS");
                sSLContext.init(null, null, null);
                ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(sSLContext.getSocketFactory());
            }
            if (this.b != null) {
                com.reyun.tracking.a.a.d("Tracking", "Request data:\n" + this.b);
                httpURLConnection.setDoOutput(true);
                DataOutputStream dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
                if (zBooleanValue) {
                    dataOutputStream.write(a.a().a(this.b));
                    dataOutputStream.flush();
                } else {
                    dataOutputStream.write(this.b.getBytes("UTF-8"));
                    dataOutputStream.flush();
                }
                dataOutputStream.close();
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getInputStream()));
            int responseCode = httpURLConnection.getResponseCode();
            if (200 == responseCode) {
                StringBuilder sb = new StringBuilder();
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        break;
                    } else {
                        sb.append(line);
                    }
                }
                JSONObject jSONObject = new JSONObject(sb.toString());
                com.reyun.tracking.a.a.d("Tracking", "response json:" + jSONObject.toString());
                int iOptInt = jSONObject.optInt("status", -1);
                if (iOptInt == 0) {
                    this.d.a(responseCode, jSONObject);
                } else {
                    this.d.a(new Exception("Request server failed! response Code=" + iOptInt), jSONObject.optString("message"));
                }
            } else {
                this.d.a(new Exception("Request http server failed!"), "response Code=" + responseCode);
            }
        } catch (MalformedURLException e) {
            if (com.reyun.tracking.a.i.f4704a) {
                e.printStackTrace();
            }
            str = "response Code=-2";
            th = e;
            nVar = this.d;
            nVar.a(th, str);
        } catch (IOException e2) {
            if (com.reyun.tracking.a.i.f4704a) {
                e2.printStackTrace();
            }
            str = "response Code=-3";
            th = e2;
            nVar = this.d;
            nVar.a(th, str);
        } catch (KeyManagementException e3) {
            if (com.reyun.tracking.a.i.f4704a) {
                e3.printStackTrace();
            }
            str = "response Code=-5";
            th = e3;
            nVar = this.d;
            nVar.a(th, str);
        } catch (NoSuchAlgorithmException e4) {
            if (com.reyun.tracking.a.i.f4704a) {
                e4.printStackTrace();
            }
            str = "response Code=-4";
            th = e4;
            nVar = this.d;
            nVar.a(th, str);
        } catch (JSONException e5) {
            if (com.reyun.tracking.a.i.f4704a) {
                e5.printStackTrace();
            }
            str = "response Code=-6";
            th = e5;
            nVar = this.d;
            nVar.a(th, str);
        } catch (Exception e6) {
            if (com.reyun.tracking.a.i.f4704a) {
                e6.printStackTrace();
            }
            str = "response Code=-500";
            th = e6;
            nVar = this.d;
            nVar.a(th, str);
        }
        com.reyun.tracking.a.a.d("Tracking", "********** Request End **********");
    }
}
