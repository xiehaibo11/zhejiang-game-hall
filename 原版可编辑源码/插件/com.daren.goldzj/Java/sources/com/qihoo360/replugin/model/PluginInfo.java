package com.qihoo360.replugin.model;

import android.content.Context;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.d;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.lang.reflect.Method;
import java.util.Arrays;
import library.c;
import org.json.JSONException;
import org.json.JSONObject;

public class PluginInfo implements Parcelable, Serializable, Cloneable {
    public static final int ADAPTER_CURRENT_VERSION = 12;
    public static final Parcelable.Creator<PluginInfo> CREATOR = new Parcelable.Creator<PluginInfo>() {
        @Override
        public PluginInfo createFromParcel(Parcel parcel) {
            return new PluginInfo(parcel);
        }

        @Override
        public PluginInfo[] newArray(int i) {
            return new PluginInfo[i];
        }
    };
    public static final int FRAMEWORK_VERSION_UNKNOWN = 0;
    public static final String LOCAL_PLUGIN_DATA_SUB_DIR = "plugins_v3_data";
    public static final int TYPE_BUILTIN = 2;
    public static final int TYPE_EXTRACTED = 11;
    public static final int TYPE_NOT_INSTALL = 10;
    public static final int TYPE_PN_INSTALLED = 1;
    public static final int TYPE_PN_JAR = 3;
    private transient JSONObject a;
    private String b;
    private PluginInfo c;
    private PluginInfo d;
    private PluginInfo e;
    private boolean f;
    private PluginInfo g;

    private static class a {
        private static final byte[] a = new byte[0];
        private static volatile Boolean b;

        public static boolean a() {
            if (b != null) {
                return b.booleanValue();
            }
            synchronized (a) {
                if (b != null) {
                    return b.booleanValue();
                }
                b = Boolean.valueOf(c());
                return b.booleanValue();
            }
        }

        public static String b() {
            return a() ? "arm64" : "arm";
        }

        private static boolean c() {
            Class<?> cls;
            Method declaredMethod;
            Object objInvoke;
            Method declaredMethod2;
            try {
                if (Build.VERSION.SDK_INT < 21 || (cls = Class.forName("dalvik.system.VMRuntime")) == null || (declaredMethod = cls.getDeclaredMethod("getRuntime", new Class[0])) == null || (objInvoke = declaredMethod.invoke(null, new Object[0])) == null || (declaredMethod2 = cls.getDeclaredMethod("is64Bit", new Class[0])) == null) {
                    return false;
                }
                Object objInvoke2 = declaredMethod2.invoke(objInvoke, new Object[0]);
                if (objInvoke2 instanceof Boolean) {
                    return ((Boolean) objInvoke2).booleanValue();
                }
                return false;
            } catch (Throwable unused) {
                return false;
            }
        }
    }

    private PluginInfo(Parcel parcel) {
        JSONObject jSONObject;
        try {
            jSONObject = new JSONObject(parcel.readString());
        } catch (JSONException unused) {
            jSONObject = new JSONObject();
        }
        a(jSONObject);
    }

    private PluginInfo(JSONObject jSONObject) {
        a(jSONObject);
    }

    private File a(File file, String str) {
        File file2 = new File(file, makeInstalledFileName() + str);
        if (!file2.exists()) {
            file2.mkdir();
        }
        return file2;
    }

    private String a() {
        return format(getName(), getLowInterfaceApi(), getHighInterfaceApi(), getVersion());
    }

