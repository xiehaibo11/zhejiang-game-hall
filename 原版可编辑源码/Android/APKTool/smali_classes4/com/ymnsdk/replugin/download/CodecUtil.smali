.class public Lcom/ymnsdk/replugin/download/CodecUtil;
.super Ljava/lang/Object;
.source "CodecUtil.java"


# static fields
.field private static MD5:Ljava/security/MessageDigest;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    :try_start_0
    const-string v0, "MD5"

    .line 16
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    sput-object v0, Lcom/ymnsdk/replugin/download/CodecUtil;->MD5:Ljava/security/MessageDigest;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 18
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static md5File(Ljava/io/File;)Ljava/lang/String;
    .locals 4

    .line 32
    :try_start_0
    new-instance v0, Ljava/io/FileInputStream;

    invoke-direct {v0, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    const/16 p0, 0x2000

    :try_start_1
    new-array p0, p0, [B

    .line 35
    :goto_0
    invoke-virtual {v0, p0}, Ljava/io/FileInputStream;->read([B)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 36
    sget-object v2, Lcom/ymnsdk/replugin/download/CodecUtil;->MD5:Ljava/security/MessageDigest;

    const/4 v3, 0x0

    invoke-virtual {v2, p0, v3, v1}, Ljava/security/MessageDigest;->update([BII)V

    goto :goto_0

    .line 38
    :cond_0
    new-instance p0, Ljava/lang/String;

    sget-object v1, Lcom/ymnsdk/replugin/download/CodecUtil;->MD5:Ljava/security/MessageDigest;

    invoke-virtual {v1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object v1

    invoke-static {v1}, Lorg/apache/commons/codec1/binary/Hex;->encodeHex([B)[C

    move-result-object v1

    invoke-direct {p0, v1}, Ljava/lang/String;-><init>([C)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 39
    :try_start_2
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 32
    :try_start_3
    throw p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v1

    .line 39
    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v0

    :try_start_5
    invoke-virtual {p0, v0}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_1
    throw v1
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_0

    :catch_0
    move-exception p0

    .line 40
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static md5File(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 23
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/ymnsdk/replugin/download/CodecUtil;->md5File(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
