.class public Lcom/qihoo360/replugin/utils/basic/SecurityUtil;
.super Ljava/lang/Object;
.source "SecurityUtil.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static MD5(Ljava/io/File;)[B
    .locals 2

    const/4 v0, 0x0

    .line 138
    :try_start_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/FileUtils;->openInputStream(Ljava/io/File;)Ljava/io/FileInputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 139
    :try_start_1
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5(Ljava/io/InputStream;)[B

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 143
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catchall_1
    move-exception p0

    move-object v1, v0

    move-object v0, p0

    move-object p0, v1

    :goto_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw v0

    :catch_0
    move-object p0, v0

    :catch_1
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0
.end method

.method public static final MD5(Ljava/io/InputStream;)[B
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/security/NoSuchAlgorithmException;,
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "MD5"

    .line 150
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    const/16 v1, 0x1000

    new-array v1, v1, [B

    .line 153
    :cond_0
    :goto_0
    invoke-virtual {p0, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    if-ltz v2, :cond_1

    if-lez v2, :cond_0

    const/4 v3, 0x0

    .line 155
    invoke-virtual {v0, v1, v3, v2}, Ljava/security/MessageDigest;->update([BII)V

    goto :goto_0

    .line 158
    :cond_1
    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    return-object p0
.end method

.method public static MD5(Ljava/lang/String;)[B
    .locals 1

    .line 132
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5(Ljava/io/File;)[B

    move-result-object p0

    return-object p0
.end method

.method public static MD5([B)[B
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "MD5"

    .line 39
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 41
    invoke-virtual {v1}, Ljava/security/NoSuchAlgorithmException;->printStackTrace()V

    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_0

    .line 44
    invoke-virtual {v1, p0}, Ljava/security/MessageDigest;->update([B)V

    .line 45
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    return-object p0

    :cond_0
    return-object v0
.end method

.method public static getFileMD5(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 64
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5(Ljava/lang/String;)[B

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 68
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/ByteConvertor;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getMD5(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "MD5"

    .line 103
    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 104
    new-instance v2, Ljava/io/BufferedInputStream;

    invoke-direct {v2, p0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 p0, 0x400

    :try_start_1
    new-array p0, p0, [B

    .line 108
    :goto_0
    invoke-virtual {v2, p0}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    const/4 v4, 0x0

    .line 109
    invoke-virtual {v1, p0, v4, v3}, Ljava/security/MessageDigest;->update([BII)V

    goto :goto_0

    .line 111
    :cond_0
    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 117
    :try_start_2
    invoke-virtual {v2}, Ljava/io/BufferedInputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v0, v2

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_1
    if-eqz v0, :cond_1

    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedInputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    .line 120
    :catch_0
    :cond_1
    throw p0

    :catch_1
    move-object v2, v0

    :catch_2
    if-eqz v2, :cond_2

    .line 117
    :try_start_4
    invoke-virtual {v2}, Ljava/io/BufferedInputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :catch_3
    :cond_2
    move-object p0, v0

    :catch_4
    :goto_2
    if-nez p0, :cond_3

    return-object v0

    .line 126
    :cond_3
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/ByteConvertor;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getMD5(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    .line 59
    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->getMD5([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getMD5([B)Ljava/lang/String;
    .locals 0

    .line 52
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5([B)[B

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/ByteConvertor;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getMd5ByFile(Ljava/io/File;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    .line 76
    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 77
    :try_start_1
    invoke-virtual {v1}, Ljava/io/FileInputStream;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v2

    sget-object v3, Ljava/nio/channels/FileChannel$MapMode;->READ_ONLY:Ljava/nio/channels/FileChannel$MapMode;

    const-wide/16 v4, 0x0

    invoke-virtual {p0}, Ljava/io/File;->length()J

    move-result-wide v6

    invoke-virtual/range {v2 .. v7}, Ljava/nio/channels/FileChannel;->map(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;

    move-result-object p0

    const-string v2, "MD5"

    .line 78
    invoke-static {v2}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v2

    .line 79
    invoke-virtual {v2, p0}, Ljava/security/MessageDigest;->update(Ljava/nio/ByteBuffer;)V

    .line 80
    invoke-virtual {v2}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 86
    :try_start_2
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 88
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_2

    :catch_1
    move-exception p0

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_3

    :catch_2
    move-exception p0

    move-object v1, v0

    .line 82
    :goto_0
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_0

    .line 86
    :try_start_4
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_1

    :catch_3
    move-exception p0

    .line 88
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_1
    move-object p0, v0

    :goto_2
    if-nez p0, :cond_1

    return-object v0

    .line 95
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/ByteConvertor;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :catchall_1
    move-exception p0

    move-object v0, v1

    :goto_3
    if-eqz v0, :cond_2

    .line 86
    :try_start_5
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_4

    :catch_4
    move-exception v0

    .line 88
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 89
    :cond_2
    :goto_4
    throw p0
.end method
