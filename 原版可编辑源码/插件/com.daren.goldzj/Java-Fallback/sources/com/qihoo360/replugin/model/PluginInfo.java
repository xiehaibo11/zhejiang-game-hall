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
    public static final Parcelable.Creator<PluginInfo> CREATOR = null;
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
        private static final byte[] a = null;
        private static volatile Boolean b;

        static {
            a = new byte[0];
        }

        public static boolean a() {
            if (b != null) goto L5;
            byte[] r0 = a;
            monitor-enter(r0);
        L16:
            th = move-exception;
            throw th;
        L9:
            if (b == null) goto L13;
            boolean r1 = b.booleanValue();     // Catch: Throwable -> L16
            monitor-exit(r0);     // Catch: Throwable -> L16
            return r1;
        L13:
            b = Boolean.valueOf(c());     // Catch: Throwable -> L16
            boolean r12 = b.booleanValue();     // Catch: Throwable -> L16
            monitor-exit(r0);     // Catch: Throwable -> L16
            return r12;
        L5:
            return b.booleanValue();
        }

        public static String b() {
            if (a() == false) goto L5;
            return "arm64";
        L5:
            return "arm";
        }

        private static boolean c() {
            if (Build.VERSION.SDK_INT >= 21) goto L6;
            return false;
        L6:
            Class<?> r1 = Class.forName("dalvik.system.VMRuntime");     // Catch: Throwable -> L22
            if (r1 != null) goto L9;
            return false;
        L9:
            Method r2 = r1.getDeclaredMethod("getRuntime", new Class[0]);     // Catch: Throwable -> L22
            if (r2 != null) goto L12;
            return false;
        L12:
            Object r22 = r2.invoke(null, new Object[0]);     // Catch: Throwable -> L22
            if (r22 != null) goto L15;
            return false;
        L15:
            Method r12 = r1.getDeclaredMethod("is64Bit", new Class[0]);     // Catch: Throwable -> L22
            if (r12 != null) goto L18;
            return false;
        L18:
            Object r13 = r12.invoke(r22, new Object[0]);     // Catch: Throwable -> L22
            if ((r13 instanceof Boolean) == false) goto L25;
            return ((Boolean) r13).booleanValue();
        L25:
            return false;
        L26:
            return false;
        }
    }

    static {
        CREATOR = new 1();
    }

    private PluginInfo(Parcel r2) {
        JSONObject r0 = new JSONObject(r2.readString());     // Catch: JSONException -> L5
    L6:
        a(r0);
        return;
    L5:
        r0 = new JSONObject();
        goto L6
    }

    PluginInfo(Parcel r1, 1 r2) {
        this(r1);
    }

    private PluginInfo(JSONObject r1) {
        a(r1);
    }

    private File a(File r4, String r5) {
        File r0 = new File(r4, makeInstalledFileName() + r5);
        if (r0.exists() == true) goto L5;
        r0.mkdir();
    L5:
        return r0;
    }

    private String a() {
        return format(getName(), getLowInterfaceApi(), getHighInterfaceApi(), getVersion());
    }

    private void a(StringBuilder r4) {
        r4.append('<');
        r4.append(getName());
        r4.append(':');
        r4.append(getVersion());
        r4.append('(');
        r4.append(getFrameworkVersion());
        r4.append(')');
        r4.append("> ");
        if (this.g == null) goto L6;
        r4.append("[HAS_PARENT] ");
    L6:
        if (getType() != 2) goto L10;
        String r0 = "[BUILTIN] ";
    L8:
        r4.append(r0);
        if (isDexExtracted() == false) goto L17;
        r4.append("[DEX_EXTRACTED] ");
    L17:
        if (RePlugin.isPluginRunning(getName()) == false) goto L19;
        r4.append("[RUNNING] ");
    L19:
        String[] r02 = RePlugin.getRunningProcessesByPlugin(getName());
        if (r02 == null) goto L23;
        r4.append("processes=");
        r4.append(Arrays.toString(r02));
        r4.append(' ');
    L23:
        if (this.a == null) goto L25;
        r4.append("js=");
        r4.append(this.a);
        r4.append(' ');
    L25:
        r4.append("dex=");
        r4.append(getDexFile());
        r4.append(' ');
        r4.append("nlib=");
        r4.append(getNativeLibsDir());
        return;
    L10:
        if (isPnPlugin() == false) goto L12;
        r0 = "[P-N] ";
        goto L8
    L12:
        r0 = "[APK] ";
        goto L8
    }

    private void a(JSONObject r3) {
        this.a = r3;
        JSONObject r0 = r3.optJSONObject("upinfo");
        if (r0 == null) goto L5;
        this.c = new PluginInfo(r0);
    L5:
        JSONObject r02 = r3.optJSONObject("delinfo");
        if (r02 == null) goto L8;
        this.d = new PluginInfo(r02);
    L8:
        JSONObject r03 = r3.optJSONObject("coverinfo");
        if (r03 == null) goto L11;
        this.e = new PluginInfo(r03);
    L11:
        this.f = r3.optBoolean("cover");
    }

    public static final String format(String r1, int r2, int r3, int r4) {
        return r1 + "-" + r2 + "-" + r3 + "-" + r4;
    }

    public Object clone() {
        JSONObject r0 = this.a;
        if (r0 == null) goto L5;
        String r02 = r0.toString();
    L6:
        this.b = r02;
        ByteArrayOutputStream r03 = new ByteArrayOutputStream();     // Catch: JSONException -> L27 IOException -> L30 ClassNotFoundException -> L33
        new ObjectOutputStream(r03).writeObject(this);     // Catch: JSONException -> L27 IOException -> L30 ClassNotFoundException -> L33
        PluginInfo r04 = (PluginInfo) new ObjectInputStream(new ByteArrayInputStream(r03.toByteArray())).readObject();     // Catch: JSONException -> L27 IOException -> L30 ClassNotFoundException -> L33
        if (r04 != null) goto L37;
    L36:
        return r04;
    L37:
    L23:
        IOException e = e;
    L32:
        e.printStackTrace();
    L25:
        ClassNotFoundException e2 = e;
    L35:
        e2.printStackTrace();
    L21:
        JSONException e3 = e;
    L29:
        e3.printStackTrace();
        goto L36
    L10:
        if (TextUtils.isEmpty(this.b) == true) goto L36;
        r04.a = new JSONObject(this.b);     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
        JSONObject r1 = r04.a.optJSONObject("upinfo");     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
        if (r1 == null) goto L14;
        r04.c = new PluginInfo(r1);     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
    L14:
        JSONObject r12 = r04.a.optJSONObject("delinfo");     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
        if (r12 == null) goto L17;
        r04.d = new PluginInfo(r12);     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
    L17:
        JSONObject r13 = r04.a.optJSONObject("coverinfo");     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
        if (r13 == null) goto L36;
        r04.e = new PluginInfo(r13);     // Catch: JSONException -> L21 IOException -> L23 ClassNotFoundException -> L25
    L30:
        e = move-exception;
        e = e;
        r04 = null;
    L33:
        e = move-exception;
        e2 = e;
        r04 = null;
    L27:
        e = move-exception;
        e3 = e;
        r04 = null;
        goto L29
    L5:
        r02 = null;
        goto L6
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object r4) {
        if (r4 != null) goto L5;
        return false;
    L5:
        if (this != r4) goto L9;
        return true;
    L9:
        if (getClass() == r4.getClass()) goto L15;
        return false;
    L15:
        return ((PluginInfo) r4).a.toString().equals(this.a.toString());
    L14:
        return false;
    }

    public String getAlias() {
        return this.a.optString("ali");
    }

    public String getApkDir() {
        Context r0 = d.a();
        if (isPnPlugin() == false) goto L7;
        String r1 = "plugins_v3";
    L11:
        return r0.getDir(r1, 0).getAbsolutePath();
    L7:
        if (getIsPendingCover() == false) goto L9;
        r1 = "p_c";
        goto L11
    L9:
        r1 = "p_a";
        goto L11
    }

    public File getApkFile() {
        return new File(getApkDir(), makeInstalledFileName() + ".jar");
    }

    public File getDexFile() {
        if (Build.VERSION.SDK_INT <= 25) goto L7;
        return new File(getDexParentDir(), makeInstalledFileName() + ".odex");
    L7:
        return new File(getDexParentDir(), makeInstalledFileName() + ".dex");
    }

    public File getDexParentDir() {
        Context r0 = d.a();
        if (Build.VERSION.SDK_INT <= 25) goto L7;
        return new File(getApkDir() + File.separator + "oat" + File.separator + a.b());
    L7:
        if (isPnPlugin() == false) goto L11;
        return r0.getDir("plugins_v3_odex", 0);
    L11:
        if (getIsPendingCover() == false) goto L15;
        return r0.getDir("p_c", 0);
    L15:
        return r0.getDir("p_od", 0);
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
        Context r0 = d.a();
        if (isPnPlugin() == false) goto L7;
        String r1 = "plugins_v3_libs";
    L5:
        File r02 = r0.getDir(r1, 0);
        return new File(r02, makeInstalledFileName());
    L7:
        if (getIsPendingCover() == false) goto L9;
        r1 = "p_c";
        goto L5
    L9:
        r1 = "p_n";
        goto L5
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
        File r0 = getDexFile();
        if (r0.exists() == true) goto L5;
    L7:
        return false;
    L5:
        if (r0.length() <= 0) goto L7;
        return true;
    }

    public boolean isNeedCover() {
        if (this.e == null) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isNeedUninstall() {
        if (this.d == null) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isNeedUpdate() {
        if (this.c == null) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean isPnPlugin() {
        int r0 = getType();
        if (r0 != 1) goto L5;
        return true;
    L5:
        if (r0 != 3) goto L7;
        return true;
    L7:
        if (r0 == 2) goto L13;
        return false;
    L13:
        return true;
    }

    public boolean isUsed() {
        if (isPnPlugin() == false) goto L7;
        return isDexExtracted();
    L7:
        if (getParentInfo() == null) goto L11;
        return getParentInfo().isUsed();
    L11:
        return this.a.optBoolean("used");
    }

    public String makeInstalledFileName() {
        if (isPnPlugin() == true) goto L10;
        if (getType() == 2) goto L10;
        return Integer.toString((getPackageName().toLowerCase() + getLowInterfaceApi() + getHighInterfaceApi() + getVersion() + "ak").hashCode() - 88);
    L10:
        return a();
    }

    public void setFrameworkVersion(int r3) {
        c.a(this.a, "frm_ver", Integer.valueOf(r3));
    }

    public void setIsUsed(boolean r3) {
        c.a(this.a, "used", Boolean.valueOf(r3));
    }

    public void setPath(String r3) {
        c.a(this.a, "path", r3);
    }

    public void setType(int r3) {
        c.a(this.a, "type", Integer.valueOf(r3));
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append("PInfo { ");
        a(r0);
        r0.append(" }");
        return r0.toString();
    }

    @Override
    public void writeToParcel(Parcel r1, int r2) {
        r1.writeString(this.a.toString());
    }
}
