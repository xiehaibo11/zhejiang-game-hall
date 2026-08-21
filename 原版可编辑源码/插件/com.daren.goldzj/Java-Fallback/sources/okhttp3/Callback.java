package okhttp3;

import java.io.IOException;

public interface Callback {
    void onFailure(Call r1, IOException r2);

    void onResponse(Call r1, Response r2) throws IOException;
}
