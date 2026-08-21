.class Lcom/sigmob/sdk/base/common/h$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/ag$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Z

.field final synthetic c:Lcom/sigmob/sdk/base/a;

.field final synthetic d:Lcom/sigmob/sdk/base/common/h;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/h;ZZLcom/sigmob/sdk/base/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    iput-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    iput-boolean p3, p0, Lcom/sigmob/sdk/base/common/h$5;->b:Z

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/h$5;->c:Lcom/sigmob/sdk/base/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "urlHandlingSucceeded: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " url: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "0"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/common/h$6;->b:[I

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-eq v0, v1, :cond_5

    const/4 v1, 0x3

    if-eq v0, v1, :cond_5

    const/4 p2, 0x4

    if-eq v0, p2, :cond_3

    const/4 p2, 0x5

    if-eq v0, p2, :cond_1

    goto/16 :goto_1

    :cond_1
    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->b:Z

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/common/h;->h(Ljava/lang/String;)V

    goto/16 :goto_1

    :cond_2
    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/common/h;->i(Ljava/lang/String;)V

    goto/16 :goto_1

    :cond_3
    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    if-eqz p2, :cond_7

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object p2

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->app_package_name:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    :try_start_0
    new-instance p2, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v3}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->app_package_name:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".log"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p2, v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {p2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/czhj/sdk/common/utils/FileUtil;->writeToCache(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "write ad info with package error "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_4
    :goto_0
    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/base/common/h$5$2;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/base/common/h$5$2;-><init>(Lcom/sigmob/sdk/base/common/h$5;Ljava/lang/String;)V

    const-string p1, "open_market"

    invoke-static {p1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    goto :goto_1

    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6253\u5f00\u5c0f\u7a0b\u5e8f\u6210\u529f:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "lance"

    invoke-static {v0, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    if-eqz p2, :cond_6

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->I:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/base/common/h$5$1;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/base/common/h$5$1;-><init>(Lcom/sigmob/sdk/base/common/h$5;Ljava/lang/String;)V

    const-string p1, "open_deeplink"

    invoke-static {p1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    const-string p2, "1"

    iput-object p2, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    :cond_7
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomDeeplink(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomAndroidMarket(Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomLandPageUrl(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->e(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/common/x;

    move-result-object p1

    if-eqz p1, :cond_8

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->e(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/common/x;

    move-result-object p1

    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->c:Lcom/sigmob/sdk/base/a;

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/x;->a(ZLcom/sigmob/sdk/base/a;)V

    :cond_8
    return-void
.end method

.method public b(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "urlHandlingFailed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " url: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "0"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/common/h$6;->b:[I

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-eq v0, v1, :cond_3

    const/4 v1, 0x3

    if-eq v0, v1, :cond_3

    const/4 v1, 0x4

    if-eq v0, v1, :cond_2

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomDeeplink(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomAndroidMarket(Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomLandPageUrl(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->e(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/common/x;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/h;->e(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/common/x;

    move-result-object p1

    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5;->c:Lcom/sigmob/sdk/base/a;

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/x;->a(ZLcom/sigmob/sdk/base/a;)V

    goto :goto_0

    :cond_2
    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/base/common/h$5$4;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/base/common/h$5$4;-><init>(Lcom/sigmob/sdk/base/common/h$5;Ljava/lang/String;)V

    const-string v1, "open_market_failed"

    invoke-static {v1, p1, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    goto :goto_0

    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6253\u5f00\u5c0f\u7a0b\u5e8f\u5931\u8d25:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "lance"

    invoke-static {v0, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-boolean p2, p0, Lcom/sigmob/sdk/base/common/h$5;->a:Z

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->J:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/h$5;->d:Lcom/sigmob/sdk/base/common/h;

    invoke-static {p2}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/base/common/h$5$3;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/base/common/h$5$3;-><init>(Lcom/sigmob/sdk/base/common/h$5;Ljava/lang/String;)V

    const-string p1, "open_deeplink_failed"

    invoke-static {p1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_4
    :goto_0
    return-void
.end method