    private void a(StringBuilder sb) {
        sb.append('<');
        sb.append(getName());
        sb.append(':');
        sb.append(getVersion());
        sb.append('(');
        sb.append(getFrameworkVersion());
        sb.append(')');
        sb.append("> ");
        if (this.g != null) {
            sb.append("[HAS_PARENT] ");
        }
        sb.append(getType() == 2 ? "[BUILTIN] " : isPnPlugin() ? "[P-N] " : "[APK] ");
        if (isDexExtracted()) {
            sb.append("[DEX_EXTRACTED] ");
        }
        if (RePlugin.isPluginRunning(getName())) {
            sb.append("[RUNNING] ");
        }
        String[] runningProcessesByPlugin = RePlugin.getRunningProcessesByPlugin(getName());
        if (runningProcessesByPlugin != null) {
            sb.append("processes=");
            sb.append(Arrays.toString(runningProcessesByPlugin));
            sb.append(' ');
        }
        if (this.a != null) {
            sb.append("js=");
            sb.append(this.a);
            sb.append(' ');
        }
        sb.append("dex=");
        sb.append(getDexFile());
        sb.append(' ');
        sb.append("nlib=");
        sb.append(getNativeLibsDir());
    }

    private void a(JSONObject jSONObject) {
        this.a = jSONObject;
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("upinfo");
        if (jSONObjectOptJSONObject != null) {
            this.c = new PluginInfo(jSONObjectOptJSONObject);
        }
        JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("delinfo");
        if (jSONObjectOptJSONObject2 != null) {
            this.d = new PluginInfo(jSONObjectOptJSONObject2);
        }
        JSONObject jSONObjectOptJSONObject3 = jSONObject.optJSONObject("coverinfo");
        if (jSONObjectOptJSONObject3 != null) {
            this.e = new PluginInfo(jSONObjectOptJSONObject3);
        }
        this.f = jSONObject.optBoolean("cover");
    }

    public static final String format(String str, int i, int i2, int i3) {
        return str + "-" + i + "-" + i2 + "-" + i3;
    }

