package com.qihoo360.replugin;

import android.os.Build;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import com.qihoo360.replugin.utils.ReflectUtils;
import dalvik.system.DexClassLoader;
import java.io.File;
import java.io.InputStream;
import java.lang.reflect.Array;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Enumeration;
import java.util.LinkedList;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginDexClassLoader extends DexClassLoader {
    private static final String TAG = "PluginDexClassLoader";
    private static Method sLoadClassMethod;
    private final ClassLoader mHostClassLoader;
    private String mPluginName;

    public PluginDexClassLoader(PluginInfo pluginInfo, String str, String str2, String str3, ClassLoader classLoader) throws Throwable {
        super(str, str2, str3, classLoader);
        this.mPluginName = pluginInfo.getName();
        installMultiDexesBeforeLollipop(pluginInfo, str, classLoader);
        ClassLoader appClassLoader = RePluginInternal.getAppClassLoader();
        this.mHostClassLoader = appClassLoader;
        initMethods(appClassLoader);
    }

    private static void initMethods(ClassLoader classLoader) {
        Class<?> cls = classLoader.getClass();
        if (sLoadClassMethod == null) {
            Method method = ReflectUtils.getMethod(cls, "loadClass", String.class, Boolean.TYPE);
            sLoadClassMethod = method;
            if (method == null) {
                throw new NoSuchMethodError("loadClass");
            }
        }
    }

    @Override // java.lang.ClassLoader
    protected Class<?> loadClass(String str, boolean z) throws ClassNotFoundException {
        try {
            Class<?> clsLoadClass = super.loadClass(str, z);
            if (clsLoadClass != null) {
                if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                    LogDebug.d(TAG, "loadClass: load plugin class, cn=" + str);
                }
                return clsLoadClass;
            }
            e = null;
        } catch (ClassNotFoundException e) {
            e = e;
            if (PluginDexClassLoaderPatch.need2LoadFromHost(str)) {
                try {
                    return loadClassFromHost(str, z);
                } catch (ClassNotFoundException e2) {
                    e = e2;
                    if (LogDebug.LOG) {
                        LogDebug.e(TAG, "loadClass ClassNotFoundException, from HostClassLoader&&PluginClassLoader, cn=" + str + ", pluginName=" + this.mPluginName);
                    }
                }
            } else if (LogDebug.LOG) {
                LogDebug.e(TAG, "loadClass ClassNotFoundException, from PluginClassLoader, cn=" + str + ", pluginName=" + this.mPluginName);
            }
        }
        if (RePlugin.getConfig().isUseHostClassIfNotFound()) {
            try {
                return loadClassFromHost(str, z);
            } catch (ClassNotFoundException e3) {
                e = e3;
            }
        }
        if (e == null) {
            return null;
        }
        throw e;
    }

    private Class<?> loadClassFromHost(String str, boolean z) throws ClassNotFoundException {
        try {
            Class<?> cls = (Class) sLoadClassMethod.invoke(this.mHostClassLoader, str, Boolean.valueOf(z));
            if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                LogDebug.w(TAG, "loadClass: load host class, cn=" + str + ", cz=" + cls);
            }
            return cls;
        } catch (IllegalAccessException e) {
            throw new ClassNotFoundException("Calling the loadClass method failed (IllegalAccessException)", e);
        } catch (InvocationTargetException e2) {
            throw new ClassNotFoundException("Calling the loadClass method failed (InvocationTargetException)", e2);
        }
    }

    private void installMultiDexesBeforeLollipop(PluginInfo pluginInfo, String str, ClassLoader classLoader) throws Throwable {
        if (Build.VERSION.SDK_INT >= 21) {
            return;
        }
        try {
            List<File> extraDexFiles = getExtraDexFiles(pluginInfo, str);
            if (extraDexFiles == null || extraDexFiles.size() <= 0) {
                return;
            }
            LinkedList linkedList = new LinkedList();
            Class<?> cls = Class.forName("dalvik.system.BaseDexClassLoader");
            Object field = ReflectUtils.readField(cls, this, "pathList");
            linkedList.add((Object[]) ReflectUtils.readField(field.getClass(), field, "dexElements"));
            String absolutePath = pluginInfo.getExtraOdexDir().getAbsolutePath();
            for (File file : extraDexFiles) {
                if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                    LogDebug.d(TAG, "dex file:" + file.getName());
                }
                Object field2 = ReflectUtils.readField(cls, new DexClassLoader(file.getAbsolutePath(), absolutePath, absolutePath, classLoader), "pathList");
                linkedList.add((Object[]) ReflectUtils.readField(field2.getClass(), field2, "dexElements"));
            }
            ReflectUtils.writeField(field.getClass(), field, "dexElements", combineArray(linkedList));
            FileUtils.forceDelete(pluginInfo.getExtraDexDir());
            if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                LogDebug.d(TAG, "dexElements length:" + Array.getLength(ReflectUtils.readField(field.getClass(), field, "dexElements")));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Object combineArray(List<Object[]> list) {
        Object[] objArr = null;
        int length = 0;
        for (Object[] objArr2 : list) {
            if (objArr == null) {
                objArr = objArr2;
            }
            length += objArr2.length;
        }
        Object[] objArr3 = (Object[]) Array.newInstance(objArr.getClass().getComponentType(), length);
        int length2 = 0;
        for (Object[] objArr4 : list) {
            System.arraycopy(objArr4, 0, objArr3, length2, objArr4.length);
            length2 += objArr4.length;
        }
        return objArr3;
    }

    private List<File> getExtraDexFiles(PluginInfo pluginInfo, String str) throws Throwable {
        ZipFile zipFile;
        List<File> listTraverseExtraDex;
        ZipFile zipFile2 = null;
        if (pluginInfo != null) {
            try {
                zipFile = new ZipFile(str);
                try {
                    try {
                        listTraverseExtraDex = traverseExtraDex(pluginInfo, zipFile);
                        zipFile2 = zipFile;
                    } catch (Exception e) {
                        e = e;
                        e.printStackTrace();
                        CloseableUtils.closeQuietly(zipFile);
                        return null;
                    }
                } catch (Throwable th) {
                    th = th;
                    zipFile2 = zipFile;
                    CloseableUtils.closeQuietly(zipFile2);
                    throw th;
                }
            } catch (Exception e2) {
                e = e2;
                zipFile = null;
            } catch (Throwable th2) {
                th = th2;
                CloseableUtils.closeQuietly(zipFile2);
                throw th;
            }
        } else {
            listTraverseExtraDex = null;
        }
        CloseableUtils.closeQuietly(zipFile2);
        return listTraverseExtraDex;
    }

    private static List<File> traverseExtraDex(PluginInfo pluginInfo, ZipFile zipFile) throws Throwable {
        LinkedList linkedList = new LinkedList();
        Enumeration<? extends ZipEntry> enumerationEntries = zipFile.entries();
        String absolutePath = null;
        while (enumerationEntries.hasMoreElements()) {
            ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
            String name = zipEntryNextElement.getName();
            if (!name.contains("../")) {
                try {
                    if (name.contains(".dex") && !name.equals("classes.dex")) {
                        if (absolutePath == null) {
                            absolutePath = pluginInfo.getExtraDexDir().getAbsolutePath();
                        }
                        File file = new File(absolutePath, name);
                        extractFile(zipFile, zipEntryNextElement, file);
                        linkedList.add(file);
                        if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                            LogDebug.d(TAG, "dex path:" + file.getAbsolutePath());
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return linkedList;
    }

    private static void extractFile(ZipFile zipFile, ZipEntry zipEntry, File file) throws Throwable {
        InputStream inputStream;
        try {
            inputStream = zipFile.getInputStream(zipEntry);
            try {
                FileUtils.copyInputStreamToFile(inputStream, file);
                if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                    LogDebug.d(TAG, "extractFile(): Success! fn=" + file.getName());
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
}
