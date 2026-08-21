package com.vivo.push.util;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.AsyncTask;
import android.text.TextUtils;
import com.vivo.push.d.r;
import com.vivo.push.model.InsideNotificationItem;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

public final class k extends AsyncTask<String, Void, List<Bitmap>> {
    private Context a;
    private InsideNotificationItem b;
    private long c;
    private boolean d;
    private int e = 0;
    private r.a f;

    public k(Context context, InsideNotificationItem insideNotificationItem, long j, boolean z, r.a aVar) {
        this.a = context;
        this.b = insideNotificationItem;
        this.c = j;
        this.d = z;
        this.f = aVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:49:0x008a A[EXC_TOP_SPLITTER, PHI: r5
      0x008a: PHI (r5v5 java.io.InputStream) = (r5v4 java.io.InputStream), (r5v6 java.io.InputStream) binds: [B:24:0x0088, B:29:0x0094] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private List<Bitmap> doInBackground(String... strArr) throws Throwable {
        InputStream inputStream;
        Bitmap bitmapDecodeStream;
        this.e = this.b.getNotifyDisplayStatus();
        InputStream inputStream2 = null;
        if (!this.d) {
            p.d("ImageDownTask", "bitmap is not display by forbid net");
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < 2; i++) {
            String str = strArr[i];
            p.d("ImageDownTask", "imgUrl=" + str + " i=" + i);
            if (!TextUtils.isEmpty(str)) {
                try {
                    HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                    httpURLConnection.setConnectTimeout(30000);
                    httpURLConnection.setDoInput(true);
                    httpURLConnection.setUseCaches(false);
                    httpURLConnection.connect();
                    int responseCode = httpURLConnection.getResponseCode();
                    p.c("ImageDownTask", "code=".concat(String.valueOf(responseCode)));
                    if (responseCode == 200) {
                        inputStream = httpURLConnection.getInputStream();
                        try {
                            try {
                                bitmapDecodeStream = BitmapFactory.decodeStream(inputStream);
                            } catch (Throwable th) {
                                th = th;
                                inputStream2 = inputStream;
                                if (inputStream2 != null) {
                                    try {
                                        inputStream2.close();
                                    } catch (Exception unused) {
                                    }
                                }
                                throw th;
                            }
                        } catch (MalformedURLException unused2) {
                            p.a("ImageDownTask", "MalformedURLException");
                            if (inputStream != null) {
                                try {
                                    inputStream.close();
                                } catch (Exception unused3) {
                                }
                            }
                            bitmapDecodeStream = null;
                        } catch (IOException unused4) {
                            p.a("ImageDownTask", "IOException");
                            if (inputStream != null) {
                            }
                            bitmapDecodeStream = null;
                        }
                    } else {
                        inputStream = null;
                        bitmapDecodeStream = null;
                    }
                    if (inputStream != null) {
                        try {
                            inputStream.close();
                        } catch (Exception unused5) {
                        }
                    }
                } catch (MalformedURLException unused6) {
                    inputStream = null;
                } catch (IOException unused7) {
                    inputStream = null;
                } catch (Throwable th2) {
                    th = th2;
                }
                arrayList.add(bitmapDecodeStream);
            } else if (i == 0) {
                arrayList.add(null);
            }
        }
        return arrayList;
    }

    @Override
    protected final void onPostExecute(List<Bitmap> list) {
        List<Bitmap> list2 = list;
        super.onPostExecute(list2);
        p.c("ImageDownTask", "onPostExecute");
        com.vivo.push.m.c(new l(this, list2));
    }
}
