package android.support.v4.net;

import java.io.FileDescriptor;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.Socket;
import java.net.SocketAddress;
import java.net.SocketException;
import java.net.SocketImpl;

class DatagramSocketWrapper extends Socket {

    private static class DatagramSocketImplWrapper extends SocketImpl {
        DatagramSocketImplWrapper(DatagramSocket r1, FileDescriptor r2) {
            this.localport = r1.getLocalPort();
            this.fd = r2;
        }

        @Override
        protected void accept(SocketImpl r1) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected int available() throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void bind(InetAddress r1, int r2) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void close() throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void connect(String r1, int r2) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void connect(InetAddress r1, int r2) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void create(boolean r1) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected InputStream getInputStream() throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected OutputStream getOutputStream() throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void listen(int r1) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void connect(SocketAddress r1, int r2) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        protected void sendUrgentData(int r1) throws IOException {
            throw new UnsupportedOperationException();
        }

        @Override
        public Object getOption(int r1) throws SocketException {
            throw new UnsupportedOperationException();
        }

        @Override
        public void setOption(int r1, Object r2) throws SocketException {
            throw new UnsupportedOperationException();
        }
    }

    DatagramSocketWrapper(DatagramSocket r2, FileDescriptor r3) throws SocketException {
        super(new DatagramSocketImplWrapper(r2, r3));
    }
}
