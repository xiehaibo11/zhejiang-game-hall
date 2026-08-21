package com.kwad.sdk.crash.report;

import android.text.TextUtils;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.crash.model.message.JavaExceptionMessage;
import com.kwad.sdk.utils.q;
import java.io.File;
import org.json.JSONObject;

public final class f extends d {
    @Override
    protected final ExceptionMessage a(File file, File file2, File file3, String str) {
        String strV;
        JavaExceptionMessage javaExceptionMessage;
        Exception e;
        JavaExceptionMessage javaExceptionMessage2 = null;
        try {
            strV = q.V(file);
        } catch (Exception e2) {
            this.mErrorMessage += e2 + "\n";
            strV = null;
        }
        if (strV != null) {
            try {
                javaExceptionMessage = new JavaExceptionMessage();
                try {
                    javaExceptionMessage.parseJson(new JSONObject(strV));
                } catch (Exception e3) {
                    e = e3;
                    this.mErrorMessage += e + "\n";
                }
            } catch (Exception e4) {
                javaExceptionMessage = null;
                e = e4;
            }
            javaExceptionMessage2 = javaExceptionMessage;
        }
        if (javaExceptionMessage2 == null) {
            javaExceptionMessage2 = new JavaExceptionMessage();
            if (!TextUtils.isEmpty(strV)) {
                javaExceptionMessage2.mCrashDetail = strV;
            }
        }
        try {
            javaExceptionMessage2.mLogUUID = com.kwad.sdk.crash.utils.g.eR(file.getName());
            new StringBuilder("------ Java Crash Report Begin ------\n").append(javaExceptionMessage2);
            a(new File(str + ".jtrace"), javaExceptionMessage2);
            b(file3, javaExceptionMessage2);
            com.kwad.sdk.crash.utils.g.a(file, javaExceptionMessage2.toString());
            com.kwad.sdk.crash.utils.g.d(file3, file);
            file.renameTo(file3);
            javaExceptionMessage2.mDumpsys = q.V(new File(str + ".minfo"));
        } catch (Throwable th) {
            this.mErrorMessage += th + "\n";
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        if (!TextUtils.isEmpty(this.mErrorMessage)) {
            javaExceptionMessage2.mErrorMessage += this.mErrorMessage;
        }
        return javaExceptionMessage2;
    }
}
