.class public Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;
.super Ljava/lang/Object;
.source "DecodeUtil.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public decode([B)[B
    .locals 4

    const/4 v0, 0x0

    .line 1
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 2
    aget-byte v1, p1, v0

    and-int/lit16 v2, v1, 0xdd

    and-int/lit8 v3, v1, 0x2

    shl-int/lit8 v3, v3, 0x4

    and-int/lit8 v1, v1, 0x20

    shr-int/lit8 v1, v1, 0x4

    or-int/2addr v2, v3

    or-int/2addr v1, v2

    int-to-byte v1, v1

    .line 8
    aput-byte v1, p1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-object p1
.end method
