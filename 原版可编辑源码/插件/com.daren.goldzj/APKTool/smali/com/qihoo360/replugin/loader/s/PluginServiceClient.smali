.class public Lcom/qihoo360/replugin/loader/s/PluginServiceClient;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static stopSelf(Landroid/app/Service;)V
    .locals 4

    sget-boolean v0, Lcom/qihoo360/replugin/e;->a:Z

    if-nez v0, :cond_0

    invoke-virtual {p0}, Landroid/app/Service;->stopSelf()V

    return-void

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;->a()Lcom/qihoo360/replugin/b;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p0, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
