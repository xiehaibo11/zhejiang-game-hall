package com.android.vending.expansion.zipfile;

import android.content.Context;
import android.os.Environment;
import java.io.File;
import java.io.IOException;
import java.util.Vector;

public class APKExpansionSupport {
    private static final String EXP_PATH = "/Android/obb/";

    public APKExpansionSupport() {
    }

    static String[] getAPKExpansionFiles(Context r6, int r7, int r8) {
        String r62 = r6.getPackageName();
        Vector r0 = new Vector();
        if (Environment.getExternalStorageState().equals("mounted") == false) goto L15;
        File r2 = new File(Environment.getExternalStorageDirectory().toString() + EXP_PATH + r62);
        if (r2.exists() == false) goto L15;
        if (r7 <= 0) goto L11;
        String r4 = r2 + File.separator + "main." + r7 + "." + r62 + ".obb";
        if (new File(r4).isFile() == false) goto L11;
        r0.add(r4);
    L11:
        if (r8 <= 0) goto L15;
        String r63 = r2 + File.separator + "patch." + r7 + "." + r62 + ".obb";
        if (new File(r63).isFile() == false) goto L15;
        r0.add(r63);
    L15:
        String[] r64 = new String[r0.size()];
        r0.toArray(r64);
        return r64;
    }

    public static ZipResourceFile getResourceZipFile(String[] r4) throws IOException {
        int r0 = r4.length;
        ZipResourceFile r1 = null;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        String r3 = r4[r2];
        if (r1 != null) goto L7;
        r1 = new ZipResourceFile(r3);
    L8:
        r2 = r2 + 1;
        goto L3
    L7:
        r1.addPatchFile(r3);
        goto L8
    L9:
        return r1;
    }

    public static ZipResourceFile getAPKExpansionZipFile(Context r0, int r1, int r2) throws IOException {
        return getResourceZipFile(getAPKExpansionFiles(r0, r1, r2));
    }
}
