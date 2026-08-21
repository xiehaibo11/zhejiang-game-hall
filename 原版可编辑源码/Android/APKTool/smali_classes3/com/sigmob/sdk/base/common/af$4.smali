.class final enum Lcom/sigmob/sdk/base/common/af$4;
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
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->market_url:Ljava/lang/String;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method protected a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object p2

    if-eqz p2, :cond_1

    new-instance p3, Landroid/content/Intent;

    iget-object p4, p2, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->market_url:Ljava/lang/String;

    invoke-static {p4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p4

    const-string v0, "android.intent.action.VIEW"

    invoke-direct {p3, v0, p4}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    iget-object p4, p2, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->appstore_package_name:Ljava/lang/String;

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_0

    :try_start_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/AppPackageUtil;->getPackageManager(Landroid/content/Context;)Landroid/content/pm/PackageManager;

    move-result-object p4

    iget-object v0, p2, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->appstore_package_name:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p4, v0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p4

    if-eqz p4, :cond_0

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->appstore_package_name:Ljava/lang/String;

    invoke-virtual {p3, p2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "get store package error "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    invoke-static {p1, p3}, Lcom/sigmob/sdk/base/common/s;->b(Landroid/content/Context;Landroid/content/Intent;)V

    :cond_1
    return-void
.end method

.method public a(Landroid/net/Uri;)Z
    .locals 1

    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    const-string v0, "HTTP"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "HTTPS"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method
