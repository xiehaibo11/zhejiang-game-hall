package cz.msebera.android.httpclient;

public interface HeaderElementIterator extends java.util.Iterator<java.lang.Object> {
    @Override
    boolean hasNext();

    cz.msebera.android.httpclient.HeaderElement nextElement();
}
