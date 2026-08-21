.class public Lcom/tkay/expressad/foundation/h/l;
.super Ljava/lang/Object;


# static fields
.field protected static a:[C = null

.field protected static b:Ljava/security/MessageDigest; = null

.field private static c:Ljava/lang/String; = "SameFileMD5"


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const/16 v0, 0x10

    new-array v0, v0, [C

    .line 13
    fill-array-data v0, :array_0

    sput-object v0, Lcom/tkay/expressad/foundation/h/l;->a:[C

    const/4 v0, 0x0

    .line 15
    sput-object v0, Lcom/tkay/expressad/foundation/h/l;->b:Ljava/security/MessageDigest;

    :try_start_0
    const-string v0, "MD5"

    .line 18
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/h/l;->b:Ljava/security/MessageDigest;
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 20
    sget-object v1, Ljava/lang/System;->err:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-class v3, Lcom/tkay/expressad/foundation/h/l;

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Init fail,MessageDigest not support MD5Util."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 22
    invoke-virtual {v0}, Ljava/security/NoSuchAlgorithmException;->printStackTrace()V

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

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/io/File;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    .line 50
    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 51
    :try_start_1
    invoke-virtual {v1}, Ljava/io/FileInputStream;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v2

    .line 52
    sget-object v3, Ljava/nio/channels/FileChannel$MapMode;->READ_ONLY:Ljava/nio/channels/FileChannel$MapMode;

    const-wide/16 v4, 0x0

    invoke-virtual {p0}, Ljava/io/File;->length()J

    move-result-wide v6

    invoke-virtual/range {v2 .. v7}, Ljava/nio/channels/FileChannel;->map(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;

    move-result-object p0

    .line 53
    sget-object v0, Lcom/tkay/expressad/foundation/h/l;->b:Ljava/security/MessageDigest;

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->update(Ljava/nio/ByteBuffer;)V

    .line 54
    sget-object p0, Lcom/tkay/expressad/foundation/h/l;->b:Ljava/security/MessageDigest;

    invoke-virtual {p0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0

    .line 1067
    array-length v0, p0

    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/h/l;->a([BI)Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 59
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_0
    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_0
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V

    .line 61
    :cond_0
    throw p0

    :catch_1
    :goto_1
    if-eqz v0, :cond_1

    .line 59
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V

    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 35
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 36
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/l;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([B)Ljava/lang/String;
    .locals 1

    .line 67
    array-length v0, p0

    invoke-static {p0, v0}, Lcom/tkay/expressad/foundation/h/l;->a([BI)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([BI)Ljava/lang/String;
    .locals 3

    .line 71
    new-instance v0, Ljava/lang/StringBuffer;

    mul-int/lit8 v1, p1, 0x2

    invoke-direct {v0, v1}, Ljava/lang/StringBuffer;-><init>(I)V

    const/4 v1, 0x0

    add-int/2addr p1, v1

    :goto_0
    if-ge v1, p1, :cond_0

    .line 74
    aget-byte v2, p0, v1

    invoke-static {v2, v0}, Lcom/tkay/expressad/foundation/h/l;->a(BLjava/lang/StringBuffer;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 76
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(BLjava/lang/StringBuffer;)V
    .locals 2

    .line 80
    sget-object v0, Lcom/tkay/expressad/foundation/h/l;->a:[C

    and-int/lit16 v1, p0, 0xf0

    shr-int/lit8 v1, v1, 0x4

    aget-char v1, v0, v1

    and-int/lit8 p0, p0, 0xf

    .line 81
    aget-char p0, v0, p0

    .line 82
    invoke-virtual {p1, v1}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    .line 83
    invoke-virtual {p1, p0}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    return-void
.end method
