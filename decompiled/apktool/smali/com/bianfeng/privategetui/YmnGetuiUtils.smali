.class Lcom/bianfeng/privategetui/YmnGetuiUtils;
.super Ljava/lang/Object;
.source "YmnGetuiUtils.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getTags(Ljava/lang/String;)[Lcom/igexin/sdk/Tag;
    .locals 4

    const-string v0, "&"

    .line 8
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 9
    array-length v0, p0

    new-array v0, v0, [Lcom/igexin/sdk/Tag;

    const/4 v1, 0x0

    .line 11
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_0

    .line 12
    new-instance v2, Lcom/igexin/sdk/Tag;

    invoke-direct {v2}, Lcom/igexin/sdk/Tag;-><init>()V

    .line 14
    aget-object v3, p0, v1

    invoke-virtual {v2, v3}, Lcom/igexin/sdk/Tag;->setName(Ljava/lang/String;)Lcom/igexin/sdk/Tag;

    .line 15
    aput-object v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method
