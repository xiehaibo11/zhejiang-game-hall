.class public final Lcom/bytedance/pangle/util/f;
.super Ljava/lang/Object;


# static fields
.field public static a:Ljava/lang/String; = "DES/ECB/NoPadding"

.field public static b:Ljava/lang/String; = "DESede/ECB/NoPadding"

.field private static final c:[C


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x10

    new-array v0, v0, [C

    .line 713
    fill-array-data v0, :array_0

    sput-object v0, Lcom/bytedance/pangle/util/f;->c:[C

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
        0x41s
        0x42s
        0x43s
        0x44s
        0x45s
        0x46s
    .end array-data
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 43
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const-string v0, "MD5"

    .line 1089
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/f;->a([BLjava/lang/String;)[B

    move-result-object p0

    .line 1064
    invoke-static {p0}, Lcom/bytedance/pangle/util/f;->b([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a([B)Ljava/lang/String;
    .locals 1

    const-string v0, "MD5"

    .line 2089
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/f;->a([BLjava/lang/String;)[B

    move-result-object p0

    .line 64
    invoke-static {p0}, Lcom/bytedance/pangle/util/f;->b([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([BLjava/lang/String;)[B
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 310
    array-length v1, p0

    if-gtz v1, :cond_0

    goto :goto_0

    .line 312
    :cond_0
    :try_start_0
    invoke-static {p1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object p1

    .line 313
    invoke-virtual {p1, p0}, Ljava/security/MessageDigest;->update([B)V

    .line 314
    invoke-virtual {p1}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 316
    invoke-virtual {p0}, Ljava/security/NoSuchAlgorithmException;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method

.method private static b([B)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 717
    :cond_0
    array-length v1, p0

    if-gtz v1, :cond_1

    return-object v0

    :cond_1
    shl-int/lit8 v0, v1, 0x1

    .line 719
    new-array v0, v0, [C

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v2, v1, :cond_2

    add-int/lit8 v4, v3, 0x1

    .line 721
    sget-object v5, Lcom/bytedance/pangle/util/f;->c:[C

    aget-byte v6, p0, v2

    ushr-int/lit8 v6, v6, 0x4

    and-int/lit8 v6, v6, 0xf

    aget-char v6, v5, v6

    aput-char v6, v0, v3

    add-int/lit8 v3, v4, 0x1

    .line 722
    aget-byte v6, p0, v2

    and-int/lit8 v6, v6, 0xf

    aget-char v5, v5, v6

    aput-char v5, v0, v4

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 724
    :cond_2
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v0}, Ljava/lang/String;-><init>([C)V

    return-object p0
.end method
