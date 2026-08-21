.class public Lcom/sigmob/sdk/mraid/e;
.super Lcom/sigmob/sdk/base/common/v;


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/v;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method protected static a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v0, :cond_1

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p0

    const/16 v0, 0xa

    if-le p0, v0, :cond_1

    :cond_0
    const/4 p0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method protected a(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/e;->b:Lcom/sigmob/sdk/base/common/m$b;

    return-void
.end method

.method public a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/v;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method protected a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/e;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result p1

    return p1
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/v;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method
