package com.ymnsdk.replugin.download;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class AppInfoUtil {
    public static String readAppInfo(String str) {
        File file = new File(str);
        if (!file.exists()) {
            return "";
        }
        try {
            return new JSONObject(getString(new FileInputStream(file))).getString("md5");
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String getString(InputStream inputStream) {
        InputStreamReader inputStreamReader;
        try {
            inputStreamReader = new InputStreamReader(inputStream, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            inputStreamReader = null;
        }
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);
        StringBuffer stringBuffer = new StringBuffer("");
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                stringBuffer.append(line);
                stringBuffer.append("\n");
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return stringBuffer.toString();
        }
        inputStream.close();
        return stringBuffer.toString();
    }
}
