package cz.msebera.android.httpclient.impl.client;

import cz.msebera.android.httpclient.HttpEntity;
import cz.msebera.android.httpclient.HttpResponse;
import cz.msebera.android.httpclient.annotation.Immutable;
import cz.msebera.android.httpclient.util.EntityUtils;
import java.io.IOException;

@Immutable
public class BasicResponseHandler extends AbstractResponseHandler<String> {
    @Override
    public String handleEntity(HttpEntity httpEntity) throws IOException {
        return EntityUtils.toString(httpEntity);
    }

    @Override
    public String handleResponse(HttpResponse httpResponse) throws IOException {
        return (String) super.handleResponse(httpResponse);
    }
}
