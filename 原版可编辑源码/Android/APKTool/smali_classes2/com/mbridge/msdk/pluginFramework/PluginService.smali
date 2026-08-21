.class public abstract Lcom/mbridge/msdk/pluginFramework/PluginService;
.super Landroid/app/Service;
.source "PluginService.java"


# instance fields
.field protected a:Lcom/mbridge/msdk/pluginFramework/a;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 11
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    const/4 v0, 0x0

    .line 12
    iput-object v0, p0, Lcom/mbridge/msdk/pluginFramework/PluginService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    return-void
.end method


# virtual methods
.method public abstract a()Lcom/mbridge/msdk/pluginFramework/a;
.end method

.method public getAssets()Landroid/content/res/AssetManager;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/PluginService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 37
    :cond_0
    invoke-super {p0}, Landroid/app/Service;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    return-object v0
.end method

.method public getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getResources()Landroid/content/res/Resources;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/PluginService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    if-eqz v0, :cond_0

    .line 45
    :try_start_0
    invoke-super {p0}, Landroid/app/Service;->getResources()Landroid/content/res/Resources;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 47
    :catch_0
    invoke-super {p0}, Landroid/app/Service;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0

    .line 51
    :cond_0
    invoke-super {p0}, Landroid/app/Service;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0
.end method

.method public getTheme()Landroid/content/res/Resources$Theme;
    .locals 1

    .line 57
    invoke-super {p0}, Landroid/app/Service;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object v0

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    .line 17
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/pluginFramework/PluginService;->a()Lcom/mbridge/msdk/pluginFramework/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/pluginFramework/PluginService;->a:Lcom/mbridge/msdk/pluginFramework/a;

    .line 18
    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a;->a:Lcom/mbridge/msdk/pluginFramework/a$a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 1069
    :try_start_1
    iget-object v0, v0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/mbdownload/c;->a(Landroid/app/Service;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_2
    const-string v1, "PluginServiceContext"

    const-string v2, "invoke onDestroy error"

    .line 1071
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 19
    :goto_0
    invoke-super {p0}, Landroid/app/Service;->onCreate()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    const-string v1, "Download"

    const-string v2, ""

    .line 21
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method
