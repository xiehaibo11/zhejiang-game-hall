.class Lcom/sigmob/sdk/splash/i$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/ag$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/splash/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    iput-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p3, p0, Lcom/sigmob/sdk/splash/i$5;->b:Ljava/lang/String;

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

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->e(Lcom/sigmob/sdk/splash/i;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.sigmob.action.interstitial.click"

    invoke-static {v0, v1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/i$7;->a:[I

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-eq v0, v1, :cond_6

    const/4 v1, 0x3

    if-eq v0, v1, :cond_6

    const/4 p2, 0x4

    if-eq v0, p2, :cond_3

    const/4 p2, 0x5

    if-eq v0, p2, :cond_1

    goto/16 :goto_1

    :cond_1
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->f(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/splash/c;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/splash/c;->h(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isDownloadDialog()Z

    move-result p2

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object p2

    if-nez p2, :cond_5

    :cond_2
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/splash/i;->a(Z)V

    goto/16 :goto_1

    :cond_3
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object p2

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

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

    iget-object v3, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v3}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

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

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

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
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/splash/i$5$2;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/splash/i$5$2;-><init>(Lcom/sigmob/sdk/splash/i$5;Ljava/lang/String;)V

    const-string v1, "open_market"

    invoke-static {v1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_5
    :goto_1
    const-string p2, "0"

    goto :goto_2

    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6253\u5f00\u5c0f\u7a0b\u5e8f\u6210\u529f:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "lance"

    invoke-static {v0, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->I:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v0, Lcom/sigmob/sdk/splash/i$5$1;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/splash/i$5$1;-><init>(Lcom/sigmob/sdk/splash/i$5;Ljava/lang/String;)V

    const-string v1, "open_deeplink"

    invoke-static {v1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    const-string p2, "1"

    :goto_2
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$5;->b:Ljava/lang/String;

    const-string v2, "click"

    invoke-static {v2, v0, p2, p1, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

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

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/i$7;->a:[I

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

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/af;->name()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5;->b:Ljava/lang/String;

    const-string v1, "click"

    const-string v2, "0"

    invoke-static {v1, p2, v2, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/splash/i$5$4;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/splash/i$5$4;-><init>(Lcom/sigmob/sdk/splash/i$5;Ljava/lang/String;)V

    const-string p1, "open_market_failed"

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

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->J:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$5;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v0, Lcom/sigmob/sdk/splash/i$5$3;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/splash/i$5$3;-><init>(Lcom/sigmob/sdk/splash/i$5;Ljava/lang/String;)V

    const-string p1, "open_deeplink_failed"

    :goto_0
    invoke-static {p1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :goto_1
    return-void
.end method
