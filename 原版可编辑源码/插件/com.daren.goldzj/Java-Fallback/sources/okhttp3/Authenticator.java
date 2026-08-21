package okhttp3;

import java.io.IOException;
import javax.annotation.Nullable;

public interface Authenticator {
    public static final Authenticator NONE = null;

    @Nullable
    Request authenticate(@Nullable Route r1, Response r2) throws IOException;

    static {
        NONE = new 1();
    }
}
