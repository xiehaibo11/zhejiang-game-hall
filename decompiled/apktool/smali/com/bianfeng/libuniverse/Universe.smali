.class public Lcom/bianfeng/libuniverse/Universe;
.super Ljava/lang/Object;
.source "Universe.java"


# static fields
.field private static sContext:Landroid/content/Context;

.field private static sServiceContext:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 16
    sget-object v0, Lcom/bianfeng/libuniverse/Universe;->sContext:Landroid/content/Context;

    if-nez v0, :cond_0

    sget-object v0, Lcom/bianfeng/libuniverse/Universe;->sServiceContext:Landroid/content/Context;

    :cond_0
    return-object v0
.end method

.method public static onCreate(Landroid/content/Context;)V
    .locals 1

    .line 21
    sput-object p0, Lcom/bianfeng/libuniverse/Universe;->sContext:Landroid/content/Context;

    .line 23
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/bianfeng/libuniverse/Helper;->nativeSetContext(Landroid/content/Context;Landroid/content/res/AssetManager;)V

    return-void
.end method

.method public static onDestroy()V
    .locals 1

    const/4 v0, 0x0

    .line 27
    sput-object v0, Lcom/bianfeng/libuniverse/Universe;->sContext:Landroid/content/Context;

    return-void
.end method

.method public static setServiceContext(Landroid/content/Context;)V
    .locals 0

    .line 11
    sput-object p0, Lcom/bianfeng/libuniverse/Universe;->sServiceContext:Landroid/content/Context;

    return-void
.end method
