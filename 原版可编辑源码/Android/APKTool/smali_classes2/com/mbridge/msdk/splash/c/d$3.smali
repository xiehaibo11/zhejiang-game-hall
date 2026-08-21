.class final Lcom/mbridge/msdk/splash/c/d$3;
.super Ljava/lang/Object;
.source "SplashShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/splash/d/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/c/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/d;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 250
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/splash/c/d;I)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 200
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 201
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->changeCloseBtnState(I)V

    :cond_0
    return-void
.end method

.method public final a(II)V
    .locals 3

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 232
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object v1, v1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    .line 237
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/splash/c/d;->c(Lcom/mbridge/msdk/splash/c/d;I)I

    .line 238
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object p1, p1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 239
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object p1, p1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v1, 0x3e8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 217
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 207
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/splash/c/d;I)V

    return-void
.end method

.method public final a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 257
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object p1, p1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    return-void
.end method

.method public final a(ZLjava/lang/String;)V
    .locals 2

    .line 264
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/d;->j(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 266
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 268
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/d;->j(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/c/d;->k(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/splash/d/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto :goto_0

    .line 271
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    .line 272
    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/d;->f(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object p1

    .line 271
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    .line 273
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 274
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1, p2}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 278
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/c/d;->i(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(I)V
    .locals 3

    .line 222
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->i(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "resetCountdown"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/c/d;->c(Lcom/mbridge/msdk/splash/c/d;I)I

    .line 224
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object p1, p1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 225
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$3;->a:Lcom/mbridge/msdk/splash/c/d;

    iget-object p1, p1, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v1, 0x3e8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method
