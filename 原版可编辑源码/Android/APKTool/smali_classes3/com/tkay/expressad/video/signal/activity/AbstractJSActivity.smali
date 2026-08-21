.class public abstract Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;
.super Lcom/tkay/expressad/activity/TYBaseActivity;

# interfaces
.implements Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# static fields
.field protected static final n:Ljava/lang/String; = "AbstractJSActivity"


# instance fields
.field protected o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;-><init>()V

    .line 20
    new-instance v0, Lcom/tkay/expressad/video/signal/factory/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method private static b()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method public getActivityProxy()Lcom/tkay/expressad/video/signal/a;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object v0

    return-object v0
.end method

.method public getJSBTModule()Lcom/tkay/expressad/video/signal/b;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSBTModule()Lcom/tkay/expressad/video/signal/b;

    move-result-object v0

    return-object v0
.end method

.method public getJSCommon()Lcom/tkay/expressad/video/signal/c;
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    return-object v0
.end method

.method public getJSContainerModule()Lcom/tkay/expressad/video/signal/e;
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    return-object v0
.end method

.method public getJSVideoModule()Lcom/tkay/expressad/video/signal/j;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    return-object v0
.end method

.method public onBackPressed()V
    .locals 1

    .line 66
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 68
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->miniCardShowing()Z

    move-result v0

    if-nez v0, :cond_1

    .line 71
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->g()V

    :cond_1
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 58
    invoke-super {p0, p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 59
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 60
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/a;->a(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 49
    invoke-super {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->onDestroy()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 40
    invoke-super {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->onPause()V

    .line 41
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 42
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->a()V

    .line 44
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 28
    invoke-super {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->onResume()V

    .line 29
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 32
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 33
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->b()V

    .line 35
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/a;->a(I)V

    return-void
.end method
