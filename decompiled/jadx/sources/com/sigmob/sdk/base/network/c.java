package com.sigmob.sdk.base.network;

import android.os.Environment;
import android.util.Log;
import com.czhj.sdk.logger.SigmobLog;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.Socket;
import java.net.SocketAddress;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;
import org.json.HTTP;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f4916a = "localhost";
    public static final int b = 80;
    public static final String c = "\r\n\r\n";
    public static final String d = "HTTP/1.1";
    public static final String e = "GET";
    public static final String f = " HTTP/";
    public static final int g = 3145728;
    public static final String h = "HttpParser";
    private static final String i = "Range: bytes=";
    private static final String j = "Range: bytes=0-";
    private static final int k = 10240;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f4917a = "HttpGetProxy";
        private Socket b;
        private SocketAddress c;

        public a(Socket socket, SocketAddress socketAddress) {
            this.b = null;
            this.b = socket;
            this.c = socketAddress;
        }

        public int a(String str, long j) throws Exception {
            byte[] bArr = new byte[8192];
            System.currentTimeMillis();
            File file = new File(str);
            if (j > file.length()) {
                return 0;
            }
            RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rw");
            if (j > 0) {
                randomAccessFile.seek(j);
            }
            int i = 0;
            while (true) {
                try {
                    int i2 = randomAccessFile.read(bArr);
                    if (i2 == -1) {
                        this.b.getOutputStream().flush();
                        randomAccessFile.close();
                        return i;
                    }
                    SigmobLog.d("tmpFileRaf read size" + i2);
                    i += i2;
                    this.b.getOutputStream().write(bArr, 0, i2);
                    SigmobLog.d("mSckPlayer write size" + i2);
                } catch (Exception e) {
                    SigmobLog.e("sendPrebufferToMP", e);
                    randomAccessFile.close();
                    throw e;
                }
            }
        }

        public void a(byte[] bArr) throws IOException {
            if (bArr.length == 0) {
                return;
            }
            this.b.getOutputStream().write(bArr);
            this.b.getOutputStream().flush();
        }

        public void a(byte[] bArr, int i) throws IOException {
            this.b.getOutputStream().write(bArr, 0, i);
            this.b.getOutputStream().flush();
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f4918a;
        private String b;
        private int c;
        private String d;
        private byte[] e = new byte[10240];
        private int f = 0;

        public class a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public String f4919a;
            public long b;

            public a() {
            }
        }

        public b(String str, int i, String str2, int i2) {
            this.f4918a = -1;
            this.b = str;
            this.f4918a = i;
            this.d = str2;
            this.c = i2;
        }

        private List<byte[]> a(String str, String str2, byte[] bArr, int i) {
            if (this.f + i >= this.e.length) {
                b();
            }
            System.arraycopy(bArr, 0, this.e, this.f, i);
            this.f += i;
            ArrayList arrayList = new ArrayList();
            String str3 = null;
            try {
                str3 = new String(this.e, "utf-8");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
            SigmobLog.e("headerBuffer " + str3);
            if (str3.contains(str) && str3.contains(str2)) {
                int iIndexOf = str3.indexOf(str, 0);
                int iIndexOf2 = (str3.indexOf(str2, iIndexOf) + str2.length()) - iIndexOf;
                byte[] bArr2 = new byte[iIndexOf2];
                System.arraycopy(this.e, iIndexOf, bArr2, 0, iIndexOf2);
                arrayList.add(bArr2);
                int i2 = this.f;
                if (i2 > iIndexOf2) {
                    int i3 = i2 - iIndexOf2;
                    byte[] bArr3 = new byte[i3];
                    System.arraycopy(this.e, iIndexOf2, bArr3, 0, i3);
                    arrayList.add(bArr3);
                }
                Log.e("----------------", "total:" + this.f + ",header.length:" + iIndexOf2);
                b();
            }
            return arrayList;
        }

        public a a(byte[] bArr) {
            String strReplace;
            a aVar = new a();
            aVar.f4919a = new String(bArr);
            aVar.f4919a = aVar.f4919a.replace(this.d, this.b);
            if (this.f4918a == -1) {
                strReplace = aVar.f4919a.replace(Constants.COLON_SEPARATOR + this.c, "");
            } else {
                strReplace = aVar.f4919a.replace(Constants.COLON_SEPARATOR + this.c, Constants.COLON_SEPARATOR + this.f4918a);
            }
            aVar.f4919a = strReplace;
            if (!aVar.f4919a.contains(c.i)) {
                aVar.f4919a = aVar.f4919a.replace(c.c, "\r\nRange: bytes=0-\r\n\r\n");
            }
            Log.e(c.h, aVar.f4919a);
            int iIndexOf = aVar.f4919a.indexOf(c.i) + 13;
            String strSubstring = aVar.f4919a.substring(iIndexOf, aVar.f4919a.indexOf(Constants.ACCEPT_TIME_SEPARATOR_SERVER, iIndexOf));
            Log.e(c.h, "------->rangePosition:" + strSubstring);
            aVar.b = (long) Integer.valueOf(strSubstring).intValue();
            return aVar;
        }

        public String a() {
            return "HTTP/1.1 206 Ok\r\nConnection: keep-alive\r\nContent-Type: video/mp4\r\n" + HTTP.CRLF;
        }

        public String a(String str, int i) {
            int iIndexOf = str.indexOf(c.i);
            return str.replaceAll(str.substring(iIndexOf, str.indexOf(HTTP.CRLF, iIndexOf)), c.i + i + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        }

        public byte[] a(byte[] bArr, int i) {
            List<byte[]> listA = a("GET", c.c, bArr, i);
            if (listA.size() > 0) {
                return listA.get(0);
            }
            return null;
        }

        public List<byte[]> b(byte[] bArr, int i) {
            return a(c.d, c.c, bArr, i);
        }

        public void b() {
            this.e = new byte[10240];
            this.f = 0;
        }
    }

    public static String a() {
        return Environment.getExternalStorageDirectory().getAbsolutePath() + "/ProxyBuffer/files";
    }

    public static String a(Exception exc) {
        StackTraceElement[] stackTrace = exc.getStackTrace();
        String str = "";
        for (int i2 = 0; i2 < stackTrace.length; i2++) {
            str = str + stackTrace[i2].getClassName() + "." + stackTrace[i2].getMethodName() + "  " + stackTrace[i2].getLineNumber() + "line\r\n";
        }
        return str;
    }

    public static String a(String str) {
        HttpURLConnection httpURLConnection;
        try {
            httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
            httpURLConnection.setInstanceFollowRedirects(false);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return (httpURLConnection.getResponseCode() == 301 || httpURLConnection.getResponseCode() == 302) ? httpURLConnection.getHeaderField("Location") : str;
    }

    public static void b(String str) {
        File file = new File(str);
        if (file.exists()) {
            File[] fileArrListFiles = file.listFiles();
            if (fileArrListFiles.length != 0) {
                for (File file2 : fileArrListFiles) {
                    file2.delete();
                }
            }
            SigmobLog.e("--------共有" + file.listFiles().length + "个缓存文件");
        }
    }

    public static String c(String str) {
        return str.replace("\\", "").replace("/", "").replace(Constants.COLON_SEPARATOR, "").replace("*", "").replace("?", "").replace("\"", "").replace("<", "").replace(">", "").replace("|", "").replace(" ", "");
    }
}
