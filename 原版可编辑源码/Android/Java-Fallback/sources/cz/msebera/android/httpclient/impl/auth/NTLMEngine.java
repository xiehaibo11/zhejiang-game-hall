package cz.msebera.android.httpclient.impl.auth;

public interface NTLMEngine {
    java.lang.String generateType1Msg(java.lang.String r1, java.lang.String r2) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException;

    java.lang.String generateType3Msg(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) throws cz.msebera.android.httpclient.impl.auth.NTLMEngineException;
}
