.class public abstract Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# static fields
.field protected static final k:Ljava/lang/String; = "AbstractJSContainer"


# instance fields
.field private a:I

.field private b:I

.field protected l:Landroid/app/Activity;

.field protected m:Ljava/lang/String;

.field protected n:Ljava/lang/String;

.field protected o:Lcom/tkay/expressad/videocommon/e/d;

.field protected p:Ljava/lang/String;

.field protected q:Lcom/tkay/expressad/videocommon/c/c;

.field protected r:Ljava/lang/String;

.field protected s:I

.field protected t:Z

.field protected u:Z

.field protected v:I

.field protected w:I

.field protected x:I

.field protected y:Z

.field protected z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 59
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 40
    iput p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a:I

    const/4 v0, 0x1

    .line 41
    iput v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b:I

    const/4 v0, 0x2

    .line 50
    iput v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->s:I

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->t:Z

    .line 52
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->u:Z

    .line 56
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->y:Z

    .line 66
    new-instance p1, Lcom/tkay/expressad/video/signal/factory/a;

    invoke-direct {p1}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 63
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 40
    iput p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a:I

    const/4 p2, 0x1

    .line 41
    iput p2, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b:I

    const/4 p2, 0x2

    .line 50
    iput p2, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->s:I

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->t:Z

    .line 52
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->u:Z

    .line 56
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->y:Z

    .line 66
    new-instance p1, Lcom/tkay/expressad/video/signal/factory/a;

    invoke-direct {p1}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method private static a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 180
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 181
    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 182
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 183
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 184
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const/4 v1, 0x2

    invoke-static {p0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    :catchall_0
    :cond_0
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 175
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected static a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 171
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/Object;)V
    .locals 2

    .line 168
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b:I

    invoke-static {v1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private static b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 164
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
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

    .line 308
    :cond_0
    :try_start_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_1

    .line 309
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    const/16 v0, 0xb

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    goto :goto_0

    .line 311
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    invoke-virtual {p1, v1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    :goto_0
    move v1, v2

    goto :goto_1

    .line 316
    :cond_2
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_3

    .line 317
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    const/16 v0, 0xc

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    goto :goto_0

    .line 319
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    invoke-virtual {p1, v2}, Landroid/app/Activity;->setRequestedOrientation(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 325
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :goto_1
    return v1
.end method


# virtual methods
.method protected final a(Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 286
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->c(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    if-eqz p2, :cond_1

    .line 293
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 294
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result p2

    invoke-direct {p0, p2}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b(I)Z

    move-result v0

    :cond_1
    if-nez v0, :cond_2

    if-eqz p1, :cond_2

    .line 297
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->b()I

    move-result p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b(I)Z

    :cond_2
    return-void
.end method

.method protected final a(Ljava/lang/Object;)V
    .locals 2

    .line 160
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a:I

    invoke-static {v1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method protected a(Ljava/lang/String;)V
    .locals 0

    .line 253
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    if-eqz p1, :cond_0

    .line 254
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method protected final b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 263
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->t:Z

    if-eqz v1, :cond_1

    const/16 v1, 0x11f

    goto :goto_0

    :cond_1
    const/16 v1, 0x5e

    .line 262
    :goto_0
    invoke-static {v1, p1}, Lcom/tkay/expressad/videocommon/a;->a(ILcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 265
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/a$a;->c()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 266
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    .line 267
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v1, :cond_2

    .line 269
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/signal/a/j;

    return-object p1

    :cond_2
    return-object v0
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 337
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->n:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 338
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->O()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 339
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->O()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 342
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->n:Ljava/lang/String;

    return-object v0
.end method

.method protected final c(Lcom/tkay/expressad/foundation/d/c;)I
    .locals 0

    .line 277
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 279
    invoke-virtual {p1}, Lcom/tkay/expressad/video/signal/a/j;->d()I

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public getActivityProxy()Lcom/tkay/expressad/video/signal/a;
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;
    .locals 1

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object v0

    return-object v0
.end method

.method public getJSBTModule()Lcom/tkay/expressad/video/signal/b;
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSBTModule()Lcom/tkay/expressad/video/signal/b;

    move-result-object v0

    return-object v0
.end method

.method public getJSCommon()Lcom/tkay/expressad/video/signal/c;
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    return-object v0
.end method

.method public getJSContainerModule()Lcom/tkay/expressad/video/signal/e;
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    return-object v0
.end method

.method public getJSVideoModule()Lcom/tkay/expressad/video/signal/j;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    return-object v0
.end method

.method public getPlacementId()Ljava/lang/String;
    .locals 1

    .line 209
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->n:Ljava/lang/String;

    return-object v0
.end method

.method public getUnitId()Ljava/lang/String;
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->m:Ljava/lang/String;

    return-object v0
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 118
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/a;->a(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 111
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->c()V

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 2

    .line 83
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 84
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->a()V

    .line 86
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public onRestart()V
    .locals 2

    .line 97
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 98
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    .line 100
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x4

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 73
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 76
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 77
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->b()V

    .line 79
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public onStart()V
    .locals 2

    .line 104
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 105
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    .line 107
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public onStop()V
    .locals 2

    .line 90
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 91
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    .line 93
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x3

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public registerJsFactory(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method public setActivity(Landroid/app/Activity;)V
    .locals 0

    .line 217
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->l:Landroid/app/Activity;

    return-void
.end method

.method public setBidCampaign(Z)V
    .locals 0

    .line 233
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->u:Z

    return-void
.end method

.method public setBigOffer(Z)V
    .locals 0

    .line 243
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->y:Z

    return-void
.end method

.method public setIV(Z)V
    .locals 0

    .line 229
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->t:Z

    return-void
.end method

.method public setIVRewardEnable(III)V
    .locals 0

    .line 237
    iput p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->v:I

    .line 238
    iput p2, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->w:I

    .line 239
    iput p3, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->x:I

    return-void
.end method

.method public setMute(I)V
    .locals 0

    .line 225
    iput p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->s:I

    return-void
.end method

.method public setPlacementId(Ljava/lang/String;)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->n:Ljava/lang/String;

    return-void
.end method

.method public setReward(Lcom/tkay/expressad/videocommon/c/c;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    return-void
.end method

.method public setRewardId(Ljava/lang/String;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->r:Ljava/lang/String;

    return-void
.end method

.method public setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 0

    .line 247
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 201
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->m:Ljava/lang/String;

    return-void
.end method

.method public setUserId(Ljava/lang/String;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->p:Ljava/lang/String;

    return-void
.end method
