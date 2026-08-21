package com.qihoo360.loader2;

import android.content.Context;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.util.regex.MatchResult;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    final com.qihoo360.replugin.model.PluginInfo updateV5FileTo(android.content.Context r21, java.io.File r22, boolean r23, boolean r24, boolean r25) {
        /*
            Method dump skipped, instruction units count: 1071
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.V5FileInfo.updateV5FileTo(android.content.Context, java.io.File, boolean, boolean, boolean):com.qihoo360.replugin.model.PluginInfo");
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
