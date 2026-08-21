package com.sigmob.sdk.base.common;

import android.app.DownloadManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.MimeTypeMap;
import android.widget.Toast;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.SigmobFileProvider;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.common.c.m;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;

public class n {
    private static Map<String, String> a = new Hashtable();
    private static Set<a> b = new CopyOnWriteArraySet();

    private static class a {
        String a;
        String b;
        long c;

        public a(String str, String str2, long j) {
            this.a = str;
            this.b = str2;
            this.c = j;
        }

        public String a() {
            return this.a;
        }

        public String b() {
            return this.b;
        }

        public long c() {
            return this.c;
        }
    }

    private static long a(String str, String str2) {
        if (str != null) {
            try {
                if (!str.isEmpty()) {
                    String strTrim = str.trim();
                    if (!strTrim.startsWith("http")) {
                        strTrim = "http://" + strTrim;
                    }
                    DownloadManager.Request request = new DownloadManager.Request(Uri.parse(strTrim));
                    File file = new File(str2);
                    request.setTitle(file.getName());
                    request.setAllowedNetworkTypes(3);
                    request.setAllowedOverRoaming(true);
                    request.setVisibleInDownloadsUi(true);
                    request.setNotificationVisibility(1);
                    File parentFile = file.getParentFile();
                    if (parentFile.exists()) {
                        if (!parentFile.isDirectory()) {
                            parentFile.delete();
                            if (!parentFile.mkdirs()) {
                                return -1L;
                            }
                        }
                    } else if (!parentFile.mkdirs()) {
                        return -1L;
                    }
                    request.addRequestHeader("User-Agent", Networking.getUserAgent());
                    request.setDestinationUri(Uri.fromFile(file));
                    return ((DownloadManager) com.sigmob.sdk.b.b().getSystemService("download")).enqueue(request);
                }
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
        return -1L;
    }

    public static String a(File file) {
        String name = file.getName();
        return MimeTypeMap.getSingleton().getMimeTypeFromExtension(name.substring(name.lastIndexOf(".") + 1, name.length()).toLowerCase());
    }

    private static String a(List<String> list, String str) {
        String strSubstring;
        StringBuilder sb;
        if (!list.contains(str)) {
            return str;
        }
        Integer numValueOf = Integer.valueOf(str.lastIndexOf("."));
        String strSubstring2 = "";
        if (numValueOf.intValue() != -1) {
            strSubstring2 = str.substring(0, numValueOf.intValue());
            strSubstring = str.substring(numValueOf.intValue());
        } else {
            strSubstring = "";
        }
        Integer numValueOf2 = Integer.valueOf(strSubstring2.lastIndexOf("("));
        if (numValueOf2.intValue() == -1) {
            sb = new StringBuilder();
        } else {
            Integer numValueOf3 = Integer.valueOf(strSubstring2.indexOf(")", numValueOf2.intValue()));
            if (numValueOf3.intValue() != -1 && numValueOf3.intValue() >= strSubstring2.length() - 1) {
                try {
                    return a(list, strSubstring2.substring(0, numValueOf2.intValue()) + "(" + Integer.valueOf(Integer.parseInt(strSubstring2.substring(numValueOf2.intValue() + 1, numValueOf3.intValue())) + 1) + ")" + strSubstring);
                } catch (Throwable unused) {
                    sb = new StringBuilder();
                }
            } else {
                sb = new StringBuilder();
            }
        }
        sb.append(strSubstring2);
        sb.append("(1)");
        sb.append(strSubstring);
        return a(list, sb.toString());
    }

    public static HashMap<String, Object> a(DownloadManager downloadManager) {
        Cursor cursorQuery;
        try {
            DownloadManager.Query query = new DownloadManager.Query();
            query.setFilterByStatus(3);
            cursorQuery = downloadManager.query(query);
            try {
                if (!cursorQuery.moveToFirst()) {
                    cursorQuery.close();
                    return null;
                }
                HashMap<String, Object> map = new HashMap<>();
                String string = cursorQuery.getString(cursorQuery.getColumnIndex("title"));
                Long lValueOf = Long.valueOf(cursorQuery.getLong(cursorQuery.getColumnIndex("_id")));
                if (!TextUtils.isEmpty(string)) {
                    map.put(string, lValueOf);
                }
                cursorQuery.moveToNext();
                cursorQuery.close();
                return map;
            } catch (Throwable th) {
                th = th;
                try {
                    SigmobLog.e(th.getMessage());
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                } finally {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
    }

    public static Map<String, Object> a(DownloadManager downloadManager, long j) {
        Cursor cursorQuery;
        try {
            DownloadManager.Query query = new DownloadManager.Query();
            query.setFilterById(j);
            Uri uriForDownloadedFile = downloadManager.getUriForDownloadedFile(j);
            cursorQuery = downloadManager.query(query);
            try {
                if (!cursorQuery.moveToFirst()) {
                    cursorQuery.close();
                    return null;
                }
                int i = cursorQuery.getInt(cursorQuery.getColumnIndex("status"));
                int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex(com.tkay.expressad.foundation.d.r.ac));
                String string = cursorQuery.getString(cursorQuery.getColumnIndex("local_uri"));
                HashMap map = new HashMap();
                map.put("fileName", string);
                map.put("status", Integer.valueOf(i));
                map.put("uri", uriForDownloadedFile);
                map.put(com.tkay.expressad.foundation.d.r.ac, Integer.valueOf(i2));
                cursorQuery.close();
                return map;
            } catch (Throwable th) {
                th = th;
                try {
                    SigmobLog.e(th.getMessage());
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                } finally {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
            cursorQuery = null;
        }
    }

    public static void a(Context context, String str, BaseAdUnit baseAdUnit) {
        File file = new File(str);
        SigmobLog.i("installAPK:" + file.getAbsolutePath() + Constants.COLON_SEPARATOR + file.exists());
        Intent intent = new Intent();
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.setAction("android.intent.action.VIEW");
        try {
            Toast.makeText(context, "开始安装", 1).show();
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
        if (Build.VERSION.SDK_INT < 24 || context.getApplicationInfo().targetSdkVersion < 24) {
            intent.setDataAndType(Uri.fromFile(file), a(file));
        } else {
            try {
                Uri uriForFile = SigmobFileProvider.getUriForFile(com.sigmob.sdk.b.b(), com.sigmob.sdk.b.b().getPackageName() + ".sigprovider", file);
                if (uriForFile != null) {
                    intent.addFlags(1);
                    intent.setDataAndType(uriForFile, AdBaseConstants.MIME_APK);
                }
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }
        context.startActivity(intent);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.G);
        HashMap map = new HashMap();
        map.put("result", "1");
        BaseBroadcastReceiver.a(context, baseAdUnit.getUuid(), map, IntentActions.ACTION_INTERSTITIAL_INSTALL_START);
        PackageInfo packageInfoWithUri = ClientMetadata.getPackageInfoWithUri(context, str);
        if (packageInfoWithUri != null) {
            FileUtil.writeToCache(baseAdUnit, new File(com.sigmob.sdk.base.utils.b.f(), packageInfoWithUri.packageName + com.tkay.china.common.a.a.f).getAbsolutePath());
        }
        if (baseAdUnit.isRecord()) {
            z.a(baseAdUnit, PointCategory.APP_INSTALL_START, packageInfoWithUri, "1");
        }
    }

    public static void a(final String str, BaseAdUnit baseAdUnit) {
        Context contextB = com.sigmob.sdk.b.b();
        try {
            SigmobLog.i("download apk:" + str);
            f.b(baseAdUnit);
            String strA = o.a(str);
            if (TextUtils.isEmpty(strA) && !TextUtils.isEmpty(baseAdUnit.getProductId())) {
                strA = baseAdUnit.getProductId() + com.tkay.china.common.a.a.g;
            }
            a(strA, str, baseAdUnit);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            if (baseAdUnit.isRecord()) {
                z.a(PointCategory.DOWNLOAD_START, "0", baseAdUnit, new z.a() {
                    @Override
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmob) {
                            ((PointEntitySigmob) obj).setFinal_url(str);
                        }
                    }
                });
                z.a(PointCategory.DOWNLOAD_START, 0, th.getMessage(), baseAdUnit, new z.a() {
                    @Override
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmobError) {
                            ((PointEntitySigmobError) obj).setFinal_url(str);
                        }
                    }
                });
            }
            try {
                Toast.makeText(contextB, "下载失败", 1).show();
            } catch (Throwable th2) {
                SigmobLog.e(th2.getMessage());
            }
        }
    }

    private static void a(String str, final String str2, BaseAdUnit baseAdUnit) {
        HashMap map;
        String uuid;
        String str3;
        Context contextB = com.sigmob.sdk.b.b();
        try {
            String str4 = TextUtils.isEmpty(str) ? Md5Util.md5(baseAdUnit.getLanding_page()) + com.tkay.china.common.a.a.g : str;
            final File file = new File(com.sigmob.sdk.base.utils.b.a(contextB), str4);
            Long lC = c(-1L, file.getAbsolutePath());
            if (lC != null && lC.longValue() > 0) {
                try {
                    Toast.makeText(contextB, str4 + "当前正在努力下载，请稍等", 1).show();
                    baseAdUnit.setDownloadId(lC.longValue());
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            HashMap<String, Object> mapA = a((DownloadManager) contextB.getSystemService("download"));
            if (mapA != null) {
                for (String str5 : mapA.keySet()) {
                    if (!TextUtils.isEmpty(str5) && str5.equals(str4)) {
                        try {
                            Toast.makeText(contextB, str4 + "当前正在努力下载，请稍等", 1).show();
                        } catch (Throwable unused2) {
                        }
                        try {
                            Object obj = mapA.get(str5);
                            if (obj instanceof Long) {
                                baseAdUnit.setDownloadId(((Long) obj).longValue());
                                HashMap map2 = new HashMap();
                                map2.put("result", "1");
                                map2.put("downloadId", obj);
                                BaseBroadcastReceiver.a(contextB, baseAdUnit.getUuid(), map2, IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_START);
                                return;
                            }
                            return;
                        } catch (Throwable unused3) {
                            return;
                        }
                    }
                }
            }
            boolean zContainsKey = a.containsKey(baseAdUnit.getUuid());
            if (file.exists() && !zContainsKey && !a(contextB, file.getAbsolutePath())) {
                SigmobLog.i("cacheFile deleteFile:" + FileUtil.deleteFile(file.getAbsolutePath()));
            }
            SigmobLog.i(str4 + " exists:" + file.exists() + " containsKey:" + zContainsKey);
            if (file.exists()) {
                if (zContainsKey) {
                    a(contextB, file.getAbsolutePath(), baseAdUnit);
                    return;
                }
                long jLastModified = file.lastModified();
                if (com.sigmob.sdk.base.i.a().M() == 0) {
                    str3 = "default deleteFile:" + FileUtil.deleteFile(file.getAbsolutePath());
                } else {
                    if (System.currentTimeMillis() - jLastModified <= r0 * 1000) {
                        a(contextB, file.getAbsolutePath(), baseAdUnit);
                        return;
                    }
                    str3 = "timeOut deleteFile:" + FileUtil.deleteFile(file.getAbsolutePath());
                }
                SigmobLog.i(str3);
            }
            try {
                Toast.makeText(contextB, "下载开始", 1).show();
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
            a.put(baseAdUnit.getUuid(), str4);
            long jA = a(str2, file.getAbsolutePath());
            if (jA != -1) {
                a(jA, file.getAbsolutePath());
                File file2 = new File(com.sigmob.sdk.base.utils.b.f(), jA + com.tkay.china.common.a.a.f);
                baseAdUnit.setDownloadId(jA);
                FileUtil.writeToCache(baseAdUnit, file2.getAbsolutePath());
                if (baseAdUnit.isRecord()) {
                    z.a(PointCategory.DOWNLOAD_START, "1", baseAdUnit, new z.a() {
                        @Override
                        public void a(Object obj2) {
                            if (obj2 instanceof PointEntitySigmob) {
                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj2;
                                pointEntitySigmob.setFinal_url(str2);
                                HashMap map3 = new HashMap();
                                map3.put("apkfile", file.getAbsolutePath());
                                map3.put("apkurl", str2);
                                pointEntitySigmob.setOptions(map3);
                            }
                        }
                    });
                }
                map = new HashMap();
                map.put("result", "1");
                map.put("downloadId", Long.valueOf(jA));
                uuid = baseAdUnit.getUuid();
            } else {
                if (baseAdUnit.isRecord()) {
                    z.a(PointCategory.DOWNLOAD_START, "0", baseAdUnit, new z.a() {
                        @Override
                        public void a(Object obj2) {
                            if (obj2 instanceof PointEntitySigmob) {
                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj2;
                                pointEntitySigmob.setFinal_url(str2);
                                HashMap map3 = new HashMap();
                                map3.put("apkfile", file.getAbsolutePath());
                                map3.put("apkurl", str2);
                                pointEntitySigmob.setOptions(map3);
                            }
                        }
                    });
                }
                if (!ClientMetadata.isPermissionGranted(contextB, "android.permission.WRITE_EXTERNAL_STORAGE")) {
                    Toast.makeText(contextB, "请先给予应用 WRITE_EXTERNAL_STORAGE 权限", 1).show();
                    if (baseAdUnit.isRecord()) {
                        z.a("download_failed", 1, " No permission Manifest.permission.WRITE_EXTERNAL_STORAGE ", baseAdUnit);
                    }
                } else if (baseAdUnit.isRecord()) {
                    z.a("download_failed", 2, "download Directory not exist", baseAdUnit);
                }
                map = new HashMap();
                map.put("result", "0");
                map.put("downloadId", -1);
                uuid = baseAdUnit.getUuid();
            }
            BaseBroadcastReceiver.a(contextB, uuid, map, IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_START);
            if (baseAdUnit.isRecord()) {
                com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.E);
            }
        } catch (Throwable th2) {
            SigmobLog.e(th2.getMessage());
            if (baseAdUnit.isRecord()) {
                z.a(PointCategory.DOWNLOAD_START, "0", baseAdUnit, new z.a() {
                    @Override
                    public void a(Object obj2) {
                        if (obj2 instanceof PointEntitySigmob) {
                            ((PointEntitySigmob) obj2).setFinal_url(str2);
                        }
                    }
                });
                z.a(PointCategory.DOWNLOAD_START, 0, th2.getMessage(), baseAdUnit, new z.a() {
                    @Override
                    public void a(Object obj2) {
                        if (obj2 instanceof PointEntitySigmobError) {
                            ((PointEntitySigmobError) obj2).setFinal_url(str2);
                        }
                    }
                });
            }
            HashMap map3 = new HashMap();
            map3.put("result", "0");
            map3.put("downloadId", -1);
            BaseBroadcastReceiver.a(contextB, baseAdUnit.getUuid(), map3, IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_START);
            try {
                Toast.makeText(contextB, "请先给予应用权限", 1).show();
            } catch (Throwable unused4) {
            }
        }
    }

    public static boolean a(long j, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        b.add(new a(str, null, j));
        return true;
    }

    public static boolean a(Context context, String str) {
        try {
            return context.getPackageManager().getPackageArchiveInfo(str, 1) != null;
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        DownloadManager downloadManager = (DownloadManager) com.sigmob.sdk.b.b().getSystemService("download");
        Cursor cursor = null;
        try {
            DownloadManager.Query query = new DownloadManager.Query();
            query.setFilterByStatus(3);
            Cursor cursorQuery = downloadManager.query(query);
            if (!cursorQuery.moveToFirst()) {
                cursorQuery.close();
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return false;
            }
            new ArrayList();
            do {
                String string = cursorQuery.getString(cursorQuery.getColumnIndex("uri"));
                if (!TextUtils.isEmpty(string) && str.equalsIgnoreCase(string)) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return true;
                }
            } while (cursorQuery.moveToNext());
            cursorQuery.close();
            return false;
        } catch (Throwable th) {
            try {
                SigmobLog.e(th.getMessage());
                return false;
            } finally {
                if (0 != 0) {
                    cursor.close();
                }
            }
        }
    }

    public static long[] a(Context context, Long l) {
        long[] jArr = {-1, -1, 0};
        if (l == null || l.longValue() < 0) {
            return jArr;
        }
        Cursor cursorQuery = null;
        try {
            cursorQuery = ((DownloadManager) context.getSystemService("download")).query(new DownloadManager.Query().setFilterById(l.longValue()));
            if (cursorQuery != null && cursorQuery.moveToFirst()) {
                jArr[0] = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("bytes_so_far"));
                jArr[1] = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow(m.a.f));
                jArr[2] = cursorQuery.getInt(cursorQuery.getColumnIndex("status"));
            }
            return jArr;
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
    }

    public static void b(long j, String str) {
        for (a aVar : b) {
            if (aVar.c == j || aVar.a.equalsIgnoreCase(str)) {
                b.remove(aVar);
                return;
            }
        }
    }

    public static Long c(long j, String str) {
        for (a aVar : b) {
            if (aVar.c == j || aVar.a.equalsIgnoreCase(str)) {
                return Long.valueOf(aVar.c);
            }
        }
        return null;
    }
}
