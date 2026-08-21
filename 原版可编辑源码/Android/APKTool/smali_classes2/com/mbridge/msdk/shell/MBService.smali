.class public Lcom/mbridge/msdk/shell/MBService;
.super Lcom/mbridge/msdk/pluginFramework/PluginService;
.source "MBService.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/mbridge/msdk/pluginFramework/PluginService;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/pluginFramework/a;
    .locals 3

    .line 24
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/mbdownload/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbdownload/c;-><init>()V

    .line 25
    new-instance v1, Lcom/mbridge/msdk/pluginFramework/a;

    new-instance v2, Lcom/mbridge/msdk/pluginFramework/a$a;

    invoke-direct {v2, v0}, Lcom/mbridge/msdk/pluginFramework/a$a;-><init>(Lcom/mbridge/msdk/mbdownload/c;)V

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/pluginFramework/a;-><init>(Lcom/mbridge/msdk/pluginFramework/a$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    const-string v1, "Download"

    const-string v2, "Find Provider Error"

    .line 28
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/shell/MBService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a;->a:Lcom/mbridge/msdk/pluginFramework/a$a;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/pluginFramework/a$a;->a(Landroid/content/Intent;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public onCreate()V
    .locals 1

    .line 15
    invoke-super {p0}, Lcom/mbridge/msdk/pluginFramework/PluginService;->onCreate()V

    .line 16
    iget-object v0, p0, Lcom/mbridge/msdk/shell/MBService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a;->a:Lcom/mbridge/msdk/pluginFramework/a$a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/pluginFramework/a$a;->a()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/mbridge/msdk/shell/MBService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a;->a:Lcom/mbridge/msdk/pluginFramework/a$a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/pluginFramework/a$a;->b()V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/mbridge/msdk/shell/MBService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a;->a:Lcom/mbridge/msdk/pluginFramework/a$a;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/pluginFramework/a$a;->a(Landroid/content/Intent;II)I

    move-result p1

    return p1
.end method
