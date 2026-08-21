.class public Lcom/qihoo360/replugin/RePluginEventCallbacks;
.super Ljava/lang/Object;
.source "RePluginEventCallbacks.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;
    }
.end annotation


# instance fields
.field protected final mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginEventCallbacks;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onBinderReleased()V
    .locals 0

    return-void
.end method

.method public onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V
    .locals 0

    return-void
.end method

.method public onInstallPluginStepInfo(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public onInstallPluginSucceed(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    return-void
.end method

.method public onPrepareAllocPitActivity(Landroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onPrepareStartPitActivity(Landroid/content/Context;Landroid/content/Intent;Landroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onStartActivityCompleted(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method
