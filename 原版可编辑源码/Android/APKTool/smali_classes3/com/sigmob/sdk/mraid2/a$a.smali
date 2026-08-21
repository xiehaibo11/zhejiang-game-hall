.class Lcom/sigmob/sdk/mraid2/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid2/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/a;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/mraid2/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getApKDownloadProcessId(Ljava/lang/String;)I
    .locals 6
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_1
    invoke-static {}, Lcom/sigmob/sdk/mraid2/a;->f()Ljava/lang/String;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, "-----------getApKDownloadProcessId---------"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v2, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v2, p1

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/a;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_6

    if-eqz v2, :cond_6

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDownloadId()Ljava/lang/Long;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/Long;)[J

    move-result-object p1

    const/4 v0, 0x2

    aget-wide v2, p1, v0

    long-to-int v2, v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_5

    if-eq v2, v0, :cond_4

    const/16 p1, 0x8

    if-eq v2, p1, :cond_3

    goto :goto_2

    :cond_3
    const/16 p1, 0x64

    return p1

    :cond_4
    aget-wide v0, p1, v1

    aget-wide v2, p1, v3

    const-wide/16 v4, 0x64

    mul-long/2addr v0, v4

    div-long/2addr v0, v2

    long-to-int p1, v0

    return p1

    :cond_5
    return v1

    :cond_6
    :goto_2
    const/4 p1, -0x1

    return p1
.end method

.method public registerDownloadEvent(Ljava/lang/String;)V
    .locals 5
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_1
    invoke-static {}, Lcom/sigmob/sdk/mraid2/a;->f()Ljava/lang/String;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, "-----------registerDownloadEvent---------"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v2, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v2, p1

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/a$a;->a:Lcom/sigmob/sdk/mraid2/a;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid2/a;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method
