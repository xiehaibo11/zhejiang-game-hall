package cz.msebera.android.httpclient.client.entity;

import cz.msebera.android.httpclient.HttpEntity;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.GZIPInputStream;

public class GzipDecompressingEntity extends DecompressingEntity {
    public GzipDecompressingEntity(HttpEntity httpEntity) {
        super(httpEntity, new InputStreamFactory() {
            @Override
            public InputStream create(InputStream inputStream) throws IOException {
                return new GZIPInputStream(inputStream);
            }
        });
    }
}
