package com.kwad.framework.filedownloader.f;

import android.app.ActivityManager;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Environment;
import android.text.TextUtils;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException;
import com.kwad.sdk.utils.ap;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.File;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    private static int aeR = 65536;
    private static long aeS = 2000;
    private static String aeT;
    private static Boolean aeU;
    private static Boolean aeV;
    private static final Pattern aeW = Pattern.compile("attachment;\\s*filename\\s*=\\s*\"([^\"]*)\"");

    public static void O(long j) throws IllegalAccessException {
        if (!aq(c.vM())) {
            throw new IllegalAccessException("This value is used in the :filedownloader process, so set this value in your process is without effect. You can add 'process.non-separate=true' in 'filedownloader.properties' to share the main process to FileDownloadService. Or you can configure this value in 'filedownloader.properties' by 'download.min-progress-time'.");
        }
        aeS = j;
    }

    public static String a(int i, com.kwad.framework.filedownloader.a.b bVar) {
        if (bVar == null) {
            throw new RuntimeException("connection is null when findEtag");
        }
        String strAY = bVar.aY(DownloadUtils.ETAG);
        if (d.aeI) {
            d.c(f.class, "etag find %s for task(%d)", strAY, Integer.valueOf(i));
        }
        return strAY;
    }

    public static String a(com.kwad.framework.filedownloader.a.b bVar, String str) {
        String strBq = bq(bVar.aY("Content-Disposition"));
        if (TextUtils.isEmpty(strBq)) {
            strBq = bn(str);
        }
        return strBq.replaceAll("\\/", "_");
    }

    public static String a(String str, boolean z, String str2) {
        if (str == null) {
            return null;
        }
        if (!z) {
            return str;
        }
        if (str2 == null) {
            return null;
        }
        return q(str, str2);
    }

    private static boolean a(int i, com.kwad.framework.filedownloader.d.c cVar, Boolean bool) {
        if (cVar == null) {
            if (d.aeI) {
                d.c(f.class, "can't continue %d model == null", Integer.valueOf(i));
            }
            return false;
        }
        if (cVar.uE() != null) {
            return a(i, cVar, cVar.uE(), null);
        }
        if (d.aeI) {
            d.c(f.class, "can't continue %d temp path == null", Integer.valueOf(i));
        }
        return false;
    }

    public static boolean a(int i, com.kwad.framework.filedownloader.d.c cVar, String str, Boolean bool) {
        if (str == null) {
            if (!d.aeI) {
                return false;
            }
            d.c(f.class, "can't continue %d path = null", Integer.valueOf(i));
            return false;
        }
        File file = new File(str);
        boolean zExists = file.exists();
        boolean zIsDirectory = file.isDirectory();
        if (!zExists || zIsDirectory) {
            if (!d.aeI) {
                return false;
            }
            d.c(f.class, "can't continue %d file not suit, exists[%B], directory[%B]", Integer.valueOf(i), Boolean.valueOf(zExists), Boolean.valueOf(zIsDirectory));
            return false;
        }
        long length = file.length();
        long jVm = cVar.vm();
        if (cVar.vp() <= 1 && jVm == 0) {
            if (!d.aeI) {
                return false;
            }
            d.c(f.class, "can't continue %d the downloaded-record is zero.", Integer.valueOf(i));
            return false;
        }
        long total = cVar.getTotal();
        if (length < jVm || (total != -1 && (length > total || jVm >= total))) {
            if (!d.aeI) {
                return false;
            }
            d.c(f.class, "can't continue %d dirty data fileLength[%d] sofar[%d] total[%d]", Integer.valueOf(i), Long.valueOf(length), Long.valueOf(jVm), Long.valueOf(total));
            return false;
        }
        if (bool == null || bool.booleanValue() || total != length) {
            return true;
        }
        if (!d.aeI) {
            return false;
        }
        d.c(f.class, "can't continue %d, because of the output stream doesn't support seek, but the task has already pre-allocated, so we only can download it from the very beginning.", Integer.valueOf(i));
        return false;
    }

    public static boolean aq(Context context) {
        boolean zEndsWith;
        Boolean bool = aeU;
        if (bool != null) {
            return bool.booleanValue();
        }
        if (e.vO().aeM) {
            zEndsWith = true;
        } else {
            if (((ActivityManager) context.getSystemService("activity")) == null) {
                d.d(f.class, "fail to get the activity manager!", new Object[0]);
                return false;
            }
            zEndsWith = ap.getProcessName(context).endsWith(":filedownloader");
        }
        Boolean boolValueOf = Boolean.valueOf(zEndsWith);
        aeU = boolValueOf;
        return boolValueOf.booleanValue();
    }

    public static void ar(Context context) {
        File fileAs = as(context);
        try {
            fileAs.getParentFile().mkdirs();
            fileAs.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static File as(Context context) {
        return new File(context.getFilesDir().getAbsolutePath() + File.separator + "filedownloader", ".old_file_converted");
    }

    public static long b(int i, com.kwad.framework.filedownloader.a.b bVar) {
        long jBu = bu(bVar.aY("Content-Length"));
        String strAY = bVar.aY("Transfer-Encoding");
        if (jBu >= 0) {
            return jBu;
        }
        if (!(strAY != null && strAY.equals("chunked"))) {
            if (!e.vO().aeL) {
                throw new FileDownloadGiveUpRetryException("can't know the size of the download file, and its Transfer-Encoding is not Chunked either.\nyou can ignore such exception by add http.lenient=true to the filedownloader.properties");
            }
            if (d.aeI) {
                d.c(f.class, "%d response header is not legal but HTTP lenient is true, so handle as the case of transfer encoding chunk", Integer.valueOf(i));
            }
        }
        return -1L;
    }

    public static String b(String str, Object... objArr) {
        return String.format(Locale.ENGLISH, str, objArr);
    }

    public static boolean b(int i, com.kwad.framework.filedownloader.d.c cVar) {
        return a(i, cVar, (Boolean) null);
    }

    public static void bH(int i) throws IllegalAccessException {
        if (!aq(c.vM())) {
            throw new IllegalAccessException("This value is used in the :filedownloader process, so set this value in your process is without effect. You can add 'process.non-separate=true' in 'filedownloader.properties' to share the main process to FileDownloadService. Or you can configure this value in 'filedownloader.properties' by 'download.min-progress-step'.");
        }
        aeR = i;
    }

    public static String bm(String str) {
        return q(vS(), bn(str));
    }

    private static String bn(String str) {
        return bp(str);
    }

    public static String bo(String str) {
        return b("%s.temp", str);
    }

    public static String bp(String str) {
        try {
            byte[] bArrDigest = MessageDigest.getInstance("MD5").digest(str.getBytes("UTF-8"));
            StringBuilder sb = new StringBuilder(bArrDigest.length * 2);
            for (byte b : bArrDigest) {
                int i = b & UByte.MAX_VALUE;
                if (i < 16) {
                    sb.append("0");
                }
                sb.append(Integer.toHexString(i));
            }
            return sb.toString();
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException("Huh, UTF-8 should be supported?", e);
        } catch (NoSuchAlgorithmException e2) {
            throw new RuntimeException("Huh, MD5 should be supported?", e2);
        }
    }

    public static String bq(String str) {
        if (str == null) {
            return null;
        }
        try {
            Matcher matcher = aeW.matcher(str);
            if (matcher.find()) {
                return matcher.group(1);
            }
        } catch (IllegalStateException unused) {
        }
        return null;
    }

    public static String br(String str) {
        int length = str.length();
        int i = (File.separatorChar == '\\' && length > 2 && str.charAt(1) == ':') ? 2 : 0;
        int iLastIndexOf = str.lastIndexOf(File.separatorChar);
        int i2 = (iLastIndexOf != -1 || i <= 0) ? iLastIndexOf : 2;
        if (i2 == -1 || str.charAt(length - 1) == File.separatorChar) {
            return null;
        }
        return (str.indexOf(File.separatorChar) == i2 && str.charAt(i) == File.separatorChar) ? str.substring(0, i2 + 1) : str.substring(0, i2);
    }

    public static String bs(String str) {
        return "FileDownloader-" + str;
    }

    public static boolean bt(String str) {
        return c.vM().checkCallingOrSelfPermission(str) == 0;
    }

    private static long bu(String str) {
        if (str == null) {
            return -1L;
        }
        try {
            return Long.parseLong(str);
        } catch (NumberFormatException unused) {
            return -1L;
        }
    }

    public static com.kwad.framework.filedownloader.e.a bv(String str) throws IOException {
        if (TextUtils.isEmpty(str)) {
            throw new RuntimeException("found invalid internal destination path, empty");
        }
        File file = new File(str);
        if (file.exists() && file.isDirectory()) {
            file.delete();
            if (!file.createNewFile()) {
                throw new RuntimeException(b("found invalid internal destination path[%s], & path is directory[%B]", str, Boolean.valueOf(file.isDirectory())));
            }
        }
        if (file.exists() || file.createNewFile()) {
            return com.kwad.framework.filedownloader.download.b.up().b(file);
        }
        throw new IOException(b("create new file error  %s", file.getAbsolutePath()));
    }

    private static void bw(String str) {
        if (str != null) {
            File file = new File(str);
            if (file.exists()) {
                file.delete();
            }
        }
    }

    public static void bx(String str) {
        if (str != null) {
            File file = new File(str);
            if (file.exists()) {
                file.delete();
            }
        }
    }

    public static int g(String str, String str2, boolean z) {
        return com.kwad.framework.filedownloader.download.b.up().uq().g(str, str2, z);
    }

    public static boolean g(long j, long j2) {
        return j > ((long) vQ()) && j2 > vR();
    }

    private static String q(String str, String str2) {
        if (str2 == null) {
            throw new IllegalStateException("can't generate real path, the file name is null");
        }
        if (str != null) {
            return b("%s%s%s", str, File.separator, str2);
        }
        throw new IllegalStateException("can't generate real path, the directory is null");
    }

    public static int r(String str, String str2) {
        return com.kwad.framework.filedownloader.download.b.up().uq().g(str, str2, false);
    }

    public static void s(String str, String str2) {
        bw(str2);
        bx(str);
    }

    private static int vQ() {
        return aeR;
    }

    private static long vR() {
        return aeS;
    }

    private static String vS() {
        if (TextUtils.isEmpty(aeT)) {
            return (c.vM().getExternalCacheDir() == null ? Environment.getDownloadCacheDirectory() : c.vM().getExternalCacheDir()).getAbsolutePath();
        }
        return aeT;
    }

    public static boolean vT() {
        ConnectivityManager connectivityManager = (ConnectivityManager) c.vM().getSystemService("connectivity");
        if (connectivityManager == null) {
            d.d(f.class, "failed to get connectivity manager!", new Object[0]);
            return true;
        }
        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        return activeNetworkInfo == null || activeNetworkInfo.getType() != 1;
    }

    public static String vU() {
        return b("FileDownloader/%s", BuildConfig.VERSION_NAME);
    }
}
