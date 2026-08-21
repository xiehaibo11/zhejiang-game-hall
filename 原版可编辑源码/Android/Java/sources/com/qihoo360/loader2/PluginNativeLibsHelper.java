package com.qihoo360.loader2;

import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginNativeLibsHelper {
    private static final String TAG = "PluginNativeLibsHelper";

    public static boolean install(String str, File file) {
        Log.d(TAG, "install(): Start. apkp=" + str + "; nd=" + file.getAbsolutePath());
        clear(file);
        ZipFile zipFile = null;
        try {
            ZipFile zipFile2 = new ZipFile(str);
            try {
                HashMap map = new HashMap();
                HashMap map2 = new HashMap();
                injectEntriesAndLibsMap(zipFile2, map, map2);
                for (String str2 : map2.keySet()) {
                    String strFindSoPathForAbis = findSoPathForAbis((Set) map2.get(str2), str2);
                    Log.d(TAG, "install(): Ready to extract. so=" + str2 + "; sop=" + strFindSoPathForAbis);
                    if (strFindSoPathForAbis != null) {
                        extractFile(zipFile2, (ZipEntry) map.get(strFindSoPathForAbis), new File(file, str2));
                    }
                }
                CloseableUtils.closeQuietly(zipFile2);
                return true;
            } catch (Throwable th) {
                th = th;
                zipFile = zipFile2;
                try {
                    if (BuildConfig.DEBUG) {
                        th.printStackTrace();
                    }
                    clear(file);
                    return false;
                } finally {
                    CloseableUtils.closeQuietly(zipFile);
                }
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static void clear(File file) {
        if (file.exists()) {
            try {
                FileUtils.forceDelete(file);
            } catch (IOException e) {
                e.printStackTrace();
            } catch (IllegalArgumentException e2) {
                e2.printStackTrace();
            }
        }
    }

    private static void injectEntriesAndLibsMap(ZipFile zipFile, Map<String, ZipEntry> map, Map<String, Set<String>> map2) {
        Enumeration<? extends ZipEntry> enumerationEntries = zipFile.entries();
        while (enumerationEntries.hasMoreElements()) {
            ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
            String name = zipEntryNextElement.getName();
            if (!name.contains("../") && name.startsWith("lib/") && !zipEntryNextElement.isDirectory()) {
                map.put(name, zipEntryNextElement);
                String name2 = new File(name).getName();
                Set<String> treeSet = map2.get(name2);
                if (treeSet == null) {
                    treeSet = new TreeSet<>();
                    map2.put(name2, treeSet);
                }
                treeSet.add(name);
            }
        }
    }

    private static void extractFile(ZipFile zipFile, ZipEntry zipEntry, File file) throws Throwable {
        InputStream inputStream;
        try {
            inputStream = zipFile.getInputStream(zipEntry);
            try {
                FileUtils.copyInputStreamToFile(inputStream, file);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "extractFile(): Success! fn=" + file.getName());
                }
                CloseableUtils.closeQuietly(inputStream);
            } catch (Throwable th) {
                th = th;
                CloseableUtils.closeQuietly(inputStream);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            inputStream = null;
        }
    }

    private static String findSoPathForAbis(Set<String> set, String str) {
        String[] strArr;
        if (set == null || set.size() <= 0) {
            return null;
        }
        boolean zIs64Bit = VMRuntimeCompat.is64Bit();
        if (zIs64Bit) {
            strArr = BuildCompat.SUPPORTED_64_BIT_ABIS;
        } else {
            strArr = BuildCompat.SUPPORTED_32_BIT_ABIS;
        }
        String strFindSoPathWithAbiList = findSoPathWithAbiList(set, str, strArr);
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "findSoPathForAbis: Find so path. name=" + str + "; list=" + strFindSoPathWithAbiList + "; Host-is-64bit?=" + zIs64Bit + "; abis=" + Arrays.toString(strArr));
        }
        return strFindSoPathWithAbiList;
    }

    private static String findSoPathWithAbiList(Set<String> set, String str, String[] strArr) {
        Arrays.sort(strArr);
        for (String str2 : set) {
            String strReplace = str2.replaceFirst("lib/", "").replace("/" + str, "");
            if (!TextUtils.isEmpty(strReplace) && Arrays.binarySearch(strArr, strReplace) >= 0) {
                return str2;
            }
        }
        return null;
    }
}
