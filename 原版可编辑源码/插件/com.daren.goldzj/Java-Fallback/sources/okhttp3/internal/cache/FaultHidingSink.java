package okhttp3.internal.cache;

import java.io.IOException;
import okio.Buffer;
import okio.ForwardingSink;
import okio.Sink;

class FaultHidingSink extends ForwardingSink {
    private boolean hasErrors;

    protected void onException(IOException r1) {
    }

    FaultHidingSink(Sink r1) {
        super(r1);
    }

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
