.class public Lcom/bianfeng/platform/PlatformSdkFix;
.super Lcom/bianfeng/platform/PlatformSdk;
.source "PlatformSdkFix.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field protected static listener:Lcom/bianfeng/platform/PlatformSdkListener;


# instance fields
.field protected activity:Landroid/app/Activity;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/platform/PlatformSdkFix$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PlatformSdkFix$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PlatformSdkFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/platform/PlatformSdk;-><init>()V

    return-void
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PlatformSdkFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method


# virtual methods
.method public dismissProgress()V
    .locals 0

    return-void
.end method

.method public getPlatformId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getPlatformName()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getPlatformVersion()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected hookSelf(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/PlatformSdkFix;->activity:Landroid/app/Activity;

    return-void
.end method

.method public isDebugMode()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected loadProperties()V
    .locals 0

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onPause()V
    .locals 0

    return-void
.end method

.method public onRestart()V
    .locals 0

    return-void
.end method

.method public onResume()V
    .locals 0

    return-void
.end method

.method public onStart()V
    .locals 0

    return-void
.end method

.method public onStop()V
    .locals 0

    return-void
.end method

.method public release()V
    .locals 0

    return-void
.end method

.method public setDebugMode(Z)V
    .locals 0

    return-void
.end method

.method public showProgress()V
    .locals 0

    return-void
.end method
