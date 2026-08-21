package cz.msebera.android.httpclient.impl.auth;

@java.lang.Deprecated
public interface SpnegoTokenGenerator {
    byte[] generateSpnegoDERObject(byte[] r1) throws java.io.IOException;
}
