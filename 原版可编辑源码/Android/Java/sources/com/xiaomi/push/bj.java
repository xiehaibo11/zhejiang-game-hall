package com.xiaomi.push;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.cookie.SM;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Pattern;
import java.util.zip.GZIPOutputStream;
import org.json.HTTP;

public class bj {
    public static final Pattern a = Pattern.compile("([^\\s;]+)(.*)");
    public static final Pattern b = Pattern.compile("(.*?charset\\s*=[^a-zA-Z0-9]*)([-a-zA-Z0-9]+)(.*)", 2);
    public static final Pattern c = Pattern.compile("(\\<\\?xml\\s+.*?encoding\\s*=[^a-zA-Z0-9]*)([-a-zA-Z0-9]+)(.*)", 2);

    public final class a extends FilterInputStream {
        private boolean a;

        public a(InputStream inputStream) {
            super(inputStream);
        }

        @Override
        public int read(byte[] bArr, int i, int i2) {
            int i3;
            if (!this.a && (i3 = super.read(bArr, i, i2)) != -1) {
                return i3;
            }
            this.a = true;
            return -1;
        }
    }

    public class b {
        public int a;
        public Map<String, String> a;

        public String toString() {
            return String.format("resCode = %1$d, headers = %2$s", Integer.valueOf(this.a), this.a.toString());
        }
    }

