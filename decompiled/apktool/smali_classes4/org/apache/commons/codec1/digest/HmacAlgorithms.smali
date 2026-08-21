.class public final enum Lorg/apache/commons/codec1/digest/HmacAlgorithms;
.super Ljava/lang/Enum;
.source "HmacAlgorithms.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lorg/apache/commons/codec1/digest/HmacAlgorithms;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic ENUM$VALUES:[Lorg/apache/commons/codec1/digest/HmacAlgorithms;

.field public static final enum HMAC_MD5:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

.field public static final enum HMAC_SHA_1:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

.field public static final enum HMAC_SHA_256:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

.field public static final enum HMAC_SHA_384:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

.field public static final enum HMAC_SHA_512:Lorg/apache/commons/codec1/digest/HmacAlgorithms;


# instance fields
.field private final algorithm:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 35
    new-instance v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v1, 0x0

    const-string v2, "HMAC_MD5"

    const-string v3, "HmacMD5"

    .line 41
    invoke-direct {v0, v2, v1, v3}, Lorg/apache/commons/codec1/digest/HmacAlgorithms;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_MD5:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    .line 43
    new-instance v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v2, 0x1

    const-string v3, "HMAC_SHA_1"

    const-string v4, "HmacSHA1"

    .line 49
    invoke-direct {v0, v3, v2, v4}, Lorg/apache/commons/codec1/digest/HmacAlgorithms;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_1:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    .line 51
    new-instance v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v3, 0x2

    const-string v4, "HMAC_SHA_256"

    const-string v5, "HmacSHA256"

    .line 57
    invoke-direct {v0, v4, v3, v5}, Lorg/apache/commons/codec1/digest/HmacAlgorithms;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_256:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    .line 59
    new-instance v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v4, 0x3

    const-string v5, "HMAC_SHA_384"

    const-string v6, "HmacSHA384"

    .line 65
    invoke-direct {v0, v5, v4, v6}, Lorg/apache/commons/codec1/digest/HmacAlgorithms;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_384:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    .line 67
    new-instance v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v5, 0x4

    const-string v6, "HMAC_SHA_512"

    const-string v7, "HmacSHA512"

    .line 73
    invoke-direct {v0, v6, v5, v7}, Lorg/apache/commons/codec1/digest/HmacAlgorithms;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_512:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v6, 0x5

    new-array v6, v6, [Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    .line 33
    sget-object v7, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_MD5:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    aput-object v7, v6, v1

    sget-object v1, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_1:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    aput-object v1, v6, v2

    sget-object v1, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_256:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    aput-object v1, v6, v3

    sget-object v1, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->HMAC_SHA_384:Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->ENUM$VALUES:[Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0

    .line 77
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 78
    iput-object p3, p0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->algorithm:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lorg/apache/commons/codec1/digest/HmacAlgorithms;
    .locals 1

    .line 1
    const-class v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    return-object p0
.end method

.method public static values()[Lorg/apache/commons/codec1/digest/HmacAlgorithms;
    .locals 4

    .line 1
    sget-object v0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->ENUM$VALUES:[Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    array-length v1, v0

    new-array v2, v1, [Lorg/apache/commons/codec1/digest/HmacAlgorithms;

    const/4 v3, 0x0

    invoke-static {v0, v3, v2, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v2
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 91
    iget-object v0, p0, Lorg/apache/commons/codec1/digest/HmacAlgorithms;->algorithm:Ljava/lang/String;

    return-object v0
.end method
