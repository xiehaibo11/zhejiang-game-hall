.class final enum Lcom/sigmob/sdk/base/common/af$5;
.super Lcom/sigmob/sdk/base/common/af;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/common/af;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4010
    name = null
.end annotation


# direct methods
.method constructor <init>(Ljava/lang/String;IZ)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/common/af;-><init>(Ljava/lang/String;IZLcom/sigmob/sdk/base/common/af$1;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Ljava/lang/String;
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1
.end method

.method protected a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result p1

    const/4 p3, 0x2

    if-eq p1, p3, :cond_1

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result p1

    const/4 p3, 0x3

    if-ne p1, p3, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/Exception;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "Could not handle download Scheme url: "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    :goto_0
    return-void
.end method

.method public a(Landroid/net/Uri;)Z
    .locals 1

    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    const-string v0, "HTTP"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "HTTPS"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method
