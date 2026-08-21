package cz.msebera.android.httpclient.entity;

import com.tencent.mm.opensdk.constants.ConstantsAPI;
import cz.msebera.android.httpclient.annotation.NotThreadSafe;
import cz.msebera.android.httpclient.util.Args;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

@NotThreadSafe
public class InputStreamEntity extends AbstractHttpEntity {
    private final InputStream content;
    private final long length;

    @Override
    public boolean isRepeatable() {
        return false;
    }

    @Override
    public boolean isStreaming() {
        return true;
    }

    public InputStreamEntity(InputStream inputStream) {
        this(inputStream, -1L);
    }

    public InputStreamEntity(InputStream inputStream, long j) {
        this(inputStream, j, null);
    }

    public InputStreamEntity(InputStream inputStream, ContentType contentType) {
        this(inputStream, -1L, contentType);
    }

    public InputStreamEntity(InputStream inputStream, long j, ContentType contentType) {
        this.content = (InputStream) Args.notNull(inputStream, "Source input stream");
        this.length = j;
        if (contentType != null) {
            setContentType(contentType.toString());
        }
    }

    @Override
    public long getContentLength() {
        return this.length;
    }

    @Override
    public InputStream getContent() throws IOException {
        return this.content;
    }

    @Override
    public void writeTo(OutputStream outputStream) throws IOException {
        int i;
        Args.notNull(outputStream, "Output stream");
        InputStream inputStream = this.content;
        try {
            byte[] bArr = new byte[4096];
            if (this.length < 0) {
                while (true) {
                    int i2 = inputStream.read(bArr);
                    if (i2 == -1) {
                        break;
                    } else {
                        outputStream.write(bArr, 0, i2);
                    }
                }
            } else {
                long j = this.length;
                while (j > 0 && (i = inputStream.read(bArr, 0, (int) Math.min(ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF, j))) != -1) {
                    outputStream.write(bArr, 0, i);
                    j -= (long) i;
                }
            }
        } finally {
            inputStream.close();
        }
    }
}
