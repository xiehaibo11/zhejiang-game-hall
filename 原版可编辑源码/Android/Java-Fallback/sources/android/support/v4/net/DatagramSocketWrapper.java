package android.support.v4.net;

class DatagramSocketWrapper extends java.net.Socket {

    private static class DatagramSocketImplWrapper extends java.net.SocketImpl {
        DatagramSocketImplWrapper(java.net.DatagramSocket r1, java.io.FileDescriptor r2) {
                r0 = this;
                r0.<init>()
                int r1 = r1.getLocalPort()
                r0.localport = r1
                r0.fd = r2
                return
        }

        @Override
        protected void accept(java.net.SocketImpl r1) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected int available() throws java.io.IOException {
                r1 = this;
                java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
                r0.<init>()
                throw r0
        }

        @Override
        protected void bind(java.net.InetAddress r1, int r2) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected void close() throws java.io.IOException {
                r1 = this;
                java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
                r0.<init>()
                throw r0
        }

        @Override
        protected void connect(java.lang.String r1, int r2) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected void connect(java.net.InetAddress r1, int r2) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected void connect(java.net.SocketAddress r1, int r2) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected void create(boolean r1) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected java.io.InputStream getInputStream() throws java.io.IOException {
                r1 = this;
                java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
                r0.<init>()
                throw r0
        }

        @Override
        public java.lang.Object getOption(int r1) throws java.net.SocketException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected java.io.OutputStream getOutputStream() throws java.io.IOException {
                r1 = this;
                java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
                r0.<init>()
                throw r0
        }

        @Override
        protected void listen(int r1) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        protected void sendUrgentData(int r1) throws java.io.IOException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        public void setOption(int r1, java.lang.Object r2) throws java.net.SocketException {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }
    }

    DatagramSocketWrapper(java.net.DatagramSocket r2, java.io.FileDescriptor r3) throws java.net.SocketException {
            r1 = this;
            android.support.v4.net.DatagramSocketWrapper$DatagramSocketImplWrapper r0 = new android.support.v4.net.DatagramSocketWrapper$DatagramSocketImplWrapper
            r0.<init>(r2, r3)
            r1.<init>(r0)
            return
    }
}
