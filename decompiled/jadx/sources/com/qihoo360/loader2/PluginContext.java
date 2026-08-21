package com.qihoo360.loader2;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.View;
import com.qihoo360.i.Factory2;
import com.qihoo360.loader.utils2.FilePermissionUtils;
import com.qihoo360.replugin.ContextInjector;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.component.service.PluginServiceClient;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import cz.msebera.android.httpclient.HttpStatus;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginContext extends ContextThemeWrapper {
    private File mCacheDir;
    private ContextInjector mContextInjector;
    private File mDatabasesDir;
    LayoutInflater.Factory mFactory;
    private File mFilesDir;
    private LayoutInflater mInflater;
    private final Loader mLoader;
    private final ClassLoader mNewClassLoader;
    private final Resources mNewResources;
    private final String mPlugin;
    private final Object mSync;

    public PluginContext(Context context, int i, ClassLoader classLoader, Resources resources, String str, Loader loader) {
        super(context, i);
        this.mSync = new Object();
        this.mFactory = new LayoutInflater.Factory() { // from class: com.qihoo360.loader2.PluginContext.1
            @Override // android.view.LayoutInflater.Factory
            public View onCreateView(String str2, Context context2, AttributeSet attributeSet) {
                return PluginContext.this.handleCreateView(str2, context2, attributeSet);
            }
        };
        this.mNewClassLoader = classLoader;
        this.mNewResources = resources;
        this.mPlugin = str;
        this.mLoader = loader;
        this.mContextInjector = RePlugin.getConfig().getCallbacks().createContextInjector();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public ClassLoader getClassLoader() {
        ClassLoader classLoader = this.mNewClassLoader;
        return classLoader != null ? classLoader : super.getClassLoader();
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public Resources getResources() {
        Resources resources = this.mNewResources;
        return resources != null ? resources : super.getResources();
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public AssetManager getAssets() {
        Resources resources = this.mNewResources;
        if (resources != null) {
            return resources.getAssets();
        }
        return super.getAssets();
    }

    @Override // android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public Object getSystemService(String str) {
        if ("layout_inflater".equals(str)) {
            if (this.mInflater == null) {
                LayoutInflater layoutInflaterCloneInContext = ((LayoutInflater) super.getSystemService(str)).cloneInContext(this);
                this.mInflater = layoutInflaterCloneInContext;
                layoutInflaterCloneInContext.setFactory(this.mFactory);
                this.mInflater = this.mInflater.cloneInContext(this);
            }
            return this.mInflater;
        }
        return super.getSystemService(str);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public SharedPreferences getSharedPreferences(String str, int i) {
        return super.getSharedPreferences("plugin_" + str, i);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public FileInputStream openFileInput(String str) throws FileNotFoundException {
        return new FileInputStream(makeFilename(getFilesDir(), str));
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public FileOutputStream openFileOutput(String str, int i) throws FileNotFoundException {
        boolean z = (32768 & i) != 0;
        File fileMakeFilename = makeFilename(getFilesDir(), str);
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(fileMakeFilename, z);
            setFilePermissionsFromMode(fileMakeFilename.getPath(), i, 0);
            return fileOutputStream;
        } catch (FileNotFoundException unused) {
            File parentFile = fileMakeFilename.getParentFile();
            parentFile.mkdir();
            FilePermissionUtils.setPermissions(parentFile.getPath(), 504, -1, -1);
            FileOutputStream fileOutputStream2 = new FileOutputStream(fileMakeFilename, z);
            setFilePermissionsFromMode(fileMakeFilename.getPath(), i, 0);
            return fileOutputStream2;
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public boolean deleteFile(String str) {
        return makeFilename(getFilesDir(), str).delete();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public File getFilesDir() {
        synchronized (this.mSync) {
            if (this.mFilesDir == null) {
                this.mFilesDir = new File(getDataDirFile(), "files");
            }
            if (!this.mFilesDir.exists()) {
                if (!this.mFilesDir.mkdirs()) {
                    if (this.mFilesDir.exists()) {
                        return this.mFilesDir;
                    }
                    LogRelease.e(LogDebug.PLUGIN_TAG, "Unable to create files directory " + this.mFilesDir.getPath());
                    return null;
                }
                FilePermissionUtils.setPermissions(this.mFilesDir.getPath(), HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
            }
            return this.mFilesDir;
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public File getCacheDir() {
        synchronized (this.mSync) {
            if (this.mCacheDir == null) {
                this.mCacheDir = new File(getDataDirFile(), "cache");
            }
            if (!this.mCacheDir.exists()) {
                if (!this.mCacheDir.mkdirs()) {
                    if (this.mCacheDir.exists()) {
                        return this.mCacheDir;
                    }
                    LogRelease.e(LogDebug.PLUGIN_TAG, "Unable to create cache directory " + this.mCacheDir.getAbsolutePath());
                    return null;
                }
                FilePermissionUtils.setPermissions(this.mCacheDir.getPath(), HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
            }
            return this.mCacheDir;
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public File getFileStreamPath(String str) {
        return makeFilename(getFilesDir(), str);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public File getDir(String str, int i) {
        File fileMakeFilename = makeFilename(getDataDirFile(), "app_" + str);
        if (!fileMakeFilename.exists()) {
            fileMakeFilename.mkdir();
            setFilePermissionsFromMode(fileMakeFilename.getPath(), i, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED);
        }
        return fileMakeFilename;
    }

    private File getDatabasesDir() {
        File file;
        synchronized (this.mSync) {
            if (this.mDatabasesDir == null) {
                this.mDatabasesDir = new File(getDataDirFile(), "databases");
            }
            if (this.mDatabasesDir.getPath().equals("databases")) {
                this.mDatabasesDir = new File("/data/system");
            }
            file = this.mDatabasesDir;
        }
        return file;
    }

    private File validateFilePath(String str, boolean z) {
        File databasesDir;
        File fileMakeFilename;
        if (str.charAt(0) == File.separatorChar) {
            databasesDir = new File(str.substring(0, str.lastIndexOf(File.separatorChar)));
            fileMakeFilename = new File(databasesDir, str.substring(str.lastIndexOf(File.separatorChar)));
        } else {
            databasesDir = getDatabasesDir();
            fileMakeFilename = makeFilename(databasesDir, str);
        }
        if (z && !databasesDir.isDirectory() && databasesDir.mkdir()) {
            FilePermissionUtils.setPermissions(databasesDir.getPath(), HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
        }
        return fileMakeFilename;
    }

    private final File makeFilename(File file, String str) {
        if (str.indexOf(File.separatorChar) < 0) {
            return new File(file, str);
        }
        throw new IllegalArgumentException("File " + str + " contains a path separator");
    }

    private final void setFilePermissionsFromMode(String str, int i, int i2) {
        int i3 = i2 | 432;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "File " + str + ": mode=0x" + Integer.toHexString(i) + ", perms=0x" + Integer.toHexString(i3));
        }
        FilePermissionUtils.setPermissions(str, i3, -1, -1);
    }

    private final File getDataDirFile() {
        File file = new File(getBaseContext().getFilesDir(), Constant.LOCAL_PLUGIN_DATA_SUB_DIR);
        if (!file.exists()) {
            if (!file.mkdir()) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "can't create dir: " + file.getAbsolutePath());
                return null;
            }
            setFilePermissionsFromMode(file.getPath(), 0, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED);
        }
        File fileMakeFilename = makeFilename(file, this.mPlugin);
        if (!fileMakeFilename.exists()) {
            if (!fileMakeFilename.mkdir()) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "can't create dir: " + fileMakeFilename.getAbsolutePath());
                return null;
            }
            setFilePermissionsFromMode(fileMakeFilename.getPath(), 0, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED);
        }
        return fileMakeFilename;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0065 A[PHI: r0
      0x0065: PHI (r0v15 java.lang.Class<?>) = 
      (r0v14 java.lang.Class<?>)
      (r0v20 java.lang.Class<?>)
      (r0v20 java.lang.Class<?>)
      (r0v20 java.lang.Class<?>)
      (r0v20 java.lang.Class<?>)
     binds: [B:22:0x0064, B:13:0x0051, B:49:0x0065, B:19:0x005f, B:17:0x0058] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final android.view.View handleCreateView(java.lang.String r11, android.content.Context r12, android.util.AttributeSet r13) {
        /*
            Method dump skipped, instruction units count: 321
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.PluginContext.handleCreateView(java.lang.String, android.content.Context, android.util.AttributeSet):android.view.View");
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public String getPackageName() {
        return super.getPackageName();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public Context getApplicationContext() {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.getApplicationContext();
        }
        return this.mLoader.mPluginObj.mApplicationClient == null ? this : this.mLoader.mPluginObj.mApplicationClient.getObj();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public void startActivity(Intent intent) {
        if (Factory2.startActivity(this, intent)) {
            return;
        }
        ContextInjector contextInjector = this.mContextInjector;
        if (contextInjector != null) {
            contextInjector.startActivityBefore(intent);
        }
        super.startActivity(intent);
        ContextInjector contextInjector2 = this.mContextInjector;
        if (contextInjector2 != null) {
            contextInjector2.startActivityAfter(intent);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public void startActivity(Intent intent, Bundle bundle) {
        if (Factory2.startActivity(this, intent)) {
            return;
        }
        ContextInjector contextInjector = this.mContextInjector;
        if (contextInjector != null) {
            contextInjector.startActivityBefore(intent, bundle);
        }
        super.startActivity(intent, bundle);
        ContextInjector contextInjector2 = this.mContextInjector;
        if (contextInjector2 != null) {
            contextInjector2.startActivityAfter(intent, bundle);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public ComponentName startService(Intent intent) {
        ContextInjector contextInjector = this.mContextInjector;
        if (contextInjector != null) {
            contextInjector.startServiceBefore(intent);
        }
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.startService(intent);
        }
        try {
            try {
                ComponentName componentNameStartService = PluginServiceClient.startService(this, intent, true);
                ContextInjector contextInjector2 = this.mContextInjector;
                if (contextInjector2 != null) {
                    contextInjector2.startServiceAfter(intent);
                }
                return componentNameStartService;
            } catch (PluginClientHelper.ShouldCallSystem unused) {
                ComponentName componentNameStartService2 = super.startService(intent);
                ContextInjector contextInjector3 = this.mContextInjector;
                if (contextInjector3 != null) {
                    contextInjector3.startServiceAfter(intent);
                }
                return componentNameStartService2;
            }
        } catch (Throwable th) {
            ContextInjector contextInjector4 = this.mContextInjector;
            if (contextInjector4 != null) {
                contextInjector4.startServiceAfter(intent);
            }
            throw th;
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public boolean stopService(Intent intent) {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.stopService(intent);
        }
        try {
            return PluginServiceClient.stopService(this, intent, true);
        } catch (PluginClientHelper.ShouldCallSystem unused) {
            return super.stopService(intent);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public boolean bindService(Intent intent, ServiceConnection serviceConnection, int i) {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.bindService(intent, serviceConnection, i);
        }
        try {
            return PluginServiceClient.bindService(this, intent, serviceConnection, i, true);
        } catch (PluginClientHelper.ShouldCallSystem unused) {
            return super.bindService(intent, serviceConnection, i);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public void unbindService(ServiceConnection serviceConnection) {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            super.unbindService(serviceConnection);
        } else {
            try {
                super.unbindService(serviceConnection);
            } catch (Throwable unused) {
            }
            PluginServiceClient.unbindService(this, serviceConnection, false);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public String getPackageCodePath() {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.getPackageCodePath();
        }
        return this.mLoader.mPath;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public ApplicationInfo getApplicationInfo() {
        if (this.mLoader.mPluginObj.mInfo.getFrameworkVersion() <= 2) {
            return super.getApplicationInfo();
        }
        return this.mLoader.mComponents.getApplication();
    }
}
