package com.qihoo360.loader2;

import android.content.Context;
import android.content.pm.PackageInfo;
import com.qihoo360.loader.utils.PackageUtils;
import com.qihoo360.loader.utils.StringUtils;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import com.qihoo360.replugin.utils.basic.SecurityUtil;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.util.Locale;
import java.util.regex.MatchResult;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class V5FileInfo {
    private static final String EXTENSION = ".jar";
    public static final int INCREMENT_PLUGIN = 3;
    public static final int MULTI_PLUGIN = 4;
    public static final int NONE_PLUGIN = 0;
    public static final int NORMAL_PLUGIN = 1;
    private static final String NORMAL_PREFIX = "p-n-";
    public static final int SINGLE_PLUGIN = 2;
    private static final int V5_FILE_HEADER_SIZE = 16;
    File mFile;
    String mName;
    int mType;
    private static final String INCREMENT_PLUGIN_FILE_PATTERN = "^v-plugin-([^.-]+).jar$";
    private static final Pattern INCREMENT_REGEX = Pattern.compile(INCREMENT_PLUGIN_FILE_PATTERN);
    private static final String SINGLE_PLUGIN_FILE_PATTERN = "^plugin-s-([^.-]+).jar$";
    private static final Pattern INCREMENT_SINGLE_REGEX = Pattern.compile(SINGLE_PLUGIN_FILE_PATTERN);
    private static final String NORMAL_PLUGIN_FILE_PATTERN = "^p-n-([^.-]+).jar$";
    private static final Pattern NORMAL_REGEX = Pattern.compile(NORMAL_PLUGIN_FILE_PATTERN);
    private static final String MULTI_PLUGIN_FILE_PATTERN = "^p-m-([^.-]+).jar$";
    private static final Pattern MULTI_REGEX = Pattern.compile(MULTI_PLUGIN_FILE_PATTERN);

    static final String getFileName(String str) {
        return NORMAL_PREFIX + str + EXTENSION;
    }

    static final V5FileInfo build(File file, int i) {
        Matcher matcher;
        MatchResult matchResult;
        String name = file.getName();
        if (i == 3) {
            matcher = INCREMENT_REGEX.matcher(name);
        } else if (i == 2) {
            matcher = INCREMENT_SINGLE_REGEX.matcher(name);
        } else if (i == 4) {
            matcher = MULTI_REGEX.matcher(name);
        } else {
            matcher = NORMAL_REGEX.matcher(name);
        }
        V5FileInfo v5FileInfo = null;
        if (matcher != null && matcher.matches() && (matchResult = matcher.toMatchResult()) != null && matchResult.groupCount() == 1 && file.exists() && file.isFile()) {
            v5FileInfo = new V5FileInfo();
            v5FileInfo.mName = matchResult.group(1);
            v5FileInfo.mFile = file;
            v5FileInfo.mType = i;
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "V5FileInfo.build: found plugin, name=" + v5FileInfo.mName + " file=" + file.getAbsolutePath());
            }
        }
        return v5FileInfo;
    }

    public static final String parseName(String str, int i) {
        Matcher matcher;
        MatchResult matchResult;
        if (i == 3) {
            matcher = INCREMENT_REGEX.matcher(str);
        } else if (i == 2) {
            matcher = INCREMENT_SINGLE_REGEX.matcher(str);
        } else if (i == 4) {
            matcher = MULTI_REGEX.matcher(str);
        } else {
            matcher = NORMAL_REGEX.matcher(str);
        }
        if (matcher == null || !matcher.matches() || (matchResult = matcher.toMatchResult()) == null || matchResult.groupCount() != 1) {
            return null;
        }
        return matchResult.group(1);
    }

    public String getName() {
        return this.mName;
    }

    final PluginInfo updateV5FileTo(Context context, File file, boolean z, boolean z2) {
        return updateV5FileTo(context, file, true, z, z2);
    }

    /* JADX WARN: Removed duplicated region for block: B:132:0x03a1  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x03b6 A[Catch: all -> 0x0405, TryCatch #3 {all -> 0x0405, blocks: (B:24:0x007f, B:26:0x008d, B:27:0x00d1, B:29:0x00de, B:31:0x00e2, B:34:0x010e, B:36:0x0112, B:38:0x0116, B:40:0x013f, B:43:0x0147, B:45:0x014f, B:47:0x015d, B:49:0x0161, B:51:0x0193, B:53:0x0197, B:54:0x01ad, B:57:0x01c9, B:60:0x01ed, B:62:0x01f6, B:64:0x01fa, B:65:0x0210, B:67:0x0216, B:69:0x021c, B:71:0x0228, B:73:0x022c, B:74:0x0242, B:75:0x0248, B:77:0x024c, B:78:0x0262, B:80:0x0282, B:82:0x0286, B:86:0x02ab, B:88:0x02b1, B:90:0x02b7, B:92:0x02c3, B:94:0x02c7, B:98:0x02f2, B:107:0x0310, B:109:0x0314, B:112:0x032d, B:114:0x0333, B:116:0x0337, B:117:0x034d, B:120:0x0368, B:122:0x036c, B:124:0x0378, B:125:0x037a, B:129:0x0389, B:102:0x0302, B:104:0x0306, B:130:0x039b, B:134:0x03a4, B:139:0x03b6, B:140:0x03bb, B:142:0x03bf, B:143:0x03d5, B:145:0x03db, B:146:0x03de, B:147:0x03e3, B:149:0x03e7, B:99:0x02f6), top: B:174:0x007f, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:140:0x03bb A[Catch: all -> 0x0405, TryCatch #3 {all -> 0x0405, blocks: (B:24:0x007f, B:26:0x008d, B:27:0x00d1, B:29:0x00de, B:31:0x00e2, B:34:0x010e, B:36:0x0112, B:38:0x0116, B:40:0x013f, B:43:0x0147, B:45:0x014f, B:47:0x015d, B:49:0x0161, B:51:0x0193, B:53:0x0197, B:54:0x01ad, B:57:0x01c9, B:60:0x01ed, B:62:0x01f6, B:64:0x01fa, B:65:0x0210, B:67:0x0216, B:69:0x021c, B:71:0x0228, B:73:0x022c, B:74:0x0242, B:75:0x0248, B:77:0x024c, B:78:0x0262, B:80:0x0282, B:82:0x0286, B:86:0x02ab, B:88:0x02b1, B:90:0x02b7, B:92:0x02c3, B:94:0x02c7, B:98:0x02f2, B:107:0x0310, B:109:0x0314, B:112:0x032d, B:114:0x0333, B:116:0x0337, B:117:0x034d, B:120:0x0368, B:122:0x036c, B:124:0x0378, B:125:0x037a, B:129:0x0389, B:102:0x0302, B:104:0x0306, B:130:0x039b, B:134:0x03a4, B:139:0x03b6, B:140:0x03bb, B:142:0x03bf, B:143:0x03d5, B:145:0x03db, B:146:0x03de, B:147:0x03e3, B:149:0x03e7, B:99:0x02f6), top: B:174:0x007f, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x02f2 A[Catch: all -> 0x0405, TRY_LEAVE, TryCatch #3 {all -> 0x0405, blocks: (B:24:0x007f, B:26:0x008d, B:27:0x00d1, B:29:0x00de, B:31:0x00e2, B:34:0x010e, B:36:0x0112, B:38:0x0116, B:40:0x013f, B:43:0x0147, B:45:0x014f, B:47:0x015d, B:49:0x0161, B:51:0x0193, B:53:0x0197, B:54:0x01ad, B:57:0x01c9, B:60:0x01ed, B:62:0x01f6, B:64:0x01fa, B:65:0x0210, B:67:0x0216, B:69:0x021c, B:71:0x0228, B:73:0x022c, B:74:0x0242, B:75:0x0248, B:77:0x024c, B:78:0x0262, B:80:0x0282, B:82:0x0286, B:86:0x02ab, B:88:0x02b1, B:90:0x02b7, B:92:0x02c3, B:94:0x02c7, B:98:0x02f2, B:107:0x0310, B:109:0x0314, B:112:0x032d, B:114:0x0333, B:116:0x0337, B:117:0x034d, B:120:0x0368, B:122:0x036c, B:124:0x0378, B:125:0x037a, B:129:0x0389, B:102:0x0302, B:104:0x0306, B:130:0x039b, B:134:0x03a4, B:139:0x03b6, B:140:0x03bb, B:142:0x03bf, B:143:0x03d5, B:145:0x03db, B:146:0x03de, B:147:0x03e3, B:149:0x03e7, B:99:0x02f6), top: B:174:0x007f, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    final PluginInfo updateV5FileTo(Context context, File file, boolean z, boolean z2, boolean z3) {
        FileInputStream fileInputStream;
        DataInputStream dataInputStream;
        int i;
        boolean z4;
        boolean z5;
        PluginInfo pluginInfoBuild;
        PackageInfo packageArchiveInfo;
        try {
            fileInputStream = new FileInputStream(this.mFile);
        } catch (Throwable th) {
            th = th;
            fileInputStream = null;
        }
        try {
            dataInputStream = new DataInputStream(fileInputStream);
            try {
                if (this.mType == 3) {
                    try {
                        dataInputStream.skip(16L);
                        i = 16;
                    } catch (Throwable th2) {
                        th = th2;
                    }
                } else {
                    i = 0;
                }
                int i2 = dataInputStream.readInt();
                int i3 = dataInputStream.readInt();
                int i4 = dataInputStream.readInt();
                int i5 = i + 4 + 4 + 4;
                String utf = dataInputStream.readUTF();
                if (utf.length() != 32) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: invalid md5 length: length=" + utf.length() + " name=" + this.mName);
                    }
                    return null;
                }
                int length = i5 + utf.length() + 2;
                int i6 = dataInputStream.readInt();
                int i7 = length + 4;
                try {
                    dataInputStream.skip(i6);
                    int i8 = dataInputStream.readInt();
                    int i9 = i7 + i6 + 4;
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: low=" + i2 + " high=" + i3 + " ver=" + i4 + " md5=" + utf + " custom=" + i6 + " length=" + i8 + " name=" + this.mName);
                    }
                    if (i9 + i8 != this.mFile.length()) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: invalid length: calc.length=" + (this.mFile.length() - ((long) i9)) + " name=" + this.mName);
                        }
                    } else if (i2 < Constant.ADAPTER_COMPATIBLE_VERSION) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: not supported plugin.low=" + i2 + " host.compatible.ver=" + Constant.ADAPTER_COMPATIBLE_VERSION + " name=" + this.mName);
                        }
                    } else if (i3 >= i2 && i3 - i2 <= 1024) {
                        PluginInfo pluginInfoBuild2 = PluginInfo.build(this.mName, i2, i3, i4);
                        if (!z || !RePlugin.getConfig().getCallbacks().isPluginBlocked(pluginInfoBuild2)) {
                            if (z2) {
                                File file2 = new File(file, PluginInfo.format(this.mName, i2, i3, i4) + EXTENSION);
                                if (file2.exists() && file2.length() == i8) {
                                    if (LogDebug.LOG) {
                                        LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: checking target ...  name=" + this.mName);
                                    }
                                    byte[] bArrMD5 = SecurityUtil.MD5(file2);
                                    if (utf.equals((bArrMD5 != null ? StringUtils.toHexString(bArrMD5) : "").toLowerCase(Locale.ENGLISH))) {
                                        if (LogDebug.LOG) {
                                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: target match name=" + this.mName);
                                        }
                                        pluginInfoBuild = PluginInfo.build(file2);
                                    }
                                }
                                if (LogDebug.LOG) {
                                    LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: extract ... name=" + this.mName);
                                }
                                boolean z6 = true;
                                File file3 = new File(file, String.format("%s_plugin.tmp", this.mName));
                                FileUtils.copyInputStreamToFile(dataInputStream, file3);
                                if (file3.length() != i8) {
                                    if (LogDebug.LOG) {
                                        LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: extract file length=" + file3.length() + " expected=" + i8);
                                    }
                                    z4 = true;
                                } else {
                                    z4 = false;
                                }
                                if (!z4) {
                                    byte[] bArrMD52 = SecurityUtil.MD5(file3);
                                    String lowerCase = (bArrMD52 != null ? StringUtils.toHexString(bArrMD52) : "").toLowerCase(Locale.ENGLISH);
                                    if (!utf.equals(lowerCase)) {
                                        if (LogDebug.LOG) {
                                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: extract=" + lowerCase + " orig=" + utf + ", delete tmpfile name=" + this.mName);
                                        }
                                        z5 = true;
                                    }
                                    if (!z5) {
                                        try {
                                            packageArchiveInfo = PackageUtils.getPackageArchiveInfo(context.getPackageManager(), file3.getAbsolutePath(), 64);
                                        } catch (Throwable th3) {
                                            if (LogDebug.LOG) {
                                                LogDebug.d(LogDebug.PLUGIN_TAG, th3.getMessage(), th3);
                                            }
                                            packageArchiveInfo = null;
                                        }
                                        if (packageArchiveInfo == null) {
                                            if (LogDebug.LOG) {
                                                LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: can't fetch package info:  name=" + this.mName);
                                            }
                                            z5 = true;
                                        }
                                        if (z3 && !CertUtils.isPluginSignatures(packageArchiveInfo)) {
                                            if (LogDebug.LOG) {
                                                LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: invalid cert:  name=" + this.mName);
                                            }
                                            LogRelease.e(LogDebug.PLUGIN_TAG, "uv5p ic n=" + this.mName);
                                            if (!RePluginInternal.FOR_DEV) {
                                                z5 = true;
                                            }
                                        }
                                        if (LogDebug.LOG) {
                                            StringBuilder sb = new StringBuilder();
                                            sb.append("update v5 plugin: package=");
                                            sb.append(packageArchiveInfo != null ? packageArchiveInfo.packageName : "");
                                            sb.append(" delete=");
                                            sb.append(z5 ? "true" : "false");
                                            sb.append(" name=");
                                            sb.append(this.mName);
                                            LogDebug.d(LogDebug.PLUGIN_TAG, sb.toString());
                                        }
                                    }
                                    pluginInfoBuild = PluginInfo.build(file2);
                                    if (pluginInfoBuild == null) {
                                        z5 = true;
                                    }
                                    if (!z5 || PluginNativeLibsHelper.install(file3.getAbsolutePath(), pluginInfoBuild.getNativeLibsDir())) {
                                        z6 = z5;
                                    }
                                    if (z6) {
                                        if (LogDebug.LOG) {
                                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: extract success name=" + this.mName);
                                        }
                                        if (file2.exists()) {
                                            FileUtils.forceDelete(file2);
                                        }
                                        FileUtils.moveFile(file3, file2);
                                    } else {
                                        FileUtils.forceDelete(file3);
                                    }
                                }
                                z5 = z4;
                                if (!z5) {
                                }
                                pluginInfoBuild = PluginInfo.build(file2);
                                if (pluginInfoBuild == null) {
                                }
                                if (!z5) {
                                }
                                z6 = z5;
                                if (z6) {
                                }
                            } else {
                                if (LogDebug.LOG) {
                                    LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: delay extract f=" + this.mFile);
                                }
                                pluginInfoBuild = PluginInfo.buildV5(this.mName, i2, i3, i4, this.mType, this.mFile.getAbsolutePath(), -1, -1, -1, null);
                            }
                            return pluginInfoBuild;
                        }
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: failed, plugin is blocked, name=" + this.mName + ",low=" + i2 + ",high=" + i3 + ",ver=" + i4);
                        }
                    } else if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "update v5 plugin: invalid plugin.high=" + i3 + " plugin.low=" + i2);
                    }
                    CloseableUtils.closeQuietly(fileInputStream);
                    CloseableUtils.closeQuietly(dataInputStream);
                    return null;
                } catch (Throwable th4) {
                    th = th4;
                    fileInputStream = fileInputStream;
                }
            } catch (Throwable th5) {
                th = th5;
            }
        } catch (Throwable th6) {
            th = th6;
            dataInputStream = null;
        }
        try {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            }
            CloseableUtils.closeQuietly(fileInputStream);
            CloseableUtils.closeQuietly(dataInputStream);
            return null;
        } finally {
            CloseableUtils.closeQuietly(fileInputStream);
            CloseableUtils.closeQuietly(dataInputStream);
        }
    }

    public static PluginInfo fetchPluginInfo(Context context, String str) {
        File file = new File(context.getFilesDir(), NORMAL_PREFIX + str + EXTENSION);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.MAIN_TAG, "needUpdate(): local file =  " + file.getAbsolutePath());
        }
        if (!file.exists()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "needUpdate(): file is not exists, file =  " + file.getAbsolutePath());
            }
            return null;
        }
        V5FileInfo v5FileInfoBuild = build(file, 1);
        if (v5FileInfoBuild == null) {
            v5FileInfoBuild = build(file, 3);
        }
        if (v5FileInfoBuild == null) {
            v5FileInfoBuild = build(file, 4);
        }
        V5FileInfo v5FileInfo = v5FileInfoBuild;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.MAIN_TAG, "needUpdate(): localFileInfo =  " + v5FileInfo);
        }
        if (v5FileInfo != null) {
            return v5FileInfo.updateV5FileTo(context, context.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0), false, false, false);
        }
        return null;
    }
}
