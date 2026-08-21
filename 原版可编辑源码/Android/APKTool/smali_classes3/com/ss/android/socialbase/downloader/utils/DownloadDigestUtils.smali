.class public Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;
.super Ljava/lang/Object;


# static fields
.field static final HEX_CHARS:[C


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x10

    new-array v0, v0, [C

    .line 15
    fill-array-data v0, :array_0

    sput-object v0, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->HEX_CHARS:[C

    return-void

    :array_0
    .array-data 2
        0x30s
        0x31s
        0x32s
        0x33s
        0x34s
        0x35s
        0x36s
        0x37s
        0x38s
        0x39s
        0x61s
        0x62s
        0x63s
        0x64s
        0x65s
        0x66s
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static hexStringToBytes(Ljava/lang/String;)[B
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/IllegalArgumentException;
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 63
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    rem-int/lit8 v0, v0, 0x2

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    .line 65
    invoke-virtual {p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object p0

    .line 66
    array-length v0, p0

    .line 67
    div-int/lit8 v1, v0, 0x2

    new-array v1, v1, [B

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 69
    div-int/lit8 v3, v2, 0x2

    aget-char v4, p0, v2

    const/16 v5, 0x10

    invoke-static {v4, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v4

    shl-int/lit8 v4, v4, 0x4

    add-int/lit8 v6, v2, 0x1

    aget-char v6, p0, v6

    invoke-static {v6, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v5

    add-int/2addr v4, v5

    int-to-byte v4, v4

    aput-byte v4, v1, v3

    add-int/lit8 v2, v2, 0x2

    goto :goto_0

    :cond_0
    return-object v1

    .line 64
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "hexBinary needs to be even-length: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static md5Hex(Ljava/io/File;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    const/4 v1, 0x1

    const/4 v2, 0x0

    :try_start_0
    const-string v3, "MD5"

    .line 45
    invoke-static {v3}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v3, :cond_0

    new-array p0, v1, [Ljava/io/Closeable;

    aput-object v0, p0, v2

    .line 58
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-object v0

    .line 48
    :cond_0
    :try_start_1
    new-instance v4, Ljava/io/FileInputStream;

    invoke-direct {v4, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/16 p0, 0x2000

    :try_start_2
    new-array v5, p0, [B

    .line 51
    :goto_0
    invoke-virtual {v4, v5, v2, p0}, Ljava/io/FileInputStream;->read([BII)I

    move-result v6

    if-lez v6, :cond_1

    .line 52
    invoke-virtual {v3, v5, v2, v6}, Ljava/security/MessageDigest;->update([BII)V

    goto :goto_0

    .line 54
    :cond_1
    invoke-virtual {v3}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->toHexString([B)Ljava/lang/String;

    move-result-object p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    new-array v0, v1, [Ljava/io/Closeable;

    aput-object v4, v0, v2

    .line 58
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v4

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_1
    new-array v1, v1, [Ljava/io/Closeable;

    aput-object v0, v1, v2

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    throw p0

    :catch_0
    move-object v4, v0

    :catch_1
    new-array p0, v1, [Ljava/io/Closeable;

    aput-object v4, p0, v2

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-object v0
.end method

.method public static md5Hex(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 76
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "MD5"

    .line 78
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    const-string v2, "UTF-8"

    .line 79
    invoke-virtual {p0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    .line 80
    invoke-virtual {v1, p0}, Ljava/security/MessageDigest;->update([B)V

    .line 81
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->toHexString([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_1
    :goto_0
    return-object v0
.end method

.method public static md5Hex([B)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 89
    :try_start_0
    array-length v1, p0

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "MD5"

    .line 91
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 92
    invoke-virtual {v1, p0}, Ljava/security/MessageDigest;->update([B)V

    .line 93
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->toHexString([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_1
    :goto_0
    return-object v0
.end method

.method public static md5Hex([BII)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    if-ltz p1, :cond_1

    if-lez p2, :cond_1

    add-int v1, p1, p2

    .line 101
    :try_start_0
    array-length v2, p0

    if-le v1, v2, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "MD5"

    .line 104
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 105
    invoke-virtual {v1, p0, p1, p2}, Ljava/security/MessageDigest;->update([BII)V

    .line 106
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->toHexString([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_1
    :goto_0
    return-object v0
.end method

.method public static toHexString([B)Ljava/lang/String;
    .locals 2

    if-eqz p0, :cond_0

    const/4 v0, 0x0

    .line 23
    array-length v1, p0

    invoke-static {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->toHexString([BII)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 22
    :cond_0
    new-instance p0, Ljava/lang/NullPointerException;

    const-string v0, "bytes is null"

    invoke-direct {p0, v0}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static toHexString([BII)Ljava/lang/String;
    .locals 9

    if-eqz p0, :cond_2

    if-ltz p1, :cond_1

    add-int v0, p1, p2

    .line 29
    array-length v1, p0

    if-gt v0, v1, :cond_1

    mul-int/lit8 v0, p2, 0x2

    .line 31
    new-array v1, v0, [C

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_0
    if-ge v3, p2, :cond_0

    add-int v5, v3, p1

    .line 35
    aget-byte v5, p0, v5

    and-int/lit16 v5, v5, 0xff

    add-int/lit8 v6, v4, 0x1

    .line 36
    sget-object v7, Lcom/ss/android/socialbase/downloader/utils/DownloadDigestUtils;->HEX_CHARS:[C

    shr-int/lit8 v8, v5, 0x4

    aget-char v8, v7, v8

    aput-char v8, v1, v4

    add-int/lit8 v4, v6, 0x1

    and-int/lit8 v5, v5, 0xf

    .line 37
    aget-char v5, v7, v5

    aput-char v5, v1, v6

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 39
    :cond_0
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v1, v2, v0}, Ljava/lang/String;-><init>([CII)V

    return-object p0

    .line 30
    :cond_1
    new-instance p0, Ljava/lang/IndexOutOfBoundsException;

    invoke-direct {p0}, Ljava/lang/IndexOutOfBoundsException;-><init>()V

    throw p0

    .line 28
    :cond_2
    new-instance p0, Ljava/lang/NullPointerException;

    const-string p1, "bytes is null"

    invoke-direct {p0, p1}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p0
.end method