    public static int a(Context context) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return -1;
            }
            NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return -1;
            }
            return activeNetworkInfo.getType();
        } catch (Exception unused) {
            return -1;
        }
    }

    public static NetworkInfo a(Context context) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return null;
            }
            return connectivityManager.getActiveNetworkInfo();
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static bh a(Context context, String str, String str2, Map<String, String> map, String str3) {
        HttpURLConnection httpURLConnectionA;
        int i;
        boolean zEqualsIgnoreCase;
        BufferedReader bufferedReader;
        bh bhVar = new bh();
        try {
            try {
                try {
                    httpURLConnectionA = a(context, a(str));
                    httpURLConnectionA.setConnectTimeout(10000);
                    httpURLConnectionA.setReadTimeout(15000);
                    String str4 = str2;
                    if (str2 == 0) {
                        str4 = "GET";
                    }
                    httpURLConnectionA.setRequestMethod(str4);
                    i = 0;
                    if (map != null) {
                        zEqualsIgnoreCase = "gzip".equalsIgnoreCase(map.get("Content-Encoding"));
                        for (String str5 : map.keySet()) {
                            httpURLConnectionA.setRequestProperty(str5, map.get(str5));
                        }
                    } else {
                        zEqualsIgnoreCase = false;
                    }
                    if (!TextUtils.isEmpty(str3)) {
                        httpURLConnectionA.setDoOutput(true);
                        byte[] bytes = str3.getBytes();
                        OutputStream gZIPOutputStream = zEqualsIgnoreCase ? new GZIPOutputStream(httpURLConnectionA.getOutputStream()) : httpURLConnectionA.getOutputStream();
                        try {
                            gZIPOutputStream.write(bytes, 0, bytes.length);
                            gZIPOutputStream.flush();
                            gZIPOutputStream.close();
                        } catch (IOException e) {
                            e = e;
                        } catch (Throwable th) {
                            th = th;
                            throw new IOException(th.getMessage());
                        }
                    }
                    bhVar.a = httpURLConnectionA.getResponseCode();
                    com.xiaomi.channel.commonutils.logger.b.a("Http POST Response Code: " + bhVar.a);
                } catch (IOException e2) {
                    e = e2;
                }
                while (true) {
                    String headerFieldKey = httpURLConnectionA.getHeaderFieldKey(i);
                    String headerField = httpURLConnectionA.getHeaderField(i);
                    if (headerFieldKey == null && headerField == null) {
                        try {
                            break;
                        } catch (IOException unused) {
                            bufferedReader = new BufferedReader(new InputStreamReader(new a(httpURLConnectionA.getErrorStream())));
                        }
                    } else {
                        bhVar.a.put(headerFieldKey, headerField);
                        i = i + 1 + 1;
                    }
                    throw new IOException("err while request " + str + Constants.COLON_SEPARATOR + e.getClass().getSimpleName());
                }
                bufferedReader = new BufferedReader(new InputStreamReader(new a(httpURLConnectionA.getInputStream())));
            } catch (Throwable th2) {
                th = th2;
            }
            try {
                StringBuffer stringBuffer = new StringBuffer();
                String property = System.getProperty("line.separator");
                for (String line = bufferedReader.readLine(); line != null; line = bufferedReader.readLine()) {
                    stringBuffer.append(line);
                    stringBuffer.append(property);
                }
                bhVar.a = stringBuffer.toString();
                bufferedReader.close();
                ab.a((Closeable) null);
                ab.a((Closeable) null);
                return bhVar;
            } catch (IOException e3) {
                e = e3;
            } catch (Throwable th3) {
                th = th3;
                throw new IOException(th.getMessage());
            }
        } catch (Throwable th4) {
            ab.a((Closeable) null);
            ab.a((Closeable) str2);
            throw th4;
        }
    }

    public static bh a(Context context, String str, Map<String, String> map) {
        return a(context, str, "POST", (Map<String, String>) null, a(map));
    }

    public static InputStream a(Context context, URL url, boolean z, String str, String str2) {
        return a(context, url, z, str, str2, null, null);
    }

    public static InputStream a(Context context, URL url, boolean z, String str, String str2, Map<String, String> map, b bVar) throws IOException {
        if (context == null) {
            throw new IllegalArgumentException(TTLiveConstants.CONTEXT_KEY);
        }
        if (url == null) {
            throw new IllegalArgumentException("url");
        }
        URL url2 = !z ? new URL(a(url.toString())) : url;
        try {
            HttpURLConnection.setFollowRedirects(true);
            HttpURLConnection httpURLConnectionA = a(context, url2);
            httpURLConnectionA.setConnectTimeout(10000);
            httpURLConnectionA.setReadTimeout(15000);
            if (!TextUtils.isEmpty(str)) {
                httpURLConnectionA.setRequestProperty("User-Agent", str);
            }
            if (str2 != null) {
                httpURLConnectionA.setRequestProperty(SM.COOKIE, str2);
            }
            if (map != null) {
                for (String str3 : map.keySet()) {
                    httpURLConnectionA.setRequestProperty(str3, map.get(str3));
                }
            }
            if (bVar != null && (url.getProtocol().equals("http") || url.getProtocol().equals("https"))) {
                bVar.a = httpURLConnectionA.getResponseCode();
                if (bVar.a == null) {
                    bVar.a = new HashMap();
                }
                int i = 0;
                while (true) {
                    String headerFieldKey = httpURLConnectionA.getHeaderFieldKey(i);
                    String headerField = httpURLConnectionA.getHeaderField(i);
                    if (headerFieldKey == null && headerField == null) {
                        break;
                    }
                    if (!TextUtils.isEmpty(headerFieldKey) && !TextUtils.isEmpty(headerField)) {
                        bVar.a.put(headerFieldKey, headerField);
                    }
                    i++;
                }
            }
            return new a(httpURLConnectionA.getInputStream());
        } catch (IOException e) {
            throw new IOException("IOException:" + e.getClass().getSimpleName());
        } catch (Throwable th) {
            throw new IOException(th.getMessage());
        }
    }

    public static String a(Context context) {
        if (e(context)) {
            return Device.NETWORN_WIFI;
        }
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return "";
            }
            NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return "";
            }
            return (activeNetworkInfo.getTypeName() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + activeNetworkInfo.getSubtypeName() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + activeNetworkInfo.getExtraInfo()).toLowerCase();
        } catch (Exception unused) {
            return "";
        }
    }

    public static String a(Context context, URL url) {
        return a(context, url, false, null, "UTF-8", null);
    }

    public static String a(Context context, URL url, boolean z, String str, String str2, String str3) throws Throwable {
        InputStream inputStreamA;
        try {
            inputStreamA = a(context, url, z, str, str3);
            try {
                StringBuilder sb = new StringBuilder(1024);
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStreamA, str2));
                char[] cArr = new char[4096];
                while (true) {
                    int i = bufferedReader.read(cArr);
                    if (-1 == i) {
                        ab.a(inputStreamA);
                        return sb.toString();
                    }
                    sb.append(cArr, 0, i);
                }
            } catch (Throwable th) {
                th = th;
                ab.a(inputStreamA);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            inputStreamA = null;
        }
    }

    public static String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        new String();
        return String.format("%s&key=%s", str, bo.a(String.format("%sbe988a6134bc8254465424e5a70ef037", str)));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static String a(String str, Map<String, String> map, File file, String str2) {
        HttpURLConnection httpURLConnection;
        DataOutputStream dataOutputStream;
        FileInputStream fileInputStream;
        byte[] bArr;
        if (!file.exists()) {
            return null;
        }
        String name = file.getName();
        try {
            try {
                httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                httpURLConnection.setReadTimeout(15000);
                httpURLConnection.setConnectTimeout(10000);
                httpURLConnection.setDoInput(true);
                httpURLConnection.setDoOutput(true);
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setRequestMethod("POST");
                httpURLConnection.setRequestProperty("Connection", "Keep-Alive");
                httpURLConnection.setRequestProperty("Content-Type", "multipart/form-data;boundary=*****");
                if (map != null) {
                    for (Map.Entry<String, String> entry : map.entrySet()) {
                        httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
                    }
                }
                httpURLConnection.setFixedLengthStreamingMode(name.length() + 77 + ((int) file.length()) + str2.length());
                dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
                dataOutputStream.writeBytes("--*****\r\n");
                dataOutputStream.writeBytes("Content-Disposition: form-data; name=\"" + str2 + "\";filename=\"" + file.getName() + "\"" + HTTP.CRLF);
                dataOutputStream.writeBytes(HTTP.CRLF);
                fileInputStream = new FileInputStream(file);
                try {
                    bArr = new byte[1024];
                } catch (IOException e) {
                    e = e;
                } catch (Throwable th) {
                    th = th;
                }
            } catch (Throwable th2) {
                ab.a((Closeable) null);
                ab.a((Closeable) file);
                throw th2;
            }
        } catch (IOException e2) {
            e = e2;
        } catch (Throwable th3) {
            th = th3;
        }
        while (true) {
            int i = fileInputStream.read(bArr);
            if (i == -1) {
                break;
            }
            dataOutputStream.write(bArr, 0, i);
            dataOutputStream.flush();
            throw new IOException("IOException:" + e.getClass().getSimpleName());
        }
        dataOutputStream.writeBytes(HTTP.CRLF);
        dataOutputStream.writeBytes("--");
        dataOutputStream.writeBytes("*****");
        dataOutputStream.writeBytes("--");
        dataOutputStream.writeBytes(HTTP.CRLF);
        dataOutputStream.flush();
        StringBuffer stringBuffer = new StringBuffer();
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new a(httpURLConnection.getInputStream())));
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    String string = stringBuffer.toString();
                    ab.a(fileInputStream);
                    ab.a(bufferedReader);
                    return string;
                }
                stringBuffer.append(line);
            } catch (IOException e3) {
                e = e3;
            } catch (Throwable th4) {
                th = th4;
                throw new IOException(th.getMessage());
            }
        }
    }

    public static String a(Map<String, String> map) {
        if (map == null || map.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            if (entry.getKey() != null && entry.getValue() != null) {
                try {
                    stringBuffer.append(URLEncoder.encode(entry.getKey(), "UTF-8"));
                    stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    stringBuffer.append(URLEncoder.encode(entry.getValue(), "UTF-8"));
                    stringBuffer.append("&");
                } catch (UnsupportedEncodingException e) {
                    com.xiaomi.channel.commonutils.logger.b.a("Failed to convert from params map to string: " + e);
                    com.xiaomi.channel.commonutils.logger.b.a("map: " + map.toString());
                    return null;
                }
            }
        }
        if (stringBuffer.length() > 0) {
            stringBuffer = stringBuffer.deleteCharAt(stringBuffer.length() - 1);
        }
        return stringBuffer.toString();
    }

    public static HttpURLConnection a(Context context, URL url) {
        return (HttpURLConnection) (("http".equals(url.getProtocol()) && a(context)) ? url.openConnection(new Proxy(Proxy.Type.HTTP, new InetSocketAddress("10.0.0.200", 80))) : url.openConnection());
    }

    private static URL a(String str) {
        return new URL(str);
    }

    public static boolean a(Context context) {
        if (!"CN".equalsIgnoreCase(((TelephonyManager) context.getSystemService("phone")).getSimCountryIso())) {
            return false;
        }
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return false;
            }
            NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return false;
            }
            String extraInfo = activeNetworkInfo.getExtraInfo();
            if (!TextUtils.isEmpty(extraInfo) && extraInfo.length() >= 3 && extraInfo.contains("ctwap")) {
                return true;
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean b(Context context) {
        return a(context) >= 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0027  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean c(Context context) {
        boolean zHasCapability;
        ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
        if (connectivityManager == null) {
            zHasCapability = false;
        } else if (Build.VERSION.SDK_INT >= 23) {
            try {
                NetworkCapabilities networkCapabilities = connectivityManager.getNetworkCapabilities(connectivityManager.getActiveNetwork());
                if (networkCapabilities != null) {
                    zHasCapability = networkCapabilities.hasCapability(16);
                }
            } catch (Exception unused) {
            }
        } else {
            zHasCapability = b(context);
        }
        return zHasCapability && d(context);
    }

    public static boolean d(Context context) {
        NetworkInfo activeNetworkInfo;
        try {
            activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (Exception unused) {
            activeNetworkInfo = null;
        }
        return activeNetworkInfo != null && activeNetworkInfo.isConnected();
    }

    public static boolean e(Context context) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return false;
            }
            NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            return activeNetworkInfo != null && 1 == activeNetworkInfo.getType();
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean f(Context context) {
        NetworkInfo networkInfoA = a(context);
        return networkInfoA != null && networkInfoA.getType() == 0 && 20 == networkInfoA.getSubtype();
    }

    public static boolean g(Context context) {
        NetworkInfo networkInfoA = a(context);
        return networkInfoA != null && networkInfoA.getType() == 0 && 13 == networkInfoA.getSubtype();
    }

    public static boolean h(Context context) {
        NetworkInfo networkInfoA = a(context);
        if (networkInfoA == null || networkInfoA.getType() != 0) {
            return false;
        }
        String subtypeName = networkInfoA.getSubtypeName();
        if (!"TD-SCDMA".equalsIgnoreCase(subtypeName) && !"CDMA2000".equalsIgnoreCase(subtypeName) && !"WCDMA".equalsIgnoreCase(subtypeName)) {
            switch (networkInfoA.getSubtype()) {
            }
            return false;
        }
        return true;
    }

    public static boolean i(Context context) {
        NetworkInfo networkInfoA = a(context);
        if (networkInfoA == null || networkInfoA.getType() != 0) {
            return false;
        }
        int subtype = networkInfoA.getSubtype();
        return subtype == 1 || subtype == 2 || subtype == 4 || subtype == 7 || subtype == 11;
    }
}
