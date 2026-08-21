.class public abstract Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;
.super Landroid/widget/FrameLayout;
.source "AbstractJSContainer.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# instance fields
.field private a:I

.field private b:I

.field protected j:Landroid/app/Activity;

.field protected k:Ljava/lang/String;

.field protected l:Ljava/lang/String;

.field protected m:Lcom/mbridge/msdk/videocommon/d/c;

.field protected n:Ljava/lang/String;

.field protected o:Lcom/mbridge/msdk/videocommon/b/d;

.field protected p:Ljava/lang/String;

.field protected q:I

.field protected r:Z

.field protected s:Z

.field protected t:I

.field protected u:I

.field protected v:I

.field protected w:Z

.field protected x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 62
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 43
    iput p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a:I

    const/4 v0, 0x1

    .line 44
    iput v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->b:I

    const/4 v0, 0x2

    .line 53
    iput v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->q:I

    .line 54
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->r:Z

    .line 55
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->s:Z

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->w:Z

    .line 69
    new-instance p1, Lcom/mbridge/msdk/video/js/factory/a;

    invoke-direct {p1}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 43
    iput p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a:I

    const/4 p2, 0x1

    .line 44
    iput p2, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->b:I

    const/4 p2, 0x2

    .line 53
    iput p2, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->q:I

    .line 54
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->r:Z

    .line 55
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->s:Z

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->w:Z

    .line 69
    new-instance p1, Lcom/mbridge/msdk/video/js/factory/a;

    invoke-direct {p1}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method

.method private a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 183
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 184
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 185
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 186
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 187
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p1

    goto :goto_0

    :catchall_0
    const-string p1, "AbstractJSContainer"

    const-string v1, "code to string is error"

    .line 190
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private b(I)Z
    .locals 4

    const/16 v0, 0x12

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq p1, v2, :cond_2

    const/4 v3, 0x2

    if-eq p1, v3, :cond_0

    goto :goto_1

    .line 311
    :cond_0
    :try_start_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_1

    .line 312
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    const/16 v0, 0xb

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    goto :goto_0

    .line 314
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    invoke-virtual {p1, v1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    goto :goto_0

    .line 319
    :cond_2
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_3

    .line 320
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    const/16 v0, 0xc

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    goto :goto_0

    .line 322
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    invoke-virtual {p1, v2}, Landroid/app/Activity;->setRequestedOrientation(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    move v1, v2

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 328
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "AbstractJSContainer"

    invoke-static {v2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return v1
.end method


# virtual methods
.method protected final a(Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 2

    .line 289
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    if-eqz p2, :cond_1

    .line 296
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 297
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result p2

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->b(I)Z

    move-result v0

    :cond_1
    if-nez v0, :cond_2

    if-eqz p1, :cond_2

    .line 300
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->e()I

    move-result p1

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->b(I)Z

    :cond_2
    return-void
.end method

.method protected final a(Ljava/lang/Object;)V
    .locals 2

    .line 163
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget v1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a:I

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method protected final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 174
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method protected a(Ljava/lang/String;)V
    .locals 1

    const-string v0, "AbstractJSContainer"

    .line 254
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 256
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    if-eqz p1, :cond_0

    .line 257
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method protected final b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/js/a/j;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 265
    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->r:Z

    if-eqz v1, :cond_1

    const/16 v1, 0x11f

    goto :goto_0

    :cond_1
    const/16 v1, 0x5e

    :goto_0
    invoke-static {v1, p1}, Lcom/mbridge/msdk/videocommon/a;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 268
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/a$a;->c()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 269
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/a$a;->a()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object p1

    .line 270
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v1, :cond_2

    const-string v0, "AbstractJSContainer"

    const-string v1, "JSCommon \u8fdb\u6765"

    .line 271
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/js/a/j;

    return-object p1

    :cond_2
    return-object v0
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 340
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 341
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->D()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->D()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 345
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->l:Ljava/lang/String;

    return-object v0
.end method

.method protected final c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 0

    .line 280
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/js/a/j;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 282
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/js/a/j;->m()I

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public getActivityProxy()Lcom/mbridge/msdk/video/js/a;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;

    move-result-object v0

    return-object v0
.end method

.method public getJSBTModule()Lcom/mbridge/msdk/video/js/b;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSBTModule()Lcom/mbridge/msdk/video/js/b;

    move-result-object v0

    return-object v0
.end method

.method public getJSCommon()Lcom/mbridge/msdk/video/js/c;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    return-object v0
.end method

.method public getJSContainerModule()Lcom/mbridge/msdk/video/js/e;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    return-object v0
.end method

.method public getJSVideoModule()Lcom/mbridge/msdk/video/js/i;
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    return-object v0
.end method

.method public getPlacementId()Ljava/lang/String;
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->l:Ljava/lang/String;

    return-object v0
.end method

.method public getUnitId()Ljava/lang/String;
    .locals 1

    .line 208
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->k:Ljava/lang/String;

    return-object v0
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 121
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 122
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/a;->a(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 114
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 115
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->c()V

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 2

    .line 86
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 87
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->a()V

    .line 89
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public onRestart()V
    .locals 2

    .line 100
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->f()V

    .line 103
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x4

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 76
    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 79
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 80
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->b()V

    .line 82
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public onStart()V
    .locals 2

    .line 107
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 108
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->e()V

    .line 110
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public onStop()V
    .locals 2

    .line 93
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->d()V

    .line 96
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x3

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public registerJsFactory(Lcom/mbridge/msdk/video/js/factory/IJSFactory;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method

.method public setActivity(Landroid/app/Activity;)V
    .locals 0

    .line 220
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->j:Landroid/app/Activity;

    return-void
.end method

.method public setBidCampaign(Z)V
    .locals 0

    .line 236
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->s:Z

    return-void
.end method

.method public setBigOffer(Z)V
    .locals 0

    .line 246
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->w:Z

    return-void
.end method

.method public setIV(Z)V
    .locals 0

    .line 232
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->r:Z

    return-void
.end method

.method public setIVRewardEnable(III)V
    .locals 0

    .line 240
    iput p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->t:I

    .line 241
    iput p2, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->u:I

    .line 242
    iput p3, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->v:I

    return-void
.end method

.method public setMute(I)V
    .locals 0

    .line 228
    iput p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->q:I

    return-void
.end method

.method public setPlacementId(Ljava/lang/String;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->l:Ljava/lang/String;

    return-void
.end method

.method public setReward(Lcom/mbridge/msdk/videocommon/b/d;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    return-void
.end method

.method public setRewardId(Ljava/lang/String;)V
    .locals 0

    .line 196
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->p:Ljava/lang/String;

    return-void
.end method

.method public setRewardUnitSetting(Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 0

    .line 250
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 204
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->k:Ljava/lang/String;

    return-void
.end method

.method public setUserId(Ljava/lang/String;)V
    .locals 0

    .line 200
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->n:Ljava/lang/String;

    return-void
.end method
