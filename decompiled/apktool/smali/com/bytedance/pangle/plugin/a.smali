.class final Lcom/bytedance/pangle/plugin/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private final a:Ljava/io/File;

.field private final b:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/io/File;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p2, p0, Lcom/bytedance/pangle/plugin/a;->a:Ljava/io/File;

    .line 23
    iput-object p1, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method final a()Z
    .locals 8

    .line 35
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/a;->a:Ljava/io/File;

    invoke-static {v0}, Lcom/bytedance/pangle/f/a/d;->a(Ljava/io/File;)Lcom/bytedance/pangle/f/a/e;

    move-result-object v0

    const-string v1, "Zeus/install_pangle"

    const/4 v2, 0x1

    const/4 v3, 0x7

    const/4 v4, 0x0

    if-nez v0, :cond_0

    .line 37
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    new-array v2, v2, [Ljava/lang/Object;

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, " read local file package info failed !!! pluginPkg = "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " mApkFile.exists = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/bytedance/pangle/plugin/a;->a:Ljava/io/File;

    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v4

    invoke-static {v0, v3, v2}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    .line 38
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "PluginInstallRunnable read local file package info failed !!! pluginPkg = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v4

    .line 42
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v5

    iget-object v6, v0, Lcom/bytedance/pangle/f/a/e;->a:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v5

    if-nez v5, :cond_1

    .line 44
    iget-object v5, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    new-array v2, v2, [Ljava/lang/Object;

    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, " plugin == null !!! pluginPkg = "

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v7, p0, Lcom/bytedance/pangle/plugin/a;->b:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v2, v4

    invoke-static {v5, v3, v2}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    .line 45
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "PluginInstallRunnable cannot query valid plugin !!! packageName = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, v0, Lcom/bytedance/pangle/f/a/e;->a:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v4

    .line 48
    :cond_1
    iget-object v1, p0, Lcom/bytedance/pangle/plugin/a;->a:Ljava/io/File;

    invoke-virtual {v5, v1, v0}, Lcom/bytedance/pangle/plugin/Plugin;->install(Ljava/io/File;Lcom/bytedance/pangle/f/a/e;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 51
    iget-object v0, v0, Lcom/bytedance/pangle/f/a/e;->a:Ljava/lang/String;

    const/4 v2, 0x6

    new-array v3, v4, [Ljava/lang/Object;

    invoke-static {v0, v2, v3}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    goto :goto_0

    .line 53
    :cond_2
    iget-object v0, v0, Lcom/bytedance/pangle/f/a/e;->a:Ljava/lang/String;

    new-array v2, v2, [Ljava/lang/Object;

    const-string v5, "Internal error."

    aput-object v5, v2, v4

    invoke-static {v0, v3, v2}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    :goto_0
    return v1
.end method

.method public final run()V
    .locals 0

    .line 28
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/a;->a()Z

    return-void
.end method
