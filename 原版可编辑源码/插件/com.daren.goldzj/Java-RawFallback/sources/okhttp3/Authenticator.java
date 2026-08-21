package okhttp3;

public interface Authenticator {
    public static final okhttp3.Authenticator NONE = null;


    static {
            okhttp3.Authenticator$1 r0 = new okhttp3.Authenticator$1
            r0.<init>()
            okhttp3.Authenticator.NONE = r0
            return
    }

    @javax.annotation.Nullable
    okhttp3.Request authenticate(@javax.annotation.Nullable okhttp3.Route r1, okhttp3.Response r2) throws java.io.IOException;
}
