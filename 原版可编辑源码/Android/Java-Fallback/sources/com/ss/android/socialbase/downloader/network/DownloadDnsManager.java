package com.ss.android.socialbase.downloader.network;

public class DownloadDnsManager {
    private final com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager.DnsRecord> cache;
    private final android.os.Handler cpuHandler;
    private final android.os.Handler networkHandler;



    public interface Callback {
        void onDnsResolved(java.lang.String r1, java.util.List<java.net.InetAddress> r2);
    }

    private static class DnsRecord {
        long timestamp;
        java.util.List<java.net.InetAddress> value;

        private DnsRecord() {
                r0 = this;
                r0.<init>()
                return
        }

        DnsRecord(com.ss.android.socialbase.downloader.network.DownloadDnsManager.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class Holder {
        private static final com.ss.android.socialbase.downloader.network.DownloadDnsManager INSTANCE = null;

        static {
                com.ss.android.socialbase.downloader.network.DownloadDnsManager r0 = new com.ss.android.socialbase.downloader.network.DownloadDnsManager
                r1 = 0
                r0.<init>(r1)
                com.ss.android.socialbase.downloader.network.DownloadDnsManager.Holder.INSTANCE = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ss.android.socialbase.downloader.network.DownloadDnsManager access$100() {
                com.ss.android.socialbase.downloader.network.DownloadDnsManager r0 = com.ss.android.socialbase.downloader.network.DownloadDnsManager.Holder.INSTANCE
                return r0
        }
    }

    private DownloadDnsManager() {
            r4 = this;
            r4.<init>()
            com.ss.android.socialbase.downloader.utils.LruCache r0 = new com.ss.android.socialbase.downloader.utils.LruCache
            r1 = 4
            r2 = 16
            r3 = 0
            r0.<init>(r1, r2, r3)
            r4.cache = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.getLooper()
            r0.<init>(r1)
            r4.networkHandler = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = com.ss.android.socialbase.downloader.thread.DownloadWatchDog.getThreadLooper()
            r0.<init>(r1)
            r4.cpuHandler = r0
            return
    }

    DownloadDnsManager(com.ss.android.socialbase.downloader.network.DownloadDnsManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$200(com.ss.android.socialbase.downloader.network.DownloadDnsManager r0, java.lang.String r1, com.ss.android.socialbase.downloader.network.DownloadDnsManager.Callback r2, long r3) {
            r0.resolveDns(r1, r2, r3)
            return
    }

    public static com.ss.android.socialbase.downloader.network.DownloadDnsManager getInstance() {
            com.ss.android.socialbase.downloader.network.DownloadDnsManager r0 = com.ss.android.socialbase.downloader.network.DownloadDnsManager.Holder.access$100()
            return r0
    }

    private void resolveDns(java.lang.String r8, com.ss.android.socialbase.downloader.network.DownloadDnsManager.Callback r9, long r10) {
            r7 = this;
            android.net.Uri r0 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.getHost()     // Catch: java.lang.Throwable -> L95
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord> r1 = r7.cache     // Catch: java.lang.Throwable -> L95
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L95
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord> r2 = r7.cache     // Catch: java.lang.Throwable -> L92
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L92
            com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord r2 = (com.ss.android.socialbase.downloader.network.DownloadDnsManager.DnsRecord) r2     // Catch: java.lang.Throwable -> L92
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L92
            if (r2 == 0) goto L3a
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = "dns_expire_min"
            r4 = 10
            int r1 = r1.optInt(r3, r4)     // Catch: java.lang.Throwable -> L95
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L95
            long r5 = r2.timestamp     // Catch: java.lang.Throwable -> L95
            long r3 = r3 - r5
            int r1 = r1 * 60
            int r1 = r1 * 1000
            long r5 = (long) r1     // Catch: java.lang.Throwable -> L95
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 >= 0) goto L3a
            if (r9 == 0) goto L39
            java.util.List<java.net.InetAddress> r10 = r2.value     // Catch: java.lang.Throwable -> L95
            r9.onDnsResolved(r8, r10)     // Catch: java.lang.Throwable -> L95
        L39:
            return
        L3a:
            com.ss.android.socialbase.downloader.network.DownloadDnsManager$2 r1 = new com.ss.android.socialbase.downloader.network.DownloadDnsManager$2     // Catch: java.lang.Throwable -> L95
            r1.<init>(r7, r9, r8, r2)     // Catch: java.lang.Throwable -> L95
            android.os.Handler r3 = r7.cpuHandler     // Catch: java.lang.Throwable -> L95
            r3.postDelayed(r1, r10)     // Catch: java.lang.Throwable -> L95
            r10 = 0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r11 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = "use_host_dns"
            r4 = 1
            int r11 = r11.optInt(r3, r4)     // Catch: java.lang.Throwable -> L95
            if (r11 != r4) goto L61
            com.ss.android.socialbase.downloader.network.IDownloadDns r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadDns()     // Catch: java.lang.Throwable -> L95
            if (r11 == 0) goto L61
            java.util.List r10 = r11.lookup(r0)     // Catch: java.lang.Throwable -> L5d
            goto L61
        L5d:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L95
        L61:
            if (r10 == 0) goto L69
            boolean r11 = r10.isEmpty()     // Catch: java.lang.Throwable -> L95
            if (r11 == 0) goto L76
        L69:
            com.ss.android.socialbase.downloader.network.IDownloadDns r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDefaultDownloadDns()     // Catch: java.lang.Throwable -> L95
            java.util.List r10 = r11.lookup(r0)     // Catch: java.lang.Throwable -> L72
            goto L76
        L72:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L95
        L76:
            if (r10 == 0) goto L83
            boolean r11 = r10.isEmpty()     // Catch: java.lang.Throwable -> L95
            if (r11 == 0) goto L7f
            goto L83
        L7f:
            r7.updateIpAddressToCache(r0, r10)     // Catch: java.lang.Throwable -> L95
            goto L87
        L83:
            if (r2 == 0) goto L87
            java.util.List<java.net.InetAddress> r10 = r2.value     // Catch: java.lang.Throwable -> L95
        L87:
            android.os.Handler r11 = r7.cpuHandler     // Catch: java.lang.Throwable -> L95
            r11.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L95
            if (r9 == 0) goto L99
            r9.onDnsResolved(r8, r10)     // Catch: java.lang.Throwable -> L95
            goto L99
        L92:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L92
            throw r8     // Catch: java.lang.Throwable -> L95
        L95:
            r8 = move-exception
            r8.printStackTrace()
        L99:
            return
    }

    private void updateIpAddressToCache(java.lang.String r4, java.util.List<java.net.InetAddress> r5) {
            r3 = this;
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord> r0 = r3.cache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord> r1 = r3.cache     // Catch: java.lang.Throwable -> L22
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord r1 = (com.ss.android.socialbase.downloader.network.DownloadDnsManager.DnsRecord) r1     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L18
            com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord r1 = new com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord     // Catch: java.lang.Throwable -> L22
            r2 = 0
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, com.ss.android.socialbase.downloader.network.DownloadDnsManager$DnsRecord> r2 = r3.cache     // Catch: java.lang.Throwable -> L22
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L22
        L18:
            r1.value = r5     // Catch: java.lang.Throwable -> L22
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L22
            r1.timestamp = r4     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r4
    }

    public void resolveDnsAsync(java.lang.String r9, com.ss.android.socialbase.downloader.network.DownloadDnsManager.Callback r10, long r11) {
            r8 = this;
            android.os.Handler r0 = r8.networkHandler
            com.ss.android.socialbase.downloader.network.DownloadDnsManager$1 r7 = new com.ss.android.socialbase.downloader.network.DownloadDnsManager$1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5)
            r0.post(r7)
            return
    }
}
