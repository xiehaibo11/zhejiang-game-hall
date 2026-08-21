.class public Lcom/mbridge/msdk/video/js/factory/a;
.super Ljava/lang/Object;
.source "DefaultJSFactory.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# instance fields
.field protected a:Lcom/mbridge/msdk/video/js/a;

.field protected b:Lcom/mbridge/msdk/video/js/c;

.field protected c:Lcom/mbridge/msdk/video/js/i;

.field protected d:Lcom/mbridge/msdk/video/js/f;

.field protected e:Lcom/mbridge/msdk/video/js/e;

.field protected f:Lcom/mbridge/msdk/video/js/h;

.field protected g:Lcom/mbridge/msdk/video/js/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getActivityProxy()Lcom/mbridge/msdk/video/js/a;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->a:Lcom/mbridge/msdk/video/js/a;

    if-nez v0, :cond_0

    .line 35
    new-instance v0, Lcom/mbridge/msdk/video/js/a/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->a:Lcom/mbridge/msdk/video/js/a;

    .line 37
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->a:Lcom/mbridge/msdk/video/js/a;

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->f:Lcom/mbridge/msdk/video/js/h;

    if-nez v0, :cond_0

    .line 75
    new-instance v0, Lcom/mbridge/msdk/video/js/a/f;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/f;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->f:Lcom/mbridge/msdk/video/js/h;

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->f:Lcom/mbridge/msdk/video/js/h;

    return-object v0
.end method

.method public getJSBTModule()Lcom/mbridge/msdk/video/js/b;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->g:Lcom/mbridge/msdk/video/js/b;

    if-nez v0, :cond_0

    .line 83
    new-instance v0, Lcom/mbridge/msdk/video/js/a/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/b;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->g:Lcom/mbridge/msdk/video/js/b;

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->g:Lcom/mbridge/msdk/video/js/b;

    return-object v0
.end method

.method public getJSCommon()Lcom/mbridge/msdk/video/js/c;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->b:Lcom/mbridge/msdk/video/js/c;

    if-nez v0, :cond_0

    .line 43
    new-instance v0, Lcom/mbridge/msdk/video/js/a/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/c;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->b:Lcom/mbridge/msdk/video/js/c;

    .line 45
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->b:Lcom/mbridge/msdk/video/js/c;

    return-object v0
.end method

.method public getJSContainerModule()Lcom/mbridge/msdk/video/js/e;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->e:Lcom/mbridge/msdk/video/js/e;

    if-nez v0, :cond_0

    .line 67
    new-instance v0, Lcom/mbridge/msdk/video/js/a/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/d;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->e:Lcom/mbridge/msdk/video/js/e;

    .line 69
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->e:Lcom/mbridge/msdk/video/js/e;

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->d:Lcom/mbridge/msdk/video/js/f;

    if-nez v0, :cond_0

    .line 59
    new-instance v0, Lcom/mbridge/msdk/video/js/a/e;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/e;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->d:Lcom/mbridge/msdk/video/js/f;

    .line 61
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->d:Lcom/mbridge/msdk/video/js/f;

    return-object v0
.end method

.method public getJSVideoModule()Lcom/mbridge/msdk/video/js/i;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->c:Lcom/mbridge/msdk/video/js/i;

    if-nez v0, :cond_0

    .line 51
    new-instance v0, Lcom/mbridge/msdk/video/js/a/g;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/g;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->c:Lcom/mbridge/msdk/video/js/i;

    .line 53
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/a;->c:Lcom/mbridge/msdk/video/js/i;

    return-object v0
.end method
