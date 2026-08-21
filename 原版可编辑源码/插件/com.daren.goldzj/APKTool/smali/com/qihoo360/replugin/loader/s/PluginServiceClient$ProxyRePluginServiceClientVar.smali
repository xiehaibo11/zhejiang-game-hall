.class public Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/loader/s/PluginServiceClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ProxyRePluginServiceClientVar"
.end annotation


# static fields
.field private static a:Lcom/qihoo360/replugin/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;->a:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method public static initLocked(Ljava/lang/ClassLoader;)V
    .locals 4

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Class;

    const-class v2, Landroid/app/Service;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "com.qihoo360.loader2.mgr.PluginServiceClient"

    const-string v3, "stopSelf"

    invoke-direct {v0, p0, v2, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;->a:Lcom/qihoo360/replugin/b;

    return-void
.end method
