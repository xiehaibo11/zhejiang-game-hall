package cz.msebera.android.httpclient.client.entity;

import cz.msebera.android.httpclient.HttpEntity;
import java.io.IOException;
import java.io.InputStream;

public class DeflateDecompressingEntity extends DecompressingEntity {
    public DeflateDecompressingEntity(HttpEntity httpEntity) {
        super(httpEntity, new InputStreamFactory() {
            @Override
            public InputStream create(InputStream inputStream) throws IOException {
                return new DeflateInputStream(inputStream);
            }
        });
    }
}
