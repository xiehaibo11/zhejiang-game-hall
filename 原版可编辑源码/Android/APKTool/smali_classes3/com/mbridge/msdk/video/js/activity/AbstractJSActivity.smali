.class public abstract Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;
.super Lcom/mbridge/msdk/activity/MBBaseActivity;
.source "AbstractJSActivity.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# static fields
.field protected static final TAG:Ljava/lang/String; = "AbstractJSActivity"


# instance fields
.field protected jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;-><init>()V

    .line 26
    new-instance v0, Lcom/mbridge/msdk/video/js/factory/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method


# virtual methods
.method public canBackPress()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getActivityProxy()Lcom/mbridge/msdk/video/js/a;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;

    move-result-object v0

    return-object v0
.end method

.method public getJSBTModule()Lcom/mbridge/msdk/video/js/b;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSBTModule()Lcom/mbridge/msdk/video/js/b;

    move-result-object v0

    return-object v0
.end method

.method public getJSCommon()Lcom/mbridge/msdk/video/js/c;
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    return-object v0
.end method

.method public getJSContainerModule()Lcom/mbridge/msdk/video/js/e;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    return-object v0
.end method

.method public getJSVideoModule()Lcom/mbridge/msdk/video/js/i;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    return-object v0
.end method

.method public onBackPressed()V
    .locals 2

    .line 72
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 74
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->miniCardShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 77
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->g()V

    goto :goto_0

    .line 80
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->canBackPress()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 81
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onBackPressed()V

    goto :goto_0

    :cond_2
    const-string v0, "AbstractJSActivity"

    const-string v1, "onBackPressed can\'t excute"

    .line 83
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 64
    invoke-super {p0, p1}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 65
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 66
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/a;->a(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 55
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onDestroy()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 46
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onPause()V

    .line 47
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 48
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->a()V

    .line 50
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 34
    invoke-super {p0}, Lcom/mbridge/msdk/activity/MBBaseActivity;->onResume()V

    .line 35
    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 38
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->c()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 39
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/a;->b()V

    .line 41
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/a;->a(I)V

    return-void
.end method

.method public registerJsFactory(Lcom/mbridge/msdk/video/js/factory/IJSFactory;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method
