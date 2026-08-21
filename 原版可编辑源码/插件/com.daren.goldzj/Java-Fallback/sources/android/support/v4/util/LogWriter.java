package android.support.v4.util;

import android.support.annotation.RestrictTo;
import android.util.Log;
import java.io.Writer;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class LogWriter extends Writer {
    private StringBuilder mBuilder;
    private final String mTag;

    public LogWriter(String r3) {
        this.mBuilder = new StringBuilder(128);
        this.mTag = r3;
    }

    @Override
    public void close() {
        flushBuilder();
    }

    @Override
    public void flush() {
        flushBuilder();
    }

    @Override
    public void write(char[] r4, int r5, int r6) {
        int r0 = 0;
    L3:
        if (r0 >= r6) goto L9;
        char r1 = r4[r5 + r0];
        if (r1 != '\n') goto L7;
        flushBuilder();
    L8:
        r0 = r0 + 1;
        goto L3
    L7:
        this.mBuilder.append(r1);
        goto L8
    }

    private void flushBuilder() {
        if (this.mBuilder.length() <= 0) goto L6;
        Log.d(this.mTag, this.mBuilder.toString());
        StringBuilder r0 = this.mBuilder;
        r0.delete(0, r0.length());
        return;
    }
}
