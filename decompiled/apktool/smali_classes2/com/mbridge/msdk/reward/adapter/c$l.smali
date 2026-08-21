.class final Lcom/mbridge/msdk/reward/adapter/c$l;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "RewardCampaignsResourceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "l"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private final b:Z

.field private final c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private final d:Ljava/lang/String;

.field private final e:Ljava/lang/String;

.field private final f:Lcom/mbridge/msdk/videocommon/a$a;

.field private final g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private h:Z

.field private i:Ljava/lang/String;

.field private j:Z

.field private k:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;ZLcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 0

    .line 2355
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    .line 2356
    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->b:Z

    .line 2357
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 2358
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    .line 2359
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    .line 2360
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    .line 2361
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2362
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->a:Ljava/lang/String;

    .line 2363
    iput-boolean p8, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    .line 2364
    iput-object p9, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->i:Ljava/lang/String;

    const-string p1, "WindVaneWebView"

    const-string p2, "TempalteWindVaneWebviewClientForTPL init"

    .line 2365
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 6

    .line 2372
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u6536\u5230\u5927\u6a21\u677f \u64ad\u653e\u6a21\u677f readyState \u56de\u8c03: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardCampaignsResourceManager_test"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2373
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->k:Z

    if-nez p1, :cond_7

    .line 2374
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v0, "WindVaneWebView"

    if-eqz p1, :cond_0

    .line 2375
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 2377
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->a:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2378
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "result"

    .line 2379
    invoke-virtual {v1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "error"

    const-string v3, ""

    .line 2380
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "data"

    .line 2381
    invoke-virtual {p1, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2382
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v3, "onSubPlayTemplateViewLoad"

    .line 2383
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v4, 0x2

    invoke-static {p1, v4}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 2382
    invoke-virtual {v1, v2, v3, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2385
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 2386
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2390
    :cond_0
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne p2, v2, :cond_5

    .line 2392
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->i:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2393
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_1

    .line 2394
    invoke-virtual {p2, v2}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2396
    :cond_1
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->b:Z

    if-eqz p2, :cond_3

    .line 2397
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    if-eqz p2, :cond_2

    const-string p2, "Tempalte put templeteCache in bidIVCache "

    .line 2398
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2399
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p1, p2, v3, v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    goto :goto_1

    :cond_2
    const-string p2, "Tempalte put templeteCache in iVCache "

    .line 2401
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2403
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p1, p2, v3, v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    goto :goto_1

    .line 2406
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    if-eqz p2, :cond_4

    const-string p2, "Tempalte put templeteCache in bidRVCache "

    .line 2407
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2408
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p1, p2, v3, v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    goto :goto_1

    :cond_4
    const-string p2, "Tempalte put templeteCache in rVCache "

    .line 2410
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2411
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p1, p2, v3, v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    goto :goto_1

    .line 2416
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->i:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, v3}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2417
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p1, :cond_6

    .line 2418
    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2421
    :cond_6
    :goto_1
    iput-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->k:Z

    :cond_7
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 2427
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "TempalteWindVaneWebviewClientForTPL preLoadTemplate onReceivedError: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "WindVaneWebView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2428
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p1

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->i:Ljava/lang/String;

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    const/4 v0, 0x0

    invoke-virtual {p1, p4, v0}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2429
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p1, :cond_0

    .line 2430
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2432
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 2433
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string p4, "id"

    .line 2435
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->a:Ljava/lang/String;

    invoke-virtual {p1, p4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2436
    new-instance p4, Lorg/json/JSONObject;

    invoke-direct {p4}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "result"

    const/4 v1, 0x2

    .line 2437
    invoke-virtual {p4, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "error"

    .line 2438
    invoke-virtual {p4, v0, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p3, "data"

    .line 2439
    invoke-virtual {p1, p3, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2440
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p3

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v0, "onSubPlayTemplateViewLoad"

    .line 2441
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 2440
    invoke-virtual {p3, p4, v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2443
    sget-boolean p3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p3, :cond_1

    .line 2444
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 6

    const-string v0, "WindVaneWebView"

    const-string v1, "TempalteWindVaneWebviewClientForTPL preLoadTemplate onPageFinished: "

    .line 2452
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2453
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->j:Z

    if-nez v1, :cond_6

    const-string v1, "wfr=1"

    .line 2454
    invoke-virtual {p2, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v1, 0x1

    if-nez p2, :cond_5

    .line 2455
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p2, :cond_0

    .line 2456
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "id"

    .line 2458
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->a:Ljava/lang/String;

    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2459
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "result"

    .line 2460
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "error"

    const-string v4, ""

    .line 2461
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "data"

    .line 2462
    invoke-virtual {p2, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2463
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->c:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v4, "componentReact"

    .line 2464
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v5, 0x2

    invoke-static {p2, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 2463
    invoke-virtual {v2, v3, v4, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 2466
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_0

    .line 2467
    invoke-virtual {p2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2472
    :cond_0
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->i:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2473
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_1

    .line 2474
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2476
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->e:Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->d:Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 2477
    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->b:Z

    const/4 v3, 0x0

    if-eqz v2, :cond_3

    .line 2478
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    if-eqz v2, :cond_2

    const-string p2, "Tempalte put templeteCache in bidIVCache "

    .line 2479
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p2, 0x11f

    .line 2480
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p2, v0, v2}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    :cond_2
    const-string v2, "Tempalte put templeteCache in iVCache "

    .line 2482
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2484
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p2, v0, v3, v2}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    goto :goto_1

    .line 2487
    :cond_3
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    if-eqz v2, :cond_4

    const-string p2, "Tempalte put templeteCache in bidRVCache "

    .line 2488
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p2, 0x5e

    .line 2489
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p2, v0, v2}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    :cond_4
    const-string v2, "Tempalte put templeteCache in rVCache "

    .line 2491
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2493
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->f:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->h:Z

    invoke-static {p2, v0, v3, v2}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    .line 2498
    :cond_5
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    .line 2499
    iput-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$l;->j:Z

    :cond_6
    return-void
.end method
