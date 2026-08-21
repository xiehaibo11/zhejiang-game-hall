package com.ss.android.downloadlib.addownload.df;

import android.content.Context;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.utils.b;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.io.File;
import java.io.FileOutputStream;
import java.util.List;

public class q {
    public static void rg() throws Throwable {
        List<DownloadInfo> listRg = com.ss.android.socialbase.appdownloader.pt.bm().rg(bm.getContext());
        if (listRg == null || listRg.size() <= 0) {
            return;
        }
        for (int i = 0; i < listRg.size(); i++) {
            DownloadInfo downloadInfo = listRg.get(i);
            File file = new File(downloadInfo.getTempPath(), downloadInfo.getTempName());
            long jLastModified = file.lastModified();
            long jOptInt = ((long) DownloadSetting.obtain(downloadInfo.getId()).optInt("download_file_expire_hours", 0)) * 3600000;
            if (jOptInt <= 0) {
                jOptInt = 604800000;
            }
            if (file.isFile() && file.exists() && System.currentTimeMillis() - jLastModified >= jOptInt) {
                rg(file);
                Downloader.getInstance(bm.getContext()).clearDownloadData(downloadInfo.getId());
            }
        }
    }

    public static void df() throws Throwable {
        List successedDownloadInfosWithMimeType = Downloader.getInstance(bm.getContext()).getSuccessedDownloadInfosWithMimeType(AdBaseConstants.MIME_APK);
        if (successedDownloadInfosWithMimeType == null || successedDownloadInfosWithMimeType.isEmpty()) {
            return;
        }
        for (int i = 0; i < successedDownloadInfosWithMimeType.size(); i++) {
            DownloadInfo downloadInfo = (DownloadInfo) successedDownloadInfosWithMimeType.get(i);
            if (downloadInfo != null) {
                String str = downloadInfo.getSavePath() + File.separator + downloadInfo.getName();
                File file = new File(str);
                if (file.exists()) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - file.lastModified();
                    long jOptInt = ((long) DownloadSetting.obtain(downloadInfo.getId()).optInt("download_complete_file_expire_hours", 0)) * 3600000;
                    if (jOptInt <= 0) {
                        jOptInt = 604800000;
                    }
                    boolean z = true;
                    if (jCurrentTimeMillis < jOptInt && !b.pp(bm.getContext(), str)) {
                        z = false;
                    }
                    if (z) {
                        rg(file);
                    }
                }
            }
        }
    }

    public static void rg(Context context) {
        File externalCacheDir;
        if (context == null || (externalCacheDir = context.getExternalCacheDir()) == null) {
            return;
        }
        try {
            rg(externalCacheDir.getPath());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x0030 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void rg(File file) throws Throwable {
        FileOutputStream fileOutputStream;
        Exception e;
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                fileOutputStream = new FileOutputStream(file);
                try {
                    fileOutputStream.write("1".getBytes());
                    fileOutputStream.close();
                } catch (Exception e2) {
                    e = e2;
                    e.printStackTrace();
                    if (fileOutputStream != null) {
                        try {
                            fileOutputStream.close();
                        } catch (Exception e3) {
                            e3.printStackTrace();
                        }
                    }
                }
            } catch (Throwable th) {
                th = th;
                fileOutputStream2 = fileOutputStream;
                if (fileOutputStream2 != null) {
                    try {
                        fileOutputStream2.close();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
                throw th;
            }
        } catch (Exception e5) {
            fileOutputStream = null;
            e = e5;
        } catch (Throwable th2) {
            th = th2;
            if (fileOutputStream2 != null) {
            }
            throw th;
        }
        file.delete();
    }

    private static void rg(String str) {
        File file = new File(str);
        if (file.exists()) {
            if (file.isFile()) {
                file.delete();
                return;
            }
            String[] list = file.list();
            if (list == null) {
                return;
            }
            for (String str2 : list) {
                if (str2 != null) {
                    String str3 = str.endsWith(File.separator) ? str + str2 : str + File.separator + str2;
                    File file2 = new File(str3);
                    if (file2.isFile()) {
                        file2.delete();
                    }
                    if (file2.isDirectory()) {
                        rg(str3);
                    }
                }
            }
            file.delete();
        }
    }
}
