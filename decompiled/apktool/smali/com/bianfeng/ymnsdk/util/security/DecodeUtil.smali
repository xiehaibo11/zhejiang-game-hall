.class public Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;
.super Ljava/lang/Object;
.source "DecodeUtil.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public decode([B)[B
    .locals 6
    .param p1, "in"    # [B

    .line 6
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 7
    aget-byte v1, p1, v0

    .line 8
    .local v1, "b":B
    and-int/lit16 v2, v1, 0xdd

    .line 10
    .local v2, "empty":I
    and-int/lit8 v3, v1, 0x2

    shl-int/lit8 v3, v3, 0x4

    .line 11
    .local v3, "l2":I
    and-int/lit8 v4, v1, 0x20

    shr-int/lit8 v4, v4, 0x4

    .line 13
    .local v4, "h6":I
    or-int v5, v2, v3

    or-int/2addr v5, v4

    int-to-byte v5, v5

    aput-byte v5, p1, v0

    .line 6
    .end local v1    # "b":B
    .end local v2    # "empty":I
    .end local v3    # "l2":I
    .end local v4    # "h6":I
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 15
    .end local v0    # "i":I
    :cond_0
    return-object p1
.end method