    public Object clone() {
        JSONException e;
        PluginInfo pluginInfo;
        ClassNotFoundException e2;
        IOException e3;
        JSONObject jSONObject = this.a;
        this.b = jSONObject != null ? jSONObject.toString() : null;
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            new ObjectOutputStream(byteArrayOutputStream).writeObject(this);
            pluginInfo = (PluginInfo) new ObjectInputStream(new ByteArrayInputStream(byteArrayOutputStream.toByteArray())).readObject();
            if (pluginInfo != null) {
                try {
                    if (!TextUtils.isEmpty(this.b)) {
                        pluginInfo.a = new JSONObject(this.b);
                        JSONObject jSONObjectOptJSONObject = pluginInfo.a.optJSONObject("upinfo");
                        if (jSONObjectOptJSONObject != null) {
                            pluginInfo.c = new PluginInfo(jSONObjectOptJSONObject);
                        }
                        JSONObject jSONObjectOptJSONObject2 = pluginInfo.a.optJSONObject("delinfo");
                        if (jSONObjectOptJSONObject2 != null) {
                            pluginInfo.d = new PluginInfo(jSONObjectOptJSONObject2);
                        }
                        JSONObject jSONObjectOptJSONObject3 = pluginInfo.a.optJSONObject("coverinfo");
                        if (jSONObjectOptJSONObject3 != null) {
                            pluginInfo.e = new PluginInfo(jSONObjectOptJSONObject3);
                        }
                    }
                } catch (IOException e4) {
                    e3 = e4;
                    e3.printStackTrace();
                } catch (ClassNotFoundException e5) {
                    e2 = e5;
                    e2.printStackTrace();
                } catch (JSONException e6) {
                    e = e6;
                    e.printStackTrace();
                }
            }
        } catch (IOException e7) {
            e3 = e7;
            pluginInfo = null;
        } catch (ClassNotFoundException e8) {
            e2 = e8;
            pluginInfo = null;
        } catch (JSONException e9) {
            e = e9;
            pluginInfo = null;
        }
        return pluginInfo;
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        try {
            return ((PluginInfo) obj).a.toString().equals(this.a.toString());
        } catch (Exception unused) {
            return false;
        }
    }

    public String getAlias() {
        return this.a.optString("ali");
    }

    public String getApkDir() {
        return d.a().getDir(isPnPlugin() ? "plugins_v3" : getIsPendingCover() ? "p_c" : "p_a", 0).getAbsolutePath();
    }

    public File getApkFile() {
        return new File(getApkDir(), makeInstalledFileName() + ".jar");
    }

    public File getDexFile() {
        if (Build.VERSION.SDK_INT > 25) {
            return new File(getDexParentDir(), makeInstalledFileName() + ".odex");
        }
        return new File(getDexParentDir(), makeInstalledFileName() + ".dex");
    }

    public File getDexParentDir() {
        Context contextA = d.a();
        if (Build.VERSION.SDK_INT <= 25) {
            return isPnPlugin() ? contextA.getDir("plugins_v3_odex", 0) : getIsPendingCover() ? contextA.getDir("p_c", 0) : contextA.getDir("p_od", 0);
        }
        return new File(getApkDir() + File.separator + "oat" + File.separator + a.b());
    }

    public File getExtraDexDir() {
        return a(getDexParentDir(), "_ed");
    }

    public File getExtraOdexDir() {
        return a(getDexParentDir(), "_eod");
    }

    public int getFrameworkVersion() {
        return this.a.optInt("frm_ver", 0);
    }

    public int getHighInterfaceApi() {
        return this.a.optInt("high", 10);
    }

    public boolean getIsPendingCover() {
        return this.f;
    }

    public int getLowInterfaceApi() {
        return this.a.optInt("low", 10);
    }

    public String getName() {
        return this.a.optString("name");
    }

    public File getNativeLibsDir() {
        return new File(d.a().getDir(isPnPlugin() ? "plugins_v3_libs" : getIsPendingCover() ? "p_c" : "p_n", 0), makeInstalledFileName());
    }

    public String getPackageName() {
        return this.a.optString("pkgname");
    }

    public PluginInfo getParentInfo() {
        return this.g;
    }

    public String getPath() {
        return this.a.optString("path");
    }

    public PluginInfo getPendingCover() {
        return this.e;
    }

    public PluginInfo getPendingDelete() {
        return this.d;
    }

    public PluginInfo getPendingUpdate() {
        return this.c;
    }

    public int getType() {
        return this.a.optInt("type");
    }

    public int getVersion() {
        return this.a.optInt("ver");
    }

    public long getVersionValue() {
        return this.a.optLong("verv");
    }

    public int hashCode() {
        return this.a.hashCode();
    }

    public boolean isDexExtracted() {
        File dexFile = getDexFile();
        return dexFile.exists() && dexFile.length() > 0;
    }

    public boolean isNeedCover() {
        return this.e != null;
    }

    public boolean isNeedUninstall() {
        return this.d != null;
    }

    public boolean isNeedUpdate() {
        return this.c != null;
    }

    public boolean isPnPlugin() {
        int type = getType();
        return type == 1 || type == 3 || type == 2;
    }

    public boolean isUsed() {
        return isPnPlugin() ? isDexExtracted() : getParentInfo() != null ? getParentInfo().isUsed() : this.a.optBoolean("used");
    }

    public String makeInstalledFileName() {
        if (isPnPlugin() || getType() == 2) {
            return a();
        }
        return Integer.toString((getPackageName().toLowerCase() + getLowInterfaceApi() + getHighInterfaceApi() + getVersion() + "ak").hashCode() - 88);
    }

    public void setFrameworkVersion(int i) {
        c.a(this.a, "frm_ver", Integer.valueOf(i));
    }

    public void setIsUsed(boolean z) {
        c.a(this.a, "used", Boolean.valueOf(z));
    }

    public void setPath(String str) {
        c.a(this.a, "path", str);
    }

    public void setType(int i) {
        c.a(this.a, "type", Integer.valueOf(i));
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("PInfo { ");
        a(sb);
        sb.append(" }");
        return sb.toString();
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.a.toString());
    }
}
