.class final enum Lcom/sigmob/sdk/base/common/af$1;
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

    const/4 p1, 0x0

    return-object p1
.end method

.method protected a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p1, "Link to about page ignored."

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Landroid/net/Uri;)Z
    .locals 1

    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    const-string v0, "about"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
