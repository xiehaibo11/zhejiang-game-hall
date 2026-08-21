package com.ss.android.socialbase.downloader.utils;

public class DownloadHttpUtils {
    public DownloadHttpUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String httpCodeToMessage(int r1) {
            r0 = 449(0x1c1, float:6.29E-43)
            if (r1 == r0) goto Ld1
            r0 = 451(0x1c3, float:6.32E-43)
            if (r1 == r0) goto Lce
            r0 = 600(0x258, float:8.41E-43)
            if (r1 == r0) goto Lcb
            r0 = 509(0x1fd, float:7.13E-43)
            if (r1 == r0) goto Lc8
            r0 = 510(0x1fe, float:7.15E-43)
            if (r1 == r0) goto Lc5
            switch(r1) {
                case 100: goto Lc2;
                case 101: goto Lbf;
                case 102: goto Lbc;
                default: goto L17;
            }
        L17:
            switch(r1) {
                case 200: goto Lb9;
                case 201: goto Lb6;
                case 202: goto Lb3;
                case 203: goto Lb0;
                case 204: goto Lad;
                case 205: goto Laa;
                case 206: goto La7;
                case 207: goto La4;
                default: goto L1a;
            }
        L1a:
            switch(r1) {
                case 300: goto La1;
                case 301: goto L9e;
                case 302: goto L9b;
                case 303: goto L98;
                case 304: goto L95;
                case 305: goto L92;
                case 306: goto L8f;
                case 307: goto L8c;
                default: goto L1d;
            }
        L1d:
            switch(r1) {
                case 400: goto L89;
                case 401: goto L86;
                case 402: goto L83;
                case 403: goto L80;
                case 404: goto L7d;
                case 405: goto L7a;
                case 406: goto L77;
                case 407: goto L74;
                case 408: goto L71;
                case 409: goto L6e;
                case 410: goto L6b;
                case 411: goto L68;
                case 412: goto L65;
                case 413: goto L62;
                case 414: goto L5f;
                case 415: goto L5c;
                case 416: goto L59;
                case 417: goto L56;
                case 418: goto L53;
                default: goto L20;
            }
        L20:
            switch(r1) {
                case 421: goto L50;
                case 422: goto L4d;
                case 423: goto L4a;
                case 424: goto L47;
                case 425: goto L44;
                case 426: goto L41;
                default: goto L23;
            }
        L23:
            switch(r1) {
                case 500: goto L3e;
                case 501: goto L3b;
                case 502: goto L38;
                case 503: goto L35;
                case 504: goto L32;
                case 505: goto L2f;
                case 506: goto L2c;
                case 507: goto L29;
                default: goto L26;
            }
        L26:
            java.lang.String r1 = ""
            return r1
        L29:
            java.lang.String r1 = "Insufficient Storage"
            return r1
        L2c:
            java.lang.String r1 = "Variant Also Negotiates"
            return r1
        L2f:
            java.lang.String r1 = "HTTP Version Not Supported"
            return r1
        L32:
            java.lang.String r1 = "Gateway Timeout"
            return r1
        L35:
            java.lang.String r1 = "Service Unavailable"
            return r1
        L38:
            java.lang.String r1 = "Bad Gateway"
            return r1
        L3b:
            java.lang.String r1 = "Not Implemented"
            return r1
        L3e:
            java.lang.String r1 = "Internal Server Error"
            return r1
        L41:
            java.lang.String r1 = "Upgrade Required"
            return r1
        L44:
            java.lang.String r1 = "Unordered Collection"
            return r1
        L47:
            java.lang.String r1 = "Failed Dependency"
            return r1
        L4a:
            java.lang.String r1 = "Locked"
            return r1
        L4d:
            java.lang.String r1 = "Unprocessable Entity"
            return r1
        L50:
            java.lang.String r1 = "Too Many Connections"
            return r1
        L53:
            java.lang.String r1 = "I'm a teapot"
            return r1
        L56:
            java.lang.String r1 = "Expectation Failed"
            return r1
        L59:
            java.lang.String r1 = "Requested Range Not Satisfiable"
            return r1
        L5c:
            java.lang.String r1 = "Unsupported Media Type"
            return r1
        L5f:
            java.lang.String r1 = "Request-URI Too Long"
            return r1
        L62:
            java.lang.String r1 = "Request Entity Too Large"
            return r1
        L65:
            java.lang.String r1 = "Precondition Failed"
            return r1
        L68:
            java.lang.String r1 = "Length Required"
            return r1
        L6b:
            java.lang.String r1 = "Gone"
            return r1
        L6e:
            java.lang.String r1 = "Conflict"
            return r1
        L71:
            java.lang.String r1 = "Request Timeout"
            return r1
        L74:
            java.lang.String r1 = "Proxy Authentication Required"
            return r1
        L77:
            java.lang.String r1 = "Not Acceptable"
            return r1
        L7a:
            java.lang.String r1 = "Method Not Allowed"
            return r1
        L7d:
            java.lang.String r1 = "Not Found"
            return r1
        L80:
            java.lang.String r1 = "Forbidden"
            return r1
        L83:
            java.lang.String r1 = "Payment Required"
            return r1
        L86:
            java.lang.String r1 = "Unauthorized"
            return r1
        L89:
            java.lang.String r1 = "Bad Request"
            return r1
        L8c:
            java.lang.String r1 = "Temporary Redirect"
            return r1
        L8f:
            java.lang.String r1 = "Switch Proxy"
            return r1
        L92:
            java.lang.String r1 = "Use Proxy"
            return r1
        L95:
            java.lang.String r1 = "Not Modified"
            return r1
        L98:
            java.lang.String r1 = "See Other"
            return r1
        L9b:
            java.lang.String r1 = "Move Temporarily"
            return r1
        L9e:
            java.lang.String r1 = "Moved Permanently"
            return r1
        La1:
            java.lang.String r1 = "Multiple Choices"
            return r1
        La4:
            java.lang.String r1 = "Multi-Status"
            return r1
        La7:
            java.lang.String r1 = "Partial Content"
            return r1
        Laa:
            java.lang.String r1 = "Reset Content"
            return r1
        Lad:
            java.lang.String r1 = "No Content"
            return r1
        Lb0:
            java.lang.String r1 = "Non-Authoritative Information"
            return r1
        Lb3:
            java.lang.String r1 = "Accepted"
            return r1
        Lb6:
            java.lang.String r1 = "Created"
            return r1
        Lb9:
            java.lang.String r1 = "OK"
            return r1
        Lbc:
            java.lang.String r1 = "Processing"
            return r1
        Lbf:
            java.lang.String r1 = "Switching Protocols"
            return r1
        Lc2:
            java.lang.String r1 = "Continue"
            return r1
        Lc5:
            java.lang.String r1 = "Not Extended"
            return r1
        Lc8:
            java.lang.String r1 = "Bandwidth Limit Exceeded"
            return r1
        Lcb:
            java.lang.String r1 = "Unparseable Response Headers"
            return r1
        Lce:
            java.lang.String r1 = "Unavailable For Legal Reasons"
            return r1
        Ld1:
            java.lang.String r1 = "Retry With"
            return r1
    }
}
