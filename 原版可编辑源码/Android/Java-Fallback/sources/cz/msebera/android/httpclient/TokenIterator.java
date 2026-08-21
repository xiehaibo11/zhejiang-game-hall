package cz.msebera.android.httpclient;

public interface TokenIterator extends java.util.Iterator<java.lang.Object> {
    @Override
    boolean hasNext();

    java.lang.String nextToken();
}
