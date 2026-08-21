package org.cocos2dx.okhttp3.internal.cache;

import java.io.IOException;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.ForwardingSink;
import org.cocos2dx.okio.Sink;

class FaultHidingSink extends ForwardingSink {
    private boolean hasErrors;

    protected void onException(IOException r1) {
    }

    FaultHidingSink(Sink r1) {
        super(r1);
    }

    @Override
    public void write(Buffer r2, long r3) throws IOException {
        if (this.hasErrors == false) goto L11;
        r2.skip(r3);
        return;
    L11:
        super.write(r2, r3);     // Catch: IOException -> L8
        return;
    L8:
        e = move-exception;
        this.hasErrors = true;
        onException(e);
    }

    @Override
    public void flush() throws IOException {
        if (this.hasErrors == false) goto L10;
        return;
    L10:
        super.flush();     // Catch: IOException -> L7
        return;
    L7:
        e = move-exception;
        this.hasErrors = true;
        onException(e);
    }

    @Override
    public void close() throws IOException {
        if (this.hasErrors == false) goto L10;
        return;
    L10:
        super.close();     // Catch: IOException -> L7
        return;
    L7:
        e = move-exception;
        this.hasErrors = true;
        onException(e);
    }
}
