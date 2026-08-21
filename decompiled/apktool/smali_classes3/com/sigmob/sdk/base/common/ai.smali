.class public abstract Lcom/sigmob/sdk/base/common/ai;
.super Lcom/sigmob/sdk/mraid/e;


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/e;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method private static b(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 5

    invoke-static {p0}, Lcom/sigmob/sdk/base/common/ai;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result p0

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne p0, v2, :cond_0

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p0

    goto :goto_1

    :cond_0
    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->b(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p0

    if-nez p0, :cond_2

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->c(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p0

    if-nez p0, :cond_2

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->d(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    move p0, v3

    goto :goto_1

    :cond_2
    :goto_0
    move p0, v4

    :goto_1
    if-eqz v0, :cond_3

    if-eqz p0, :cond_3

    move v3, v4

    :cond_3
    return v3
.end method

.method private static c(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->c:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result v0

    const/16 v1, 0xa

    if-le v0, v1, :cond_1

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    const/4 p0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static d(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/common/l;->f:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method


# virtual methods
.method protected a(Lcom/sigmob/sdk/base/common/m$b;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid/e;->a(Lcom/sigmob/sdk/base/common/m$b;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/mraid/e;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 6

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid/e;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v2

    sget-object v3, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-ne v2, v3, :cond_0

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->a(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p1

    goto :goto_1

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result p1

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->i:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    if-ne p1, v2, :cond_2

    :cond_1
    :goto_0
    move p1, v5

    goto :goto_1

    :cond_2
    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->b(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->c(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/ai;->d(Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;)Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_0

    :cond_3
    move p1, v4

    :goto_1
    if-eqz v0, :cond_4

    if-eqz p1, :cond_4

    move v4, v5

    :cond_4
    return v4
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid/e;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method
