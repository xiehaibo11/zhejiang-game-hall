.class public Lcom/qihoo360/replugin/component/dummy/DummyService;
.super Landroid/app/Service;
.source "DummyService.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()V
    .locals 0

    .line 35
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 36
    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/dummy/DummyService;->stopSelf()V

    return-void
.end method
