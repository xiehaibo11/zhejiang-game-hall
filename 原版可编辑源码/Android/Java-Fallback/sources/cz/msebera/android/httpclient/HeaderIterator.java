package cz.msebera.android.httpclient;

public interface HeaderIterator extends java.util.Iterator<java.lang.Object> {
    @Override
    boolean hasNext();

    cz.msebera.android.httpclient.Header nextHeader();
}
