package com.qihoo360.replugin.model;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.qihoo360.loader2.Constant;
import com.qihoo360.loader2.PluginNativeLibsHelper;
import com.qihoo360.loader2.VMRuntimeCompat;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.FileUtils;
import com.tkay.basead.b.a;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.File;
import java.io.Serializable;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.MatchResult;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.text.Typography;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginInfo implements Serializable, Parcelable, Cloneable {
    public static final int FRAMEWORK_VERSION_UNKNOWN = 0;
    public static final String PI_ALI = "ali";
    public static final String PI_COVER = "cover";
    public static final String PI_COVERINFO = "coverinfo";
    public static final String PI_DELINFO = "delinfo";
    public static final String PI_FRM_VER = "frm_ver";
    public static final String PI_NAME = "name";
    public static final String PI_PATH = "path";
    public static final String PI_PKGNAME = "pkgname";
    public static final String PI_TYPE = "type";
    public static final String PI_UPINFO = "upinfo";
    public static final String PI_USED = "used";
    public static final String PI_VERV = "verv";
    private static final String TAG = "PluginInfo";
    public static final int TYPE_BUILTIN = 2;
    public static final int TYPE_EXTRACTED = 11;
    public static final int TYPE_NOT_INSTALL = 10;
    public static final int TYPE_PN_INSTALLED = 1;
    public static final int TYPE_PN_JAR = 3;
    private static final long serialVersionUID = -6531475023210445876L;
    private boolean mIsPendingCover;
    private final transient Map<String, Object> mJson;
    private PluginInfo mParentInfo;
    private PluginInfo mPendingCover;
    private PluginInfo mPendingDelete;
    private PluginInfo mPendingUpdate;
    public static final Parcelable.Creator<PluginInfo> CREATOR = new Parcelable.Creator<PluginInfo>() { // from class: com.qihoo360.replugin.model.PluginInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public PluginInfo createFromParcel(Parcel parcel) {
            return new PluginInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public PluginInfo[] newArray(int i) {
            return new PluginInfo[i];
        }
    };
    public static final String PI_LOW = "low";
    public static final String PI_HIGH = "high";
    public static final String PI_VER = "ver";
    public static final String[] QUERY_COLUMNS = {"name", PI_LOW, PI_HIGH, PI_VER, "type", "v5type", "path", "v5index", "v5offset", "v5length", "v5md5"};
    private static final Pattern REGEX = Pattern.compile(Constant.LOCAL_PLUGIN_FILE_PATTERN);
    public static final Comparator<PluginInfo> VERSION_COMPARATOR = new Comparator<PluginInfo>() { // from class: com.qihoo360.replugin.model.PluginInfo.2
        @Override // java.util.Comparator
        public int compare(PluginInfo pluginInfo, PluginInfo pluginInfo2) {
            long versionValue = pluginInfo.getVersionValue() - pluginInfo2.getVersionValue();
            if (versionValue > 0) {
                return 1;
            }
            return versionValue < 0 ? -1 : 0;
        }
    };

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    private PluginInfo(JSONObject jSONObject) {
        this.mJson = new ConcurrentHashMap(16);
        initPluginInfo(jSONObject);
    }

    private PluginInfo(String str, int i, int i2, int i3) {
        this.mJson = new ConcurrentHashMap(16);
        put("name", str);
        put(PI_LOW, Integer.valueOf(i));
        put(PI_HIGH, Integer.valueOf(i2));
        put(PI_VER, Integer.valueOf(i3));
    }

    private PluginInfo(String str, String str2, int i, int i2, int i3, String str3, int i4) {
        this.mJson = new ConcurrentHashMap(16);
        i = i <= 0 ? Constant.ADAPTER_COMPATIBLE_VERSION : i;
        i2 = i2 <= 0 ? Constant.ADAPTER_COMPATIBLE_VERSION : i2;
        put(PI_PKGNAME, str);
        put(PI_ALI, str2);
        put("name", makeName(str, str2));
        put(PI_LOW, Integer.valueOf(i));
        put(PI_HIGH, Integer.valueOf(i2));
        setVersion(i3);
        setPath(str3);
        setType(i4);
    }

    private void initPluginInfo(JSONObject jSONObject) {
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            put(next, jSONObject.opt(next));
        }
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(PI_UPINFO);
        if (jSONObjectOptJSONObject != null) {
            setPendingUpdate(new PluginInfo(jSONObjectOptJSONObject));
        }
        JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject(PI_DELINFO);
        if (jSONObjectOptJSONObject2 != null) {
            setPendingDelete(new PluginInfo(jSONObjectOptJSONObject2));
        }
        JSONObject jSONObjectOptJSONObject3 = jSONObject.optJSONObject(PI_COVERINFO);
        if (jSONObjectOptJSONObject3 != null) {
            setPendingCover(new PluginInfo(jSONObjectOptJSONObject3));
        }
        setIsPendingCover(jSONObject.optBoolean(PI_COVER));
    }

    private String makeName(String str, String str2) {
        return !TextUtils.isEmpty(str2) ? str2 : !TextUtils.isEmpty(str) ? str : "";
    }

    public static PluginInfo parseFromPackageInfo(PackageInfo packageInfo, String str) {
        String str2;
        int i;
        int i2;
        ApplicationInfo applicationInfo = packageInfo.applicationInfo;
        String str3 = packageInfo.packageName;
        Bundle bundle = applicationInfo.metaData;
        int i3 = 0;
        if (bundle != null) {
            String string = bundle.getString("com.qihoo360.plugin.name");
            int i4 = bundle.getInt("com.qihoo360.plugin.version.low");
            i = bundle.getInt("com.qihoo360.plugin.version.high");
            i2 = bundle.getInt("com.qihoo360.plugin.version.ver");
            str2 = string;
            i3 = i4;
        } else {
            str2 = null;
            i = 0;
            i2 = 0;
        }
        if (i3 <= 0) {
            i3 = Constant.ADAPTER_COMPATIBLE_VERSION;
        }
        PluginInfo pluginInfo = new PluginInfo(str3, str2, i3, i <= 0 ? Constant.ADAPTER_COMPATIBLE_VERSION : i, i2 <= 0 ? packageInfo.versionCode : i2, str, 10);
        pluginInfo.setFrameworkVersionByMeta(bundle);
        return pluginInfo;
    }

    public static PluginInfo parseFromJsonText(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has(PI_PKGNAME) && jSONObject.has("type") && jSONObject.has(PI_VER)) {
                return new PluginInfo(jSONObject);
            }
            return null;
        } catch (JSONException e) {
            if (LogDebug.LOG) {
                e.printStackTrace();
            }
            return null;
        }
    }

    public String getName() {
        return (String) get("name", "");
    }

    public String getPackageName() {
        return (String) get(PI_PKGNAME, "");
    }

    public String getAlias() {
        return (String) get(PI_ALI, "");
    }

    public int getVersion() {
        return ((Integer) get(PI_VER, 0)).intValue();
    }

    public String getPath() {
        return (String) get("path", "");
    }

    public void setPath(String str) {
        put("path", str);
    }

    public boolean isUsed() {
        if (isPnPlugin()) {
            return isDexExtracted();
        }
        if (getParentInfo() != null) {
            return getParentInfo().isUsed();
        }
        return ((Boolean) get(PI_USED, false)).booleanValue();
    }

    public void setIsUsed(boolean z) {
        put(PI_USED, Boolean.valueOf(z));
    }

    public long getVersionValue() {
        return ((Long) get(PI_VERV, 0L)).longValue();
    }

    public boolean isDexExtracted() {
        File dexFile = getDexFile();
        return dexFile.exists() && FileUtils.sizeOf(dexFile) > 0;
    }

    public File getApkFile() {
        return new File(getApkDir(), makeInstalledFileName() + ".jar");
    }

    public String getApkDir() {
        File dir;
        Context appContext = RePluginInternal.getAppContext();
        if (isPnPlugin()) {
            dir = appContext.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0);
        } else if (getIsPendingCover()) {
            dir = appContext.getDir("p_c", 0);
        } else {
            dir = appContext.getDir(Constant.LOCAL_PLUGIN_APK_SUB_DIR, 0);
        }
        return dir.getAbsolutePath();
    }

    private File getDexDir(File file, String str) {
        File file2 = new File(file, makeInstalledFileName() + str);
        if (!file2.exists()) {
            file2.mkdir();
        }
        return file2;
    }

    public File getExtraDexDir() {
        return getDexDir(getDexParentDir(), Constant.LOCAL_PLUGIN_INDEPENDENT_EXTRA_DEX_SUB_DIR);
    }

    public File getExtraOdexDir() {
        return getDexDir(getDexParentDir(), Constant.LOCAL_PLUGIN_INDEPENDENT_EXTRA_ODEX_SUB_DIR);
    }

    public File getDexParentDir() {
        Context appContext = RePluginInternal.getAppContext();
        if (Build.VERSION.SDK_INT > 25) {
            return new File(getApkDir() + File.separator + "oat" + File.separator + VMRuntimeCompat.getArtOatCpuType());
        }
        if (isPnPlugin()) {
            return appContext.getDir(Constant.LOCAL_PLUGIN_ODEX_SUB_DIR, 0);
        }
        if (getIsPendingCover()) {
            return appContext.getDir("p_c", 0);
        }
        return appContext.getDir(Constant.LOCAL_PLUGIN_APK_ODEX_SUB_DIR, 0);
    }

    public File getDexFile() {
        if (Build.VERSION.SDK_INT > 25) {
            return new File(getDexParentDir(), makeInstalledFileName() + ".odex");
        }
        return new File(getDexParentDir(), makeInstalledFileName() + ".dex");
    }

    public File getNativeLibsDir() {
        File dir;
        Context appContext = RePluginInternal.getAppContext();
        if (isPnPlugin()) {
            dir = appContext.getDir(Constant.LOCAL_PLUGIN_DATA_LIB_DIR, 0);
        } else if (getIsPendingCover()) {
            dir = appContext.getDir("p_c", 0);
        } else {
            dir = appContext.getDir(Constant.LOCAL_PLUGIN_APK_LIB_DIR, 0);
        }
        return new File(dir, makeInstalledFileName());
    }

    public int getType() {
        return ((Integer) get("type", 0)).intValue();
    }

    public void setType(int i) {
        put("type", Integer.valueOf(i));
    }

    public boolean isNeedUpdate() {
        return this.mPendingUpdate != null;
    }

    public PluginInfo getPendingUpdate() {
        return this.mPendingUpdate;
    }

    public void setPendingUpdate(PluginInfo pluginInfo) {
        this.mPendingUpdate = pluginInfo;
        if (pluginInfo != null) {
            put(PI_UPINFO, pluginInfo.getJSON());
        } else {
            this.mJson.remove(PI_UPINFO);
        }
    }

    public boolean isNeedUninstall() {
        return this.mPendingDelete != null;
    }

    public PluginInfo getPendingDelete() {
        return this.mPendingDelete;
    }

    public void setPendingDelete(PluginInfo pluginInfo) {
        this.mPendingDelete = pluginInfo;
        if (pluginInfo != null) {
            put(PI_DELINFO, pluginInfo.getJSON());
        } else {
            this.mJson.remove(PI_DELINFO);
        }
    }

    public boolean isNeedCover() {
        return this.mPendingCover != null;
    }

    public PluginInfo getPendingCover() {
        return this.mPendingCover;
    }

    public void setPendingCover(PluginInfo pluginInfo) {
        this.mPendingCover = pluginInfo;
        if (pluginInfo != null) {
            put(PI_COVERINFO, pluginInfo.getJSON());
        } else {
            this.mJson.remove(PI_COVERINFO);
        }
    }

    public boolean getIsPendingCover() {
        return this.mIsPendingCover;
    }

    public void setIsPendingCover(boolean z) {
        this.mIsPendingCover = z;
        if (z) {
            put(PI_COVER, true);
        } else {
            this.mJson.remove(PI_COVER);
        }
    }

    public int getLowInterfaceApi() {
        return ((Integer) get(PI_LOW, Integer.valueOf(Constant.ADAPTER_COMPATIBLE_VERSION))).intValue();
    }

    public int getHighInterfaceApi() {
        return ((Integer) get(PI_HIGH, Integer.valueOf(Constant.ADAPTER_COMPATIBLE_VERSION))).intValue();
    }

    public int getFrameworkVersion() {
        return ((Integer) get(PI_FRM_VER, 0)).intValue();
    }

    public void setFrameworkVersion(int i) {
        put(PI_FRM_VER, Integer.valueOf(i));
    }

    public void setFrameworkVersionByMeta(Bundle bundle) {
        int defaultFrameworkVersion = RePlugin.getConfig().getDefaultFrameworkVersion();
        int i = bundle != null ? bundle.getInt("com.qihoo360.framework.ver", defaultFrameworkVersion) : 0;
        if (i >= 1) {
            defaultFrameworkVersion = i;
        }
        setFrameworkVersion(defaultFrameworkVersion);
    }

    public JSONObject getJSON() {
        return new JSONObject(this.mJson);
    }

    public String makeInstalledFileName() {
        if (isPnPlugin() || getType() == 2) {
            return formatName();
        }
        return Integer.toString((getPackageName().toLowerCase() + getLowInterfaceApi() + getHighInterfaceApi() + getVersion() + "ak").hashCode() - 88);
    }

    public void update(PluginInfo pluginInfo) {
        setVersion(pluginInfo.getVersion());
        setPath(pluginInfo.getPath());
        setType(pluginInfo.getType());
        setPackageName(pluginInfo.getPackageName());
        setAlias(pluginInfo.getAlias());
    }

    public PluginInfo getParentInfo() {
        return this.mParentInfo;
    }

    public void setParentInfo(PluginInfo pluginInfo) {
        this.mParentInfo = pluginInfo;
    }

    static PluginInfo createByJO(JSONObject jSONObject) {
        if (jSONObject == null || jSONObject.length() == 0) {
            return null;
        }
        PluginInfo pluginInfo = new PluginInfo(jSONObject);
        if (TextUtils.isEmpty(pluginInfo.getName())) {
            return null;
        }
        return pluginInfo;
    }

    private void setPackageName(String str) {
        if (TextUtils.equals(str, getPackageName())) {
            return;
        }
        put(PI_PKGNAME, str);
    }

    private void setAlias(String str) {
        if (TextUtils.equals(str, getAlias())) {
            return;
        }
        put(PI_ALI, str);
    }

    private void setVersion(int i) {
        put(PI_VER, Integer.valueOf(i));
        put(PI_VERV, Long.valueOf(buildCompareValue()));
    }

    private PluginInfo(Parcel parcel) {
        String string;
        JSONObject jSONObject;
        this.mJson = new ConcurrentHashMap(16);
        try {
            string = parcel.readString();
            try {
                jSONObject = new JSONObject(string);
            } catch (JSONException e) {
                e = e;
                if (LogDebug.LOG) {
                    LogDebug.e(TAG, "PluginInfo: mJson error! s=" + string, e);
                }
                jSONObject = new JSONObject();
            }
        } catch (JSONException e2) {
            e = e2;
            string = null;
        }
        initPluginInfo(jSONObject);
    }

    public Object clone() {
        try {
            return new PluginInfo(new JSONObject(getJSON().toString()));
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(getJSON().toString());
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("PInfo { ");
        toContentString(sb);
        sb.append(" }");
        return sb.toString();
    }

    private void toContentString(StringBuilder sb) {
        sb.append(Typography.less);
        sb.append(getName());
        sb.append(':');
        sb.append(getVersion());
        sb.append('(');
        sb.append(getFrameworkVersion());
        sb.append(')');
        sb.append("> ");
        if (this.mParentInfo != null) {
            sb.append("[HAS_PARENT] ");
        }
        if (getType() == 2) {
            sb.append("[BUILTIN] ");
        } else if (isPnPlugin()) {
            sb.append("[P-N] ");
        } else {
            sb.append("[APK] ");
        }
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
            sb.append(TokenParser.SP);
        }
        if (this.mJson != null) {
            sb.append("js=");
            sb.append(this.mJson);
            sb.append(TokenParser.SP);
        }
        sb.append("dex=");
        sb.append(getDexFile());
        sb.append(TokenParser.SP);
        sb.append("nlib=");
        sb.append(getNativeLibsDir());
    }

    public int hashCode() {
        return this.mJson.hashCode();
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
            return ((PluginInfo) obj).mJson.toString().equals(this.mJson.toString());
        } catch (Exception unused) {
            return false;
        }
    }

    public static final String format(String str, int i, int i2, int i3) {
        return str + Constants.ACCEPT_TIME_SEPARATOR_SERVER + i + Constants.ACCEPT_TIME_SEPARATOR_SERVER + i2 + Constants.ACCEPT_TIME_SEPARATOR_SERVER + i3;
    }

    public static final PluginInfo build(File file) {
        Matcher matcher = REGEX.matcher(file.getName());
        if (matcher == null || !matcher.matches()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginInfo.build: skip, no match1, file=" + file.getAbsolutePath());
            }
            return null;
        }
        MatchResult matchResult = matcher.toMatchResult();
        if (matchResult == null || matchResult.groupCount() != 4) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginInfo.build: skip, no match2, file=" + file.getAbsolutePath());
            }
            return null;
        }
        PluginInfo pluginInfo = new PluginInfo(matchResult.group(1), Integer.parseInt(matchResult.group(2)), Integer.parseInt(matchResult.group(3)), Integer.parseInt(matchResult.group(4)), 1, 0, file.getPath(), -1, -1, -1, null);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PluginInfo.build: found plugin, name=" + pluginInfo.getName() + " low=" + pluginInfo.getLowInterfaceApi() + " high=" + pluginInfo.getHighInterfaceApi() + " ver=" + pluginInfo.getVersion());
        }
        return pluginInfo;
    }

    public static final PluginInfo buildFromBuiltInJson(JSONObject jSONObject) {
        String strOptString = jSONObject.optString(a.C0386a.A);
        String strOptString2 = jSONObject.optString("name");
        String strOptString3 = jSONObject.optString("path");
        if (TextUtils.isEmpty(strOptString2) || TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString3)) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.d(TAG, "buildFromBuiltInJson: Invalid json. j=" + jSONObject);
            return null;
        }
        PluginInfo pluginInfo = new PluginInfo(strOptString, strOptString2, jSONObject.optInt(PI_LOW, Constant.ADAPTER_COMPATIBLE_VERSION), jSONObject.optInt(PI_HIGH, Constant.ADAPTER_COMPATIBLE_VERSION), jSONObject.optInt(PI_VER), strOptString3, 2);
        int iOptInt = jSONObject.optInt("frm");
        if (iOptInt < 1) {
            iOptInt = RePlugin.getConfig().getDefaultFrameworkVersion();
        }
        pluginInfo.setFrameworkVersion(iOptInt);
        return pluginInfo;
    }

    public static final PluginInfo buildV5(String str, int i, int i2, int i3, int i4, String str2, int i5, int i6, int i7, String str3) {
        return new PluginInfo(str, i, i2, i3, 3, i4, str2, i5, i6, i7, str3);
    }

    public static final PluginInfo build(Cursor cursor) {
        return new PluginInfo(cursor.getString(0), cursor.getInt(1), cursor.getInt(2), cursor.getInt(3), cursor.getInt(4), cursor.getInt(5), cursor.getString(6), cursor.getInt(7), cursor.getInt(8), cursor.getInt(9), cursor.getString(10));
    }

    public static final PluginInfo build(String str, int i, int i2, int i3) {
        return new PluginInfo(str, i, i2, i3);
    }

    private PluginInfo(String str, int i, int i2, int i3, int i4, int i5, String str2, int i6, int i7, int i8, String str3) {
        this(str, str, i, i2, i3, str2, i4);
        put("v5type", Integer.valueOf(i5));
        put("v5index", Integer.valueOf(i6));
        put("v5offset", Integer.valueOf(i7));
        put("v5length", Integer.valueOf(i8));
        put("v5md5", str3);
    }

    private String formatName() {
        return format(getName(), getLowInterfaceApi(), getHighInterfaceApi(), getVersion());
    }

    final void to(MatrixCursor matrixCursor) {
        matrixCursor.newRow().add(getName()).add(Integer.valueOf(getLowInterfaceApi())).add(Integer.valueOf(getHighInterfaceApi())).add(Integer.valueOf(getVersion())).add(Integer.valueOf(getType())).add(Integer.valueOf(getV5Type())).add(getPath()).add(Integer.valueOf(getV5Index())).add(Integer.valueOf(getV5Offset())).add(Integer.valueOf(getV5Length())).add(getV5MD5());
    }

    public final void to(Intent intent) {
        intent.putExtra("name", getName());
        intent.putExtra(PI_LOW, getLowInterfaceApi());
        intent.putExtra(PI_HIGH, getHighInterfaceApi());
        intent.putExtra(PI_VER, getVersion());
        intent.putExtra("type", getType());
        intent.putExtra("v5type", getV5Type());
        intent.putExtra("path", getPath());
        intent.putExtra("v5index", getV5Index());
        intent.putExtra("v5offset", getV5Offset());
        intent.putExtra("v5length", getV5Length());
        intent.putExtra("v5md5", getV5MD5());
    }

    public final boolean deleteObsolote(Context context) {
        if (getType() != 1 || TextUtils.isEmpty(getPath())) {
            return true;
        }
        boolean zDelete = new File(getPath()).delete();
        PluginNativeLibsHelper.clear(getNativeLibsDir());
        return zDelete;
    }

    public final boolean canReplaceForPn(PluginInfo pluginInfo) {
        return getType() != 1 && pluginInfo.getType() == 1 && getName().equals(pluginInfo.getName()) && getLowInterfaceApi() == pluginInfo.getLowInterfaceApi() && getHighInterfaceApi() == pluginInfo.getHighInterfaceApi() && getVersion() == pluginInfo.getVersion();
    }

    public final boolean match() {
        boolean zIsPluginBlocked = RePlugin.getConfig().getCallbacks().isPluginBlocked(this);
        if (LogDebug.LOG && zIsPluginBlocked) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "match result: plugin is blocked");
        }
        return !zIsPluginBlocked;
    }

    private final long buildCompareValue() {
        return (((long) (getHighInterfaceApi() & 32767)) << 48) | (((long) (getLowInterfaceApi() & 65535)) << 32) | ((long) getVersion());
    }

    public boolean isPnPlugin() {
        int type = getType();
        return type == 1 || type == 3 || type == 2;
    }

    public int getV5Type() {
        return ((Integer) get("v5type", 0)).intValue();
    }

    public int getV5Index() {
        return ((Integer) get("v5index", -1)).intValue();
    }

    public int getV5Offset() {
        return ((Integer) get("v5offset", -1)).intValue();
    }

    public int getV5Length() {
        return ((Integer) get("v5length", -1)).intValue();
    }

    public String getV5MD5() {
        return (String) get("v5md5", "");
    }

    private <T> T get(String str, T t) {
        T t2 = (T) this.mJson.get(str);
        return t.getClass().isInstance(t2) ? t2 : t;
    }

    public <T> void put(String str, T t) {
        if (str == null || t == null) {
            return;
        }
        this.mJson.put(str, t);
    }
}
