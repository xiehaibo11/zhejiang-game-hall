.class public Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;
.super Ljava/lang/Object;
.source "YmnLinkCache.java"


# static fields
.field private static launchData:Landroid/net/Uri;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static clearLaunchData()V
    .locals 1

    const/4 v0, 0x0

    .line 22
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->setLaunchData(Landroid/net/Uri;)V

    return-void
.end method

.method public static getLaunchData()Landroid/net/Uri;
    .locals 1

    .line 14
    sget-object v0, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->launchData:Landroid/net/Uri;

    return-object v0
.end method

.method public static setLaunchData(Landroid/net/Uri;)V
    .locals 0

    .line 18
    sput-object p0, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->launchData:Landroid/net/Uri;

    return-void
.end method
