package cz.msebera.android.httpclient.impl.conn;

import cz.msebera.android.httpclient.Consts;
import cz.msebera.android.httpclient.annotation.Immutable;
import cz.msebera.android.httpclient.io.EofSensor;
import cz.msebera.android.httpclient.io.HttpTransportMetrics;
import cz.msebera.android.httpclient.io.SessionInputBuffer;
import cz.msebera.android.httpclient.util.CharArrayBuffer;
import java.io.IOException;
import org.json.HTTP;

@Immutable
@Deprecated
public class LoggingSessionInputBuffer implements SessionInputBuffer, EofSensor {
    private final String charset;
    private final EofSensor eofSensor;
    private final SessionInputBuffer in;
    private final Wire wire;

    public LoggingSessionInputBuffer(SessionInputBuffer sessionInputBuffer, Wire wire, String str) {
        this.in = sessionInputBuffer;
        this.eofSensor = sessionInputBuffer instanceof EofSensor ? (EofSensor) sessionInputBuffer : null;
        this.wire = wire;
        this.charset = str == null ? Consts.ASCII.name() : str;
    }

    public LoggingSessionInputBuffer(SessionInputBuffer sessionInputBuffer, Wire wire) {
        this(sessionInputBuffer, wire, null);
    }

    @Override
    public boolean isDataAvailable(int i) throws IOException {
        return this.in.isDataAvailable(i);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this.in.read(bArr, i, i2);
        if (this.wire.enabled() && i3 > 0) {
            this.wire.input(bArr, i, i3);
        }
        return i3;
    }

    @Override
    public int read() throws IOException {
        int i = this.in.read();
        if (this.wire.enabled() && i != -1) {
            this.wire.input(i);
        }
        return i;
    }

    @Override
    public int read(byte[] bArr) throws IOException {
        int i = this.in.read(bArr);
        if (this.wire.enabled() && i > 0) {
            this.wire.input(bArr, 0, i);
        }
        return i;
    }

    @Override
    public String readLine() throws IOException {
        String line = this.in.readLine();
        if (this.wire.enabled() && line != null) {
            this.wire.input((line + HTTP.CRLF).getBytes(this.charset));
        }
        return line;
    }

    @Override
    public int readLine(CharArrayBuffer charArrayBuffer) throws IOException {
        int line = this.in.readLine(charArrayBuffer);
        if (this.wire.enabled() && line >= 0) {
            this.wire.input((new String(charArrayBuffer.buffer(), charArrayBuffer.length() - line, line) + HTTP.CRLF).getBytes(this.charset));
        }
        return line;
    }

    @Override
    public HttpTransportMetrics getMetrics() {
        return this.in.getMetrics();
    }

    @Override
    public boolean isEof() {
        EofSensor eofSensor = this.eofSensor;
        if (eofSensor != null) {
            return eofSensor.isEof();
        }
        return false;
    }
}
